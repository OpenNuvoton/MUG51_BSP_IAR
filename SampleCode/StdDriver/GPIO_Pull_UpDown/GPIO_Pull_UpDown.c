/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 simple GPIO toggle out demo code
//***********************************************************************************************************

#include "MUG51_IAR.h"

/**
 * @brief       GPIO intput mode internal pull high or pull low enable 
 * @param       None
 * @return      None
 * @details     None.
 */

                                
void main (void) 
{
/* Setting Multi function pin setting for GPIO toggle 
   * include gipo.c in Common for GPIO mode setting
*/

    MFP_P10_GPIO;
    MFP_P15_GPIO;
    MFP_P17_GPIO;
    MFP_P23_GPIO;
    MFP_P24_GPIO;
  
    GPIO_SetMode(PORT1, SET_BIT0|SET_BIT5|SET_BIT7, GPIO_MODE_INPUT);
    GPIO_SetMode(PORT2, SET_BIT3|SET_BIT4, GPIO_MODE_INPUT);
  
    GPIO_Pull_Enable(PORT3, SET_BIT0|SET_BIT5|SET_BIT7, PULLUP);
    GPIO_Pull_Enable(PORT2, SET_BIT3|SET_BIT4,PULLDOWN);

    GPIO_Pull_Disable(PORT1, SET_BIT0|SET_BIT5, PULLUP);
  
    while(1);

}



