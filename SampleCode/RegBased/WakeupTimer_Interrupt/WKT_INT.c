/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

/************************************************************************************************************/
/*  File Function: MUG51 Wakeup timer demo code with interrupt                                               */
/************************************************************************************************************/

#include "MUG51_IAR.h"


#pragma vector=0x8B
__interrupt void WKT_ISR(void){
  
    unsigned char i; 
    _push_(SFRS);

    clr_WKCON_WKTR;
    for (i=0;i<10;i++)
    {
      P32 ^= 1;
      _delay_();
      _delay_();
    }
    BYTE_TMP = 1;
    clr_WKCON_WKTF;                                   //clear interrupt flag
    set_WKCON_WKTR;

    _pop_(SFRS);
}


/************************************************************************************************************
*    Main function 
************************************************************************************************************/
void main (void)
{
   
    P32_PUSHPULL_MODE;

//-----------------------------------------------------
//  WKT initial   
//-----------------------------------------------------  
    SFRS = 0;
    WKCON = 0x03;                     //timer base 10k, Pre-scale = 1/64
    SFRS = 2;
    RWKH = 0xFC;
    SFRS = 0;
    RWKL = 0X00;                      //  if prescale is 0x00, never set RWK = 0xff
    ENABLE_WKT_INTERRUPT;             // enable WKT interrupt
    ENABLE_GLOBAL_INTERRUPT;
    set_WKCON_WKTR;                   // Wake-up timer run 

    while(1)
    {
      if (BYTE_TMP)
      {
         P32 ^= 1 ;
         BYTE_TMP=0;
      }
    }
}

