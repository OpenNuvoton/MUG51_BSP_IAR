/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 comparater base on internal Vref demo
//***********************************************************************************************************

#include "MUG51_IAR.h"


/**
 * @brief       ACMP interrupt subroutine
 * @param       None
 * @return      None
 * @details     
 */
#pragma vector=0xBB
__interrupt void ACMP_ISR(void){
  
    _push_(SFRS);

  if (ACMPSR&=SET_BIT2)
  {
    ACMPSR&=CLR_BIT2;
    P32 ^=1;
  }
  else if (ACMPSR&=SET_BIT0)
  {
    ACMPSR&=CLR_BIT0;
    P32 ^=1;
  }  

    _pop_(SFRS);
}	


/**
 * @brief       ACMP negtive input use Bandgap voltage 
 * @param       None
 * @return      None
 * @details     
 */

void main (void) 
{

/* Setting Multi function pin setting for GPIO toggle 
   * include gipo.c in Common for GPIO mode setting
*/
    MFP_P31_GPIO;
    P32_PUSHPULL_MODE;

    MFP_P23_ACMP0_P1;
    MFP_P41_ACMP0_O;
    P41_QUASI_MODE;

/* ACMP intial 
   * include acmp.c in Library for ACMP initial and interrupt setting.
*/
/* Initial ACMP0 P2.3 as positive and Bandgap as negetive input, Output to P4.1 */
    ACMP_Open(ACMP0, ACMP_POSSEL_PIN_P1, ACMP_NEGSEL_CRV, ACMP_CRV_VDD, ACMP_OUTPUT_DIRECT, ACMP_HYSTERESIS_ENABLE);
/* Initial ACMP interrupt enable, wakeup function disable.*/
    ACMP_Interrupt(ACMP0, ACMP_WAKEUP_DISABLE, ACMP_INTERRUPT_ENABLE);
    Global_Interrupt(ENABLE);
    
    while(1);
}



