/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 locate data in APROM simple demo 
//***********************************************************************************************************
#include "MUG51_IAR.h"
#include "SPROM.h"

__code const char lockdata@0xFFFF = 0x00;  /* This byte as 0xFF means unlock SPROM. Any other value is lock*/
unsigned char SPTEMP=0;

void main (void) 
{
   unsigned char temp; 
  
    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART("\n SPROM lock byte = 0x%x ", lockdata);
    
    set_IAPUEN_SPMEN;             //Enable SPROM memory mapping only for check SPROM in memory window
    while(1)
    {
      temp = SPROM_FUNC(SPTEMP);
      printf_UART ("\n SPTEMP= 0x%x", temp);
      Timer0_Delay1ms(300);
    }

}
