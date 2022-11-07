/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 timer mode 1, 16bit timer demo
//***********************************************************************************************************
#include "MUG51_IAR.h"


/* if define TIMER0_FSYS_DIV12, timer = (0xFFFF-0x1000)*12/7.3728MHz = 36.58ms */
/* if define TIMER0_FSYS, timer = (0xFFFF-0x1000)/7.3728MHz = 2.548ms */
#define TH0_INIT        0x10 
#define TL0_INIT        0x00


/************************************************************************************************************
*    TIMER 0 interrupt subroutine
************************************************************************************************************/
#pragma vector=0x0B
__interrupt void Timer0_ISR(void){
  
    _push_(SFRS);
 
    TH0 = TH0_INIT;
    TL0 = TL0_INIT;    
    TF0 = 0;
    P32 = ~P32;                     // GPIO1 toggle when interrupt
  
    _pop_(SFRS);
}

/************************************************************************************************************
*    Main function 
************************************************************************************************************/
void main (void)
{
    MFP_P32_GPIO;
    P32_PUSHPULL_MODE;
  
    ENABLE_TIMER0_MODE1;
    TIMER0_FSYS;

    TH0 = TH0_INIT;
    TL0 = TL0_INIT;
    
    ENABLE_TIMER0_INTERRUPT;                       //enable Timer0 interrupt
    ENABLE_GLOBAL_INTERRUPT;                       //enable interrupts
  
    set_TCON_TR0;                                  //Timer0 run
    while(1);
}

