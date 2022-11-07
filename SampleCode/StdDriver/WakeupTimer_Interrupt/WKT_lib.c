/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

/************************************************************************************************************/
/*  File Function: MS51 Wakeup timer demo code with interrupt with lib                                      */
/************************************************************************************************************/

#include "MUG51_IAR.h"

#pragma vector=0x8B
__interrupt void WKT_ISR(void){
  
_push_(SFRS);
    P32^=1;
    clr_WKCON_WKTF;
_pop_(SFRS);
}


void main (void)
{
    P32_PUSHPULL_MODE;
/**----------------------------------------------------------------------------
 *  Note: Since the divider limiation. All value define is approximate value  
 *-----------------------------------------------------------------------------*/
//    WKT_AutoReload_Interrupt_Initial_MS(200);     /* WKT delay 200 ms */
    WKT_AutoReload_Interrupt_Initial_S(3);      /* WKT delay 3s */
    ENABLE_GLOBAL_INTERRUPT;

    while(1)
    {
      set_PCON_PD;
    }

}
