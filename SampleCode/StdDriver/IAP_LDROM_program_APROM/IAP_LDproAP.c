/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 IAP program APROM demo code 
//***********************************************************************************************************

#include "MUG51_IAR.h"

#pragma vector=0x43
__interrupt void Timer0_ISR(void){
  
    TA=0xAA;TA=0x55;IAPUEN=0;         //Disable all Write enable
    clr_CHPCON_IAPEN;
    clr_BODCON0_BOF;                  //clear BOD flag
    set_CHPCON_SWRST;                 //Software reset
}

void main (void) 
{
    unsigned char count;

    ENABLE_BOD_INTERRUPT;
    DISABLE_BOD_RESET;

    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART("\n Test start");
    
    MFP_P32_GPIO;
    P32_QUASI_MODE;
    while(P32);                              //loop here while P32 = 1;
  
    for(count=0;count<128;count++)          // define buffer data
    {
      IAPDataBuf[count]=count;
    }
        
/** IAP program APROM, this code only run in LDROM.
   * include IAP.c in Library for IAP function
   * @note  now maxima buffer size for program is 128 byte. buffer is locate in XRAM please check in "iap.h" IAPDataBuf[128] define.
*/
    APROM_Erase(0x1000,128);
    APROM_Blank_Check(0x1000,128);
    APROM_Program(0x1000,128);
    APROM_Read_Verify(0x1000,128);

    while(1);
}



