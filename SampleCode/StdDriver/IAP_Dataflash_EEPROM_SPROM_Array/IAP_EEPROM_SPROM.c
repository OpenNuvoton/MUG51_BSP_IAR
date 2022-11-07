/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 IAP Dataflash SPROM demo code 
//***********************************************************************************************************

#include "MUG51_IAR.h"

 /* @note        BOD reset maybe cause IAP process error. Disable BOD reset function and enable BOD interrupt to check and reset.   */
unsigned char ArrayData[50];
unsigned char i;
struct
{
    unsigned int a;
    unsigned long b;
    unsigned char  c;
} StructData;


#pragma vector=0x43
__interrupt void BOD_ISR(void){
  
    TA=0xAA;TA=0x55;IAPUEN=0;         //Disable all Write enable
    clr_CHPCON_IAPEN;
    clr_BODCON0_BOF;                  //clear BOD flag
    set_CHPCON_SWRST;                 //Software reset
}


/**
 * @brief       IAP program SPROM as EEPROM main
 * @param       None
 * @return      None
 * @details     define dataflash need be modify address and value
 * @note        Download select Update SPROM 
 */
void main(void)
{
    unsigned int system16highsite;
  

    ENABLE_BOD_INTERRUPT;
    DISABLE_BOD_RESET;
  
    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART("\n Test start");
    
    /*loop here while P32 = 1; */
    P32_QUASI_MODE;
    while (P32);

    /** IAP program as EEPROM way * include eeprom.c in Library       */
    for (i = 0; i < 50; i++)
    {
        ArrayData[i] = i;
    }
    StructData.a = 0x5152;
    StructData.b = 0x53545556;
    StructData.c = 0x57;

    Write_SPROM_DATAFLASH_ARRAY(0, ArrayData, 50); //write 50 bytes
    Write_SPROM_DATAFLASH_ARRAY(40, (unsigned char *)&StructData, sizeof(StructData)); //write structure

    /*call read byte */
    system16highsite = Read_SPROM_BYTE((unsigned char __code *)31);
    system16highsite = (Read_SPROM_BYTE((unsigned char __code *)31) << 8)+ Read_SPROM_BYTE((unsigned char __code *)32);

    /*printf must in SFR page 0 */
    _push_(SFRS);
    SFRS = 0;
    printf_UART("\n system 16 high site = 0x%x", system16highsite);
    _pop_(SFRS);

    while(1);
}
