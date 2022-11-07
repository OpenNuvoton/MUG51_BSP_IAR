#include "MUG51_IAR.h"

#define ACMP0_N0     P24
#define ACMP0_N1     P20
#define ACMP1_N0     P22
#define ACMP1_N1     P31
/**
  * @brief  Configure the specified ACMP module
  * @param[in]  u8ACMPNum Acmp module 0 or 1
  *                  - \ref ACMP0
  *                  - \ref ACMP1  
  * @param[in]  u8ChNum Comparator positive input selection.  Including:.
  *                  - \ref ACMP_POSSEL_PIN_P0 (P2.5)
  *                  - \ref ACMP_POSSEL_PIN_P1 (P2.3)
  *                  - \ref ACMP_POSSEL_PIN_P2 (P2.1)
  *                  - \ref ACMP_POSSEL_PIN_P3 (P3.0)
  * @param[in]  u8NegSrc Comparator negative input selection.  Including:
  *                  - \ref ACMP_NEGSEL_PIN_N0
  *                  - \ref ACMP_NEGSEL_CRV
  *                  - \ref ACMP_NEGSEL_VBG
  *                  - \ref ACMP_NEGSEL_PIN_N1
  * @param[in]  u8CVRSource The ACMP Comparator Reference Voltage Select
  *                  - \ref ACMP_CRV_VREF
  *                  - \ref ACMP_CRV_VDD
  *                  - \ref ACMP_CRV_DISABLE
  * @param[in]  u8ACMPOut The ACMP output enable
  *                  - \ref ACMP_OUTPUT_DIRECT
  *                  - \ref ACMP_OUTPUT_INVERSE
  * @param[in]  u8HysteresisEn The hysteresis function option. Including:
  *                  - \ref ACMP_HYSTERESIS_ENABLE
  *                  - \ref ACMP_HYSTERESIS_DISABLE
  * @return     None
  * @example    ACMP_Open(ACMP0, ACMP_POSSEL_PIN_P1, ACMP_NEGSEL_VBG,ACMP_CRV_DISALBE, ACMP_OUTPUT_DIRECT, ACMP_HYSTERESIS_ENABLE);

  */    
void ACMP_Open(unsigned char u8ACMPNum, unsigned char u8PosSrc, unsigned char u8NegSrc, unsigned char u8CVRSource, unsigned char u8ACMPOut, unsigned char u8HysteresisEn)
{
    SFRS=1;ACMPCR2|=(u8CVRSource<<1);
    switch (u8ACMPNum)
    {
      case ACMP0: 
        SFRS=0;ACMPCR0=0;ACMPCR0|=((u8PosSrc<<6)|(u8NegSrc<<4)|(u8HysteresisEn<<2));
        SFRS=1;ACMPCR2|=u8ACMPOut<<4;
        SFRS=0;ACMPCR0|=1; 
      break;
      case ACMP1: 
        SFRS=0;ACMPCR1=0x00;ACMPCR1|=((u8PosSrc<<6)|(u8NegSrc<<4)|(u8HysteresisEn<<2));
        SFRS=1;ACMPCR2|=u8ACMPOut<<5;
        SFRS=0;ACMPCR1|=1; 
      break;
    }
}

/**
  * @brief  Configure the specified ACMP module
  * @param[in]  u8ACMPNum Acmp module 0 or 1
  *                  - \ref ACMP0
  *                  - \ref ACMP1
  * @note   Diable CRV first then disable ACMP.
  * @return     None
  * @example    ACMP_Disable(ACMP0)
  */    
void ACMP_Disable(unsigned char u8ACMPNum)
{
    switch (u8ACMPNum)
    {
      case ACMP0: SFRS=1;ACMPCR2&=CLR_BIT0;SFRS=0;ACMPCR0&=CLR_BIT0; break;
      case ACMP1: SFRS=1;ACMPCR2&=CLR_BIT0;SFRS=0;ACMPCR1&=CLR_BIT0; break;
    }
}
/**
  * @brief  Configure the ACMP module interrupt enable
  * @param[in]  u8ACMPNum Acmp module 0 or 1
  *                  - \ref ACMP0
  *                  - \ref ACMP1
  * @param[in]  u8ACMPWake The ACMP wakeup function option. Including:
  *                  - \ref ACMP_WAKEUP_ENABLE
  *                  - \ref ACMP_WAKEUP_DISABLE
  * @param[in]  u8ACMPINT The interrupt function option. Including:
  *                  - \ref ACMP_INTERRUPT_ENABLE
  *                  - \ref ACMP_INTERRUPT_DISABLE
  * @return     None
  * @example    ACMP_Interrupt(ACMP0, ACMP_WAKEUP_ENABLE, ACMP_INTERRUPT_ENABLE);
  */  
void ACMP_Interrupt(unsigned char u8ACMPNum, unsigned char u8ACMPWakeEn,unsigned char u8ACMPINTEn)
{
      switch (u8ACMPNum)
    {
      case ACMP0:SFRS=0;ACMPCR0|=((u8ACMPWakeEn<<4)|(u8ACMPINTEn<<2)); break;
      case ACMP1:SFRS=0;ACMPCR1|=((u8ACMPWakeEn<<4)|(u8ACMPINTEn<<2)); break;
    }
    ACMPSR = 0;
}

/**
  * @brief  Configure ACMP Negtive input by CRV value
  * @param[in]  u8ACMPNum Acmp module 0 or 1
  *                  - \ref ACMP0
  *                  - \ref ACMP1
  * @param[in]  u8ACMPValue CRV value 
  *                  - \ref 0~7
  *             CRV output value = CRV source voltage*(2/12+u8ACMPValue/12).
*/
void ACMP_CRVValue(unsigned char u8ACMPNum, unsigned char u8ACMPValue)
{
  switch(u8ACMPNum)
  {
    case ACMP0: SFRS=0;ACMPVREF|=(u8ACMPValue&0x07); break;
    case ACMP1: SFRS=0;ACMPVREF|=((u8ACMPValue<<4)&0x70); break;
  }
}

