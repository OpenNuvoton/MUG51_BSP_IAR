/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 INT1 initial 
//***********************************************************************************************************
#include "MUG51_IAR.h"

/* IMPORTANT !! This define for printf code only. Disable this define to reduce code size. */

BIT  int1flag;

/* External pin interrupt INT0 subroutine */
#pragma vector=0x13
__interrupt void INT1_ISR(void){
  
    _push_(SFRS);
    clr_TCON_IE1;                        //clr int flag wait next falling edge
    int1flag=1;
    _pop_(SFRS);
}

void main (void) 
{

    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART ("\n P24 INT1 external interrupt initial!!");

/* INT1 initial */
    MFP_P24_INT1;
    P24_QUASI_MODE;                      //setting INT0 pin P2.4 as Quasi mode with internal pull high  
    P24 = 1;
    INT1_LOW_LEVEL_TRIG;                 //setting trig condition level or edge
    ENABLE_INT1_INTERRUPT;               //INT1_Enable;
    ENABLE_GLOBAL_INTERRUPT;             //Global interrupt enable
    while(!int1flag);

    _push_(SFRS);
    SFRS = 0;
    printf_UART ("\n INT1 interrupt !!");
    _pop_(SFRS);

    while(1);
}



