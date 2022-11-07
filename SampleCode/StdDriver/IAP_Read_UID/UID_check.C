/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 Read UID demo code
//***********************************************************************************************************
#include "MUG51_IAR.h"

void main(void)
{
  unsigned char READ;


    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART("\n Test start");
 
    UID_Read();

  /*printf must in SFR page 0 */
    _push_(SFRS);
    SFRS = 0; printf_UART ("\n UID = 0x ");
    for(READ=0;READ<12;READ++)
    {
      printf_UART("%x",UIDBuffer[READ]);
      _delay_();
    }
    _pop_(SFRS);

  while(1);


}