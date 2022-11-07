/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 GPIO toggle demo code
//***********************************************************************************************************
#include "MUG51_IAR.h"

BIT bodflag;
#pragma vector=0x43
__interrupt void BOD_ISR(void){
  
    _push_(SFRS);
 
    clr_BODCON0_BOF;
    bodflag=1;

    _pop_(SFRS);
}

//----------------------------------------------------------------------------------------------//
void main (void)
{
/* As defaut all multi function define as GPIO */ 
  ALL_GPIO_QUASI_MODE;

  BOD_Open(Enable, VBOD_2_7, BOD_Reset_Disable);
  BOD_LowPower(LPBOD_Mode_3);
  BOD_Interrupt(Enable);
  ENABLE_GLOBAL_INTERRUPT;
  while(1)
  {
     P4=~P4;
     _delay_();
    if (bodflag)
    {
      while(1)
        P4=~P4;
    }
  }
}



