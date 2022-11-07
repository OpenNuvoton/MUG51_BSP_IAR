
#define ACMP_P0      P25
#define ACMP_P1      P23
#define ACMP_P2      P21
#define ACMP_P3      P30
                    
#define ACMP0_N0     P24
#define ACMP0_N1     P20
#define ACMP1_N0     P22
#define ACMP1_N1     P31

/*---------------------------------------------------------------------------------------------------------*/
/* ACMP_CTL constant definitions                                                                           */
/*---------------------------------------------------------------------------------------------------------*/
#define ACMP0    0
#define ACMP1    1


#define ACMP_POSSEL_PIN_P0          0
#define ACMP_POSSEL_PIN_P1          1
#define ACMP_POSSEL_PIN_P2          2
#define ACMP_POSSEL_PIN_P3          3

#define ACMP_NEGSEL_PIN_N0          0
#define ACMP_NEGSEL_CRV             1
#define ACMP_NEGSEL_VBG             2
#define ACMP_NEGSEL_PIN_N1          3

#define ACMP_CRV_VREF               2
#define ACMP_CRV_VDD                0
#define ACMP_CRV_DISABLE            0

#define ACMP_OUTPUT_DIRECT          0
#define ACMP_OUTPUT_INVERSE         1

#define ACMP_HYSTERESIS_ENABLE      1
#define ACMP_HYSTERESIS_DISABLE     0

#define ACMP_WAKEUP_ENABLE          1
#define ACMP_WAKEUP_DISABLE         0

#define ACMP_INTERRUPT_ENABLE       1
#define ACMP_INTERRUPT_DISABLE      0

/*---------------------------------------------------------------------------------------------------------*/
/* ACMP_VREF constant definitions                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define ACMP_VREF_CRVSSEL_VDDA       (0UL << 6)  /*!< ACMP_VREF setting for selecting analog supply voltage VDDA as the CRV source voltage \hideinitializer */
#define ACMP_VREF_CRVSSEL_INTVREF    (1UL << 6)  /*!< ACMP_VREF setting for selecting internal reference voltage as the CRV source voltage \hideinitializer */


void ACMP_Open(unsigned char u8ACMPNum, unsigned char u8PosSrc, unsigned char u8NegSrc, unsigned char u8CVRSource, unsigned char u8ACMPOut, unsigned char u8HysteresisEn);
void ACMP_Interrupt(unsigned char u8ACMPNum, unsigned char u8ACMPWakeEn,unsigned char u8ACMPINTEn);
void ACMP_CRVValue(unsigned char u8ACMPNum, unsigned char u8ACMPValue);
void ACMP_Disable(unsigned char u8ACMPNum);
