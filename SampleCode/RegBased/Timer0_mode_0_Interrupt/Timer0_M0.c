/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 Timer 1 mode 0 with interrupt demo
//***********************************************************************************************************
#include "MUG51_IAR.h"

/* if define TIMER0_FSYS_DIV12, timer = (0x1FFF-0x1000)*12/7.3728MHz = 4.08ms */
/* if define TIMER0_FSYS, timer = (0x1FFF-0x0010)/7.3728MHz = 340us */
#define TH0_INIT        0x00 
#define TL0_INIT        0x10

/************************************************************************************************************
*    TIMER 0 interrupt subroutine
************************************************************************************************************/
#pragma vector=0x0B
__interrupt void Timer0_ISR(void){
  
    _push_(SFRS);
 
    TH0 = TH0_INIT;
    TL0 = TL0_INIT;
    TF0 = 0 ;
    P32 = ~P32;                              // GPIO toggle when interrupt
  
    _pop_(SFRS);
}	

/************************************************************************************************************
*    Main function 
************************************************************************************************************/
void main (void)
{

    MFP_P32_GPIO;
    P32_PUSHPULL_MODE;

    ENABLE_TIMER1_MODE0;                        //Timer 0 mode configuration
    TIMER0_FSYS_DIV12;

    TH0 = TH0_INIT;
    TL0 = TL0_INIT;
      
    ENABLE_TIMER0_INTERRUPT;                    //enable Timer0 interrupt
    ENABLE_GLOBAL_INTERRUPT;                    //enable interrupts

    set_TCON_TR0;                               //Timer0 run

    while(1);

}
