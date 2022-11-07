/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 read UCID demo
//***********************************************************************************************************
#include "MUG51_IAR.h"


void main(void)
{
    unsigned char i;

    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART("\n Test start");
    
    UCID_Read();

    /*printf must in SFR page 0 */
    _push_(SFRS);
    SFRS = 0;  
    printf_UART ("\n UCID = ");
    for(i=0;i<16;i++)
    { 
       printf_UART (" 0x%x",UCIDBuffer[i]);
       _delay_();_delay_();_delay_();
    }
    _pop_(SFRS);    

  while(1);


}