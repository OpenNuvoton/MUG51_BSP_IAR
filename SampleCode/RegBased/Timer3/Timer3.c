/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 Timer 3 initial demo
//***********************************************************************************************************
#include "MUG51_IAR.h"

/************************************************************************************************************
    TIMER 3 interrupt subroutine
***********************************************************************************************************/
#pragma vector=0x83
__interrupt void Timer0_ISR(void){
  
    _push_(SFRS);
  
    clr_T3CON_TF3;
    P32 = ~P32;
  
    _pop_(SFRS);
}	

/************************************************************************************************************
*    Main function 
************************************************************************************************************/
void main (void)
{
    
    MFP_P32_GPIO;
    P32_PUSHPULL_MODE;

    TIMER3_DIV_16;

    SFRS = 0;
    RH3 = 0x20;
    RL3 = 0x00;
    clr_T3CON_TF3;

    ENABLE_TIMER3_INTERRUPT;
    ENABLE_GLOBAL_INTERRUPT;                    //enable global interrupts
    set_T3CON_TR3;                              //Timer3 run

    while(1);
}

