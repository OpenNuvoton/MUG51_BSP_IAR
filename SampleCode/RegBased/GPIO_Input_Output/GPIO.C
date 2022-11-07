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

__no_init unsigned char __data temp @ 0x08;
__no_init unsigned char __idata itemp @ 0x90;
__no_init unsigned char __xdata xtemp @ 0x80;

//----------------------------------------------------------------------------------------------//
void main (void)
{
/* As defaut all multi function define as GPIO */ 
  ALL_GPIO_QUASI_MODE;
  P55_PUSHPULL_MODE;
  P54_INPUT_MODE;

  while(1)
  {
    P1 = ~P1;
    P4 = ~P4;
    set_P5_3;          /* or P5 |= SET_BIT3;  for none bit-addressable port */
    P5 |= SET_BIT5;    /* or set_P6_0; for none bit-addressable port */
    if (!(P5&SET_BIT4))        /* if P6.1 == 0 , for none bit-addressable port */
    {
      _nop_();
    }
    Timer2_Delay(24000000,4,2,1000);

    clr_P5_3;          /* or P5 &= CLR_BIT3;  for none bit-addressable port */
    P5 &= CLR_BIT5;    /* or clr_P5_0;   for none bit-addressable port */
    if (P5&SET_BIT4)   /* if P5.1 == 1  for none bit-addressable port*/
    {
      _nop_();
    }
    Timer2_Delay(24000000,4,2,1000);
  }

}

