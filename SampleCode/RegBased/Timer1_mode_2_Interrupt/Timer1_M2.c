/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 Time 1 demo
//***********************************************************************************************************
#include "MUG51_IAR.h"


/* if define TIMER0_FSYS_DIV12, timer = (256-56)*12/16MHz = 150us */
/* if define TIMER0_FSYS, timer = (256-56)/16MHz = 12.5us */
#define TH1_INIT        56 
#define TL1_INIT        56

/************************************************************************************************************
*    TIMER 0 interrupt subroutine
************************************************************************************************************/
#pragma vector=0x1B
__interrupt void Timer1_ISR(void){
  
    _push_(SFRS);
    
    P32 = ~P32;                                 // GPIO1 toggle when interrup
  
    _pop_(SFRS);
}

/************************************************************************************************************
*    Main function 
************************************************************************************************************/
void main (void)
{

    MFP_P32_GPIO;
    P32_PUSHPULL_MODE;;
    ENABLE_TIMER1_MODE2;
    TIMER1_FSYS_DIV12;
  
    TH1 = TH1_INIT;            //initial counter values 
    TL1 = TL1_INIT;    
   
    ENABLE_TIMER1_INTERRUPT;                                    //enable Timer1 interrupt
    ENABLE_GLOBAL_INTERRUPT;                       //enable interrupts
  
    set_TCON_TR1;                                  //Timer1 run

    while(1);
}

