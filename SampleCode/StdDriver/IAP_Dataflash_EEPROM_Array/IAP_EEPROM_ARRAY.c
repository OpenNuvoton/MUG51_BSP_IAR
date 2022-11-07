/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51  IAP program dataflash as EEPROM demo code
//***********************************************************************************************************

#include "MUG51_IAR.h"

struct
{
    unsigned int a;
    unsigned long b;
    unsigned char  c;

} StructData;

unsigned char ArrayData[50];
unsigned char i;

/**
 * @brief       IAP program dataflash as EEPROM
 * @param       None
 * @return      None
 * @details     define dataflash need be modify address and value,
 */

void main(void)
{
    unsigned int system16highsite;

    Enable_P31_UART0_VCOM_115200_printf();

    MFP_P32_GPIO;
    P32_INPUT_MODE;
    while(P32);                              //loop here while P13 = 1;

    /** IAP program APROM as EEPROM way * include eeprom.c in Library       */

    Write_DATAFLASH_BYTE(0x3882, 0x34);

    for (i = 0; i < 50; i++)
    {
        ArrayData[i] = i;
    }

    StructData.a = 0x5152;
    StructData.b = 0x53545556;
    StructData.c = 0x57;

    Write_DATAFLASH_ARRAY(0x38E0, ArrayData, 50); //write 50 bytes
    Write_DATAFLASH_ARRAY(0x38FD, (unsigned char *)&StructData, sizeof(StructData)); //write structure


    /*call read byte */
    system16highsite = ((Read_APROM_BYTE((unsigned int __code *)0x38FD) << 8) + Read_APROM_BYTE((unsigned int __code *)0x38FE));

    /*printf must in SFR page 0 */
    _push_(SFRS);
    SFRS = 0;
    printf_UART("\n System 16 high site = 0x%x", system16highsite);
    DISABLE_UART0_PRINTF;
    _pop_(SFRS);

    while (1);
}



