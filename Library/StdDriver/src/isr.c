/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 Interrupt demo code
//***********************************************************************************************************

#include "MUG51_IAR.h"

#if 0
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x03
__interrupt void INT0_ISR(void){
    _push_(SFRS);
 
     clr_TCON_IE0;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x0B
__interrupt void Timer0_ISR(void){
  
    _push_(SFRS);
 
    clr_TCON_TF0;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x13
__interrupt void INT1_ISR(void){
  
    _push_(SFRS);
 
    clr_TCON_IE1;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x1B
__interrupt void Timer1_ISR(void){
  
    _push_(SFRS);
 
    clr_TCON_TF1;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x23
__interrupt void UART0_ISR(void){
    _push_(SFRS);
 
    clr_SCON_RI;
    clr_SCON_TI;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x2B
__interrupt void Timer2_ISR(void){
    _push_(SFRS);
 
    clr_T2CON_TF2;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x33
__interrupt void I2C0_ISR(void){
    _push_(SFRS);
 
    clr_I2C0TOC_I2TOF;
    clr_I2C0CON_SI;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x3B
__interrupt void PIT_ISR(void){
    _push_(SFRS);
 
    PIF = 0;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x43
__interrupt void BOD_ISR(void){
    _push_(SFRS);
 
    clr_BODCON0_BOF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x4B
__interrupt void SPI_ISR(void){
    _push_(SFRS);
 
    clr_SPI0SR_SPIF;
    clr_SPI0SR_MODF;
    clr_SPI0SR_SPIOVF;
    SPI0SR &= 0x4F;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x53
__interrupt void WDT_ISR(void){
    _push_(SFRS);
 
    clr_WDCON_WDTF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x5B
__interrupt void ADC_ISR(void){
    _push_(SFRS);
 
    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x63
__interrupt void Capture_ISR(void){
    _push_(SFRS);
 
    clr_CAPCON0_CAPF0;
    clr_CAPCON0_CAPF1;
    clr_CAPCON0_CAPF2;
    CAPCON0 &= 0xFC;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------

#pragma vector=0x6B
__interrupt void PWM0_ISR(void){
    _push_(SFRS);
    
    clr_PWM0CON0_PWMF;
    
    _pop_(SFRS);
}  
  
#pragma vector=0x73
__interrupt void PWMFB_ISR(void){
    _push_(SFRS);
 
    clr_PWM0FBD_FBF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x7B
__interrupt void UART1_ISR(void){
  
    _push_(SFRS);
 
    clr_S1CON_RI_1;
    clr_S1CON_TI_1;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x83
__interrupt void Timer3_ISR(void){
  
    _push_(SFRS);
 
    clr_T3CON_TF3;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x8B
__interrupt void WKT_ISR(void){
    _push_(SFRS);
 
    clr_WKCON_WKTF;

    _pop_(SFRS);
}

//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x93 
__interrupt void CPUHF_ISR(void){
    _push_(SFRS);
 
    clr_AUXR0_HFIF;

    _pop_(SFRS);
}

//-----------------------------------------------------------------------------------------------------------
#pragma vector=0x9B
__interrupt void SC0_ISR(void){
    _push_(SFRS);
 
    clr_SC0IS_RDAIF;
    clr_SC0IS_TBEIF;
    clr_SC0IS_TERRIF;
    clr_SC0IS_BGTIF;
    clr_SC0IS_ACERRIF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#pragma vector=0xBB
__interrupt void ACMP_ISR(void){
    _push_(SFRS);
 
    clr_ACMPSR_ACMP0IF;
    clr_ACMPSR_ACMP1IF;
    ACMPSR &=0xFA;

    _pop_(SFRS);
}

//-----------------------------------------------------------------------------------------------------------
#pragma vector=0xC3
__interrupt void I2C1_ISR(void){
    _push_(SFRS);
 
    clr_I2C1TOC_I2TOF;
    clr_I2C1CON_SI;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
#endif