/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 INT0 pin demo 
//***********************************************************************************************************
#include "MUG51_IAR.h"

/* IMPORTANT !! This define for printf code only. Disable this define to reduce code size. */

BIT  int0flag;

/* External pin interrupt INT0 subroutine */
#pragma vector=0x03
__interrupt void INT0_ISR(void){

_push_(SFRS);
    clr_TCON_IE0;          //clr int flag wait next falling edge
    int0flag = 1;
_pop_(SFRS);
}


void main (void) 
{
    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART ("\n P25 INT0 external interrupt initial!!");
  
/*INT0 ENABLE */
    MFP_P25_INT0;                      //setting INT0 pin P0.6 as Quasi mode
    P25_INPUT_MODE;                    //Set input mode
    P25_PULLUP_ENABLE;                 //set pull up resistor.
    INT0_FALLING_EDGE_TRIG;            //setting trig condition level or edge
    ENABLE_INT0_INTERRUPT;             //INT0_Enable;
    ENABLE_GLOBAL_INTERRUPT;           //Global interrupt enable
    while(!int0flag);

    _push_(SFRS);
    SFRS = 0;
    printf_UART ("\n INT0 interrupt !!");
    _pop_(SFRS);

    while(1);
}



