/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 Pin interrupt demo
//***********************************************************************************************************
#include "MUG51_IAR.h"

unsigned char PinIntFlag;

/******************************************************************************
Pin interrupt subroutine.
******************************************************************************/
#pragma vector=0x3B
__interrupt void PIT_ISR(void){
  
_push_(SFRS);
  
    SFRS = 0;
    switch(PIF)
    {
      case (SET_BIT0): PinIntFlag = SET_BIT0; PIF&=CLR_BIT0; break;
      case (SET_BIT1): PinIntFlag = SET_BIT1; PIF&=CLR_BIT1; break;
      case (SET_BIT2): PinIntFlag = SET_BIT2; PIF&=CLR_BIT2; break;
      default: break;
    }
  
_pop_(SFRS);
}
/******************************************************************************
The main C function.  Program execution starts
here after stack initialization.
******************************************************************************/
void main (void) 
{
  /* UART0 initial for printf */
    Enable_P31_UART0_VCOM_115200_printf();
    printf("\n PIT test start!");

  /* Disable BOD for power down current */
    BOD_DISABLE;

  /* PIT initial setting */
    MFP_P17_GPIO;
    P17_INPUT_MODE;
    P17_PULLUP_ENABLE;

    MFP_P25_GPIO;
    P25_INPUT_MODE;
    P25_PULLUP_ENABLE;
    
    MFP_P35_GPIO;
    P35_INPUT_MODE;

    SFRS = 0;
    PIF = 0;
    ENABLE_PIT0_P17_LOWLEVEL;
    ENABLE_PIT1_P25_FALLINGEDGE;
    ENABLE_PIT2_P35_BOTHEDGE;
    ENABLE_PIN_INTERRUPT;                   // Enable pin interrupt
    ENABLE_GLOBAL_INTERRUPT;                // global enable bit

  /* mail loop in power down and wakeup check flag to print */
    while(1)
    {
       set_PCON_PD;
       _nop_();
       _nop_();

      switch(PinIntFlag)
      {
        case (SET_BIT0): printf("\n PIT0 interrupt!"); PinIntFlag&=CLR_BIT0; break;
        case (SET_BIT1): printf("\n PIT1 interrupt!"); PinIntFlag&=CLR_BIT1; break;
        case (SET_BIT2): printf("\n PIT2 interrupt!"); PinIntFlag&=CLR_BIT2; break;
        default: break;
      }
    }



}


