/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

/************************************************************************************************************/
/*  File Function: MUG51 Watchdog timer interrupt function demo                                             */
/************************************************************************************************************/
#include "MUG51_IAR.h"
 
/************************************************************************************************************
*    WDT interrupt sub-routine
************************************************************************************************************/
#pragma vector=0x53
__interrupt void WDT_ISR(void){
  
_push_(SFRS);

  /* Config Enable WDT reset and not clear couter trig reset */
    WDT_COUNTER_CLEAR;                     /* Clear WDT counter */
    while(!(WDCON&=SET_BIT6));             /* Check for the WDT counter cleared */
    CLEAR_WDT_INTERRUPT_FLAG;
    P32 = ~P32;

_pop_(SFRS);
}

/************************************************************************************************************
*    Main function 
************************************************************************************************************/
void main (void)
{
    
/*   WDT timer base is LIRC 38.4Khz */

    MFP_P32_GPIO;
    P32_QUASI_MODE;
/*--------------------------------------------------------
 * Notice:
 * WDT MUST enable in CONFIG 
 * only when WDT reset disable, WDT use as pure timer
 *-------------------------------------------------------- */
    WDT_TIMEOUT_800MS;                     /* Setting WDT time out */
    WDT_RUN_IN_POWERDOWN_ENABLE;           /* WDT run in POWER DOWM mode setting if needed */
    ENABLE_WDT_INTERRUPT;
    ENABLE_GLOBAL_INTERRUPT;
    WDT_COUNTER_RUN;                       /* WDT start to run */
    WDT_COUNTER_CLEAR;                     /* Clear WDT counter */
    while(!(WDCON&=SET_BIT6));             /* Check for the WDT counter cleared */

    while (1)
    {
      set_PCON_PD;
    }

}
