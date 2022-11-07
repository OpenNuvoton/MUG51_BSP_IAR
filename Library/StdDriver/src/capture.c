/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

#include "MUG51_IAR.h"


#if 0   /* Capture interrupt vector */
#pragma vector=0x63
__interrupt void Capture_ISR(void){
  
_push_(SFRS);
  clr_CAPCON0_CAPF0;
  clr_CAPCON0_CAPF1;
_pop_(SFRS);
}
#endif

/**
 * @brief       Timer 2 capture setting 
 * @param       u8CAPChannel input capture Channel select (IC0/IC1/IC2)
 * @param       u8CAPSource input capture each Channel source select (IC_GPIO/ACMP0_O/ACMP1_O) 
 * @param       u8CAPLevel input level select  (CAPTUREFALLING/CAPTURERISING/CAPTUREEITHER)
 * @param       u8TM2DIV reload counter divider select(0~7 = DIV 1/4/16/32/64/128/256/512.) 
 * @return      none
 * @details     none
 * @example     TIMER2_Capture(IC0,IC_GPIO,CAPTURERISING,7);
 */
void TIMER2_Capture(unsigned char u8CAPChannel, unsigned char u8CAPSource, unsigned char u8CAPLevel, unsigned char u8TM2DIV)
{
    SFRS = 0;
    T2MOD&=0x0F;
    T2MOD|=(u8TM2DIV<<4);     /*For reload counter divider select */
    T2MOD|=0x80;              /*Enable auto-reload and auto clear */
    switch (u8CAPChannel)
    {
        case IC0:
          SFRS=3;T2ACMP&=0xFC;T2ACMP|=u8CAPSource;  /* Capture source select */
          SFRS=1;CAPCON1&=0xFC;CAPCON1|=u8CAPLevel; /* Capture trig level select */ 
          set_CAPCON2_ENF0;                         /* enable noise filer */
          set_CAPCON0_CAPEN0;                       /* Input capture 0 enable*/
          SFRS=0;T2MOD&=0xFC;T2MOD|=0x01;           /* Set reload */
          SFRS=1;C0H=0; C0L=0;                      /* Clear counter */
        break;
        case IC1:
          SFRS=3;T2ACMP&=0xF3;T2ACMP|=u8CAPSource<<2;
          SFRS=1;CAPCON1&=0xF3;CAPCON1|=u8CAPLevel<<2;
          set_CAPCON2_ENF1;
          set_CAPCON0_CAPEN1;
          SFRS=0;T2MOD&=0xFC;T2MOD|=0x02;
          SFRS=1;C1H=0; C1L=0;
        break;
        case IC2:
          SFRS=3;T2ACMP&=0xCF;T2ACMP|=u8CAPSource<<4;
          SFRS=1;CAPCON1&=0xCF;CAPCON1|=u8CAPLevel<<4;
          set_CAPCON2_ENF2;
          set_CAPCON0_CAPEN2;
          SFRS=0;T2MOD&=0xFC;T2MOD|=0x03;
          SFRS=1;C2H=0; C2L=0;
        break;
    }
    clr_T2CON_TF2;
    set_T2CON_TR2;

}

/**
 * @brief       Timer 2 capture interrupt initial setting 
 * @param       u8CAPINT capture interrupt (Disable / Enable)
 * @return      none
 * @details     none
 * @example      TIMER2_Capture_Interrupt(Enable);
 */
void TIMER2_Capture_Interrupt(unsigned char u8CAPINT)
{
    switch (u8CAPINT)
    {
        case Disable: clr_EIE0_ECAP; break;
        case Enable:  set_EIE0_ECAP; break;
    }
}


/**
 * @brief       Timer2 Clock source setting 
 * @param       u8CAPSource input capture module select (TM2_FSYS/P40/P54/P32)
 * @return      none
 * @details     none
 * @example     TIMER2_Clcok_Source(TM2_P40);
 */
void TIMER2_Clcok_Source(unsigned char u8TM2CKSource)
{
    SFRS=3;
    T2ACMP|= u8TM2CKSource<<6;
}