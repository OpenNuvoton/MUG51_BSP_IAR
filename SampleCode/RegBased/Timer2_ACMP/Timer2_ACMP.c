/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 TIMER 2 Capture function demo
//***********************************************************************************************************

#include "MUG51_IAR.h"
/**
 * @brief       Timer2  interrupt subroutine
 */
unsigned char capvl, capvh;
BIT capflag, ecflag, capct;

#pragma vector=0x63
__interrupt void Capture_ISR(void){
  
_push_(SFRS);

  if (!capct)
    goto CTFIRST;

    SFRS=1;
    capvl = C1L;
    capvh= C1H;

    capct=0;
    ecflag =1;
    goto  CTINTEND;

CTFIRST:
  capct=1;
CTINTEND:
  clr_CAPCON0_CAPF0;
  clr_CAPCON0_CAPF1;
_pop_(SFRS);
}

#pragma vector=0xBB
__interrupt void ACMP_ISR(void){
  
_push_(SFRS);
    ACMPSR&=CLR_BIT0;
_pop_(SFRS);
}

void main (void) 
{
    MFP_P23_ACMP0_P1;
    MFP_P24_ACMP0_N0;

/*  Initial ACMP0, P23 as positive, P24 as Negitive, and Bandgap as negetive input, Output direct  */
    ACMP_Open(ACMP0, ACMP_POSSEL_PIN_P1, ACMP_NEGSEL_PIN_N0, ACMP_CRV_DISABLE, ACMP_OUTPUT_DIRECT, ACMP_HYSTERESIS_ENABLE);
    ACMP_Interrupt(ACMP0, ACMP_WAKEUP_ENABLE, ACMP_INTERRUPT_ENABLE);
    TIMER2_Capture_Interrupt(ENABLE);

    TIMER2_Clcok_Source(TM2_P40);
    TIMER2_Capture(IC1,ACMP0_O,CAPTURERISING,0);
    set_CAPCON2_CMOD;
    Global_Interrupt(ENABLE);

    while(1)
    {
      set_PCON_PD;
    }
}



