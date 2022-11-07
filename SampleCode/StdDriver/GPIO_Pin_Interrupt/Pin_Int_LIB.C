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
    MFP_P25_GPIO;

    GPIO_SetMode(Port1,SET_BIT7,GPIO_MODE_INPUT);
    GPIO_SetMode(Port2,SET_BIT5,GPIO_MODE_INPUT);
    GPIO_Pull_Enable(Port1,SET_BIT7,PULLUP);
    GPIO_Pull_Enable(Port2,SET_BIT5,PULLDOWN);
    GPIO_EnableInt(PIT0,FALLING,EDGE,Port1,7);
    GPIO_EnableInt(PIT2,HIGH,LEVEL,Port2,5);

    ENABLE_GLOBAL_INTERRUPT;                // global enable bit
    while(1)
    {
       set_PCON_PD;
       _nop_();
       _nop_();

      switch(PinIntFlag)
      {
        case (SET_BIT0): printf("\n PIT0 interrupt!"); PinIntFlag&=CLR_BIT0; break;
        case (SET_BIT2): printf("\n PIT2 interrupt!"); PinIntFlag&=CLR_BIT2; break;
        default: break;
      }
    }
}


