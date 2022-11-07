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
#pragma vector=0x63
__interrupt void Capture_ISR(void){
  
  unsigned char captemph,captempl;

_push_(SFRS);

    SFRS = 1;
    if (CAPCON0&SET_BIT0)
    {
       captemph = C0H;
       captempl = C0L;
       clr_CAPCON0_CAPF0;
    }
    else if (CAPCON0&SET_BIT2)
    {
       captemph = C2H;
       captempl = C2L;
       clr_CAPCON0_CAPF2;
    }
    SFRS = 0;
    printf_UART ("\n capture high byte = %BD", captemph);
    printf_UART ("\n capture low byte = %BD", captempl);
    DISABLE_TIMER2_CAP0;

_pop_(SFRS);
}


void main (void) 
{

    Enable_P31_UART0_VCOM_115200_printf();
    printf_UART ("\n MUG51 series capture demo." );
/* Setting Multi function pin setting for GPIO toggle */ 
    MFP_P33_IC0;
    P33_INPUT_MODE;                          //Define P33 as IC0 input pin.
    P33_PULLUP_ENABLE;                       //Since check falling edge enalbe internal pull high function.
    TIMER2_Capture(IC0,IC_GPIO,CAPTURERISING,2);

    MFP_P11_IC2;
    P11_INPUT_MODE;                          //Define P11 as IC2 input pin.
    P11_PULLUP_ENABLE;                       //Since check falling edge enalbe internal pull high function.
    TIMER2_Capture(IC2,IC_GPIO,CAPTUREEITHER,7);;

    TIMER2_Capture_Interrupt(Enable);
    Global_Interrupt(Enable);
    while(1);
}



