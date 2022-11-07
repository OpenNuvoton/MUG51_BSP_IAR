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

unsigned char SPROM_FUNC(unsigned char unused)  @ "SPROM_C"
{
  P03_PUSHPULL_MODE;
  P03 ^= 1;
  SPTEMP++;
  return SPTEMP;
}
