/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 simple GPIO toggle out demo code
//***********************************************************************************************************

#include "MUG51_IAR.h"


void main (void) 
{
    unsigned char ct;
    ALL_GPIO_QUASI_MODE;

    Enable_P31_UART0_VCOM_115200_printf();

    for (ct=0;ct<5;ct++)
    {
      P0 = ~P0;
      P1 = ~P1;
      P2 = ~P2;
      P3 = ~P3;
      P4 = ~P4;
      P5 = ~P5;
      Timer0_Delay50ms(4);
    }
    P31 = 1;
    SFRS=0; printf("\n Hello world!");
    while(1);
}



