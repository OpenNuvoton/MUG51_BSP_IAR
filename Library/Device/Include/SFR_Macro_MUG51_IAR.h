/******************************************************************************/
#include <stdio.h> 
#include <string.h>            
#include <stdbool.h> 

#include "Function_define_MUG51_IAR.h"

#include "acmp.h"
#include "adc.h"
#include "bod.h"
#include "capture.h"
#include "common.h"
#include "delay.h"
#include "eeprom.h"
#include "eeprom_sprom.h"
#include "exint.h"
#include "gpio.h"
#include "i2c.h"
#include "IAP.h"
#include "IAP_sprom.h"
#include "lcd.h"
#include "lowpower.h"
#include "pdma.h"
#include "pinint.h"
#include "pwm0.h"
#include "pwm123.h"
#include "rtc.h"
#include "spi.h"
#include "sys.h"
#include "timer.h"
#include "TrimLIRC.h"
#include "uart.h"
#include "uart2.h"
#include "uart3.h"
#include "vref.h"
#include "wdt.h"
#include "wkt.h"

/********SFR ALL PAGES*************/
/**** P0  80H  PAGE A ****/
#define set_P0_7                                   P0|=0x80
#define set_P0_6                                   P0|=0x40
#define set_P0_5                                   P0|=0x20
#define set_P0_4                                   P0|=0x10
#define set_P0_3                                   P0|=0x08
#define set_P0_2                                   P0|=0x04
#define set_P0_1                                   P0|=0x02
#define set_P0_0                                   P0|=0x01

#define clr_P0_7                                   P0&=0x7F
#define clr_P0_6                                   P0&=0xBF
#define clr_P0_5                                   P0&=0xDF
#define clr_P0_4                                   P0&=0xEF
#define clr_P0_3                                   P0&=0xF7
#define clr_P0_2                                   P0&=0xFB
#define clr_P0_1                                   P0&=0xFD
#define clr_P0_0                                   P0&=0xFE

/**** PCON  87H  PAGE A ****/
#define set_PCON_SMOD                              PCON|=0x80
#define set_PCON_SMOD0                             PCON|=0x40
#define set_PCON_LPR                               PCON|=0x20
#define set_PCON_POF                               PCON|=0x10
#define set_PCON_GF1                               PCON|=0x08
#define set_PCON_GF0                               PCON|=0x04
#define set_PCON_PD                                PCON|=0x02
#define set_PCON_IDL                               PCON|=0x01

#define clr_PCON_SMOD                              PCON&=0x7F
#define clr_PCON_SMOD0                             PCON&=0xBF
#define clr_PCON_LPR                               PCON&=0xDF
#define clr_PCON_POF                               PCON&=0xEF
#define clr_PCON_GF1                               PCON&=0xF7
#define clr_PCON_GF0                               PCON&=0xFB
#define clr_PCON_PD                                PCON&=0xFD
#define clr_PCON_IDL                               PCON&=0xFE

/**** TCON  88H  PAGE A ****/
#define set_TCON_TF1                               TCON|=0x80
#define set_TCON_TR1                               TCON|=0x40
#define set_TCON_TF0                               TCON|=0x20
#define set_TCON_TR0                               TCON|=0x10
#define set_TCON_IE1                               TCON|=0x08
#define set_TCON_IT1                               TCON|=0x04
#define set_TCON_IE0                               TCON|=0x02
#define set_TCON_IT0                               TCON|=0x01

#define clr_TCON_TF1                               TCON&=0x7F
#define clr_TCON_TR1                               TCON&=0xBF
#define clr_TCON_TF0                               TCON&=0xDF
#define clr_TCON_TR0                               TCON&=0xEF
#define clr_TCON_IE1                               TCON&=0xF7
#define clr_TCON_IT1                               TCON&=0xFB
#define clr_TCON_IE0                               TCON&=0xFD
#define clr_TCON_IT0                               TCON&=0xFE

/**** TMOD  89H  PAGE A ****/
#define set_TMOD_0_GATE                            TMOD|=0x80
#define set_TMOD_0_C_T                             TMOD|=0x40
#define set_TMOD_0_M1                              TMOD|=0x20
#define set_TMOD_0_M0                              TMOD|=0x10
#define set_TMOD_1_GATE                            TMOD|=0x08
#define set_TMOD_1_C_T                             TMOD|=0x04
#define set_TMOD_1_M1                              TMOD|=0x02
#define set_TMOD_1_M0                              TMOD|=0x01
                                                  
#define clr_TMOD_0_GATE                            TMOD&=0x7F
#define clr_TMOD_0_C_T                             TMOD&=0xBF
#define clr_TMOD_0_M1                              TMOD&=0xDF
#define clr_TMOD_0_M0                              TMOD&=0xEF
#define clr_TMOD_1_GATE                            TMOD&=0xF7
#define clr_TMOD_1_C_T                             TMOD&=0xFB
#define clr_TMOD_1_M1                              TMOD&=0xFD
#define clr_TMOD_1_M0                              TMOD&=0xFE

/**** P1  90H  PAGE A ****/
#define set_P1_P1_7                                P1|=0x80
#define set_P1_P1_6                                P1|=0x40
#define set_P1_P1_5                                P1|=0x20
#define set_P1_P1_4                                P1|=0x10
#define set_P1_P1_3                                P1|=0x08
#define set_P1_P1_2                                P1|=0x04
#define set_P1_P1_1                                P1|=0x02
#define set_P1_P1_0                                P1|=0x01

#define clr_P1_P1_7                                P1&=0x7F
#define clr_P1_P1_6                                P1&=0xBF
#define clr_P1_P1_5                                P1&=0xDF
#define clr_P1_P1_4                                P1&=0xEF
#define clr_P1_P1_3                                P1&=0xF7
#define clr_P1_P1_2                                P1&=0xFB
#define clr_P1_P1_1                                P1&=0xFD
#define clr_P1_P1_0                                P1&=0xFE

/**** SFRS  91H  PAGE A ****/
#define set_SFRS_SFRPAGE_1                         SFRS|=0x02
#define set_SFRS_SFRPAGE_0                         SFRS|=0x01

#define clr_SFRS_SFRPAGE_1                         SFRS&=0xFD
#define clr_SFRS_SFRPAGE_0                         SFRS&=0xFE

/**** SCON  98H  PAGE A ****/
#define set_SCON_SM0                               SCON|=0x80
#define set_SCON_FE                                SCON|=0x80
#define set_SCON_SM1                               SCON|=0x40
#define set_SCON_SM2                               SCON|=0x20
#define set_SCON_REN                               SCON|=0x10
#define set_SCON_TB8                               SCON|=0x08
#define set_SCON_RB8                               SCON|=0x04
#define set_SCON_TI                                SCON|=0x02
#define set_SCON_RI                                SCON|=0x01

#define clr_SCON_SM0                               SCON&=0x7F
#define clr_SCON_FE                                SCON&=0x7F
#define clr_SCON_SM1                               SCON&=0xBF
#define clr_SCON_SM2                               SCON&=0xDF
#define clr_SCON_REN                               SCON&=0xEF
#define clr_SCON_TB8                               SCON&=0xF7
#define clr_SCON_RB8                               SCON&=0xFB
#define clr_SCON_TI                                SCON&=0xFD
#define clr_SCON_RI                                SCON&=0xFE

/**** P2  A0H  PAGE A ****/
#define set_P2_7                                   P2|=0x80
#define set_P2_6                                   P2|=0x40
#define set_P2_5                                   P2|=0x20
#define set_P2_4                                   P2|=0x10
#define set_P2_3                                   P2|=0x08
#define set_P2_2                                   P2|=0x04
#define set_P2_1                                   P2|=0x02
#define set_P2_0                                   P2|=0x01

#define clr_P2_7                                   P2&=0x7F
#define clr_P2_6                                   P2&=0xBF
#define clr_P2_5                                   P2&=0xDF
#define clr_P2_4                                   P2&=0xEF
#define clr_P2_3                                   P2&=0xF7
#define clr_P2_2                                   P2&=0xFB
#define clr_P2_1                                   P2&=0xFD
#define clr_P2_0                                   P2&=0xFE

/**** IE  A8H  PAGE A ****/
#define set_IE_EA                                  IE|=0x80
#define set_IE_EADC                                IE|=0x40
#define set_IE_EBOD                                IE|=0x20
#define set_IE_ES                                  IE|=0x10
#define set_IE_ET1                                 IE|=0x08
#define set_IE_EX1                                 IE|=0x04
#define set_IE_ET0                                 IE|=0x02
#define set_IE_EX0                                 IE|=0x01

#define clr_IE_EA                                  IE&=0x7F
#define clr_IE_EADC                                IE&=0xBF
#define clr_IE_EBOD                                IE&=0xDF
#define clr_IE_ES                                  IE&=0xEF
#define clr_IE_ET1                                 IE&=0xF7
#define clr_IE_EX1                                 IE&=0xFB
#define clr_IE_ET0                                 IE&=0xFD
#define clr_IE_EX0                                 IE&=0xFE

/**** P3  B0H  PAGE A ****/
#define set_P3_7                                   P3|=0x80
#define set_P3_6                                   P3|=0x40
#define set_P3_5                                   P3|=0x20
#define set_P3_4                                   P3|=0x10
#define set_P3_3                                   P3|=0x08
#define set_P3_2                                   P3|=0x04
#define set_P3_1                                   P3|=0x02
#define set_P3_0                                   P3|=0x01

#define clr_P3_7                                   P3&=0x7F
#define clr_P3_6                                   P3&=0xBF
#define clr_P3_5                                   P3&=0xDF
#define clr_P3_4                                   P3&=0xEF
#define clr_P3_3                                   P3&=0xF7
#define clr_P3_2                                   P3&=0xFB
#define clr_P3_1                                   P3&=0xFD
#define clr_P3_0                                   P3&=0xFE

/**** IP  B8H  PAGE A ****/
#define set_IP_PADC                                IP|=0x40
#define set_IP_PBOD                                IP|=0x20
#define set_IP_PS                                  IP|=0x10
#define set_IP_PT1                                 IP|=0x08
#define set_IP_PX1                                 IP|=0x04
#define set_IP_PT0                                 IP|=0x02
#define set_IP_PX0                                 IP|=0x01

#define clr_IP_PADC                                IP&=0xBF
#define clr_IP_PBOD                                IP&=0xDF
#define clr_IP_PS                                  IP&=0xEF
#define clr_IP_PT1                                 IP&=0xF7
#define clr_IP_PX1                                 IP&=0xFB
#define clr_IP_PT0                                 IP&=0xFD
#define clr_IP_PX0                                 IP&=0xFE

/**** I2C0CON  C0H  PAGE A ****/
#define set_I2C0CON_I                              I2C0CON|=0x80
#define set_I2C0CON_I2CEN                          I2C0CON|=0x40
#define set_I2C0CON_STA                            I2C0CON|=0x20
#define set_I2C0CON_STO                            I2C0CON|=0x10
#define set_I2C0CON_SI                             I2C0CON|=0x08
#define set_I2C0CON_AA                             I2C0CON|=0x04

#define clr_I2C0CON_I                              I2C0CON&=0x7F
#define clr_I2C0CON_I2CEN                          I2C0CON&=0xBF
#define clr_I2C0CON_STA                            I2C0CON&=0xDF
#define clr_I2C0CON_STO                            I2C0CON&=0xEF
#define clr_I2C0CON_SI                             I2C0CON&=0xF7
#define clr_I2C0CON_AA                             I2C0CON&=0xFB

/**** T2CON  C8H  PAGE A ****/
#define set_T2CON_TF2                              T2CON|=0x80
#define set_T2CON_T2HRF                            T2CON|=0x10
#define set_T2CON_T2LRF                            T2CON|=0x08
#define set_T2CON_TR2                              T2CON|=0x04
#define set_T2CON_CM_RL2                           T2CON|=0x01

#define clr_T2CON_TF2                              T2CON&=0x7F
#define clr_T2CON_T2HRF                            T2CON&=0xEF
#define clr_T2CON_T2LRF                            T2CON&=0xF7
#define clr_T2CON_TR2                              T2CON&=0xFB
#define clr_T2CON_CM_RL2                           T2CON&=0xFE

/**** PSW  D0H  PAGE A ****/
#define set_PSW_CY                                 PSW|=0x80
#define set_PSW_AC                                 PSW|=0x40
#define set_PSW_F0                                 PSW|=0x20
#define set_PSW_RS1                                PSW|=0x10
#define set_PSW_RS0                                PSW|=0x08
#define set_PSW_OV                                 PSW|=0x04
#define set_PSW_P                                  PSW|=0x01

#define clr_PSW_CY                                 PSW&=0x7F
#define clr_PSW_AC                                 PSW&=0xBF
#define clr_PSW_F0                                 PSW&=0xDF
#define clr_PSW_RS1                                PSW&=0xEF
#define clr_PSW_RS0                                PSW&=0xF7
#define clr_PSW_OV                                 PSW&=0xFB
#define clr_PSW_P                                  PSW&=0xFE

/**** P4  D8H  PAGE A ****/
#define set_P4_7                                   P4|=0x80
#define set_P4_6                                   P4|=0x40
#define set_P4_5                                   P4|=0x20
#define set_P4_4                                   P4|=0x10
#define set_P4_3                                   P4|=0x08
#define set_P4_2                                   P4|=0x04
#define set_P4_1                                   P4|=0x02
#define set_P4_0                                   P4|=0x01

#define clr_P4_7                                   P4&=0x7F
#define clr_P4_6                                   P4&=0xBF
#define clr_P4_5                                   P4&=0xDF
#define clr_P4_4                                   P4&=0xEF
#define clr_P4_3                                   P4&=0xF7
#define clr_P4_2                                   P4&=0xFB
#define clr_P4_1                                   P4&=0xFD
#define clr_P4_0                                   P4&=0xFE

/**** ACC  E0H  PAGE A ****/
#define set_ACC_7                                  ACC|=0x80
#define set_ACC_6                                  ACC|=0x40
#define set_ACC_5                                  ACC|=0x20
#define set_ACC_4                                  ACC|=0x10
#define set_ACC_3                                  ACC|=0x08
#define set_ACC_2                                  ACC|=0x04
#define set_ACC_1                                  ACC|=0x02
#define set_ACC_0                                  ACC|=0x01

#define clr_ACC_7                                  ACC&=0x7F
#define clr_ACC_6                                  ACC&=0xBF
#define clr_ACC_5                                  ACC&=0xDF
#define clr_ACC_4                                  ACC&=0xEF
#define clr_ACC_3                                  ACC&=0xF7
#define clr_ACC_2                                  ACC&=0xFB
#define clr_ACC_1                                  ACC&=0xFD
#define clr_ACC_0                                  ACC&=0xFE

/**** S1CON  F8H  PAGE A ****/
#define set_S1CON_SM0_1                            S1CON|=0x80
#define set_S1CON_FE_1                             S1CON|=0x80
#define set_S1CON_SM1_1                            S1CON|=0x40
#define set_S1CON_SM2_1                            S1CON|=0x20
#define set_S1CON_REN_1                            S1CON|=0x10
#define set_S1CON_TB8_1                            S1CON|=0x08
#define set_S1CON_RB8_1                            S1CON|=0x04
#define set_S1CON_TI_1                             S1CON|=0x02
#define set_S1CON_RI_1                             S1CON|=0x01

#define clr_S1CON_SM0_1                            S1CON&=0x7F
#define clr_S1CON_FE_1                             S1CON&=0x7F
#define clr_S1CON_SM1_1                            S1CON&=0xBF
#define clr_S1CON_SM2_1                            S1CON&=0xDF
#define clr_S1CON_REN_1                            S1CON&=0xEF
#define clr_S1CON_TB8_1                            S1CON&=0xF7
#define clr_S1CON_RB8_1                            S1CON&=0xFB
#define clr_S1CON_TI_1                             S1CON&=0xFD
#define clr_S1CON_RI_1                             S1CON&=0xFE

/********SFR PAGE 0*************/
/**** CKCON  8EH  PAGE 0 ****/
#define set_CKCON_FASTWK                           SFRS=0;CKCON|=0x80
#define set_CKCON_PWMCKS                           SFRS=0;CKCON|=0x40
#define set_CKCON_T1OE                             SFRS=0;CKCON|=0x20
#define set_CKCON_T1M                              SFRS=0;CKCON|=0x10
#define set_CKCON_T0M                              SFRS=0;CKCON|=0x08
#define set_CKCON_T0OE                             SFRS=0;CKCON|=0x04
#define set_CKCON_CLOEN                            SFRS=0;CKCON|=0x02

#define clr_CKCON_FASTWK                           SFRS=0;CKCON&=0x7F
#define clr_CKCON_PWMCKS                           SFRS=0;CKCON&=0xBF
#define clr_CKCON_T1OE                             SFRS=0;CKCON&=0xDF
#define clr_CKCON_T1M                              SFRS=0;CKCON&=0xEF
#define clr_CKCON_T0M                              SFRS=0;CKCON&=0xF7
#define clr_CKCON_T0OE                             SFRS=0;CKCON&=0xFB
#define clr_CKCON_CLOEN                            SFRS=0;CKCON&=0xFD

/**** WKCON  8FH  PAGE 0 ****/
#define set_WKCON_WKTCK                            SFRS=0;WKCON|=0x20
#define set_WKCON_WKTF                             SFRS=0;WKCON|=0x10
#define set_WKCON_WKTR                             SFRS=0;WKCON|=0x08
#define set_WKCON_WKPS_2                           SFRS=0;WKCON|=0x04
#define set_WKCON_WKPS_1                           SFRS=0;WKCON|=0x02
#define set_WKCON_WKPS_0                           SFRS=0;WKCON|=0x01

#define clr_WKCON_WKTCK                            SFRS=0;WKCON&=0xDF
#define clr_WKCON_WKTF                             SFRS=0;WKCON&=0xEF
#define clr_WKCON_WKTR                             SFRS=0;WKCON&=0xF7
#define clr_WKCON_WKPS_2                           SFRS=0;WKCON&=0xFB
#define clr_WKCON_WKPS_1                           SFRS=0;WKCON&=0xFD
#define clr_WKCON_WKPS_0                           SFRS=0;WKCON&=0xFE

/**** DMA0CR0  92H  PAGE 0 ****/
#define set_DMA0CR0_PSSEL_3                        SFRS=0;DMA0CR0|=0x80
#define set_DMA0CR0_PSSEL_2                        SFRS=0;DMA0CR0|=0x40
#define set_DMA0CR0_PSSEL_1                        SFRS=0;DMA0CR0|=0x20
#define set_DMA0CR0_PSSEL_0                        SFRS=0;DMA0CR0|=0x10
#define set_DMA0CR0_HIE                            SFRS=0;DMA0CR0|=0x08
#define set_DMA0CR0_FIE                            SFRS=0;DMA0CR0|=0x04
#define set_DMA0CR0_RUN                            SFRS=0;DMA0CR0|=0x02
#define set_DMA0CR0_EN                             SFRS=0;DMA0CR0|=0x01

#define clr_DMA0CR0_PSSEL_3                        SFRS=0;DMA0CR0&=0x7F
#define clr_DMA0CR0_PSSEL_2                        SFRS=0;DMA0CR0&=0xBF
#define clr_DMA0CR0_PSSEL_1                        SFRS=0;DMA0CR0&=0xDF
#define clr_DMA0CR0_PSSEL_0                        SFRS=0;DMA0CR0&=0xEF
#define clr_DMA0CR0_HIE                            SFRS=0;DMA0CR0&=0xF7
#define clr_DMA0CR0_FIE                            SFRS=0;DMA0CR0&=0xFB
#define clr_DMA0CR0_RUN                            SFRS=0;DMA0CR0&=0xFD
#define clr_DMA0CR0_EN                             SFRS=0;DMA0CR0&=0xFE

/**** CKSWT  96H  PAGE 0 TA protect register ****/
#define set_CKSWT_HXTST                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x80;EA=BIT_TMP
#define set_CKSWT_LXTST                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x40;EA=BIT_TMP
#define set_CKSWT_HIRCST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x20;EA=BIT_TMP
#define set_CKSWT_LIRCST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x10;EA=BIT_TMP
#define set_CKSWT_ECLKST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x08;EA=BIT_TMP
#define set_CKSWT_OSC_2                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x04;EA=BIT_TMP
#define set_CKSWT_OSC_1                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x02;EA=BIT_TMP
#define set_CKSWT_OSC_0                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT|=0x01;EA=BIT_TMP

#define clr_CKSWT_HXTST                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0x7F;EA=BIT_TMP
#define clr_CKSWT_LXTST                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0xBF;EA=BIT_TMP
#define clr_CKSWT_HIRCST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0xDF;EA=BIT_TMP
#define clr_CKSWT_LIRCST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0xEF;EA=BIT_TMP
#define clr_CKSWT_ECLKST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0xF7;EA=BIT_TMP
#define clr_CKSWT_OSC_2                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0xFB;EA=BIT_TMP
#define clr_CKSWT_OSC_1                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0xFD;EA=BIT_TMP
#define clr_CKSWT_OSC_0                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKSWT&=0xFE;EA=BIT_TMP

/**** CKEN  97H  PAGE 0 TA protect register ****/
#define set_CKEN_LIRCEN                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKEN|=0x10;EA=BIT_TMP
#define set_CKEN_MIRCEN                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKEN|=0x02;EA=BIT_TMP
#define set_CKEN_CKSWTF                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKEN|=0x01;EA=BIT_TMP

#define clr_CKEN_LIRCEN                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKEN&=0xEF;EA=BIT_TMP
#define clr_CKEN_MIRCEN                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKEN&=0xFD;EA=BIT_TMP
#define clr_CKEN_CKSWTF                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CKEN&=0xFE;EA=BIT_TMP

/**** EIE0  9BH  PAGE 0 ****/
#define set_EIE0_ET2                               SFRS=0;EIE0|=0x80
#define set_EIE0_ESPI0                             SFRS=0;EIE0|=0x40
#define set_EIE0_EFB0                              SFRS=0;EIE0|=0x20
#define set_EIE0_EWDT                              SFRS=0;EIE0|=0x10
#define set_EIE0_EPWM0                             SFRS=0;EIE0|=0x08
#define set_EIE0_ECAP                              SFRS=0;EIE0|=0x04
#define set_EIE0_EPI                               SFRS=0;EIE0|=0x02
#define set_EIE0_EI2C0                             SFRS=0;EIE0|=0x01

#define clr_EIE0_ET2                               SFRS=0;EIE0&=0x7F
#define clr_EIE0_ESPI0                             SFRS=0;EIE0&=0xBF
#define clr_EIE0_EFB0                              SFRS=0;EIE0&=0xDF
#define clr_EIE0_EWDT                              SFRS=0;EIE0&=0xEF
#define clr_EIE0_EPWM0                             SFRS=0;EIE0&=0xF7
#define clr_EIE0_ECAP                              SFRS=0;EIE0&=0xFB
#define clr_EIE0_EPI                               SFRS=0;EIE0&=0xFD
#define clr_EIE0_EI2C0                             SFRS=0;EIE0&=0xFE

/**** EIE1  9CH  PAGE 0 ****/
#define set_EIE1_EPWM123                           SFRS=0;EIE1|=0x40
#define set_EIE1_EI2C1                             SFRS=0;EIE1|=0x20
#define set_EIE1_ESPI1                             SFRS=0;EIE1|=0x10
#define set_EIE1_EHFI                              SFRS=0;EIE1|=0x08
#define set_EIE1_EWKT                              SFRS=0;EIE1|=0x04
#define set_EIE1_ET3                               SFRS=0;EIE1|=0x02
#define set_EIE1_ES1                               SFRS=0;EIE1|=0x01

#define clr_EIE1_EPWM123                           SFRS=0;EIE1&=0xBF
#define clr_EIE1_EI2C1                             SFRS=0;EIE1&=0xDF
#define clr_EIE1_ESPI1                             SFRS=0;EIE1&=0xEF
#define clr_EIE1_EHFI                              SFRS=0;EIE1&=0xF7
#define clr_EIE1_EWKT                              SFRS=0;EIE1&=0xFB
#define clr_EIE1_ET3                               SFRS=0;EIE1&=0xFD
#define clr_EIE1_ES1                               SFRS=0;EIE1&=0xFE

/**** RSR  9DH  PAGE 0 ****/
#define set_RSR_LVRF                               SFRS=0;RSR|=0x80
#define set_RSR_PORF                               SFRS=0;RSR|=0x40
#define set_RSR_HFRF                               SFRS=0;RSR|=0x20
#define set_RSR_POF                                SFRS=0;RSR|=0x10
#define set_RSR_RSTPINF                            SFRS=0;RSR|=0x08
#define set_RSR_BORF                               SFRS=0;RSR|=0x04
#define set_RSR_WDTRF                              SFRS=0;RSR|=0x02
#define set_RSR_SWRF                               SFRS=0;RSR|=0x01

#define clr_RSR_LVRF                               SFRS=0;RSR&=0x7F
#define clr_RSR_PORF                               SFRS=0;RSR&=0xBF
#define clr_RSR_HFRF                               SFRS=0;RSR&=0xDF
#define clr_RSR_POF                                SFRS=0;RSR&=0xEF
#define clr_RSR_RSTPINF                            SFRS=0;RSR&=0xF7
#define clr_RSR_BORF                               SFRS=0;RSR&=0xFB
#define clr_RSR_WDTRF                              SFRS=0;RSR&=0xFD
#define clr_RSR_SWRF                               SFRS=0;RSR&=0xFE

/**** CHPCON  9FH  PAGE 0 TA protect register ****/
#define set_CHPCON_SWRST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON|=0x80;EA=BIT_TMP
#define set_CHPCON_IAPFF                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON|=0x40;EA=BIT_TMP
#define set_CHPCON_BS                              SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON|=0x02;EA=BIT_TMP
#define set_CHPCON_IAPEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON|=0x01;EA=BIT_TMP

#define clr_CHPCON_SWRST                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON&=0x7F;EA=BIT_TMP
#define clr_CHPCON_IAPFF                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON&=0xBF;EA=BIT_TMP
#define clr_CHPCON_BS                              SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON&=0xFD;EA=BIT_TMP
#define clr_CHPCON_IAPEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;CHPCON&=0xFE;EA=BIT_TMP

/**** ADCCON0  A1H  PAGE 0 ****/
#define set_ADCCON0_ADCF                           SFRS=0;ADCCON0|=0x80
#define set_ADCCON0_ADCS                           SFRS=0;ADCCON0|=0x40
#define set_ADCCON0_ETGSEL1                        SFRS=0;ADCCON0|=0x20
#define set_ADCCON0_ETGSEL0                        SFRS=0;ADCCON0|=0x10
#define set_ADCCON0_ADCHS3                         SFRS=0;ADCCON0|=0x08
#define set_ADCCON0_ADCHS2                         SFRS=0;ADCCON0|=0x04
#define set_ADCCON0_ADCHS1                         SFRS=0;ADCCON0|=0x02
#define set_ADCCON0_ADCHS0                         SFRS=0;ADCCON0|=0x01

#define clr_ADCCON0_ADCF                           SFRS=0;ADCCON0&=0x7F
#define clr_ADCCON0_ADCS                           SFRS=0;ADCCON0&=0xBF
#define clr_ADCCON0_ETGSEL1                        SFRS=0;ADCCON0&=0xDF
#define clr_ADCCON0_ETGSEL0                        SFRS=0;ADCCON0&=0xEF
#define clr_ADCCON0_ADCHS3                         SFRS=0;ADCCON0&=0xF7
#define clr_ADCCON0_ADCHS2                         SFRS=0;ADCCON0&=0xFB
#define clr_ADCCON0_ADCHS1                         SFRS=0;ADCCON0&=0xFD
#define clr_ADCCON0_ADCHS0                         SFRS=0;ADCCON0&=0xFE

/**** AUXR0  A2H  PAGE 0 ****/
#define set_AUXR0_SWRF                             SFRS=0;AUXR0|=0x80
#define set_AUXR0_RSTPINF                          SFRS=0;AUXR0|=0x40
#define set_AUXR0_HardF                            SFRS=0;AUXR0|=0x20
#define set_AUXR0_HardFInt                         SFRS=0;AUXR0|=0x10
#define set_AUXR0_GF2                              SFRS=0;AUXR0|=0x08
#define set_AUXR0_LIBRF                            SFRS=0;AUXR0|=0x04
#define set_AUXR0_0                                SFRS=0;AUXR0|=0x02
#define set_AUXR0_DPS                              SFRS=0;AUXR0|=0x01

#define clr_AUXR0_SWRF                             SFRS=0;AUXR0&=0x7F
#define clr_AUXR0_RSTPINF                          SFRS=0;AUXR0&=0xBF
#define clr_AUXR0_HardF                            SFRS=0;AUXR0&=0xDF
#define clr_AUXR0_HardFInt                         SFRS=0;AUXR0&=0xEF
#define clr_AUXR0_GF2                              SFRS=0;AUXR0&=0xF7
#define clr_AUXR0_LIBRF                            SFRS=0;AUXR0&=0xFB
#define clr_AUXR0_0                                SFRS=0;AUXR0&=0xFD
#define clr_AUXR0_DPS                              SFRS=0;AUXR0&=0xFE

/**** BODCON0  A3H  PAGE 0 TA protect register ****/
#define set_BODCON0_BODEN                          SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x80;EA=BIT_TMP
#define set_BODCON0_BOV2                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x40;EA=BIT_TMP
#define set_BODCON0_BOV1                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x20;EA=BIT_TMP
#define set_BODCON0_BOV0                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x10;EA=BIT_TMP
#define set_BODCON0_BOF                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x08;EA=BIT_TMP
#define set_BODCON0_BORST                          SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x04;EA=BIT_TMP
#define set_BODCON0_BORF                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x02;EA=BIT_TMP
#define set_BODCON0_BOS                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0|=0x01;EA=BIT_TMP

#define clr_BODCON0_BODEN                          SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0x7F;EA=BIT_TMP
#define clr_BODCON0_BOV2                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0xBF;EA=BIT_TMP
#define clr_BODCON0_BOV1                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0xDF;EA=BIT_TMP
#define clr_BODCON0_BOV0                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0xEF;EA=BIT_TMP
#define clr_BODCON0_BOF                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0xF7;EA=BIT_TMP
#define clr_BODCON0_BORST                          SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0xFB;EA=BIT_TMP
#define clr_BODCON0_BORF                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0xFD;EA=BIT_TMP
#define clr_BODCON0_BOS                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON0&=0xFE;EA=BIT_TMP

/**** IAPTRG  A4H  PAGE 0 TA protect register ****/
#define set_IAPTRG_IAPGO                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPTRG|=0x01;EA=BIT_TMP

#define clr_IAPTRG_IAPGO                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPTRG&=0xFE;EA=BIT_TMP

/**** IAPUEN  A5H  PAGE 0 TA protect register ****/
#define set_IAPUEN_SPMEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN|=0x10;EA=BIT_TMP
#define set_IAPUEN_SPUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN|=0x08;EA=BIT_TMP
#define set_IAPUEN_CFUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN|=0x04;EA=BIT_TMP
#define set_IAPUEN_LDUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN|=0x02;EA=BIT_TMP
#define set_IAPUEN_APUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN|=0x01;EA=BIT_TMP

#define clr_IAPUEN_SPMEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN&=0xEF;EA=BIT_TMP
#define clr_IAPUEN_SPUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN&=0xF7;EA=BIT_TMP
#define clr_IAPUEN_CFUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN&=0xFB;EA=BIT_TMP
#define clr_IAPUEN_LDUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN&=0xFD;EA=BIT_TMP
#define clr_IAPUEN_APUEN                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;IAPUEN&=0xFE;EA=BIT_TMP

/**** WDCON  AAH  PAGE 0 TA protect register ****/
#define set_WDCON_WDTR                             SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x80;EA=BIT_TMP
#define set_WDCON_WDCLR                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x40;EA=BIT_TMP
#define set_WDCON_WDTF                             SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x20;EA=BIT_TMP
#define set_WDCON_WIDPD                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x10;EA=BIT_TMP
#define set_WDCON_WDTRF                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x08;EA=BIT_TMP
#define set_WDCON_WDPS_2                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x04;EA=BIT_TMP
#define set_WDCON_WDPS_1                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x02;EA=BIT_TMP
#define set_WDCON_WDPS_0                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x01;EA=BIT_TMP

#define clr_WDCON_WDTR                             SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0x7F;EA=BIT_TMP
#define clr_WDCON_WDCLR                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0xBF;EA=BIT_TMP
#define clr_WDCON_WDTF                             SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0xDF;EA=BIT_TMP
#define clr_WDCON_WIDPD                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0xEF;EA=BIT_TMP
#define clr_WDCON_WDTRF                            SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0xF7;EA=BIT_TMP
#define clr_WDCON_WDPS_2                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0xFB;EA=BIT_TMP
#define clr_WDCON_WDPS_1                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0xFD;EA=BIT_TMP
#define clr_WDCON_WDPS_0                           SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON&=0xFE;EA=BIT_TMP

/**** BODCON1  ABH  PAGE 0 TA protect register ****/
#define set_BODCON1_LPBOD_1                        SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON1|=0x04;EA=BIT_TMP
#define set_BODCON1_LPBOD_0                        SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON1|=0x02;EA=BIT_TMP
#define set_BODCON1_BODFLT                         SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON1|=0x01;EA=BIT_TMP

#define clr_BODCON1_LPBOD_1                        SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON1&=0xFB;EA=BIT_TMP
#define clr_BODCON1_LPBOD_0                        SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON1&=0xFD;EA=BIT_TMP
#define clr_BODCON1_BODFLT                         SFRS=0;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;BODCON1&=0xFE;EA=BIT_TMP

/**** EIP2  ACH  PAGE 0 ****/
#define set_EIP2_RTC                               SFRS=0;EIP2|=0x80
#define set_EIP2_PDMA3                             SFRS=0;EIP2|=0x40
#define set_EIP2_PDMA2                             SFRS=0;EIP2|=0x20
#define set_EIP2_SMC1                              SFRS=0;EIP2|=0x10
#define set_EIP2_TK                                SFRS=0;EIP2|=0x08
#define set_EIP2_PPWM1                             SFRS=0;EIP2|=0x04
#define set_EIP2_PI2C1                             SFRS=0;EIP2|=0x02
#define set_EIP2_PACMP                             SFRS=0;EIP2|=0x01

#define clr_EIP2_RTC                               SFRS=0;EIP2&=0x7F
#define clr_EIP2_PDMA3                             SFRS=0;EIP2&=0xBF
#define clr_EIP2_PDMA2                             SFRS=0;EIP2&=0xDF
#define clr_EIP2_SMC1                              SFRS=0;EIP2&=0xEF
#define clr_EIP2_TK                                SFRS=0;EIP2&=0xF7
#define clr_EIP2_PPWM1                             SFRS=0;EIP2&=0xFB
#define clr_EIP2_PI2C1                             SFRS=0;EIP2&=0xFD
#define clr_EIP2_PACMP                             SFRS=0;EIP2&=0xFE

/**** EIPH2  ADH  PAGE 0 ****/
#define set_EIPH2_RTCH                             SFRS=0;EIPH2|=0x80
#define set_EIPH2_PDMA3H                           SFRS=0;EIPH2|=0x40
#define set_EIPH2_PDMA2H                           SFRS=0;EIPH2|=0x20
#define set_EIPH2_SMC1H                            SFRS=0;EIPH2|=0x10
#define set_EIPH2_TKH                              SFRS=0;EIPH2|=0x08
#define set_EIPH2_PPWM1H                           SFRS=0;EIPH2|=0x04
#define set_EIPH2_PI2C1H                           SFRS=0;EIPH2|=0x02
#define set_EIPH2_PACMPH                           SFRS=0;EIPH2|=0x01

#define clr_EIPH2_RTCH                             SFRS=0;EIPH2&=0x7F
#define clr_EIPH2_PDMA3H                           SFRS=0;EIPH2&=0xBF
#define clr_EIPH2_PDMA2H                           SFRS=0;EIPH2&=0xDF
#define clr_EIPH2_SMC1H                            SFRS=0;EIPH2&=0xEF
#define clr_EIPH2_TKH                              SFRS=0;EIPH2&=0xF7
#define clr_EIPH2_PPWM1H                           SFRS=0;EIPH2&=0xFB
#define clr_EIPH2_PI2C1H                           SFRS=0;EIPH2&=0xFD
#define clr_EIPH2_PACMPH                           SFRS=0;EIPH2&=0xFE

/**** IAPCN  AFH  PAGE 0 ****/
#define set_IAPCN_IAPA_17                          SFRS=0;IAPCN|=0x80
#define set_IAPCN_IAPA_16                          SFRS=0;IAPCN|=0x40
#define set_IAPCN_FOEN                             SFRS=0;IAPCN|=0x20
#define set_IAPCN_FCEN                             SFRS=0;IAPCN|=0x10
#define set_IAPCN_FCTRL_3                          SFRS=0;IAPCN|=0x08
#define set_IAPCN_FCTRL_2                          SFRS=0;IAPCN|=0x04
#define set_IAPCN_FCTRL_1                          SFRS=0;IAPCN|=0x02
#define set_IAPCN_FCTRL_0                          SFRS=0;IAPCN|=0x01

#define clr_IAPCN_IAPA_17                          SFRS=0;IAPCN&=0x7F
#define clr_IAPCN_IAPA_16                          SFRS=0;IAPCN&=0xBF
#define clr_IAPCN_FOEN                             SFRS=0;IAPCN&=0xDF
#define clr_IAPCN_FCEN                             SFRS=0;IAPCN&=0xEF
#define clr_IAPCN_FCTRL_3                          SFRS=0;IAPCN&=0xF7
#define clr_IAPCN_FCTRL_2                          SFRS=0;IAPCN&=0xFB
#define clr_IAPCN_FCTRL_1                          SFRS=0;IAPCN&=0xFD
#define clr_IAPCN_FCTRL_0                          SFRS=0;IAPCN&=0xFE

/**** P5  B1H  PAGE 0 ****/
#define set_P5_7                                   SFRS=0;P5|=0x80
#define set_P5_6                                   SFRS=0;P5|=0x40
#define set_P5_5                                   SFRS=0;P5|=0x20
#define set_P5_4                                   SFRS=0;P5|=0x10
#define set_P5_3                                   SFRS=0;P5|=0x08
#define set_P5_2                                   SFRS=0;P5|=0x04
#define set_P5_1                                   SFRS=0;P5|=0x02
#define set_P5_0                                   SFRS=0;P5|=0x01

#define clr_P5_7                                   SFRS=0;P5&=0x7F
#define clr_P5_6                                   SFRS=0;P5&=0xBF
#define clr_P5_5                                   SFRS=0;P5&=0xDF
#define clr_P5_4                                   SFRS=0;P5&=0xEF
#define clr_P5_3                                   SFRS=0;P5&=0xF7
#define clr_P5_2                                   SFRS=0;P5&=0xFB
#define clr_P5_1                                   SFRS=0;P5&=0xFD
#define clr_P5_0                                   SFRS=0;P5&=0xFE

/**** I2C1ADDR0  B2H  PAGE 0 ****/
#define set_I2C1ADDR0_I2C1ADDR0_7                  SFRS=0;I2C1ADDR0|=0x80
#define set_I2C1ADDR0_I2C1ADDR0_6                  SFRS=0;I2C1ADDR0|=0x40
#define set_I2C1ADDR0_I2C1ADDR0_5                  SFRS=0;I2C1ADDR0|=0x20
#define set_I2C1ADDR0_I2C1ADDR0_4                  SFRS=0;I2C1ADDR0|=0x10
#define set_I2C1ADDR0_I2C1ADDR0_3                  SFRS=0;I2C1ADDR0|=0x08
#define set_I2C1ADDR0_I2C1ADDR0_2                  SFRS=0;I2C1ADDR0|=0x04
#define set_I2C1ADDR0_I2C1ADDR0_1                  SFRS=0;I2C1ADDR0|=0x02
#define set_I2C1ADDR0_GC                           SFRS=0;I2C1ADDR0|=0x01

#define clr_I2C1ADDR0_I2C1ADDR0_7                  SFRS=0;I2C1ADDR0&=0x7F
#define clr_I2C1ADDR0_I2C1ADDR0_6                  SFRS=0;I2C1ADDR0&=0xBF
#define clr_I2C1ADDR0_I2C1ADDR0_5                  SFRS=0;I2C1ADDR0&=0xDF
#define clr_I2C1ADDR0_I2C1ADDR0_4                  SFRS=0;I2C1ADDR0&=0xEF
#define clr_I2C1ADDR0_I2C1ADDR0_3                  SFRS=0;I2C1ADDR0&=0xF7
#define clr_I2C1ADDR0_I2C1ADDR0_2                  SFRS=0;I2C1ADDR0&=0xFB
#define clr_I2C1ADDR0_I2C1ADDR0_1                  SFRS=0;I2C1ADDR0&=0xFD
#define clr_I2C1ADDR0_GC                           SFRS=0;I2C1ADDR0&=0xFE

/**** I2C1STAT  B4H  PAGE 0 ****/
#define set_I2C1STAT_I2C1STAT_7                    SFRS=0;I2C1STAT|=0x80
#define set_I2C1STAT_I2C1STAT_6                    SFRS=0;I2C1STAT|=0x40
#define set_I2C1STAT_I2C1STAT_5                    SFRS=0;I2C1STAT|=0x20
#define set_I2C1STAT_I2C1STAT_4                    SFRS=0;I2C1STAT|=0x10
#define set_I2C1STAT_I2C1STAT_3                    SFRS=0;I2C1STAT|=0x08

#define clr_I2C1STAT_I2C1STAT_7                    SFRS=0;I2C1STAT&=0x7F
#define clr_I2C1STAT_I2C1STAT_6                    SFRS=0;I2C1STAT&=0xBF
#define clr_I2C1STAT_I2C1STAT_5                    SFRS=0;I2C1STAT&=0xDF
#define clr_I2C1STAT_I2C1STAT_4                    SFRS=0;I2C1STAT&=0xEF
#define clr_I2C1STAT_I2C1STAT_3                    SFRS=0;I2C1STAT&=0xF7

/**** I2C1TOC  B6H  PAGE 0 ****/
#define set_I2C1TOC_I2TOCEN                        SFRS=0;I2C1TOC|=0x04
#define set_I2C1TOC_DIV                            SFRS=0;I2C1TOC|=0x02
#define set_I2C1TOC_I2TOF                          SFRS=0;I2C1TOC|=0x01

#define clr_I2C1TOC_I2TOCEN                        SFRS=0;I2C1TOC&=0xFB
#define clr_I2C1TOC_DIV                            SFRS=0;I2C1TOC&=0xFD
#define clr_I2C1TOC_I2TOF                          SFRS=0;I2C1TOC&=0xFE

/**** IPH  B7H  PAGE 0 ****/
#define set_IPH_PADCH                              SFRS=0;IPH|=0x40
#define set_IPH_PBODH                              SFRS=0;IPH|=0x20
#define set_IPH_PSH                                SFRS=0;IPH|=0x10
#define set_IPH_PT1H                               SFRS=0;IPH|=0x08
#define set_IPH_PX1H                               SFRS=0;IPH|=0x04
#define set_IPH_PT0H                               SFRS=0;IPH|=0x02
#define set_IPH_PX0H                               SFRS=0;IPH|=0x01

#define clr_IPH_PADCH                              SFRS=0;IPH&=0xBF
#define clr_IPH_PBODH                              SFRS=0;IPH&=0xDF
#define clr_IPH_PSH                                SFRS=0;IPH&=0xEF
#define clr_IPH_PT1H                               SFRS=0;IPH&=0xF7
#define clr_IPH_PX1H                               SFRS=0;IPH&=0xFB
#define clr_IPH_PT0H                               SFRS=0;IPH&=0xFD
#define clr_IPH_PX0H                               SFRS=0;IPH&=0xFE

/**** I2C0STAT  BDH  PAGE 0 ****/
#define set_I2C0STAT_I2C0STAT_7                    SFRS=0;I2C0STAT|=0x80
#define set_I2C0STAT_I2C0STAT_6                    SFRS=0;I2C0STAT|=0x40
#define set_I2C0STAT_I2C0STAT_5                    SFRS=0;I2C0STAT|=0x20
#define set_I2C0STAT_I2C0STAT_4                    SFRS=0;I2C0STAT|=0x10
#define set_I2C0STAT_I2C0STAT_3                    SFRS=0;I2C0STAT|=0x08

#define clr_I2C0STAT_I2C0STAT_7                    SFRS=0;I2C0STAT&=0x7F
#define clr_I2C0STAT_I2C0STAT_6                    SFRS=0;I2C0STAT&=0xBF
#define clr_I2C0STAT_I2C0STAT_5                    SFRS=0;I2C0STAT&=0xDF
#define clr_I2C0STAT_I2C0STAT_4                    SFRS=0;I2C0STAT&=0xEF
#define clr_I2C0STAT_I2C0STAT_3                    SFRS=0;I2C0STAT&=0xF7


/**** I2C0TOC  BFH  PAGE 0 ****/
#define set_I2C0TOC_I2TOCEN                        SFRS=0;I2C0TOC|=0x04
#define set_I2C0TOC_DIV                            SFRS=0;I2C0TOC|=0x02
#define set_I2C0TOC_I2TOF                          SFRS=0;I2C0TOC|=0x01

#define clr_I2C0TOC_I2TOCEN                        SFRS=0;I2C0TOC&=0xFB
#define clr_I2C0TOC_DIV                            SFRS=0;I2C0TOC&=0xFD
#define clr_I2C0TOC_I2TOF                          SFRS=0;I2C0TOC&=0xFE

/**** I2C0ADDR0  C1H  PAGE 0 ****/
#define set_I2C0ADDR0_I2C0ADDR0_7                  SFRS=0;I2C0ADDR0|=0x80
#define set_I2C0ADDR0_I2C0ADDR0_6                  SFRS=0;I2C0ADDR0|=0x40
#define set_I2C0ADDR0_I2C0ADDR0_5                  SFRS=0;I2C0ADDR0|=0x20
#define set_I2C0ADDR0_I2C0ADDR0_4                  SFRS=0;I2C0ADDR0|=0x10
#define set_I2C0ADDR0_I2C0ADDR0_3                  SFRS=0;I2C0ADDR0|=0x08
#define set_I2C0ADDR0_I2C0ADDR0_2                  SFRS=0;I2C0ADDR0|=0x04
#define set_I2C0ADDR0_I2C0ADDR0_1                  SFRS=0;I2C0ADDR0|=0x02
#define set_I2C0ADDR0_GC                           SFRS=0;I2C0ADDR0|=0x01

#define clr_I2C0ADDR0_I2C0ADDR0_7                  SFRS=0;I2C0ADDR0&=0x7F
#define clr_I2C0ADDR0_I2C0ADDR0_6                  SFRS=0;I2C0ADDR0&=0xBF
#define clr_I2C0ADDR0_I2C0ADDR0_5                  SFRS=0;I2C0ADDR0&=0xDF
#define clr_I2C0ADDR0_I2C0ADDR0_4                  SFRS=0;I2C0ADDR0&=0xEF
#define clr_I2C0ADDR0_I2C0ADDR0_3                  SFRS=0;I2C0ADDR0&=0xF7
#define clr_I2C0ADDR0_I2C0ADDR0_2                  SFRS=0;I2C0ADDR0&=0xFB
#define clr_I2C0ADDR0_I2C0ADDR0_1                  SFRS=0;I2C0ADDR0&=0xFD
#define clr_I2C0ADDR0_GC                           SFRS=0;I2C0ADDR0&=0xFE

/**** ADCRL  C2H  PAGE 0 ****/
#define set_ADCRL_ADCR_3                           SFRS=0;ADCRL|=0x08
#define set_ADCRL_ADCR_2                           SFRS=0;ADCRL|=0x04
#define set_ADCRL_ADCR_1                           SFRS=0;ADCRL|=0x02
#define set_ADCRL_ADCR_0                           SFRS=0;ADCRL|=0x01

#define clr_ADCRL_ADCR_3                           SFRS=0;ADCRL&=0xF7
#define clr_ADCRL_ADCR_2                           SFRS=0;ADCRL&=0xFB
#define clr_ADCRL_ADCR_1                           SFRS=0;ADCRL&=0xFD
#define clr_ADCRL_ADCR_0                           SFRS=0;ADCRL&=0xFE

/**** T3CON  C4H  PAGE 0 ****/
#define set_T3CON_SMOD_1                           SFRS=0;T3CON|=0x80
#define set_T3CON_SMOD0_1                          SFRS=0;T3CON|=0x40
#define set_T3CON_BRCK                             SFRS=0;T3CON|=0x20
#define set_T3CON_TF3                              SFRS=0;T3CON|=0x10
#define set_T3CON_TR3                              SFRS=0;T3CON|=0x08
#define set_T3CON_T3PS_2                           SFRS=0;T3CON|=0x04
#define set_T3CON_T3PS_1                           SFRS=0;T3CON|=0x02
#define set_T3CON_T3PS_0                           SFRS=0;T3CON|=0x01

#define clr_T3CON_SMOD_1                           SFRS=0;T3CON&=0x7F
#define clr_T3CON_SMOD0_1                          SFRS=0;T3CON&=0xBF
#define clr_T3CON_BRCK                             SFRS=0;T3CON&=0xDF
#define clr_T3CON_TF3                              SFRS=0;T3CON&=0xEF
#define clr_T3CON_TR3                              SFRS=0;T3CON&=0xF7
#define clr_T3CON_T3PS_2                           SFRS=0;T3CON&=0xFB
#define clr_T3CON_T3PS_1                           SFRS=0;T3CON&=0xFD
#define clr_T3CON_T3PS_0                           SFRS=0;T3CON&=0xFE

/**** T2MOD  C9H  PAGE 0 ****/
#define set_T2MOD_LDEN                             SFRS=0;T2MOD|=0x80
#define set_T2MOD_T2DIV_2                          SFRS=0;T2MOD|=0x40
#define set_T2MOD_T2DIV_1                          SFRS=0;T2MOD|=0x20
#define set_T2MOD_T2DIV_0                          SFRS=0;T2MOD|=0x10
#define set_T2MOD_CAPCR                            SFRS=0;T2MOD|=0x08
#define set_T2MOD_CMPCR                            SFRS=0;T2MOD|=0x04
#define set_T2MOD_LDTS_1                           SFRS=0;T2MOD|=0x02
#define set_T2MOD_LDTS_0                           SFRS=0;T2MOD|=0x01

#define clr_T2MOD_LDEN                             SFRS=0;T2MOD&=0x7F
#define clr_T2MOD_T2DIV_2                          SFRS=0;T2MOD&=0xBF
#define clr_T2MOD_T2DIV_1                          SFRS=0;T2MOD&=0xDF
#define clr_T2MOD_T2DIV_0                          SFRS=0;T2MOD&=0xEF
#define clr_T2MOD_CAPCR                            SFRS=0;T2MOD&=0xF7
#define clr_T2MOD_CMPCR                            SFRS=0;T2MOD&=0xFB
#define clr_T2MOD_LDTS_1                           SFRS=0;T2MOD&=0xFD
#define clr_T2MOD_LDTS_0                           SFRS=0;T2MOD&=0xFE

/**** PIF  CAH  PAGE 0 ****/
#define set_PIF_PIF7                               SFRS=0;PIF|=0x80
#define set_PIF_PIF6                               SFRS=0;PIF|=0x40
#define set_PIF_PIF5                               SFRS=0;PIF|=0x20
#define set_PIF_PIF4                               SFRS=0;PIF|=0x10
#define set_PIF_PIF3                               SFRS=0;PIF|=0x08
#define set_PIF_PIF2                               SFRS=0;PIF|=0x04
#define set_PIF_PIF1                               SFRS=0;PIF|=0x02
#define set_PIF_PIF0                               SFRS=0;PIF|=0x01

#define clr_PIF_PIF7                               SFRS=0;PIF&=0x7F
#define clr_PIF_PIF6                               SFRS=0;PIF&=0xBF
#define clr_PIF_PIF5                               SFRS=0;PIF&=0xDF
#define clr_PIF_PIF4                               SFRS=0;PIF&=0xEF
#define clr_PIF_PIF3                               SFRS=0;PIF&=0xF7
#define clr_PIF_PIF2                               SFRS=0;PIF&=0xFB
#define clr_PIF_PIF1                               SFRS=0;PIF&=0xFD
#define clr_PIF_PIF0                               SFRS=0;PIF&=0xFE

/**** PWM0CON0  D1H  PAGE 0 ****/
#define set_PWM0CON0_PWMRUN                        SFRS=0;PWM0CON0|=0x80
#define set_PWM0CON0_LOAD                          SFRS=0;PWM0CON0|=0x40
#define set_PWM0CON0_PWMF                          SFRS=0;PWM0CON0|=0x20
#define set_PWM0CON0_CLRPWM                        SFRS=0;PWM0CON0|=0x10

#define clr_PWM0CON0_PWMRUN                        SFRS=0;PWM0CON0&=0x7F
#define clr_PWM0CON0_LOAD                          SFRS=0;PWM0CON0&=0xBF
#define clr_PWM0CON0_PWMF                          SFRS=0;PWM0CON0&=0xDF
#define clr_PWM0CON0_CLRPWM                        SFRS=0;PWM0CON0&=0xEF

/**** ACMPCR0  D2H  PAGE 0 ****/
#define set_ACMPCR0_POSSEL_1                       SFRS=0;ACMPCR0|=0x80
#define set_ACMPCR0_POSSEL_0                       SFRS=0;ACMPCR0|=0x40
#define set_ACMPCR0_NEGSEL_1                       SFRS=0;ACMPCR0|=0x20
#define set_ACMPCR0_NEGSEL_0                       SFRS=0;ACMPCR0|=0x10
#define set_ACMPCR0_WKEN                           SFRS=0;ACMPCR0|=0x08
#define set_ACMPCR0_HYSEN                          SFRS=0;ACMPCR0|=0x04
#define set_ACMPCR0_ACMPIE                         SFRS=0;ACMPCR0|=0x02
#define set_ACMPCR0_ACMPEN                         SFRS=0;ACMPCR0|=0x01

#define clr_ACMPCR0_POSSEL_1                       SFRS=0;ACMPCR0&=0x7F
#define clr_ACMPCR0_POSSEL_0                       SFRS=0;ACMPCR0&=0xBF
#define clr_ACMPCR0_NEGSEL_1                       SFRS=0;ACMPCR0&=0xDF
#define clr_ACMPCR0_NEGSEL_0                       SFRS=0;ACMPCR0&=0xEF
#define clr_ACMPCR0_WKEN                           SFRS=0;ACMPCR0&=0xF7
#define clr_ACMPCR0_HYSEN                          SFRS=0;ACMPCR0&=0xFB
#define clr_ACMPCR0_ACMPIE                         SFRS=0;ACMPCR0&=0xFD
#define clr_ACMPCR0_ACMPEN                         SFRS=0;ACMPCR0&=0xFE

/**** ACMPCR1  D3H  PAGE 0 ****/
#define set_ACMPCR1_POSSEL_1                       SFRS=0;ACMPCR1|=0x80
#define set_ACMPCR1_POSSEL_0                       SFRS=0;ACMPCR1|=0x40
#define set_ACMPCR1_NEGSEL_1                       SFRS=0;ACMPCR1|=0x20
#define set_ACMPCR1_NEGSEL_0                       SFRS=0;ACMPCR1|=0x10
#define set_ACMPCR1_WKEN                           SFRS=0;ACMPCR1|=0x08
#define set_ACMPCR1_HYSEN                          SFRS=0;ACMPCR1|=0x04
#define set_ACMPCR1_ACMPIE                         SFRS=0;ACMPCR1|=0x02
#define set_ACMPCR1_ACMPEN                         SFRS=0;ACMPCR1|=0x01

#define clr_ACMPCR1_POSSEL_1                       SFRS=0;ACMPCR1&=0x7F
#define clr_ACMPCR1_POSSEL_0                       SFRS=0;ACMPCR1&=0xBF
#define clr_ACMPCR1_NEGSEL_1                       SFRS=0;ACMPCR1&=0xDF
#define clr_ACMPCR1_NEGSEL_0                       SFRS=0;ACMPCR1&=0xEF
#define clr_ACMPCR1_WKEN                           SFRS=0;ACMPCR1&=0xF7
#define clr_ACMPCR1_HYSEN                          SFRS=0;ACMPCR1&=0xFB
#define clr_ACMPCR1_ACMPIE                         SFRS=0;ACMPCR1&=0xFD
#define clr_ACMPCR1_ACMPEN                         SFRS=0;ACMPCR1&=0xFE

/**** ACMPSR  D4H  PAGE 0 ****/
#define set_ACMPSR_ACMP1O                          SFRS=0;ACMPSR|=0x08
#define set_ACMPSR_ACMP1IF                         SFRS=0;ACMPSR|=0x04
#define set_ACMPSR_ACMP0O                          SFRS=0;ACMPSR|=0x02
#define set_ACMPSR_ACMP0IF                         SFRS=0;ACMPSR|=0x01

#define clr_ACMPSR_ACMP1O                          SFRS=0;ACMPSR&=0xF7
#define clr_ACMPSR_ACMP1IF                         SFRS=0;ACMPSR&=0xFB
#define clr_ACMPSR_ACMP0O                          SFRS=0;ACMPSR&=0xFD
#define clr_ACMPSR_ACMP0IF                         SFRS=0;ACMPSR&=0xFE

/**** ACMPVREF  D5H  PAGE 0 ****/
#define set_ACMPVREF_CRV1CTL_2                     SFRS=0;ACMPVREF|=0x40
#define set_ACMPVREF_CRV1CTL__1                    SFRS=0;ACMPVREF|=0x20
#define set_ACMPVREF_CRV1CTL_0                     SFRS=0;ACMPVREF|=0x10
#define set_ACMPVREF_CRV0CTL_2                     SFRS=0;ACMPVREF|=0x04
#define set_ACMPVREF_CRV0CTL_1                     SFRS=0;ACMPVREF|=0x02
#define set_ACMPVREF_CRV0CTL_0                     SFRS=0;ACMPVREF|=0x01

#define clr_ACMPVREF_CRV1CTL_2                     SFRS=0;ACMPVREF&=0xBF
#define clr_ACMPVREF_CRV1CTL__1                    SFRS=0;ACMPVREF&=0xDF
#define clr_ACMPVREF_CRV1CTL_0                     SFRS=0;ACMPVREF&=0xEF
#define clr_ACMPVREF_CRV0CTL_2                     SFRS=0;ACMPVREF&=0xFB
#define clr_ACMPVREF_CRV0CTL_1                     SFRS=0;ACMPVREF&=0xFD
#define clr_ACMPVREF_CRV0CTL_0                     SFRS=0;ACMPVREF&=0xFE

/**** SC0CR0  D6H  PAGE 0 ****/
#define set_SC0CR0_NSB                             SFRS=0;SC0CR0|=0x80
#define set_SC0CR0_T                               SFRS=0;SC0CR0|=0x40
#define set_SC0CR0_RXBGTEN                         SFRS=0;SC0CR0|=0x20
#define set_SC0CR0_CONSEL                          SFRS=0;SC0CR0|=0x10
#define set_SC0CR0_AUTOCEN                         SFRS=0;SC0CR0|=0x08
#define set_SC0CR0_TXOFF                           SFRS=0;SC0CR0|=0x04
#define set_SC0CR0_RXOFF                           SFRS=0;SC0CR0|=0x02
#define set_SC0CR0_SCEN                            SFRS=0;SC0CR0|=0x01

#define clr_SC0CR0_NSB                             SFRS=0;SC0CR0&=0x7F
#define clr_SC0CR0_T                               SFRS=0;SC0CR0&=0xBF
#define clr_SC0CR0_RXBGTEN                         SFRS=0;SC0CR0&=0xDF
#define clr_SC0CR0_CONSEL                          SFRS=0;SC0CR0&=0xEF
#define clr_SC0CR0_AUTOCEN                         SFRS=0;SC0CR0&=0xF7
#define clr_SC0CR0_TXOFF                           SFRS=0;SC0CR0&=0xFB
#define clr_SC0CR0_RXOFF                           SFRS=0;SC0CR0&=0xFD
#define clr_SC0CR0_SCEN                            SFRS=0;SC0CR0&=0xFE

/**** SC0CR1  D7H  PAGE 0 ****/
#define set_SC0CR1_OPE                             SFRS=0;SC0CR1|=0x80
#define set_SC0CR1_PBOFF                           SFRS=0;SC0CR1|=0x40
#define set_SC0CR1_WLS1                            SFRS=0;SC0CR1|=0x20
#define set_SC0CR1_WLS0                            SFRS=0;SC0CR1|=0x10
#define set_SC0CR1_TXDMAEN                         SFRS=0;SC0CR1|=0x08
#define set_SC0CR1_RXDMAEN                         SFRS=0;SC0CR1|=0x04
#define set_SC0CR1_CLKKEEP                         SFRS=0;SC0CR1|=0x02
#define set_SC0CR1_UARTEN                          SFRS=0;SC0CR1|=0x01

#define clr_SC0CR1_OPE                             SFRS=0;SC0CR1&=0x7F
#define clr_SC0CR1_PBOFF                           SFRS=0;SC0CR1&=0xBF
#define clr_SC0CR1_WLS1                            SFRS=0;SC0CR1&=0xDF
#define clr_SC0CR1_WLS0                            SFRS=0;SC0CR1&=0xEF
#define clr_SC0CR1_TXDMAEN                         SFRS=0;SC0CR1&=0xF7
#define clr_SC0CR1_RXDMAEN                         SFRS=0;SC0CR1&=0xFB
#define clr_SC0CR1_CLKKEEP                         SFRS=0;SC0CR1&=0xFD
#define clr_SC0CR1_UARTEN                          SFRS=0;SC0CR1&=0xFE

/**** SC0ETURD1  DCH  PAGE 0 ****/
#define set_SC0ETURD1_SCDIV_2                      SFRS=0;SC0ETURD1|=0x40
#define set_SC0ETURD1_SCDIV_1                      SFRS=0;SC0ETURD1|=0x20
#define set_SC0ETURD1_SCDIV_0                      SFRS=0;SC0ETURD1|=0x10
#define set_SC0ETURD1_ETURDIV_11                   SFRS=0;SC0ETURD1|=0x08
#define set_SC0ETURD1_ETURDIV_10                   SFRS=0;SC0ETURD1|=0x04
#define set_SC0ETURD1_ETURDIV_9                    SFRS=0;SC0ETURD1|=0x02
#define set_SC0ETURD1_ETURDIV_8                    SFRS=0;SC0ETURD1|=0x01

#define clr_SC0ETURD1_SCDIV_2                      SFRS=0;SC0ETURD1&=0xBF
#define clr_SC0ETURD1_SCDIV_1                      SFRS=0;SC0ETURD1&=0xDF
#define clr_SC0ETURD1_SCDIV_0                      SFRS=0;SC0ETURD1&=0xEF
#define clr_SC0ETURD1_ETURDIV_11                   SFRS=0;SC0ETURD1&=0xF7
#define clr_SC0ETURD1_ETURDIV_10                   SFRS=0;SC0ETURD1&=0xFB
#define clr_SC0ETURD1_ETURDIV_9                    SFRS=0;SC0ETURD1&=0xFD
#define clr_SC0ETURD1_ETURDIV_8                    SFRS=0;SC0ETURD1&=0xFE

/**** SC0IE  DDH  PAGE 0 ****/
#define set_SC0IE_ACERRIEN                         SFRS=0;SC0IE|=0x10
#define set_SC0IE_BGTIEN                           SFRS=0;SC0IE|=0x08
#define set_SC0IE_TERRIEN                          SFRS=0;SC0IE|=0x04
#define set_SC0IE_TBEIEN                           SFRS=0;SC0IE|=0x02
#define set_SC0IE_RDAIEN                           SFRS=0;SC0IE|=0x01

#define clr_SC0IE_ACERRIEN                         SFRS=0;SC0IE&=0xEF
#define clr_SC0IE_BGTIEN                           SFRS=0;SC0IE&=0xF7
#define clr_SC0IE_TERRIEN                          SFRS=0;SC0IE&=0xFB
#define clr_SC0IE_TBEIEN                           SFRS=0;SC0IE&=0xFD
#define clr_SC0IE_RDAIEN                           SFRS=0;SC0IE&=0xFE

/**** SC0IS  DEH  PAGE 0 ****/
#define set_SC0IS_Tx_Er                            SFRS=0;SC0IS|=0x20
#define set_SC0IS_ACERRIF                          SFRS=0;SC0IS|=0x10
#define set_SC0IS_BGTIF                            SFRS=0;SC0IS|=0x08
#define set_SC0IS_TERRIF                           SFRS=0;SC0IS|=0x04
#define set_SC0IS_TBEIF                            SFRS=0;SC0IS|=0x02
#define set_SC0IS_RDAIF                            SFRS=0;SC0IS|=0x01

#define clr_SC0IS_Tx_Er                            SFRS=0;SC0IS&=0xDF
#define clr_SC0IS_ACERRIF                          SFRS=0;SC0IS&=0xEF
#define clr_SC0IS_BGTIF                            SFRS=0;SC0IS&=0xF7
#define clr_SC0IS_TERRIF                           SFRS=0;SC0IS&=0xFB
#define clr_SC0IS_TBEIF                            SFRS=0;SC0IS&=0xFD
#define clr_SC0IS_RDAIF                            SFRS=0;SC0IS&=0xFE

/**** SC0TSR  DFH  PAGE 0 ****/
#define set_SC0TSR_ACT                             SFRS=0;SC0TSR|=0x80
#define set_SC0TSR_BEF                             SFRS=0;SC0TSR|=0x40
#define set_SC0TSR_FEF                             SFRS=0;SC0TSR|=0x20
#define set_SC0TSR_PEF                             SFRS=0;SC0TSR|=0x10
#define set_SC0TSR_TXEMPTY                         SFRS=0;SC0TSR|=0x08
#define set_SC0TSR_TXOV                            SFRS=0;SC0TSR|=0x04
#define set_SC0TSR_RXEMPTY                         SFRS=0;SC0TSR|=0x02
#define set_SC0TSR_RXOV                            SFRS=0;SC0TSR|=0x01

#define clr_SC0TSR_ACT                             SFRS=0;SC0TSR&=0x7F
#define clr_SC0TSR_BEF                             SFRS=0;SC0TSR&=0xBF
#define clr_SC0TSR_FEF                             SFRS=0;SC0TSR&=0xDF
#define clr_SC0TSR_PEF                             SFRS=0;SC0TSR&=0xEF
#define clr_SC0TSR_TXEMPTY                         SFRS=0;SC0TSR&=0xF7
#define clr_SC0TSR_TXOV                            SFRS=0;SC0TSR&=0xFB
#define clr_SC0TSR_RXEMPTY                         SFRS=0;SC0TSR&=0xFD
#define clr_SC0TSR_RXOV                            SFRS=0;SC0TSR&=0xFE

/**** DMA0TSR  E9H  PAGE 0 ****/
#define set_DMA0TSR_ACT                            SFRS=0;DMA0TSR|=0x04
#define set_DMA0TSR_HDONE                          SFRS=0;DMA0TSR|=0x02
#define set_DMA0TSR_FDONE                          SFRS=0;DMA0TSR|=0x01

#define clr_DMA0TSR_ACT                            SFRS=0;DMA0TSR&=0xFB
#define clr_DMA0TSR_HDONE                          SFRS=0;DMA0TSR&=0xFD
#define clr_DMA0TSR_FDONE                          SFRS=0;DMA0TSR&=0xFE

/**** DMA1CR0  EBH  PAGE 0 ****/
#define set_DMA1CR0_PSSEL_3                        SFRS=0;DMA1CR0|=0x80
#define set_DMA1CR0_PSSEL_2                        SFRS=0;DMA1CR0|=0x40
#define set_DMA1CR0_PSSEL_1                        SFRS=0;DMA1CR0|=0x20
#define set_DMA1CR0_PSSEL_0                        SFRS=0;DMA1CR0|=0x10
#define set_DMA1CR0_HIE                            SFRS=0;DMA1CR0|=0x08
#define set_DMA1CR0_FIE                            SFRS=0;DMA1CR0|=0x04
#define set_DMA1CR0_RUN                            SFRS=0;DMA1CR0|=0x02
#define set_DMA1CR0_EN                             SFRS=0;DMA1CR0|=0x01

#define clr_DMA1CR0_PSSEL_3                        SFRS=0;DMA1CR0&=0x7F
#define clr_DMA1CR0_PSSEL_2                        SFRS=0;DMA1CR0&=0xBF
#define clr_DMA1CR0_PSSEL_1                        SFRS=0;DMA1CR0&=0xDF
#define clr_DMA1CR0_PSSEL_0                        SFRS=0;DMA1CR0&=0xEF
#define clr_DMA1CR0_HIE                            SFRS=0;DMA1CR0&=0xF7
#define clr_DMA1CR0_FIE                            SFRS=0;DMA1CR0&=0xFB
#define clr_DMA1CR0_RUN                            SFRS=0;DMA1CR0&=0xFD
#define clr_DMA1CR0_EN                             SFRS=0;DMA1CR0&=0xFE

/**** EIP0  EFH  PAGE 0 ****/
#define set_EIP0_PT2                               SFRS=0;EIP0|=0x80
#define set_EIP0_PSPI                              SFRS=0;EIP0|=0x40
#define set_EIP0_PFB                               SFRS=0;EIP0|=0x20
#define set_EIP0_PWDT                              SFRS=0;EIP0|=0x10
#define set_EIP0_PPWM                              SFRS=0;EIP0|=0x08
#define set_EIP0_PCAP                              SFRS=0;EIP0|=0x04
#define set_EIP0_PPI                               SFRS=0;EIP0|=0x02
#define set_EIP0_PI2C                              SFRS=0;EIP0|=0x01

#define clr_EIP0_PT2                               SFRS=0;EIP0&=0x7F
#define clr_EIP0_PSPI                              SFRS=0;EIP0&=0xBF
#define clr_EIP0_PFB                               SFRS=0;EIP0&=0xDF
#define clr_EIP0_PWDT                              SFRS=0;EIP0&=0xEF
#define clr_EIP0_PPWM                              SFRS=0;EIP0&=0xF7
#define clr_EIP0_PCAP                              SFRS=0;EIP0&=0xFB
#define clr_EIP0_PPI                               SFRS=0;EIP0&=0xFD
#define clr_EIP0_PI2C                              SFRS=0;EIP0&=0xFE

/**** DMA1TSR  F1H  PAGE 0 ****/
#define set_DMA1TSR_ACT                            SFRS=0;DMA1TSR|=0x04
#define set_DMA1TSR_HDONE                          SFRS=0;DMA1TSR|=0x02
#define set_DMA1TSR_FDONE                          SFRS=0;DMA1TSR|=0x01

#define clr_DMA1TSR_ACT                            SFRS=0;DMA1TSR&=0xFB
#define clr_DMA1TSR_HDONE                          SFRS=0;DMA1TSR&=0xFD
#define clr_DMA1TSR_FDONE                          SFRS=0;DMA1TSR&=0xFE

/**** SPI0CR0  F3H  PAGE 0 ****/
#define set_SPI0CR0_SSOE                           SFRS=0;SPI0CR0|=0x80
#define set_SPI0CR0_SPIEN                          SFRS=0;SPI0CR0|=0x40
#define set_SPI0CR0_LSBFE                          SFRS=0;SPI0CR0|=0x20
#define set_SPI0CR0_MSTR                           SFRS=0;SPI0CR0|=0x10
#define set_SPI0CR0_CPOL                           SFRS=0;SPI0CR0|=0x08
#define set_SPI0CR0_CPHA                           SFRS=0;SPI0CR0|=0x04
#define set_SPI0CR0_SPR1                           SFRS=0;SPI0CR0|=0x02
#define set_SPI0CR0_SPR0                           SFRS=0;SPI0CR0|=0x01

#define clr_SPI0CR0_SSOE                           SFRS=0;SPI0CR0&=0x7F
#define clr_SPI0CR0_SPIEN                          SFRS=0;SPI0CR0&=0xBF
#define clr_SPI0CR0_LSBFE                          SFRS=0;SPI0CR0&=0xDF
#define clr_SPI0CR0_MSTR                           SFRS=0;SPI0CR0&=0xEF
#define clr_SPI0CR0_CPOL                           SFRS=0;SPI0CR0&=0xF7
#define clr_SPI0CR0_CPHA                           SFRS=0;SPI0CR0&=0xFB
#define clr_SPI0CR0_SPR1                           SFRS=0;SPI0CR0&=0xFD
#define clr_SPI0CR0_SPR0                           SFRS=0;SPI0CR0&=0xFE

/**** SPI0SR  F4H  PAGE 0 ****/
#define set_SPI0SR_SPIF                            SFRS=0;SPI0SR|=0x80
#define set_SPI0SR_WCOL                            SFRS=0;SPI0SR|=0x40
#define set_SPI0SR_SPIOVF                          SFRS=0;SPI0SR|=0x20
#define set_SPI0SR_MODF                            SFRS=0;SPI0SR|=0x10
#define set_SPI0SR_DISMODF                         SFRS=0;SPI0SR|=0x08
#define set_SPI0SR_DISSPIF                         SFRS=0;SPI0SR|=0x04
#define set_SPI0SR_TXBFF                           SFRS=0;SPI0SR|=0x02

#define clr_SPI0SR_SPIF                            SFRS=0;SPI0SR&=0x7F
#define clr_SPI0SR_WCOL                            SFRS=0;SPI0SR&=0xBF
#define clr_SPI0SR_SPIOVF                          SFRS=0;SPI0SR&=0xDF
#define clr_SPI0SR_MODF                            SFRS=0;SPI0SR&=0xEF
#define clr_SPI0SR_DISMODF                         SFRS=0;SPI0SR&=0xF7
#define clr_SPI0SR_DISSPIF                         SFRS=0;SPI0SR&=0xFB
#define clr_SPI0SR_TXBFF                           SFRS=0;SPI0SR&=0xFD

/**** DMA0BAH  F6H  PAGE 0 ****/
#define set_DMA0BAH_MDAH_3                         SFRS=0;DMA0BAH|=0x80
#define set_DMA0BAH_MDAH_2                         SFRS=0;DMA0BAH|=0x40
#define set_DMA0BAH_MDAH_1                         SFRS=0;DMA0BAH|=0x20
#define set_DMA0BAH_MDAH_0                         SFRS=0;DMA0BAH|=0x10
#define set_DMA0BAH_MAH_3                          SFRS=0;DMA0BAH|=0x08
#define set_DMA0BAH_MAH_2                          SFRS=0;DMA0BAH|=0x04
#define set_DMA0BAH_MAH_1                          SFRS=0;DMA0BAH|=0x02
#define set_DMA0BAH_MAH_0                          SFRS=0;DMA0BAH|=0x01

#define clr_DMA0BAH_MDAH_3                         SFRS=0;DMA0BAH&=0x7F
#define clr_DMA0BAH_MDAH_2                         SFRS=0;DMA0BAH&=0xBF
#define clr_DMA0BAH_MDAH_1                         SFRS=0;DMA0BAH&=0xDF
#define clr_DMA0BAH_MDAH_0                         SFRS=0;DMA0BAH&=0xEF
#define clr_DMA0BAH_MAH_3                          SFRS=0;DMA0BAH&=0xF7
#define clr_DMA0BAH_MAH_2                          SFRS=0;DMA0BAH&=0xFB
#define clr_DMA0BAH_MAH_1                          SFRS=0;DMA0BAH&=0xFD
#define clr_DMA0BAH_MAH_0                          SFRS=0;DMA0BAH&=0xFE

/**** EIPH0  F7H  PAGE 0 ****/
#define set_EIPH0_PT2H                             SFRS=0;EIPH0|=0x80
#define set_EIPH0_PSPIH                            SFRS=0;EIPH0|=0x40
#define set_EIPH0_PFBH                             SFRS=0;EIPH0|=0x20
#define set_EIPH0_PWDTH                            SFRS=0;EIPH0|=0x10
#define set_EIPH0_PPWMH                            SFRS=0;EIPH0|=0x08
#define set_EIPH0_PCAPH                            SFRS=0;EIPH0|=0x04
#define set_EIPH0_PPIH                             SFRS=0;EIPH0|=0x02
#define set_EIPH0_PI2CH                            SFRS=0;EIPH0|=0x01

#define clr_EIPH0_PT2H                             SFRS=0;EIPH0&=0x7F
#define clr_EIPH0_PSPIH                            SFRS=0;EIPH0&=0xBF
#define clr_EIPH0_PFBH                             SFRS=0;EIPH0&=0xDF
#define clr_EIPH0_PWDTH                            SFRS=0;EIPH0&=0xEF
#define clr_EIPH0_PPWMH                            SFRS=0;EIPH0&=0xF7
#define clr_EIPH0_PCAPH                            SFRS=0;EIPH0&=0xFB
#define clr_EIPH0_PPIH                             SFRS=0;EIPH0&=0xFD
#define clr_EIPH0_PI2CH                            SFRS=0;EIPH0&=0xFE

/**** DMA1BAH  FDH  PAGE 0 ****/
#define set_DMA1BAH_MDAH_3                         SFRS=0;DMA1BAH|=0x80
#define set_DMA1BAH_MDAH_2                         SFRS=0;DMA1BAH|=0x40
#define set_DMA1BAH_MDAH_1                         SFRS=0;DMA1BAH|=0x20
#define set_DMA1BAH_MDAH_0                         SFRS=0;DMA1BAH|=0x10
#define set_DMA1BAH_MAH_3                          SFRS=0;DMA1BAH|=0x08
#define set_DMA1BAH_MAH_2                          SFRS=0;DMA1BAH|=0x04
#define set_DMA1BAH_MAH_1                          SFRS=0;DMA1BAH|=0x02
#define set_DMA1BAH_MAH_0                          SFRS=0;DMA1BAH|=0x01

#define clr_DMA1BAH_MDAH_3                         SFRS=0;DMA1BAH&=0x7F
#define clr_DMA1BAH_MDAH_2                         SFRS=0;DMA1BAH&=0xBF
#define clr_DMA1BAH_MDAH_1                         SFRS=0;DMA1BAH&=0xDF
#define clr_DMA1BAH_MDAH_0                         SFRS=0;DMA1BAH&=0xEF
#define clr_DMA1BAH_MAH_3                          SFRS=0;DMA1BAH&=0xF7
#define clr_DMA1BAH_MAH_2                          SFRS=0;DMA1BAH&=0xFB
#define clr_DMA1BAH_MAH_1                          SFRS=0;DMA1BAH&=0xFD
#define clr_DMA1BAH_MAH_0                          SFRS=0;DMA1BAH&=0xFE

/**** EIP1  FEH  PAGE 0 ****/
#define set_EIP1_PSPI1                             SFRS=0;EIP1|=0x80
#define set_EIP1_PDMA1                             SFRS=0;EIP1|=0x40
#define set_EIP1_PDMA0                             SFRS=0;EIP1|=0x20
#define set_EIP1_PSMC                              SFRS=0;EIP1|=0x10
#define set_EIP1_PHF                               SFRS=0;EIP1|=0x08
#define set_EIP1_PWKT                              SFRS=0;EIP1|=0x04
#define set_EIP1_PT3                               SFRS=0;EIP1|=0x02
#define set_EIP1_PS_1                              SFRS=0;EIP1|=0x01

#define clr_EIP1_PSPI1                             SFRS=0;EIP1&=0x7F
#define clr_EIP1_PDMA1                             SFRS=0;EIP1&=0xBF
#define clr_EIP1_PDMA0                             SFRS=0;EIP1&=0xDF
#define clr_EIP1_PSMC                              SFRS=0;EIP1&=0xEF
#define clr_EIP1_PHF                               SFRS=0;EIP1&=0xF7
#define clr_EIP1_PWKT                              SFRS=0;EIP1&=0xFB
#define clr_EIP1_PT3                               SFRS=0;EIP1&=0xFD
#define clr_EIP1_PS_1                              SFRS=0;EIP1&=0xFE

/**** EIPH1  FFH  PAGE 0 ****/
#define set_EIPH1_PSPI1H                           SFRS=0;EIPH1|=0x80
#define set_EIPH1_PDMA1H                           SFRS=0;EIPH1|=0x40
#define set_EIPH1_PDMA0H                           SFRS=0;EIPH1|=0x20
#define set_EIPH1_PSMCH                            SFRS=0;EIPH1|=0x10
#define set_EIPH1_PHFH                             SFRS=0;EIPH1|=0x08
#define set_EIPH1_PWKTH                            SFRS=0;EIPH1|=0x04
#define set_EIPH1_PT3H                             SFRS=0;EIPH1|=0x02
#define set_EIPH1_PSH_1                            SFRS=0;EIPH1|=0x01

#define clr_EIPH1_PSPI1H                           SFRS=0;EIPH1&=0x7F
#define clr_EIPH1_PDMA1H                           SFRS=0;EIPH1&=0xBF
#define clr_EIPH1_PDMA0H                           SFRS=0;EIPH1&=0xDF
#define clr_EIPH1_PSMCH                            SFRS=0;EIPH1&=0xEF
#define clr_EIPH1_PHFH                             SFRS=0;EIPH1&=0xF7
#define clr_EIPH1_PWKTH                            SFRS=0;EIPH1&=0xFB
#define clr_EIPH1_PT3H                             SFRS=0;EIPH1&=0xFD
#define clr_EIPH1_PSH_1                            SFRS=0;EIPH1&=0xFE

/********SFR PAGE 1*************/
/**** P0DW  8AH  PAGE 1 ****/
#define set_P0DW_7                                 SFRS=1;P0DW|=0x80
#define set_P0DW_6                                 SFRS=1;P0DW|=0x40
#define set_P0DW_5                                 SFRS=1;P0DW|=0x20
#define set_P0DW_4                                 SFRS=1;P0DW|=0x10
#define set_P0DW_3                                 SFRS=1;P0DW|=0x08
#define set_P0DW_2                                 SFRS=1;P0DW|=0x04
#define set_P0DW_1                                 SFRS=1;P0DW|=0x02
#define set_P0DW_0                                 SFRS=1;P0DW|=0x01

#define clr_P0DW_7                                 SFRS=1;P0DW&=0x7F
#define clr_P0DW_6                                 SFRS=1;P0DW&=0xBF
#define clr_P0DW_5                                 SFRS=1;P0DW&=0xDF
#define clr_P0DW_4                                 SFRS=1;P0DW&=0xEF
#define clr_P0DW_3                                 SFRS=1;P0DW&=0xF7
#define clr_P0DW_2                                 SFRS=1;P0DW&=0xFB
#define clr_P0DW_1                                 SFRS=1;P0DW&=0xFD
#define clr_P0DW_0                                 SFRS=1;P0DW&=0xFE

/**** P1DW  8BH  PAGE 1 ****/
#define set_P1DW_7                                 SFRS=1;P1DW|=0x80
#define set_P1DW_6                                 SFRS=1;P1DW|=0x40
#define set_P1DW_5                                 SFRS=1;P1DW|=0x20
#define set_P1DW_4                                 SFRS=1;P1DW|=0x10
#define set_P1DW_3                                 SFRS=1;P1DW|=0x08
#define set_P1DW_2                                 SFRS=1;P1DW|=0x04
#define set_P1DW_1                                 SFRS=1;P1DW|=0x02
#define set_P1DW_0                                 SFRS=1;P1DW|=0x01

#define clr_P1DW_7                                 SFRS=1;P1DW&=0x7F
#define clr_P1DW_6                                 SFRS=1;P1DW&=0xBF
#define clr_P1DW_5                                 SFRS=1;P1DW&=0xDF
#define clr_P1DW_4                                 SFRS=1;P1DW&=0xEF
#define clr_P1DW_3                                 SFRS=1;P1DW&=0xF7
#define clr_P1DW_2                                 SFRS=1;P1DW&=0xFB
#define clr_P1DW_1                                 SFRS=1;P1DW&=0xFD
#define clr_P1DW_0                                 SFRS=1;P1DW&=0xFE

/**** P2DW  8CH  PAGE 1 ****/
#define set_P2DW_7                                 SFRS=1;P2DW|=0x80
#define set_P2DW_6                                 SFRS=1;P2DW|=0x40
#define set_P2DW_5                                 SFRS=1;P2DW|=0x20
#define set_P2DW_4                                 SFRS=1;P2DW|=0x10
#define set_P2DW_3                                 SFRS=1;P2DW|=0x08
#define set_P2DW_2                                 SFRS=1;P2DW|=0x04
#define set_P2DW_1                                 SFRS=1;P2DW|=0x02
#define set_P2DW_0                                 SFRS=1;P2DW|=0x01

#define clr_P2DW_7                                 SFRS=1;P2DW&=0x7F
#define clr_P2DW_6                                 SFRS=1;P2DW&=0xBF
#define clr_P2DW_5                                 SFRS=1;P2DW&=0xDF
#define clr_P2DW_4                                 SFRS=1;P2DW&=0xEF
#define clr_P2DW_3                                 SFRS=1;P2DW&=0xF7
#define clr_P2DW_2                                 SFRS=1;P2DW&=0xFB
#define clr_P2DW_1                                 SFRS=1;P2DW&=0xFD
#define clr_P2DW_0                                 SFRS=1;P2DW&=0xFE

/**** P3DW  8DH  PAGE 1 ****/
#define set_P3DW_7                                 SFRS=1;P3DW|=0x80
#define set_P3DW_6                                 SFRS=1;P3DW|=0x40
#define set_P3DW_5                                 SFRS=1;P3DW|=0x20
#define set_P3DW_4                                 SFRS=1;P3DW|=0x10
#define set_P3DW_3                                 SFRS=1;P3DW|=0x08
#define set_P3DW_2                                 SFRS=1;P3DW|=0x04
#define set_P3DW_1                                 SFRS=1;P3DW|=0x02
#define set_P3DW_0                                 SFRS=1;P3DW|=0x01

#define clr_P3DW_7                                 SFRS=1;P3DW&=0x7F
#define clr_P3DW_6                                 SFRS=1;P3DW&=0xBF
#define clr_P3DW_5                                 SFRS=1;P3DW&=0xDF
#define clr_P3DW_4                                 SFRS=1;P3DW&=0xEF
#define clr_P3DW_3                                 SFRS=1;P3DW&=0xF7
#define clr_P3DW_2                                 SFRS=1;P3DW&=0xFB
#define clr_P3DW_1                                 SFRS=1;P3DW&=0xFD
#define clr_P3DW_0                                 SFRS=1;P3DW&=0xFE

/**** P4DW  8EH  PAGE 1 ****/
#define set_P4DW_7                                 SFRS=1;P4DW|=0x80
#define set_P4DW_6                                 SFRS=1;P4DW|=0x40
#define set_P4DW_5                                 SFRS=1;P4DW|=0x20
#define set_P4DW_4                                 SFRS=1;P4DW|=0x10
#define set_P4DW_3                                 SFRS=1;P4DW|=0x08
#define set_P4DW_2                                 SFRS=1;P4DW|=0x04
#define set_P4DW_1                                 SFRS=1;P4DW|=0x02
#define set_P4DW_0                                 SFRS=1;P4DW|=0x01

#define clr_P4DW_7                                 SFRS=1;P4DW&=0x7F
#define clr_P4DW_6                                 SFRS=1;P4DW&=0xBF
#define clr_P4DW_5                                 SFRS=1;P4DW&=0xDF
#define clr_P4DW_4                                 SFRS=1;P4DW&=0xEF
#define clr_P4DW_3                                 SFRS=1;P4DW&=0xF7
#define clr_P4DW_2                                 SFRS=1;P4DW&=0xFB
#define clr_P4DW_1                                 SFRS=1;P4DW&=0xFD
#define clr_P4DW_0                                 SFRS=1;P4DW&=0xFE

/**** P5DW  8FH  PAGE 1 ****/
#define set_P5DW_7                                 SFRS=1;P5DW|=0x80
#define set_P5DW_6                                 SFRS=1;P5DW|=0x40
#define set_P5DW_5                                 SFRS=1;P5DW|=0x20
#define set_P5DW_4                                 SFRS=1;P5DW|=0x10
#define set_P5DW_3                                 SFRS=1;P5DW|=0x08
#define set_P5DW_2                                 SFRS=1;P5DW|=0x04
#define set_P5DW_1                                 SFRS=1;P5DW|=0x02
#define set_P5DW_0                                 SFRS=1;P5DW|=0x01

#define clr_P5DW_7                                 SFRS=1;P5DW&=0x7F
#define clr_P5DW_6                                 SFRS=1;P5DW&=0xBF
#define clr_P5DW_5                                 SFRS=1;P5DW&=0xDF
#define clr_P5DW_4                                 SFRS=1;P5DW&=0xEF
#define clr_P5DW_3                                 SFRS=1;P5DW&=0xF7
#define clr_P5DW_2                                 SFRS=1;P5DW&=0xFB
#define clr_P5DW_1                                 SFRS=1;P5DW&=0xFD
#define clr_P5DW_0                                 SFRS=1;P5DW&=0xFE

/**** P0UP  92H  PAGE 1 ****/
#define set_P0UP_7                                 SFRS=1;P0UP|=0x80
#define set_P0UP_6                                 SFRS=1;P0UP|=0x40
#define set_P0UP_5                                 SFRS=1;P0UP|=0x20
#define set_P0UP_4                                 SFRS=1;P0UP|=0x10
#define set_P0UP_3                                 SFRS=1;P0UP|=0x08
#define set_P0UP_2                                 SFRS=1;P0UP|=0x04
#define set_P0UP_1                                 SFRS=1;P0UP|=0x02
#define set_P0UP_0                                 SFRS=1;P0UP|=0x01

#define clr_P0UP_7                                 SFRS=1;P0UP&=0x7F
#define clr_P0UP_6                                 SFRS=1;P0UP&=0xBF
#define clr_P0UP_5                                 SFRS=1;P0UP&=0xDF
#define clr_P0UP_4                                 SFRS=1;P0UP&=0xEF
#define clr_P0UP_3                                 SFRS=1;P0UP&=0xF7
#define clr_P0UP_2                                 SFRS=1;P0UP&=0xFB
#define clr_P0UP_1                                 SFRS=1;P0UP&=0xFD
#define clr_P0UP_0                                 SFRS=1;P0UP&=0xFE

/**** P1UP  93H  PAGE 1 ****/
#define set_P1UP_7                                 SFRS=1;P1UP|=0x80
#define set_P1UP_6                                 SFRS=1;P1UP|=0x40
#define set_P1UP_5                                 SFRS=1;P1UP|=0x20
#define set_P1UP_4                                 SFRS=1;P1UP|=0x10
#define set_P1UP_3                                 SFRS=1;P1UP|=0x08
#define set_P1UP_2                                 SFRS=1;P1UP|=0x04
#define set_P1UP_1                                 SFRS=1;P1UP|=0x02
#define set_P1UP_0                                 SFRS=1;P1UP|=0x01

#define clr_P1UP_7                                 SFRS=1;P1UP&=0x7F
#define clr_P1UP_6                                 SFRS=1;P1UP&=0xBF
#define clr_P1UP_5                                 SFRS=1;P1UP&=0xDF
#define clr_P1UP_4                                 SFRS=1;P1UP&=0xEF
#define clr_P1UP_3                                 SFRS=1;P1UP&=0xF7
#define clr_P1UP_2                                 SFRS=1;P1UP&=0xFB
#define clr_P1UP_1                                 SFRS=1;P1UP&=0xFD
#define clr_P1UP_0                                 SFRS=1;P1UP&=0xFE

/**** P2UP  94H  PAGE 1 ****/
#define set_P2UP_7                                 SFRS=1;P2UP|=0x80
#define set_P2UP_6                                 SFRS=1;P2UP|=0x40
#define set_P2UP_5                                 SFRS=1;P2UP|=0x20
#define set_P2UP_4                                 SFRS=1;P2UP|=0x10
#define set_P2UP_3                                 SFRS=1;P2UP|=0x08
#define set_P2UP_2                                 SFRS=1;P2UP|=0x04
#define set_P2UP_1                                 SFRS=1;P2UP|=0x02
#define set_P2UP_0                                 SFRS=1;P2UP|=0x01

#define clr_P2UP_7                                 SFRS=1;P2UP&=0x7F
#define clr_P2UP_6                                 SFRS=1;P2UP&=0xBF
#define clr_P2UP_5                                 SFRS=1;P2UP&=0xDF
#define clr_P2UP_4                                 SFRS=1;P2UP&=0xEF
#define clr_P2UP_3                                 SFRS=1;P2UP&=0xF7
#define clr_P2UP_2                                 SFRS=1;P2UP&=0xFB
#define clr_P2UP_1                                 SFRS=1;P2UP&=0xFD
#define clr_P2UP_0                                 SFRS=1;P2UP&=0xFE

/**** P3UP  95H  PAGE 1 ****/
#define set_P3UP_7                                 SFRS=1;P3UP|=0x80
#define set_P3UP_6                                 SFRS=1;P3UP|=0x40
#define set_P3UP_5                                 SFRS=1;P3UP|=0x20
#define set_P3UP_4                                 SFRS=1;P3UP|=0x10
#define set_P3UP_3                                 SFRS=1;P3UP|=0x08
#define set_P3UP_2                                 SFRS=1;P3UP|=0x04
#define set_P3UP_1                                 SFRS=1;P3UP|=0x02
#define set_P3UP_0                                 SFRS=1;P3UP|=0x01

#define clr_P3UP_7                                 SFRS=1;P3UP&=0x7F
#define clr_P3UP_6                                 SFRS=1;P3UP&=0xBF
#define clr_P3UP_5                                 SFRS=1;P3UP&=0xDF
#define clr_P3UP_4                                 SFRS=1;P3UP&=0xEF
#define clr_P3UP_3                                 SFRS=1;P3UP&=0xF7
#define clr_P3UP_2                                 SFRS=1;P3UP&=0xFB
#define clr_P3UP_1                                 SFRS=1;P3UP&=0xFD
#define clr_P3UP_0                                 SFRS=1;P3UP&=0xFE

/**** P4UP  96H  PAGE 1 ****/
#define set_P4UP_7                                 SFRS=1;P4UP|=0x80
#define set_P4UP_6                                 SFRS=1;P4UP|=0x40
#define set_P4UP_5                                 SFRS=1;P4UP|=0x20
#define set_P4UP_4                                 SFRS=1;P4UP|=0x10
#define set_P4UP_3                                 SFRS=1;P4UP|=0x08
#define set_P4UP_2                                 SFRS=1;P4UP|=0x04
#define set_P4UP_1                                 SFRS=1;P4UP|=0x02
#define set_P4UP_0                                 SFRS=1;P4UP|=0x01

#define clr_P4UP_7                                 SFRS=1;P4UP&=0x7F
#define clr_P4UP_6                                 SFRS=1;P4UP&=0xBF
#define clr_P4UP_5                                 SFRS=1;P4UP&=0xDF
#define clr_P4UP_4                                 SFRS=1;P4UP&=0xEF
#define clr_P4UP_3                                 SFRS=1;P4UP&=0xF7
#define clr_P4UP_2                                 SFRS=1;P4UP&=0xFB
#define clr_P4UP_1                                 SFRS=1;P4UP&=0xFD
#define clr_P4UP_0                                 SFRS=1;P4UP&=0xFE

/**** P5UP  97H  PAGE 1 ****/
#define set_P5UP_7                                 SFRS=1;P5UP|=0x80
#define set_P5UP_6                                 SFRS=1;P5UP|=0x40
#define set_P5UP_5                                 SFRS=1;P5UP|=0x20
#define set_P5UP_4                                 SFRS=1;P5UP|=0x10
#define set_P5UP_3                                 SFRS=1;P5UP|=0x08
#define set_P5UP_2                                 SFRS=1;P5UP|=0x04
#define set_P5UP_1                                 SFRS=1;P5UP|=0x02
#define set_P5UP_0                                 SFRS=1;P5UP|=0x01

#define clr_P5UP_7                                 SFRS=1;P5UP&=0x7F
#define clr_P5UP_6                                 SFRS=1;P5UP&=0xBF
#define clr_P5UP_5                                 SFRS=1;P5UP&=0xDF
#define clr_P5UP_4                                 SFRS=1;P5UP&=0xEF
#define clr_P5UP_3                                 SFRS=1;P5UP&=0xF7
#define clr_P5UP_2                                 SFRS=1;P5UP&=0xFB
#define clr_P5UP_1                                 SFRS=1;P5UP&=0xFD
#define clr_P5UP_0                                 SFRS=1;P5UP&=0xFE

/**** P0S  99H  PAGE 1 ****/
#define set_P0S_P0SR_7                             SFRS=1;P0S|=0x80
#define set_P0S_P0SR_6                             SFRS=1;P0S|=0x40
#define set_P0S_P0SR_5                             SFRS=1;P0S|=0x20
#define set_P0S_P0SR_4                             SFRS=1;P0S|=0x10
#define set_P0S_P0SR_3                             SFRS=1;P0S|=0x08
#define set_P0S_P0SR_2                             SFRS=1;P0S|=0x04
#define set_P0S_P0SR_1                             SFRS=1;P0S|=0x02
#define set_P0S_P0SR_0                             SFRS=1;P0S|=0x01

#define clr_P0S_P0SR_7                             SFRS=1;P0S&=0x7F
#define clr_P0S_P0SR_6                             SFRS=1;P0S&=0xBF
#define clr_P0S_P0SR_5                             SFRS=1;P0S&=0xDF
#define clr_P0S_P0SR_4                             SFRS=1;P0S&=0xEF
#define clr_P0S_P0SR_3                             SFRS=1;P0S&=0xF7
#define clr_P0S_P0SR_2                             SFRS=1;P0S&=0xFB
#define clr_P0S_P0SR_1                             SFRS=1;P0S&=0xFD
#define clr_P0S_P0SR_0                             SFRS=1;P0S&=0xFE

/**** P0SR  9AH  PAGE 1 ****/
#define set_P0SR_7                                 SFRS=1;P0SR|=0x80
#define set_P0SR_6                                 SFRS=1;P0SR|=0x40
#define set_P0SR_5                                 SFRS=1;P0SR|=0x20
#define set_P0SR_4                                 SFRS=1;P0SR|=0x10
#define set_P0SR_3                                 SFRS=1;P0SR|=0x08
#define set_P0SR_2                                 SFRS=1;P0SR|=0x04
#define set_P0SR_1                                 SFRS=1;P0SR|=0x02
#define set_P0SR_0                                 SFRS=1;P0SR|=0x01

#define clr_P0SR_7                                 SFRS=1;P0SR&=0x7F
#define clr_P0SR_6                                 SFRS=1;P0SR&=0xBF
#define clr_P0SR_5                                 SFRS=1;P0SR&=0xDF
#define clr_P0SR_4                                 SFRS=1;P0SR&=0xEF
#define clr_P0SR_3                                 SFRS=1;P0SR&=0xF7
#define clr_P0SR_2                                 SFRS=1;P0SR&=0xFB
#define clr_P0SR_1                                 SFRS=1;P0SR&=0xFD
#define clr_P0SR_0                                 SFRS=1;P0SR&=0xFE

/**** P1S  9BH  PAGE 1 ****/
#define set_P1S_P1SR_7                             SFRS=1;P1S|=0x80
#define set_P1S_P1SR_6                             SFRS=1;P1S|=0x40
#define set_P1S_P1SR_5                             SFRS=1;P1S|=0x20
#define set_P1S_P1SR_4                             SFRS=1;P1S|=0x10
#define set_P1S_P1SR_3                             SFRS=1;P1S|=0x08
#define set_P1S_P1SR_2                             SFRS=1;P1S|=0x04
#define set_P1S_P1SR_1                             SFRS=1;P1S|=0x02
#define set_P1S_P1SR_0                             SFRS=1;P1S|=0x01

#define clr_P1S_P1SR_7                             SFRS=1;P1S&=0x7F
#define clr_P1S_P1SR_6                             SFRS=1;P1S&=0xBF
#define clr_P1S_P1SR_5                             SFRS=1;P1S&=0xDF
#define clr_P1S_P1SR_4                             SFRS=1;P1S&=0xEF
#define clr_P1S_P1SR_3                             SFRS=1;P1S&=0xF7
#define clr_P1S_P1SR_2                             SFRS=1;P1S&=0xFB
#define clr_P1S_P1SR_1                             SFRS=1;P1S&=0xFD
#define clr_P1S_P1SR_0                             SFRS=1;P1S&=0xFE

/**** P1SR  9CH  PAGE 1 ****/
#define set_P1SR_P2SR_7                            SFRS=1;P1SR|=0x80
#define set_P1SR_P2SR_6                            SFRS=1;P1SR|=0x40
#define set_P1SR_P2SR_5                            SFRS=1;P1SR|=0x20
#define set_P1SR_P2SR_4                            SFRS=1;P1SR|=0x10
#define set_P1SR_P2SR_3                            SFRS=1;P1SR|=0x08
#define set_P1SR_P2SR_2                            SFRS=1;P1SR|=0x04
#define set_P1SR_P2SR_1                            SFRS=1;P1SR|=0x02
#define set_P1SR_P2SR_0                            SFRS=1;P1SR|=0x01

#define clr_P1SR_P2SR_7                            SFRS=1;P1SR&=0x7F
#define clr_P1SR_P2SR_6                            SFRS=1;P1SR&=0xBF
#define clr_P1SR_P2SR_5                            SFRS=1;P1SR&=0xDF
#define clr_P1SR_P2SR_4                            SFRS=1;P1SR&=0xEF
#define clr_P1SR_P2SR_3                            SFRS=1;P1SR&=0xF7
#define clr_P1SR_P2SR_2                            SFRS=1;P1SR&=0xFB
#define clr_P1SR_P2SR_1                            SFRS=1;P1SR&=0xFD
#define clr_P1SR_P2SR_0                            SFRS=1;P1SR&=0xFE

/**** P2S  9DH  PAGE 1 ****/
#define set_P2S_7                                  SFRS=1;P2S|=0x80
#define set_P2S_6                                  SFRS=1;P2S|=0x40
#define set_P2S_5                                  SFRS=1;P2S|=0x20
#define set_P2S_4                                  SFRS=1;P2S|=0x10
#define set_P2S_3                                  SFRS=1;P2S|=0x08
#define set_P2S_2                                  SFRS=1;P2S|=0x04
#define set_P2S_1                                  SFRS=1;P2S|=0x02
#define set_P2S_0                                  SFRS=1;P2S|=0x01

#define clr_P2S_7                                  SFRS=1;P2S&=0x7F
#define clr_P2S_6                                  SFRS=1;P2S&=0xBF
#define clr_P2S_5                                  SFRS=1;P2S&=0xDF
#define clr_P2S_4                                  SFRS=1;P2S&=0xEF
#define clr_P2S_3                                  SFRS=1;P2S&=0xF7
#define clr_P2S_2                                  SFRS=1;P2S&=0xFB
#define clr_P2S_1                                  SFRS=1;P2S&=0xFD
#define clr_P2S_0                                  SFRS=1;P2S&=0xFE

/**** P2SR  9EH  PAGE 1 ****/
#define set_P2SR_7                                 SFRS=1;P2SR|=0x80
#define set_P2SR_6                                 SFRS=1;P2SR|=0x40
#define set_P2SR_5                                 SFRS=1;P2SR|=0x20
#define set_P2SR_4                                 SFRS=1;P2SR|=0x10
#define set_P2SR_3                                 SFRS=1;P2SR|=0x08
#define set_P2SR_2                                 SFRS=1;P2SR|=0x04
#define set_P2SR_1                                 SFRS=1;P2SR|=0x02
#define set_P2SR_0                                 SFRS=1;P2SR|=0x01

#define clr_P2SR_7                                 SFRS=1;P2SR&=0x7F
#define clr_P2SR_6                                 SFRS=1;P2SR&=0xBF
#define clr_P2SR_5                                 SFRS=1;P2SR&=0xDF
#define clr_P2SR_4                                 SFRS=1;P2SR&=0xEF
#define clr_P2SR_3                                 SFRS=1;P2SR&=0xF7
#define clr_P2SR_2                                 SFRS=1;P2SR&=0xFB
#define clr_P2SR_1                                 SFRS=1;P2SR&=0xFD
#define clr_P2SR_0                                 SFRS=1;P2SR&=0xFE

/**** PIPS0  A1H  PAGE 1 ****/
#define set_PIPS0_PSEL_2                           SFRS=1;PIPS0|=0x40
#define set_PIPS0_PSEL_1                           SFRS=1;PIPS0|=0x20
#define set_PIPS0_PSEL_0                           SFRS=1;PIPS0|=0x10
#define set_PIPS0_BSEL_2                           SFRS=1;PIPS0|=0x04
#define set_PIPS0_BSEL_1                           SFRS=1;PIPS0|=0x02
#define set_PIPS0_BSEL_0                           SFRS=1;PIPS0|=0x01

#define clr_PIPS0_PSEL_2                           SFRS=1;PIPS0&=0xBF
#define clr_PIPS0_PSEL_1                           SFRS=1;PIPS0&=0xDF
#define clr_PIPS0_PSEL_0                           SFRS=1;PIPS0&=0xEF
#define clr_PIPS0_BSEL_2                           SFRS=1;PIPS0&=0xFB
#define clr_PIPS0_BSEL_1                           SFRS=1;PIPS0&=0xFD
#define clr_PIPS0_BSEL_0                           SFRS=1;PIPS0&=0xFE

/**** PIPS1  A2H  PAGE 1 ****/
#define set_PIPS1_kk                               SFRS=1;PIPS1|=0x80
#define set_PIPS1_PSEL_2                           SFRS=1;PIPS1|=0x40
#define set_PIPS1_PSEL_1                           SFRS=1;PIPS1|=0x20
#define set_PIPS1_PSEL_0                           SFRS=1;PIPS1|=0x10
#define set_PIPS1_BSEL_2                           SFRS=1;PIPS1|=0x04
#define set_PIPS1_BSEL_1                           SFRS=1;PIPS1|=0x02
#define set_PIPS1_BSEL_0                           SFRS=1;PIPS1|=0x01

#define clr_PIPS1_kk                               SFRS=1;PIPS1&=0x7F
#define clr_PIPS1_PSEL_2                           SFRS=1;PIPS1&=0xBF
#define clr_PIPS1_PSEL_1                           SFRS=1;PIPS1&=0xDF
#define clr_PIPS1_PSEL_0                           SFRS=1;PIPS1&=0xEF
#define clr_PIPS1_BSEL_2                           SFRS=1;PIPS1&=0xFB
#define clr_PIPS1_BSEL_1                           SFRS=1;PIPS1&=0xFD
#define clr_PIPS1_BSEL_0                           SFRS=1;PIPS1&=0xFE

/**** PIPS2  A3H  PAGE 1 ****/
#define set_PIPS2_PSEL_2                           SFRS=1;PIPS2|=0x40
#define set_PIPS2_PSEL_1                           SFRS=1;PIPS2|=0x20
#define set_PIPS2_PSEL_0                           SFRS=1;PIPS2|=0x10
#define set_PIPS2_BSEL_2                           SFRS=1;PIPS2|=0x04
#define set_PIPS2_BSEL_1                           SFRS=1;PIPS2|=0x02
#define set_PIPS2_BSEL_0                           SFRS=1;PIPS2|=0x01

#define clr_PIPS2_PSEL_2                           SFRS=1;PIPS2&=0xBF
#define clr_PIPS2_PSEL_1                           SFRS=1;PIPS2&=0xDF
#define clr_PIPS2_PSEL_0                           SFRS=1;PIPS2&=0xEF
#define clr_PIPS2_BSEL_2                           SFRS=1;PIPS2&=0xFB
#define clr_PIPS2_BSEL_1                           SFRS=1;PIPS2&=0xFD
#define clr_PIPS2_BSEL_0                           SFRS=1;PIPS2&=0xFE

/**** PIPS3  A4H  PAGE 1 ****/
#define set_PIPS3_PSEL_2                           SFRS=1;PIPS3|=0x40
#define set_PIPS3_PSEL_1                           SFRS=1;PIPS3|=0x20
#define set_PIPS3_PSEL_0                           SFRS=1;PIPS3|=0x10
#define set_PIPS3_BSEL_2                           SFRS=1;PIPS3|=0x04
#define set_PIPS3_BSEL_1                           SFRS=1;PIPS3|=0x02
#define set_PIPS3_BSEL_0                           SFRS=1;PIPS3|=0x01

#define clr_PIPS3_PSEL_2                           SFRS=1;PIPS3&=0xBF
#define clr_PIPS3_PSEL_1                           SFRS=1;PIPS3&=0xDF
#define clr_PIPS3_PSEL_0                           SFRS=1;PIPS3&=0xEF
#define clr_PIPS3_BSEL_2                           SFRS=1;PIPS3&=0xFB
#define clr_PIPS3_BSEL_1                           SFRS=1;PIPS3&=0xFD
#define clr_PIPS3_BSEL_0                           SFRS=1;PIPS3&=0xFE

/**** PIPS4  A5H  PAGE 1 ****/
#define set_PIPS4_PSEL_2                           SFRS=1;PIPS4|=0x40
#define set_PIPS4_PSEL_1                           SFRS=1;PIPS4|=0x20
#define set_PIPS4_PSEL_0                           SFRS=1;PIPS4|=0x10
#define set_PIPS4_BSEL_2                           SFRS=1;PIPS4|=0x04
#define set_PIPS4_BSEL_1                           SFRS=1;PIPS4|=0x02
#define set_PIPS4_BSEL_0                           SFRS=1;PIPS4|=0x01

#define clr_PIPS4_PSEL_2                           SFRS=1;PIPS4&=0xBF
#define clr_PIPS4_PSEL_1                           SFRS=1;PIPS4&=0xDF
#define clr_PIPS4_PSEL_0                           SFRS=1;PIPS4&=0xEF
#define clr_PIPS4_BSEL_2                           SFRS=1;PIPS4&=0xFB
#define clr_PIPS4_BSEL_1                           SFRS=1;PIPS4&=0xFD
#define clr_PIPS4_BSEL_0                           SFRS=1;PIPS4&=0xFE

/**** PIPS5  A6H  PAGE 1 ****/
#define set_PIPS5_PSEL_2                           SFRS=1;PIPS5|=0x40
#define set_PIPS5_PSEL_1                           SFRS=1;PIPS5|=0x20
#define set_PIPS5_PSEL_0                           SFRS=1;PIPS5|=0x10
#define set_PIPS5_BSEL_2                           SFRS=1;PIPS5|=0x04
#define set_PIPS5_BSEL_1                           SFRS=1;PIPS5|=0x02
#define set_PIPS5_BSEL_0                           SFRS=1;PIPS5|=0x01

#define clr_PIPS5_PSEL_2                           SFRS=1;PIPS5&=0xBF
#define clr_PIPS5_PSEL_1                           SFRS=1;PIPS5&=0xDF
#define clr_PIPS5_PSEL_0                           SFRS=1;PIPS5&=0xEF
#define clr_PIPS5_BSEL_2                           SFRS=1;PIPS5&=0xFB
#define clr_PIPS5_BSEL_1                           SFRS=1;PIPS5&=0xFD
#define clr_PIPS5_BSEL_0                           SFRS=1;PIPS5&=0xFE

/**** ACMPCR2  ABH  PAGE 1 ****/
#define set_ACMPCR2_SPEED1_1                       SFRS=1;ACMPCR2|=0x80
#define set_ACMPCR2_SPEED1_0                       SFRS=1;ACMPCR2|=0x40
#define set_ACMPCR2_POE1                           SFRS=1;ACMPCR2|=0x20
#define set_ACMPCR2_POE0                           SFRS=1;ACMPCR2|=0x10
#define set_ACMPCR2_SPEED0_1                       SFRS=1;ACMPCR2|=0x08
#define set_ACMPCR2_SPEED0_0                       SFRS=1;ACMPCR2|=0x04
#define set_ACMPCR2_CRVSSEL                        SFRS=1;ACMPCR2|=0x02
#define set_ACMPCR2_CRVEN                          SFRS=1;ACMPCR2|=0x01

#define clr_ACMPCR2_SPEED1_1                       SFRS=1;ACMPCR2&=0x7F
#define clr_ACMPCR2_SPEED1_0                       SFRS=1;ACMPCR2&=0xBF
#define clr_ACMPCR2_POE1                           SFRS=1;ACMPCR2&=0xDF
#define clr_ACMPCR2_POE0                           SFRS=1;ACMPCR2&=0xEF
#define clr_ACMPCR2_SPEED0_1                       SFRS=1;ACMPCR2&=0xF7
#define clr_ACMPCR2_SPEED0_0                       SFRS=1;ACMPCR2&=0xFB
#define clr_ACMPCR2_CRVSSEL                        SFRS=1;ACMPCR2&=0xFD
#define clr_ACMPCR2_CRVEN                          SFRS=1;ACMPCR2&=0xFE

/**** P3S  ACH  PAGE 1 ****/
#define set_P3S_7                                  SFRS=1;P3S|=0x80
#define set_P3S_6                                  SFRS=1;P3S|=0x40
#define set_P3S_5                                  SFRS=1;P3S|=0x20
#define set_P3S_4                                  SFRS=1;P3S|=0x10
#define set_P3S_3                                  SFRS=1;P3S|=0x08
#define set_P3S_2                                  SFRS=1;P3S|=0x04
#define set_P3S_1                                  SFRS=1;P3S|=0x02
#define set_P3S_0                                  SFRS=1;P3S|=0x01

#define clr_P3S_7                                  SFRS=1;P3S&=0x7F
#define clr_P3S_6                                  SFRS=1;P3S&=0xBF
#define clr_P3S_5                                  SFRS=1;P3S&=0xDF
#define clr_P3S_4                                  SFRS=1;P3S&=0xEF
#define clr_P3S_3                                  SFRS=1;P3S&=0xF7
#define clr_P3S_2                                  SFRS=1;P3S&=0xFB
#define clr_P3S_1                                  SFRS=1;P3S&=0xFD
#define clr_P3S_0                                  SFRS=1;P3S&=0xFE

/**** P3SR  ADH  PAGE 1 ****/
#define set_P3SR_7                                 SFRS=1;P3SR|=0x80
#define set_P3SR_6                                 SFRS=1;P3SR|=0x40
#define set_P3SR_5                                 SFRS=1;P3SR|=0x20
#define set_P3SR_4                                 SFRS=1;P3SR|=0x10
#define set_P3SR_3                                 SFRS=1;P3SR|=0x08
#define set_P3SR_2                                 SFRS=1;P3SR|=0x04
#define set_P3SR_1                                 SFRS=1;P3SR|=0x02
#define set_P3SR_0                                 SFRS=1;P3SR|=0x01

#define clr_P3SR_7                                 SFRS=1;P3SR&=0x7F
#define clr_P3SR_6                                 SFRS=1;P3SR&=0xBF
#define clr_P3SR_5                                 SFRS=1;P3SR&=0xDF
#define clr_P3SR_4                                 SFRS=1;P3SR&=0xEF
#define clr_P3SR_3                                 SFRS=1;P3SR&=0xF7
#define clr_P3SR_2                                 SFRS=1;P3SR&=0xFB
#define clr_P3SR_1                                 SFRS=1;P3SR&=0xFD
#define clr_P3SR_0                                 SFRS=1;P3SR&=0xFE

/**** P5SR  AEH  PAGE 1 ****/
#define set_P5SR_7                                 SFRS=1;P5SR|=0x80
#define set_P5SR_6                                 SFRS=1;P5SR|=0x40
#define set_P5SR_5                                 SFRS=1;P5SR|=0x20
#define set_P5SR_4                                 SFRS=1;P5SR|=0x10
#define set_P5SR_3                                 SFRS=1;P5SR|=0x08
#define set_P5SR_2                                 SFRS=1;P5SR|=0x04
#define set_P5SR_1                                 SFRS=1;P5SR|=0x02
#define set_P5SR_0                                 SFRS=1;P5SR|=0x01

#define clr_P5SR_7                                 SFRS=1;P5SR&=0x7F
#define clr_P5SR_6                                 SFRS=1;P5SR&=0xBF
#define clr_P5SR_5                                 SFRS=1;P5SR&=0xDF
#define clr_P5SR_4                                 SFRS=1;P5SR&=0xEF
#define clr_P5SR_3                                 SFRS=1;P5SR&=0xF7
#define clr_P5SR_2                                 SFRS=1;P5SR&=0xFB
#define clr_P5SR_1                                 SFRS=1;P5SR&=0xFD
#define clr_P5SR_0                                 SFRS=1;P5SR&=0xFE

/**** PIPS7  AFH  PAGE 1 ****/
#define set_PIPS7_PSEL_2                           SFRS=1;PIPS7|=0x40
#define set_PIPS7_PSEL_1                           SFRS=1;PIPS7|=0x20
#define set_PIPS7_PSEL_0                           SFRS=1;PIPS7|=0x10
#define set_PIPS7_BSEL_2                           SFRS=1;PIPS7|=0x04
#define set_PIPS7_BSEL_1                           SFRS=1;PIPS7|=0x02
#define set_PIPS7_BSEL_0                           SFRS=1;PIPS7|=0x01

#define clr_PIPS7_PSEL_2                           SFRS=1;PIPS7&=0xBF
#define clr_PIPS7_PSEL_1                           SFRS=1;PIPS7&=0xDF
#define clr_PIPS7_PSEL_0                           SFRS=1;PIPS7&=0xEF
#define clr_PIPS7_BSEL_2                           SFRS=1;PIPS7&=0xFB
#define clr_PIPS7_BSEL_1                           SFRS=1;PIPS7&=0xFD
#define clr_PIPS7_BSEL_0                           SFRS=1;PIPS7&=0xFE

/**** P0M1  B1H  PAGE 1 ****/
#define set_P0M1_P0M1_7                            SFRS=1;P0M1|=0x80
#define set_P0M1_P0M1_6                            SFRS=1;P0M1|=0x40
#define set_P0M1_P0M1_5                            SFRS=1;P0M1|=0x20
#define set_P0M1_P0M1_4                            SFRS=1;P0M1|=0x10
#define set_P0M1_P0M1_3                            SFRS=1;P0M1|=0x08
#define set_P0M1_P0M1_2                            SFRS=1;P0M1|=0x04
#define set_P0M1_P0M1_1                            SFRS=1;P0M1|=0x02
#define set_P0M1_P0M1_0                            SFRS=1;P0M1|=0x01

#define clr_P0M1_P0M1_7                            SFRS=1;P0M1&=0x7F
#define clr_P0M1_P0M1_6                            SFRS=1;P0M1&=0xBF
#define clr_P0M1_P0M1_5                            SFRS=1;P0M1&=0xDF
#define clr_P0M1_P0M1_4                            SFRS=1;P0M1&=0xEF
#define clr_P0M1_P0M1_3                            SFRS=1;P0M1&=0xF7
#define clr_P0M1_P0M1_2                            SFRS=1;P0M1&=0xFB
#define clr_P0M1_P0M1_1                            SFRS=1;P0M1&=0xFD
#define clr_P0M1_P0M1_0                            SFRS=1;P0M1&=0xFE

/**** P0M2  B2H  PAGE 1 ****/
#define set_P0M2_PnM2_7                            SFRS=1;P0M2|=0x80
#define set_P0M2_PnM2_6                            SFRS=1;P0M2|=0x40
#define set_P0M2_PnM2_5                            SFRS=1;P0M2|=0x20
#define set_P0M2_PnM2_4                            SFRS=1;P0M2|=0x10
#define set_P0M2_PnM2_3                            SFRS=1;P0M2|=0x08
#define set_P0M2_PnM2_2                            SFRS=1;P0M2|=0x04
#define set_P0M2_PnM2_1                            SFRS=1;P0M2|=0x02
#define set_P0M2_PnM2_0                            SFRS=1;P0M2|=0x01

#define clr_P0M2_PnM2_7                            SFRS=1;P0M2&=0x7F
#define clr_P0M2_PnM2_6                            SFRS=1;P0M2&=0xBF
#define clr_P0M2_PnM2_5                            SFRS=1;P0M2&=0xDF
#define clr_P0M2_PnM2_4                            SFRS=1;P0M2&=0xEF
#define clr_P0M2_PnM2_3                            SFRS=1;P0M2&=0xF7
#define clr_P0M2_PnM2_2                            SFRS=1;P0M2&=0xFB
#define clr_P0M2_PnM2_1                            SFRS=1;P0M2&=0xFD
#define clr_P0M2_PnM2_0                            SFRS=1;P0M2&=0xFE

/**** P1M1  B3H  PAGE 1 ****/
#define set_P1M1_P1M1_7                            SFRS=1;P1M1|=0x80
#define set_P1M1_P1M1_6                            SFRS=1;P1M1|=0x40
#define set_P1M1_P1M1_5                            SFRS=1;P1M1|=0x20
#define set_P1M1_P1M1_4                            SFRS=1;P1M1|=0x10
#define set_P1M1_P1M1_3                            SFRS=1;P1M1|=0x08
#define set_P1M1_P1M1_2                            SFRS=1;P1M1|=0x04
#define set_P1M1_P1M1_1                            SFRS=1;P1M1|=0x02
#define set_P1M1_P1M1_0                            SFRS=1;P1M1|=0x01

#define clr_P1M1_P1M1_7                            SFRS=1;P1M1&=0x7F
#define clr_P1M1_P1M1_6                            SFRS=1;P1M1&=0xBF
#define clr_P1M1_P1M1_5                            SFRS=1;P1M1&=0xDF
#define clr_P1M1_P1M1_4                            SFRS=1;P1M1&=0xEF
#define clr_P1M1_P1M1_3                            SFRS=1;P1M1&=0xF7
#define clr_P1M1_P1M1_2                            SFRS=1;P1M1&=0xFB
#define clr_P1M1_P1M1_1                            SFRS=1;P1M1&=0xFD
#define clr_P1M1_P1M1_0                            SFRS=1;P1M1&=0xFE

/**** P1M2  B4H  PAGE 1 ****/
#define set_P1M2_7                                 SFRS=1;P1M2|=0x80
#define set_P1M2_6                                 SFRS=1;P1M2|=0x40
#define set_P1M2_5                                 SFRS=1;P1M2|=0x20
#define set_P1M2_4                                 SFRS=1;P1M2|=0x10
#define set_P1M2_3                                 SFRS=1;P1M2|=0x08
#define set_P1M2_2                                 SFRS=1;P1M2|=0x04
#define set_P1M2_1                                 SFRS=1;P1M2|=0x02
#define set_P1M2_0                                 SFRS=1;P1M2|=0x01

#define clr_P1M2_7                                 SFRS=1;P1M2&=0x7F
#define clr_P1M2_6                                 SFRS=1;P1M2&=0xBF
#define clr_P1M2_5                                 SFRS=1;P1M2&=0xDF
#define clr_P1M2_4                                 SFRS=1;P1M2&=0xEF
#define clr_P1M2_3                                 SFRS=1;P1M2&=0xF7
#define clr_P1M2_2                                 SFRS=1;P1M2&=0xFB
#define clr_P1M2_1                                 SFRS=1;P1M2&=0xFD
#define clr_P1M2_0                                 SFRS=1;P1M2&=0xFE

/**** P2M1  B5H  PAGE 1 ****/
#define set_P2M1_P2M1_7                            SFRS=1;P2M1|=0x80
#define set_P2M1_P2M1_6                            SFRS=1;P2M1|=0x40
#define set_P2M1_P2M1_5                            SFRS=1;P2M1|=0x20
#define set_P2M1_P2M1_4                            SFRS=1;P2M1|=0x10
#define set_P2M1_P2M1_3                            SFRS=1;P2M1|=0x08
#define set_P2M1_P2M1_2                            SFRS=1;P2M1|=0x04
#define set_P2M1_P2M1_1                            SFRS=1;P2M1|=0x02
#define set_P2M1_P2M1_0                            SFRS=1;P2M1|=0x01

#define clr_P2M1_P2M1_7                            SFRS=1;P2M1&=0x7F
#define clr_P2M1_P2M1_6                            SFRS=1;P2M1&=0xBF
#define clr_P2M1_P2M1_5                            SFRS=1;P2M1&=0xDF
#define clr_P2M1_P2M1_4                            SFRS=1;P2M1&=0xEF
#define clr_P2M1_P2M1_3                            SFRS=1;P2M1&=0xF7
#define clr_P2M1_P2M1_2                            SFRS=1;P2M1&=0xFB
#define clr_P2M1_P2M1_1                            SFRS=1;P2M1&=0xFD
#define clr_P2M1_P2M1_0                            SFRS=1;P2M1&=0xFE

/**** P2M2  B6H  PAGE 1 ****/
#define set_P2M2_7                                 SFRS=1;P2M2|=0x80
#define set_P2M2_6                                 SFRS=1;P2M2|=0x40
#define set_P2M2_5                                 SFRS=1;P2M2|=0x20
#define set_P2M2_4                                 SFRS=1;P2M2|=0x10
#define set_P2M2_3                                 SFRS=1;P2M2|=0x08
#define set_P2M2_2                                 SFRS=1;P2M2|=0x04
#define set_P2M2_1                                 SFRS=1;P2M2|=0x02
#define set_P2M2_0                                 SFRS=1;P2M2|=0x01

#define clr_P2M2_7                                 SFRS=1;P2M2&=0x7F
#define clr_P2M2_6                                 SFRS=1;P2M2&=0xBF
#define clr_P2M2_5                                 SFRS=1;P2M2&=0xDF
#define clr_P2M2_4                                 SFRS=1;P2M2&=0xEF
#define clr_P2M2_3                                 SFRS=1;P2M2&=0xF7
#define clr_P2M2_2                                 SFRS=1;P2M2&=0xFB
#define clr_P2M2_1                                 SFRS=1;P2M2&=0xFD
#define clr_P2M2_0                                 SFRS=1;P2M2&=0xFE

/**** PWM0INTC  B7H  PAGE 1 ****/
#define set_PWM0INTC_INTTYP1                       SFRS=1;PWM0INTC|=0x20
#define set_PWM0INTC_INTTYP0                       SFRS=1;PWM0INTC|=0x10
#define set_PWM0INTC_INTSEL2                       SFRS=1;PWM0INTC|=0x04
#define set_PWM0INTC_INTSEL1                       SFRS=1;PWM0INTC|=0x02
#define set_PWM0INTC_INTSEL0                       SFRS=1;PWM0INTC|=0x01

#define clr_PWM0INTC_INTTYP1                       SFRS=1;PWM0INTC&=0xDF
#define clr_PWM0INTC_INTTYP0                       SFRS=1;PWM0INTC&=0xEF
#define clr_PWM0INTC_INTSEL2                       SFRS=1;PWM0INTC&=0xFB
#define clr_PWM0INTC_INTSEL1                       SFRS=1;PWM0INTC&=0xFD
#define clr_PWM0INTC_INTSEL0                       SFRS=1;PWM0INTC&=0xFE

/**** P4M1  B9H  PAGE 1 ****/
#define set_P4M1_7                                 SFRS=1;P4M1|=0x80
#define set_P4M1_P4M1_6                            SFRS=1;P4M1|=0x40
#define set_P4M1_P4M1_5                            SFRS=1;P4M1|=0x20
#define set_P4M1_P4M1_4                            SFRS=1;P4M1|=0x10
#define set_P4M1_P4M1_3                            SFRS=1;P4M1|=0x08
#define set_P4M1_P4M1_2                            SFRS=1;P4M1|=0x04
#define set_P4M1_P4M1_1                            SFRS=1;P4M1|=0x02
#define set_P4M1_P4M1_0                            SFRS=1;P4M1|=0x01

#define clr_P4M1_7                                 SFRS=1;P4M1&=0x7F
#define clr_P4M1_P4M1_6                            SFRS=1;P4M1&=0xBF
#define clr_P4M1_P4M1_5                            SFRS=1;P4M1&=0xDF
#define clr_P4M1_P4M1_4                            SFRS=1;P4M1&=0xEF
#define clr_P4M1_P4M1_3                            SFRS=1;P4M1&=0xF7
#define clr_P4M1_P4M1_2                            SFRS=1;P4M1&=0xFB
#define clr_P4M1_P4M1_1                            SFRS=1;P4M1&=0xFD
#define clr_P4M1_P4M1_0                            SFRS=1;P4M1&=0xFE

/**** P4M2  BAH  PAGE 1 ****/
#define set_P4M2_7                                 SFRS=1;P4M2|=0x80
#define set_P4M2_6                                 SFRS=1;P4M2|=0x40
#define set_P4M2_5                                 SFRS=1;P4M2|=0x20
#define set_P4M2_4                                 SFRS=1;P4M2|=0x10
#define set_P4M2_3                                 SFRS=1;P4M2|=0x08
#define set_P4M2_2                                 SFRS=1;P4M2|=0x04
#define set_P4M2_1                                 SFRS=1;P4M2|=0x02
#define set_P4M2_0                                 SFRS=1;P4M2|=0x01

#define clr_P4M2_7                                 SFRS=1;P4M2&=0x7F
#define clr_P4M2_6                                 SFRS=1;P4M2&=0xBF
#define clr_P4M2_5                                 SFRS=1;P4M2&=0xDF
#define clr_P4M2_4                                 SFRS=1;P4M2&=0xEF
#define clr_P4M2_3                                 SFRS=1;P4M2&=0xF7
#define clr_P4M2_2                                 SFRS=1;P4M2&=0xFB
#define clr_P4M2_1                                 SFRS=1;P4M2&=0xFD
#define clr_P4M2_0                                 SFRS=1;P4M2&=0xFE

/**** P4S  BBH  PAGE 1 ****/
#define set_P4S_7                                  SFRS=1;P4S|=0x80
#define set_P4S_6                                  SFRS=1;P4S|=0x40
#define set_P4S_5                                  SFRS=1;P4S|=0x20
#define set_P4S_4                                  SFRS=1;P4S|=0x10
#define set_P4S_3                                  SFRS=1;P4S|=0x08
#define set_P4S_2                                  SFRS=1;P4S|=0x04
#define set_P4S_1                                  SFRS=1;P4S|=0x02
#define set_P4S_0                                  SFRS=1;P4S|=0x01

#define clr_P4S_7                                  SFRS=1;P4S&=0x7F
#define clr_P4S_6                                  SFRS=1;P4S&=0xBF
#define clr_P4S_5                                  SFRS=1;P4S&=0xDF
#define clr_P4S_4                                  SFRS=1;P4S&=0xEF
#define clr_P4S_3                                  SFRS=1;P4S&=0xF7
#define clr_P4S_2                                  SFRS=1;P4S&=0xFB
#define clr_P4S_1                                  SFRS=1;P4S&=0xFD
#define clr_P4S_0                                  SFRS=1;P4S&=0xFE

/**** P4SR  BCH  PAGE 1 ****/
#define set_P4SR_7                                 SFRS=1;P4SR|=0x80
#define set_P4SR_6                                 SFRS=1;P4SR|=0x40
#define set_P4SR_5                                 SFRS=1;P4SR|=0x20
#define set_P4SR_4                                 SFRS=1;P4SR|=0x10
#define set_P4SR_3                                 SFRS=1;P4SR|=0x08
#define set_P4SR_2                                 SFRS=1;P4SR|=0x04
#define set_P4SR_1                                 SFRS=1;P4SR|=0x02
#define set_P4SR_0                                 SFRS=1;P4SR|=0x01

#define clr_P4SR_7                                 SFRS=1;P4SR&=0x7F
#define clr_P4SR_6                                 SFRS=1;P4SR&=0xBF
#define clr_P4SR_5                                 SFRS=1;P4SR&=0xDF
#define clr_P4SR_4                                 SFRS=1;P4SR&=0xEF
#define clr_P4SR_3                                 SFRS=1;P4SR&=0xF7
#define clr_P4SR_2                                 SFRS=1;P4SR&=0xFB
#define clr_P4SR_1                                 SFRS=1;P4SR&=0xFD
#define clr_P4SR_0                                 SFRS=1;P4SR&=0xFE

/**** P5M1  BDH  PAGE 1 ****/
#define set_P5M1_7                                 SFRS=1;P5M1|=0x80
#define set_P5M1_P5M1_6                            SFRS=1;P5M1|=0x40
#define set_P5M1_P5M1_5                            SFRS=1;P5M1|=0x20
#define set_P5M1_P5M1_4                            SFRS=1;P5M1|=0x10
#define set_P5M1_P5M1_3                            SFRS=1;P5M1|=0x08
#define set_P5M1_P5M1_2                            SFRS=1;P5M1|=0x04
#define set_P5M1_P5M1_1                            SFRS=1;P5M1|=0x02
#define set_P5M1_P5M1_0                            SFRS=1;P5M1|=0x01

#define clr_P5M1_7                                 SFRS=1;P5M1&=0x7F
#define clr_P5M1_P5M1_6                            SFRS=1;P5M1&=0xBF
#define clr_P5M1_P5M1_5                            SFRS=1;P5M1&=0xDF
#define clr_P5M1_P5M1_4                            SFRS=1;P5M1&=0xEF
#define clr_P5M1_P5M1_3                            SFRS=1;P5M1&=0xF7
#define clr_P5M1_P5M1_2                            SFRS=1;P5M1&=0xFB
#define clr_P5M1_P5M1_1                            SFRS=1;P5M1&=0xFD
#define clr_P5M1_P5M1_0                            SFRS=1;P5M1&=0xFE

/**** P5M2  BEH  PAGE 1 ****/
#define set_P5M2_7                                 SFRS=1;P5M2|=0x80
#define set_P5M2_6                                 SFRS=1;P5M2|=0x40
#define set_P5M2_5                                 SFRS=1;P5M2|=0x20
#define set_P5M2_4                                 SFRS=1;P5M2|=0x10
#define set_P5M2_3                                 SFRS=1;P5M2|=0x08
#define set_P5M2_2                                 SFRS=1;P5M2|=0x04
#define set_P5M2_1                                 SFRS=1;P5M2|=0x02
#define set_P5M2_0                                 SFRS=1;P5M2|=0x01

#define clr_P5M2_7                                 SFRS=1;P5M2&=0x7F
#define clr_P5M2_6                                 SFRS=1;P5M2&=0xBF
#define clr_P5M2_5                                 SFRS=1;P5M2&=0xDF
#define clr_P5M2_4                                 SFRS=1;P5M2&=0xEF
#define clr_P5M2_3                                 SFRS=1;P5M2&=0xF7
#define clr_P5M2_2                                 SFRS=1;P5M2&=0xFB
#define clr_P5M2_1                                 SFRS=1;P5M2&=0xFD
#define clr_P5M2_0                                 SFRS=1;P5M2&=0xFE

/**** P5S  BFH  PAGE 1 ****/
#define set_P5S_7                                  SFRS=1;P5S|=0x80
#define set_P5S_6                                  SFRS=1;P5S|=0x40
#define set_P5S_5                                  SFRS=1;P5S|=0x20
#define set_P5S_4                                  SFRS=1;P5S|=0x10
#define set_P5S_3                                  SFRS=1;P5S|=0x08
#define set_P5S_2                                  SFRS=1;P5S|=0x04
#define set_P5S_1                                  SFRS=1;P5S|=0x02
#define set_P5S_0                                  SFRS=1;P5S|=0x01

#define clr_P5S_7                                  SFRS=1;P5S&=0x7F
#define clr_P5S_6                                  SFRS=1;P5S&=0xBF
#define clr_P5S_5                                  SFRS=1;P5S&=0xDF
#define clr_P5S_4                                  SFRS=1;P5S&=0xEF
#define clr_P5S_3                                  SFRS=1;P5S&=0xF7
#define clr_P5S_2                                  SFRS=1;P5S&=0xFB
#define clr_P5S_1                                  SFRS=1;P5S&=0xFD
#define clr_P5S_0                                  SFRS=1;P5S&=0xFE

/**** P3M1  C2H  PAGE 1 ****/
#define set_P3M1_7                                 SFRS=1;P3M1|=0x80
#define set_P3M1_P3M1_6                            SFRS=1;P3M1|=0x40
#define set_P3M1_P3M1_5                            SFRS=1;P3M1|=0x20
#define set_P3M1_P3M1_4                            SFRS=1;P3M1|=0x10
#define set_P3M1_P3M1_3                            SFRS=1;P3M1|=0x08
#define set_P3M1_P3M1_2                            SFRS=1;P3M1|=0x04
#define set_P3M1_P3M1_1                            SFRS=1;P3M1|=0x02
#define set_P3M1_P3M1_0                            SFRS=1;P3M1|=0x01

#define clr_P3M1_7                                 SFRS=1;P3M1&=0x7F
#define clr_P3M1_P3M1_6                            SFRS=1;P3M1&=0xBF
#define clr_P3M1_P3M1_5                            SFRS=1;P3M1&=0xDF
#define clr_P3M1_P3M1_4                            SFRS=1;P3M1&=0xEF
#define clr_P3M1_P3M1_3                            SFRS=1;P3M1&=0xF7
#define clr_P3M1_P3M1_2                            SFRS=1;P3M1&=0xFB
#define clr_P3M1_P3M1_1                            SFRS=1;P3M1&=0xFD
#define clr_P3M1_P3M1_0                            SFRS=1;P3M1&=0xFE

/**** P3M2  C3H  PAGE 1 ****/
#define set_P3M2_7                                 SFRS=1;P3M2|=0x80
#define set_P3M2_6                                 SFRS=1;P3M2|=0x40
#define set_P3M2_5                                 SFRS=1;P3M2|=0x20
#define set_P3M2_4                                 SFRS=1;P3M2|=0x10
#define set_P3M2_3                                 SFRS=1;P3M2|=0x08
#define set_P3M2_2                                 SFRS=1;P3M2|=0x04
#define set_P3M2_1                                 SFRS=1;P3M2|=0x02
#define set_P3M2_0                                 SFRS=1;P3M2|=0x01

#define clr_P3M2_7                                 SFRS=1;P3M2&=0x7F
#define clr_P3M2_6                                 SFRS=1;P3M2&=0xBF
#define clr_P3M2_5                                 SFRS=1;P3M2&=0xDF
#define clr_P3M2_4                                 SFRS=1;P3M2&=0xEF
#define clr_P3M2_3                                 SFRS=1;P3M2&=0xF7
#define clr_P3M2_2                                 SFRS=1;P3M2&=0xFB
#define clr_P3M2_1                                 SFRS=1;P3M2&=0xFD
#define clr_P3M2_0                                 SFRS=1;P3M2&=0xFE

/**** AUXR1  C9H  PAGE 1 ****/
#define set_AUXR1_UART3PX                          SFRS=1;AUXR1|=0x08
#define set_AUXR1_UART2PX                          SFRS=1;AUXR1|=0x04
#define set_AUXR1_UART1PX                          SFRS=1;AUXR1|=0x02
#define set_AUXR1_UART0PX                          SFRS=1;AUXR1|=0x01

#define clr_AUXR1_UART3PX                          SFRS=1;AUXR1&=0xF7
#define clr_AUXR1_UART2PX                          SFRS=1;AUXR1&=0xFB
#define clr_AUXR1_UART1PX                          SFRS=1;AUXR1&=0xFD
#define clr_AUXR1_UART0PX                          SFRS=1;AUXR1&=0xFE

/**** PWM0NP  D6H  PAGE 1 ****/
#define set_PWM0NP_PNP5                            SFRS=1;PWM0NP|=0x20
#define set_PWM0NP_PNP4                            SFRS=1;PWM0NP|=0x10
#define set_PWM0NP_PNP3                            SFRS=1;PWM0NP|=0x08
#define set_PWM0NP_PNP2                            SFRS=1;PWM0NP|=0x04
#define set_PWM0NP_PNP1                            SFRS=1;PWM0NP|=0x02
#define set_PWM0NP_PNP0                            SFRS=1;PWM0NP|=0x01

#define clr_PWM0NP_PNP5                            SFRS=1;PWM0NP&=0xDF
#define clr_PWM0NP_PNP4                            SFRS=1;PWM0NP&=0xEF
#define clr_PWM0NP_PNP3                            SFRS=1;PWM0NP&=0xF7
#define clr_PWM0NP_PNP2                            SFRS=1;PWM0NP&=0xFB
#define clr_PWM0NP_PNP1                            SFRS=1;PWM0NP&=0xFD
#define clr_PWM0NP_PNP0                            SFRS=1;PWM0NP&=0xFE

/**** PWM0FBD  D7H  PAGE 1 ****/
#define set_PWM0FBD_FBF                            SFRS=1;PWM0FBD|=0x80
#define set_PWM0FBD_FBINLS                         SFRS=1;PWM0FBD|=0x40
#define set_PWM0FBD_FBD5                           SFRS=1;PWM0FBD|=0x20
#define set_PWM0FBD_FBD4                           SFRS=1;PWM0FBD|=0x10
#define set_PWM0FBD_FBD3                           SFRS=1;PWM0FBD|=0x08
#define set_PWM0FBD_FBD2                           SFRS=1;PWM0FBD|=0x04
#define set_PWM0FBD_FBD1                           SFRS=1;PWM0FBD|=0x02
#define set_PWM0FBD_FBD0                           SFRS=1;PWM0FBD|=0x01

#define clr_PWM0FBD_FBF                            SFRS=1;PWM0FBD&=0x7F
#define clr_PWM0FBD_FBINLS                         SFRS=1;PWM0FBD&=0xBF
#define clr_PWM0FBD_FBD5                           SFRS=1;PWM0FBD&=0xDF
#define clr_PWM0FBD_FBD4                           SFRS=1;PWM0FBD&=0xEF
#define clr_PWM0FBD_FBD3                           SFRS=1;PWM0FBD&=0xF7
#define clr_PWM0FBD_FBD2                           SFRS=1;PWM0FBD&=0xFB
#define clr_PWM0FBD_FBD1                           SFRS=1;PWM0FBD&=0xFD
#define clr_PWM0FBD_FBD0                           SFRS=1;PWM0FBD&=0xFE

/**** PWM0CON1  DFH  PAGE 1 ****/
#define set_PWM0CON1_PWMMOD_1                      SFRS=1;PWM0CON1|=0x80
#define set_PWM0CON1_PWMMOD_0                      SFRS=1;PWM0CON1|=0x40
#define set_PWM0CON1_GP                            SFRS=1;PWM0CON1|=0x20
#define set_PWM0CON1_PWMTYP                        SFRS=1;PWM0CON1|=0x10
#define set_PWM0CON1_FBINEN                        SFRS=1;PWM0CON1|=0x08
#define set_PWM0CON1_PWMDIV_2                      SFRS=1;PWM0CON1|=0x04
#define set_PWM0CON1_PWMDIV_1                      SFRS=1;PWM0CON1|=0x02
#define set_PWM0CON1_PWMDIV_0                      SFRS=1;PWM0CON1|=0x01

#define clr_PWM0CON1_PWMMOD_1                      SFRS=1;PWM0CON1&=0x7F
#define clr_PWM0CON1_PWMMOD_0                      SFRS=1;PWM0CON1&=0xBF
#define clr_PWM0CON1_GP                            SFRS=1;PWM0CON1&=0xDF
#define clr_PWM0CON1_PWMTYP                        SFRS=1;PWM0CON1&=0xEF
#define clr_PWM0CON1_FBINEN                        SFRS=1;PWM0CON1&=0xF7
#define clr_PWM0CON1_PWMDIV_2                      SFRS=1;PWM0CON1&=0xFB
#define clr_PWM0CON1_PWMDIV_1                      SFRS=1;PWM0CON1&=0xFD
#define clr_PWM0CON1_PWMDIV_0                      SFRS=1;PWM0CON1&=0xFE

/**** CAPCON0  E1H  PAGE 1 ****/
#define set_CAPCON0_CAPEN2                         SFRS=1;CAPCON0|=0x40
#define set_CAPCON0_CAPEN1                         SFRS=1;CAPCON0|=0x20
#define set_CAPCON0_CAPEN0                         SFRS=1;CAPCON0|=0x10
#define set_CAPCON0_CAPF2                          SFRS=1;CAPCON0|=0x04
#define set_CAPCON0_CAPF1                          SFRS=1;CAPCON0|=0x02
#define set_CAPCON0_CAPF0                          SFRS=1;CAPCON0|=0x01

#define clr_CAPCON0_CAPEN2                         SFRS=1;CAPCON0&=0xBF
#define clr_CAPCON0_CAPEN1                         SFRS=1;CAPCON0&=0xDF
#define clr_CAPCON0_CAPEN0                         SFRS=1;CAPCON0&=0xEF
#define clr_CAPCON0_CAPF2                          SFRS=1;CAPCON0&=0xFB
#define clr_CAPCON0_CAPF1                          SFRS=1;CAPCON0&=0xFD
#define clr_CAPCON0_CAPF0                          SFRS=1;CAPCON0&=0xFE

/**** CAPCON1  E2H  PAGE 1 ****/
#define set_CAPCON1_CAP2LS_1                       SFRS=1;CAPCON1|=0x20
#define set_CAPCON1_CAP2LS_0                       SFRS=1;CAPCON1|=0x10
#define set_CAPCON1_CAP1LS_1                       SFRS=1;CAPCON1|=0x08
#define set_CAPCON1_CAP1LS_0                       SFRS=1;CAPCON1|=0x04
#define set_CAPCON1_CAP0LS_1                       SFRS=1;CAPCON1|=0x02
#define set_CAPCON1_CAP0LS_0                       SFRS=1;CAPCON1|=0x01

#define clr_CAPCON1_CAP2LS_1                       SFRS=1;CAPCON1&=0xDF
#define clr_CAPCON1_CAP2LS_0                       SFRS=1;CAPCON1&=0xEF
#define clr_CAPCON1_CAP1LS_1                       SFRS=1;CAPCON1&=0xF7
#define clr_CAPCON1_CAP1LS_0                       SFRS=1;CAPCON1&=0xFB
#define clr_CAPCON1_CAP0LS_1                       SFRS=1;CAPCON1&=0xFD
#define clr_CAPCON1_CAP0LS_0                       SFRS=1;CAPCON1&=0xFE

/**** CAPCON2  E3H  PAGE 1 ****/
#define set_CAPCON2_ENF2                           SFRS=1;CAPCON2|=0x40
#define set_CAPCON2_ENF1                           SFRS=1;CAPCON2|=0x20
#define set_CAPCON2_ENF0                           SFRS=1;CAPCON2|=0x10

#define clr_CAPCON2_ENF2                           SFRS=1;CAPCON2&=0xBF
#define clr_CAPCON2_ENF1                           SFRS=1;CAPCON2&=0xDF
#define clr_CAPCON2_ENF0                           SFRS=1;CAPCON2&=0xEF

/**** PICON  E9H  PAGE 1 ****/
#define set_PICON_PIT7                             SFRS=1;PICON|=0x80
#define set_PICON_PIT6                             SFRS=1;PICON|=0x40
#define set_PICON_PIT5                             SFRS=1;PICON|=0x20
#define set_PICON_PIT4                             SFRS=1;PICON|=0x10
#define set_PICON_PIT3                             SFRS=1;PICON|=0x08
#define set_PICON_PIT2                             SFRS=1;PICON|=0x04
#define set_PICON_PIT1                             SFRS=1;PICON|=0x02
#define set_PICON_PIT0                             SFRS=1;PICON|=0x01

#define clr_PICON_PIT7                             SFRS=1;PICON&=0x7F
#define clr_PICON_PIT6                             SFRS=1;PICON&=0xBF
#define clr_PICON_PIT5                             SFRS=1;PICON&=0xDF
#define clr_PICON_PIT4                             SFRS=1;PICON&=0xEF
#define clr_PICON_PIT3                             SFRS=1;PICON&=0xF7
#define clr_PICON_PIT2                             SFRS=1;PICON&=0xFB
#define clr_PICON_PIT1                             SFRS=1;PICON&=0xFD
#define clr_PICON_PIT0                             SFRS=1;PICON&=0xFE

/**** PINEN  EAH  PAGE 1 ****/
#define set_PINEN_PINEN7                           SFRS=1;PINEN|=0x80
#define set_PINEN_PINEN6                           SFRS=1;PINEN|=0x40
#define set_PINEN_PINEN5                           SFRS=1;PINEN|=0x20
#define set_PINEN_PINEN4                           SFRS=1;PINEN|=0x10
#define set_PINEN_PINEN3                           SFRS=1;PINEN|=0x08
#define set_PINEN_PINEN2                           SFRS=1;PINEN|=0x04
#define set_PINEN_PINEN1                           SFRS=1;PINEN|=0x02
#define set_PINEN_PINEN0                           SFRS=1;PINEN|=0x01

#define clr_PINEN_PINEN7                           SFRS=1;PINEN&=0x7F
#define clr_PINEN_PINEN6                           SFRS=1;PINEN&=0xBF
#define clr_PINEN_PINEN5                           SFRS=1;PINEN&=0xDF
#define clr_PINEN_PINEN4                           SFRS=1;PINEN&=0xEF
#define clr_PINEN_PINEN3                           SFRS=1;PINEN&=0xF7
#define clr_PINEN_PINEN2                           SFRS=1;PINEN&=0xFB
#define clr_PINEN_PINEN1                           SFRS=1;PINEN&=0xFD
#define clr_PINEN_PINEN0                           SFRS=1;PINEN&=0xFE

/**** PIPEN  EBH  PAGE 1 ****/
#define set_PIPEN_PIPEN7                           SFRS=1;PIPEN|=0x80
#define set_PIPEN_PIPEN6                           SFRS=1;PIPEN|=0x40
#define set_PIPEN_PIPEN5                           SFRS=1;PIPEN|=0x20
#define set_PIPEN_PIPEN4                           SFRS=1;PIPEN|=0x10
#define set_PIPEN_PIPEN3                           SFRS=1;PIPEN|=0x08
#define set_PIPEN_PIPEN2                           SFRS=1;PIPEN|=0x04
#define set_PIPEN_PIPEN1                           SFRS=1;PIPEN|=0x02
#define set_PIPEN_PIPEN0                           SFRS=1;PIPEN|=0x01

#define clr_PIPEN_PIPEN7                           SFRS=1;PIPEN&=0x7F
#define clr_PIPEN_PIPEN6                           SFRS=1;PIPEN&=0xBF
#define clr_PIPEN_PIPEN5                           SFRS=1;PIPEN&=0xDF
#define clr_PIPEN_PIPEN4                           SFRS=1;PIPEN&=0xEF
#define clr_PIPEN_PIPEN3                           SFRS=1;PIPEN&=0xF7
#define clr_PIPEN_PIPEN2                           SFRS=1;PIPEN&=0xFB
#define clr_PIPEN_PIPEN1                           SFRS=1;PIPEN&=0xFD
#define clr_PIPEN_PIPEN0                           SFRS=1;PIPEN&=0xFE

/**** SPI0CR1  F3H  PAGE 1 ****/
#define set_SPI0CR1_SPR3                           SFRS=1;SPI0CR1|=0x20
#define set_SPI0CR1_SPR2                           SFRS=1;SPI0CR1|=0x10
#define set_SPI0CR1_TXDMAEN                        SFRS=1;SPI0CR1|=0x08
#define set_SPI0CR1_RXDMAEN                        SFRS=1;SPI0CR1|=0x04
#define set_SPI0CR1_SPIS1                          SFRS=1;SPI0CR1|=0x02
#define set_SPI0CR1_SPIS0                          SFRS=1;SPI0CR1|=0x01

#define clr_SPI0CR1_SPR3                           SFRS=1;SPI0CR1&=0xDF
#define clr_SPI0CR1_SPR2                           SFRS=1;SPI0CR1&=0xEF
#define clr_SPI0CR1_TXDMAEN                        SFRS=1;SPI0CR1&=0xF7
#define clr_SPI0CR1_RXDMAEN                        SFRS=1;SPI0CR1&=0xFB
#define clr_SPI0CR1_SPIS1                          SFRS=1;SPI0CR1&=0xFD
#define clr_SPI0CR1_SPIS0                          SFRS=1;SPI0CR1&=0xFE

/**** LVRTRIM  F7H  PAGE 1 ****/
#define set_LVRTRIM_LVRTRIM_4                      SFRS=1;LVRTRIM|=0x10
#define set_LVRTRIM_LVRTRIM_3                      SFRS=1;LVRTRIM|=0x08
#define set_LVRTRIM_LVRTRIM_2                      SFRS=1;LVRTRIM|=0x04
#define set_LVRTRIM_LVRTRIM_1                      SFRS=1;LVRTRIM|=0x02
#define set_LVRTRIM_LVRTRIM_0                      SFRS=1;LVRTRIM|=0x01

#define clr_LVRTRIM_LVRTRIM_4                      SFRS=1;LVRTRIM&=0xEF
#define clr_LVRTRIM_LVRTRIM_3                      SFRS=1;LVRTRIM&=0xF7
#define clr_LVRTRIM_LVRTRIM_2                      SFRS=1;LVRTRIM&=0xFB
#define clr_LVRTRIM_LVRTRIM_1                      SFRS=1;LVRTRIM&=0xFD
#define clr_LVRTRIM_LVRTRIM_0                      SFRS=1;LVRTRIM&=0xFE

/**** PWM0DTEN  F9H  PAGE 1 TA protect register ****/
#define set_PWM0DTEN_PWMnDTCNT_8                   SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x10;EA=BIT_TMP
#define set_PWM0DTEN_PDT45EN                       SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x04;EA=BIT_TMP
#define set_PWM0DTEN_PDT23EN                       SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x02;EA=BIT_TMP
#define set_PWM0DTEN_PDT01EN                       SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN|=0x01;EA=BIT_TMP

#define clr_PWM0DTEN_PWMnDTCNT_8                   SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN&=0xEF;EA=BIT_TMP
#define clr_PWM0DTEN_PDT45EN                       SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN&=0xFB;EA=BIT_TMP
#define clr_PWM0DTEN_PDT23EN                       SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN&=0xFD;EA=BIT_TMP
#define clr_PWM0DTEN_PDT01EN                       SFRS=1;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PWM0DTEN&=0xFE;EA=BIT_TMP

/**** PWM0MEN  FBH  PAGE 1 ****/
#define set_PWM0MEN_PMEN5                          SFRS=1;PWM0MEN|=0x20
#define set_PWM0MEN_PMEN4                          SFRS=1;PWM0MEN|=0x10
#define set_PWM0MEN_PMEN3                          SFRS=1;PWM0MEN|=0x08
#define set_PWM0MEN_PMEN2                          SFRS=1;PWM0MEN|=0x04
#define set_PWM0MEN_PMEN1                          SFRS=1;PWM0MEN|=0x02
#define set_PWM0MEN_PMEN0                          SFRS=1;PWM0MEN|=0x01

#define clr_PWM0MEN_PMEN5                          SFRS=1;PWM0MEN&=0xDF
#define clr_PWM0MEN_PMEN4                          SFRS=1;PWM0MEN&=0xEF
#define clr_PWM0MEN_PMEN3                          SFRS=1;PWM0MEN&=0xF7
#define clr_PWM0MEN_PMEN2                          SFRS=1;PWM0MEN&=0xFB
#define clr_PWM0MEN_PMEN1                          SFRS=1;PWM0MEN&=0xFD
#define clr_PWM0MEN_PMEN0                          SFRS=1;PWM0MEN&=0xFE

/**** PWM0MD  FCH  PAGE 1 ****/
#define set_PWM0MD_PMD5                            SFRS=1;PWM0MD|=0x20
#define set_PWM0MD_PMD4                            SFRS=1;PWM0MD|=0x10
#define set_PWM0MD_PMD3                            SFRS=1;PWM0MD|=0x08
#define set_PWM0MD_PMD2                            SFRS=1;PWM0MD|=0x04
#define set_PWM0MD_PMD1                            SFRS=1;PWM0MD|=0x02
#define set_PWM0MD_PMD0                            SFRS=1;PWM0MD|=0x01

#define clr_PWM0MD_PMD5                            SFRS=1;PWM0MD&=0xDF
#define clr_PWM0MD_PMD4                            SFRS=1;PWM0MD&=0xEF
#define clr_PWM0MD_PMD3                            SFRS=1;PWM0MD&=0xF7
#define clr_PWM0MD_PMD2                            SFRS=1;PWM0MD&=0xFB
#define clr_PWM0MD_PMD1                            SFRS=1;PWM0MD&=0xFD
#define clr_PWM0MD_PMD0                            SFRS=1;PWM0MD&=0xFE

/********SFR PAGE 2*************/
/**** P6S  96H  PAGE 2 ****/
#define set_P6S_7                                  SFRS=2;P6S|=0x80
#define set_P6S_6                                  SFRS=2;P6S|=0x40
#define set_P6S_5                                  SFRS=2;P6S|=0x20
#define set_P6S_4                                  SFRS=2;P6S|=0x10
#define set_P6S_3                                  SFRS=2;P6S|=0x08
#define set_P6S_2                                  SFRS=2;P6S|=0x04
#define set_P6S_1                                  SFRS=2;P6S|=0x02
#define set_P6S_0                                  SFRS=2;P6S|=0x01

#define clr_P6S_7                                  SFRS=2;P6S&=0x7F
#define clr_P6S_6                                  SFRS=2;P6S&=0xBF
#define clr_P6S_5                                  SFRS=2;P6S&=0xDF
#define clr_P6S_4                                  SFRS=2;P6S&=0xEF
#define clr_P6S_3                                  SFRS=2;P6S&=0xF7
#define clr_P6S_2                                  SFRS=2;P6S&=0xFB
#define clr_P6S_1                                  SFRS=2;P6S&=0xFD
#define clr_P6S_0                                  SFRS=2;P6S&=0xFE

/**** P6UP  97H  PAGE 2 ****/
#define set_P6UP_7                                 SFRS=2;P6UP|=0x80
#define set_P6UP_6                                 SFRS=2;P6UP|=0x40
#define set_P6UP_5                                 SFRS=2;P6UP|=0x20
#define set_P6UP_4                                 SFRS=2;P6UP|=0x10
#define set_P6UP_3                                 SFRS=2;P6UP|=0x08
#define set_P6UP_2                                 SFRS=2;P6UP|=0x04
#define set_P6UP_1                                 SFRS=2;P6UP|=0x02
#define set_P6UP_0                                 SFRS=2;P6UP|=0x01

#define clr_P6UP_7                                 SFRS=2;P6UP&=0x7F
#define clr_P6UP_6                                 SFRS=2;P6UP&=0xBF
#define clr_P6UP_5                                 SFRS=2;P6UP&=0xDF
#define clr_P6UP_4                                 SFRS=2;P6UP&=0xEF
#define clr_P6UP_3                                 SFRS=2;P6UP&=0xF7
#define clr_P6UP_2                                 SFRS=2;P6UP&=0xFB
#define clr_P6UP_1                                 SFRS=2;P6UP&=0xFD
#define clr_P6UP_0                                 SFRS=2;P6UP&=0xFE

/**** I2C0ADDR1  A1H  PAGE 2 ****/
#define set_I2C0ADDR1_I2C0ADDR1_7                  SFRS=2;I2C0ADDR1|=0x80
#define set_I2C0ADDR1_I2C0ADDR1_6                  SFRS=2;I2C0ADDR1|=0x40
#define set_I2C0ADDR1_I2C0ADDR1_5                  SFRS=2;I2C0ADDR1|=0x20
#define set_I2C0ADDR1_I2C0ADDR1_4                  SFRS=2;I2C0ADDR1|=0x10
#define set_I2C0ADDR1_I2C0ADDR1_3                  SFRS=2;I2C0ADDR1|=0x08
#define set_I2C0ADDR1_I2C0ADDR1_2                  SFRS=2;I2C0ADDR1|=0x04
#define set_I2C0ADDR1_I2C0ADDR1_1                  SFRS=2;I2C0ADDR1|=0x02

#define clr_I2C0ADDR1_I2C0ADDR1_7                  SFRS=2;I2C0ADDR1&=0x7F
#define clr_I2C0ADDR1_I2C0ADDR1_6                  SFRS=2;I2C0ADDR1&=0xBF
#define clr_I2C0ADDR1_I2C0ADDR1_5                  SFRS=2;I2C0ADDR1&=0xDF
#define clr_I2C0ADDR1_I2C0ADDR1_4                  SFRS=2;I2C0ADDR1&=0xEF
#define clr_I2C0ADDR1_I2C0ADDR1_3                  SFRS=2;I2C0ADDR1&=0xF7
#define clr_I2C0ADDR1_I2C0ADDR1_2                  SFRS=2;I2C0ADDR1&=0xFB
#define clr_I2C0ADDR1_I2C0ADDR1_1                  SFRS=2;I2C0ADDR1&=0xFD

/**** I2C0ADDR2  A2H  PAGE 2 ****/
#define set_I2C0ADDR2_I2C0ADDR2_7                  SFRS=2;I2C0ADDR2|=0x80
#define set_I2C0ADDR2_I2C0ADDR2_6                  SFRS=2;I2C0ADDR2|=0x40
#define set_I2C0ADDR2_I2C0ADDR2_5                  SFRS=2;I2C0ADDR2|=0x20
#define set_I2C0ADDR2_I2C0ADDR2_4                  SFRS=2;I2C0ADDR2|=0x10
#define set_I2C0ADDR2_I2C0ADDR2_3                  SFRS=2;I2C0ADDR2|=0x08
#define set_I2C0ADDR2_I2C0ADDR2_2                  SFRS=2;I2C0ADDR2|=0x04
#define set_I2C0ADDR2_I2C0ADDR2_1                  SFRS=2;I2C0ADDR2|=0x02
#define set_I2C0ADDR2_GC                           SFRS=2;I2C0ADDR2|=0x01

#define clr_I2C0ADDR2_I2C0ADDR2_7                  SFRS=2;I2C0ADDR2&=0x7F
#define clr_I2C0ADDR2_I2C0ADDR2_6                  SFRS=2;I2C0ADDR2&=0xBF
#define clr_I2C0ADDR2_I2C0ADDR2_5                  SFRS=2;I2C0ADDR2&=0xDF
#define clr_I2C0ADDR2_I2C0ADDR2_4                  SFRS=2;I2C0ADDR2&=0xEF
#define clr_I2C0ADDR2_I2C0ADDR2_3                  SFRS=2;I2C0ADDR2&=0xF7
#define clr_I2C0ADDR2_I2C0ADDR2_2                  SFRS=2;I2C0ADDR2&=0xFB
#define clr_I2C0ADDR2_I2C0ADDR2_1                  SFRS=2;I2C0ADDR2&=0xFD
#define clr_I2C0ADDR2_GC                           SFRS=2;I2C0ADDR2&=0xFE

/**** I2C0ADDR3  A3H  PAGE 2 ****/
#define set_I2C0ADDR3_I2C0ADDR3_7                  SFRS=2;I2C0ADDR3|=0x80
#define set_I2C0ADDR3_I2C0ADDR3_6                  SFRS=2;I2C0ADDR3|=0x40
#define set_I2C0ADDR3_I2C0ADDR3_5                  SFRS=2;I2C0ADDR3|=0x20
#define set_I2C0ADDR3_I2C0ADDR3_4                  SFRS=2;I2C0ADDR3|=0x10
#define set_I2C0ADDR3_I2C0ADDR3_3                  SFRS=2;I2C0ADDR3|=0x08
#define set_I2C0ADDR3_I2C0ADDR3_2                  SFRS=2;I2C0ADDR3|=0x04
#define set_I2C0ADDR3_I2C0ADDR3_1                  SFRS=2;I2C0ADDR3|=0x02
#define set_I2C0ADDR3_GC                           SFRS=2;I2C0ADDR3|=0x01

#define clr_I2C0ADDR3_I2C0ADDR3_7                  SFRS=2;I2C0ADDR3&=0x7F
#define clr_I2C0ADDR3_I2C0ADDR3_6                  SFRS=2;I2C0ADDR3&=0xBF
#define clr_I2C0ADDR3_I2C0ADDR3_5                  SFRS=2;I2C0ADDR3&=0xDF
#define clr_I2C0ADDR3_I2C0ADDR3_4                  SFRS=2;I2C0ADDR3&=0xEF
#define clr_I2C0ADDR3_I2C0ADDR3_3                  SFRS=2;I2C0ADDR3&=0xF7
#define clr_I2C0ADDR3_I2C0ADDR3_2                  SFRS=2;I2C0ADDR3&=0xFB
#define clr_I2C0ADDR3_I2C0ADDR3_1                  SFRS=2;I2C0ADDR3&=0xFD
#define clr_I2C0ADDR3_GC                           SFRS=2;I2C0ADDR3&=0xFE

/**** I2C1ADDR1  A4H  PAGE 2 ****/
#define set_I2C1ADDR1_I2C1ADDR1_7                  SFRS=2;I2C1ADDR1|=0x80
#define set_I2C1ADDR1_I2C1ADDR1_6                  SFRS=2;I2C1ADDR1|=0x40
#define set_I2C1ADDR1_I2C1ADDR1_5                  SFRS=2;I2C1ADDR1|=0x20
#define set_I2C1ADDR1_I2C1ADDR1_4                  SFRS=2;I2C1ADDR1|=0x10
#define set_I2C1ADDR1_I2C1ADDR1_3                  SFRS=2;I2C1ADDR1|=0x08
#define set_I2C1ADDR1_I2C1ADDR1_2                  SFRS=2;I2C1ADDR1|=0x04
#define set_I2C1ADDR1_I2C1ADDR1_1                  SFRS=2;I2C1ADDR1|=0x02
#define set_I2C1ADDR1_GC                           SFRS=2;I2C1ADDR1|=0x01

#define clr_I2C1ADDR1_I2C1ADDR1_7                  SFRS=2;I2C1ADDR1&=0x7F
#define clr_I2C1ADDR1_I2C1ADDR1_6                  SFRS=2;I2C1ADDR1&=0xBF
#define clr_I2C1ADDR1_I2C1ADDR1_5                  SFRS=2;I2C1ADDR1&=0xDF
#define clr_I2C1ADDR1_I2C1ADDR1_4                  SFRS=2;I2C1ADDR1&=0xEF
#define clr_I2C1ADDR1_I2C1ADDR1_3                  SFRS=2;I2C1ADDR1&=0xF7
#define clr_I2C1ADDR1_I2C1ADDR1_2                  SFRS=2;I2C1ADDR1&=0xFB
#define clr_I2C1ADDR1_I2C1ADDR1_1                  SFRS=2;I2C1ADDR1&=0xFD
#define clr_I2C1ADDR1_GC                           SFRS=2;I2C1ADDR1&=0xFE

/**** I2C1ADDR2  A5H  PAGE 2 ****/
#define set_I2C1ADDR2_I2C1ADDR2_7                  SFRS=2;I2C1ADDR2|=0x80
#define set_I2C1ADDR2_I2C1ADDR2_6                  SFRS=2;I2C1ADDR2|=0x40
#define set_I2C1ADDR2_I2C1ADDR2_5                  SFRS=2;I2C1ADDR2|=0x20
#define set_I2C1ADDR2_I2C1ADDR2_4                  SFRS=2;I2C1ADDR2|=0x10
#define set_I2C1ADDR2_I2C1ADDR2_3                  SFRS=2;I2C1ADDR2|=0x08
#define set_I2C1ADDR2_I2C1ADDR2_2                  SFRS=2;I2C1ADDR2|=0x04
#define set_I2C1ADDR2_I2C1ADDR2_1                  SFRS=2;I2C1ADDR2|=0x02
#define set_I2C1ADDR2_GC                           SFRS=2;I2C1ADDR2|=0x01

#define clr_I2C1ADDR2_I2C1ADDR2_7                  SFRS=2;I2C1ADDR2&=0x7F
#define clr_I2C1ADDR2_I2C1ADDR2_6                  SFRS=2;I2C1ADDR2&=0xBF
#define clr_I2C1ADDR2_I2C1ADDR2_5                  SFRS=2;I2C1ADDR2&=0xDF
#define clr_I2C1ADDR2_I2C1ADDR2_4                  SFRS=2;I2C1ADDR2&=0xEF
#define clr_I2C1ADDR2_I2C1ADDR2_3                  SFRS=2;I2C1ADDR2&=0xF7
#define clr_I2C1ADDR2_I2C1ADDR2_2                  SFRS=2;I2C1ADDR2&=0xFB
#define clr_I2C1ADDR2_I2C1ADDR2_1                  SFRS=2;I2C1ADDR2&=0xFD
#define clr_I2C1ADDR2_GC                           SFRS=2;I2C1ADDR2&=0xFE

/**** I2C1ADDR3  A6H  PAGE 2 ****/
#define set_I2C1ADDR3_I2C1ADDR3_7                  SFRS=2;I2C1ADDR3|=0x80
#define set_I2C1ADDR3_I2C1ADDR3_6                  SFRS=2;I2C1ADDR3|=0x40
#define set_I2C1ADDR3_I2C1ADDR3_5                  SFRS=2;I2C1ADDR3|=0x20
#define set_I2C1ADDR3_I2C1ADDR3_4                  SFRS=2;I2C1ADDR3|=0x10
#define set_I2C1ADDR3_I2C1ADDR3_3                  SFRS=2;I2C1ADDR3|=0x08
#define set_I2C1ADDR3_I2C1ADDR3_2                  SFRS=2;I2C1ADDR3|=0x04
#define set_I2C1ADDR3_I2C1ADDR3_1                  SFRS=2;I2C1ADDR3|=0x02
#define set_I2C1ADDR3_GC                           SFRS=2;I2C1ADDR3|=0x01

#define clr_I2C1ADDR3_I2C1ADDR3_7                  SFRS=2;I2C1ADDR3&=0x7F
#define clr_I2C1ADDR3_I2C1ADDR3_6                  SFRS=2;I2C1ADDR3&=0xBF
#define clr_I2C1ADDR3_I2C1ADDR3_5                  SFRS=2;I2C1ADDR3&=0xDF
#define clr_I2C1ADDR3_I2C1ADDR3_4                  SFRS=2;I2C1ADDR3&=0xEF
#define clr_I2C1ADDR3_I2C1ADDR3_3                  SFRS=2;I2C1ADDR3&=0xF7
#define clr_I2C1ADDR3_I2C1ADDR3_2                  SFRS=2;I2C1ADDR3&=0xFB
#define clr_I2C1ADDR3_I2C1ADDR3_1                  SFRS=2;I2C1ADDR3&=0xFD
#define clr_I2C1ADDR3_GC                           SFRS=2;I2C1ADDR3&=0xFE

/**** I2C0ADDRM  CFH  PAGE 2 ****/
#define set_I2C0ADDRM_I2C0ADDRM                    SFRS=2;I2C0ADDRM|=0x80

#define clr_I2C0ADDRM_I2C0ADDRM                    SFRS=2;I2C0ADDRM&=0x7F

/**** PWM3CON1  D5H  PAGE 2 ****/
#define set_PWM3CON1_PWMMOD_1                      SFRS=2;PWM3CON1|=0x80
#define set_PWM3CON1_PWMMOD_0                      SFRS=2;PWM3CON1|=0x40
#define set_PWM3CON1_GP                            SFRS=2;PWM3CON1|=0x20
#define set_PWM3CON1_PWMTYP                        SFRS=2;PWM3CON1|=0x10
#define set_PWM3CON1_FBINEN                        SFRS=2;PWM3CON1|=0x08
#define set_PWM3CON1_PWMDIV_2                      SFRS=2;PWM3CON1|=0x04
#define set_PWM3CON1_PWMDIV_1                      SFRS=2;PWM3CON1|=0x02
#define set_PWM3CON1_PWMDIV_0                      SFRS=2;PWM3CON1|=0x01

#define clr_PWM3CON1_PWMMOD_1                      SFRS=2;PWM3CON1&=0x7F
#define clr_PWM3CON1_PWMMOD_0                      SFRS=2;PWM3CON1&=0xBF
#define clr_PWM3CON1_GP                            SFRS=2;PWM3CON1&=0xDF
#define clr_PWM3CON1_PWMTYP                        SFRS=2;PWM3CON1&=0xEF
#define clr_PWM3CON1_FBINEN                        SFRS=2;PWM3CON1&=0xF7
#define clr_PWM3CON1_PWMDIV_2                      SFRS=2;PWM3CON1&=0xFB
#define clr_PWM3CON1_PWMDIV_1                      SFRS=2;PWM3CON1&=0xFD
#define clr_PWM3CON1_PWMDIV_0                      SFRS=2;PWM3CON1&=0xFE

/**** I2C1ADDRM  D7H  PAGE 2 ****/
#define set_I2C1ADDRM_I2C1ADDRM                    SFRS=2;I2C1ADDRM|=0x80

#define clr_I2C1ADDRM_I2C1ADDRM                    SFRS=2;I2C1ADDRM&=0x7F

/**** P5MF32  E1H  PAGE 2 ****/
#define set_P5MF32_P5MF3_3                         SFRS=2;P5MF32|=0x80
#define set_P5MF32_P5MF3_2                         SFRS=2;P5MF32|=0x40
#define set_P5MF32_P5MF3_1                         SFRS=2;P5MF32|=0x20
#define set_P5MF32_P5MF3_0                         SFRS=2;P5MF32|=0x10
#define set_P5MF32_P5MF2_3                         SFRS=2;P5MF32|=0x08
#define set_P5MF32_P5MF2_2                         SFRS=2;P5MF32|=0x04
#define set_P5MF32_P5MF2_1                         SFRS=2;P5MF32|=0x02
#define set_P5MF32_P5MF2_0                         SFRS=2;P5MF32|=0x01

#define clr_P5MF32_P5MF3_3                         SFRS=2;P5MF32&=0x7F
#define clr_P5MF32_P5MF3_2                         SFRS=2;P5MF32&=0xBF
#define clr_P5MF32_P5MF3_1                         SFRS=2;P5MF32&=0xDF
#define clr_P5MF32_P5MF3_0                         SFRS=2;P5MF32&=0xEF
#define clr_P5MF32_P5MF2_3                         SFRS=2;P5MF32&=0xF7
#define clr_P5MF32_P5MF2_2                         SFRS=2;P5MF32&=0xFB
#define clr_P5MF32_P5MF2_1                         SFRS=2;P5MF32&=0xFD
#define clr_P5MF32_P5MF2_0                         SFRS=2;P5MF32&=0xFE

/**** P5MF54  E2H  PAGE 2 ****/
#define set_P5MF54_P5MF5_3                         SFRS=2;P5MF54|=0x80
#define set_P5MF54_P5MF5_2                         SFRS=2;P5MF54|=0x40
#define set_P5MF54_P5MF5_1                         SFRS=2;P5MF54|=0x20
#define set_P5MF54_P5MF5_0                         SFRS=2;P5MF54|=0x10
#define set_P5MF54_P5MF4_3                         SFRS=2;P5MF54|=0x08
#define set_P5MF54_P5MF4_2                         SFRS=2;P5MF54|=0x04
#define set_P5MF54_P5MF4_1                         SFRS=2;P5MF54|=0x02
#define set_P5MF54_P5MF4_0                         SFRS=2;P5MF54|=0x01

#define clr_P5MF54_P5MF5_3                         SFRS=2;P5MF54&=0x7F
#define clr_P5MF54_P5MF5_2                         SFRS=2;P5MF54&=0xBF
#define clr_P5MF54_P5MF5_1                         SFRS=2;P5MF54&=0xDF
#define clr_P5MF54_P5MF5_0                         SFRS=2;P5MF54&=0xEF
#define clr_P5MF54_P5MF4_3                         SFRS=2;P5MF54&=0xF7
#define clr_P5MF54_P5MF4_2                         SFRS=2;P5MF54&=0xFB
#define clr_P5MF54_P5MF4_1                         SFRS=2;P5MF54&=0xFD
#define clr_P5MF54_P5MF4_0                         SFRS=2;P5MF54&=0xFE

/**** BRCTRIM  E4H  PAGE 2 ****/
#define set_BRCTRIM_IBOOST_2                       SFRS=2;BRCTRIM|=0x80
#define set_BRCTRIM_IBOOST_1                       SFRS=2;BRCTRIM|=0x40
#define set_BRCTRIM_IBOOST_0                       SFRS=2;BRCTRIM|=0x20
#define set_BRCTRIM_BRCTRIM_4                      SFRS=2;BRCTRIM|=0x10
#define set_BRCTRIM_BRCTRIM_3                      SFRS=2;BRCTRIM|=0x08
#define set_BRCTRIM_BRCTRIM_2                      SFRS=2;BRCTRIM|=0x04
#define set_BRCTRIM_BRCTRIM_1                      SFRS=2;BRCTRIM|=0x02
#define set_BRCTRIM_BRCTRIM_0                      SFRS=2;BRCTRIM|=0x01

#define clr_BRCTRIM_IBOOST_2                       SFRS=2;BRCTRIM&=0x7F
#define clr_BRCTRIM_IBOOST_1                       SFRS=2;BRCTRIM&=0xBF
#define clr_BRCTRIM_IBOOST_0                       SFRS=2;BRCTRIM&=0xDF
#define clr_BRCTRIM_BRCTRIM_4                      SFRS=2;BRCTRIM&=0xEF
#define clr_BRCTRIM_BRCTRIM_3                      SFRS=2;BRCTRIM&=0xF7
#define clr_BRCTRIM_BRCTRIM_2                      SFRS=2;BRCTRIM&=0xFB
#define clr_BRCTRIM_BRCTRIM_1                      SFRS=2;BRCTRIM&=0xFD
#define clr_BRCTRIM_BRCTRIM_0                      SFRS=2;BRCTRIM&=0xFE

/**** P4MF10  EBH  PAGE 2 ****/
#define set_P4MF10_P4MF1_3                         SFRS=2;P4MF10|=0x80
#define set_P4MF10_P4MF1_2                         SFRS=2;P4MF10|=0x40
#define set_P4MF10_P4MF1_1                         SFRS=2;P4MF10|=0x20
#define set_P4MF10_P4MF1_0                         SFRS=2;P4MF10|=0x10
#define set_P4MF10_P4MF0_3                         SFRS=2;P4MF10|=0x08
#define set_P4MF10_P4MF0_2                         SFRS=2;P4MF10|=0x04
#define set_P4MF10_P4MF0_1                         SFRS=2;P4MF10|=0x02
#define set_P4MF10_P4MF0_0                         SFRS=2;P4MF10|=0x01

#define clr_P4MF10_P4MF1_3                         SFRS=2;P4MF10&=0x7F
#define clr_P4MF10_P4MF1_2                         SFRS=2;P4MF10&=0xBF
#define clr_P4MF10_P4MF1_1                         SFRS=2;P4MF10&=0xDF
#define clr_P4MF10_P4MF1_0                         SFRS=2;P4MF10&=0xEF
#define clr_P4MF10_P4MF0_3                         SFRS=2;P4MF10&=0xF7
#define clr_P4MF10_P4MF0_2                         SFRS=2;P4MF10&=0xFB
#define clr_P4MF10_P4MF0_1                         SFRS=2;P4MF10&=0xFD
#define clr_P4MF10_P4MF0_0                         SFRS=2;P4MF10&=0xFE

/**** P4MF76  EEH  PAGE 2 ****/
#define set_P4MF76_P4MF7_3                         SFRS=2;P4MF76|=0x80
#define set_P4MF76_P4MF7_2                         SFRS=2;P4MF76|=0x40
#define set_P4MF76_P4MF7_1                         SFRS=2;P4MF76|=0x20
#define set_P4MF76_P4MF7_0                         SFRS=2;P4MF76|=0x10
#define set_P4MF76_P4MF6_3                         SFRS=2;P4MF76|=0x08
#define set_P4MF76_P4MF6_2                         SFRS=2;P4MF76|=0x04
#define set_P4MF76_P4MF6_1                         SFRS=2;P4MF76|=0x02
#define set_P4MF76_P4MF6_0                         SFRS=2;P4MF76|=0x01

#define clr_P4MF76_P4MF7_3                         SFRS=2;P4MF76&=0x7F
#define clr_P4MF76_P4MF7_2                         SFRS=2;P4MF76&=0xBF
#define clr_P4MF76_P4MF7_1                         SFRS=2;P4MF76&=0xDF
#define clr_P4MF76_P4MF7_0                         SFRS=2;P4MF76&=0xEF
#define clr_P4MF76_P4MF6_3                         SFRS=2;P4MF76&=0xF7
#define clr_P4MF76_P4MF6_2                         SFRS=2;P4MF76&=0xFB
#define clr_P4MF76_P4MF6_1                         SFRS=2;P4MF76&=0xFD
#define clr_P4MF76_P4MF6_0                         SFRS=2;P4MF76&=0xFE

/**** P5MF10  EFH  PAGE 2 ****/
#define set_P5MF10_P5MF1_3                         SFRS=2;P5MF10|=0x80
#define set_P5MF10_P5MF1_2                         SFRS=2;P5MF10|=0x40
#define set_P5MF10_P5MF1_1                         SFRS=2;P5MF10|=0x20
#define set_P5MF10_P5MF1_0                         SFRS=2;P5MF10|=0x10
#define set_P5MF10_P5MF0_3                         SFRS=2;P5MF10|=0x08
#define set_P5MF10_P5MF0_2                         SFRS=2;P5MF10|=0x04
#define set_P5MF10_P5MF0_1                         SFRS=2;P5MF10|=0x02
#define set_P5MF10_P5MF0_0                         SFRS=2;P5MF10|=0x01

#define clr_P5MF10_P5MF1_3                         SFRS=2;P5MF10&=0x7F
#define clr_P5MF10_P5MF1_2                         SFRS=2;P5MF10&=0xBF
#define clr_P5MF10_P5MF1_1                         SFRS=2;P5MF10&=0xDF
#define clr_P5MF10_P5MF1_0                         SFRS=2;P5MF10&=0xEF
#define clr_P5MF10_P5MF0_3                         SFRS=2;P5MF10&=0xF7
#define clr_P5MF10_P5MF0_2                         SFRS=2;P5MF10&=0xFB
#define clr_P5MF10_P5MF0_1                         SFRS=2;P5MF10&=0xFD
#define clr_P5MF10_P5MF0_0                         SFRS=2;P5MF10&=0xFE

/**** P1MF76  F1H  PAGE 2 ****/
#define set_P1MF76_P1MF7_3                         SFRS=2;P1MF76|=0x80
#define set_P1MF76_P1MF7_2                         SFRS=2;P1MF76|=0x40
#define set_P1MF76_P1MF7_1                         SFRS=2;P1MF76|=0x20
#define set_P1MF76_P1MF7_0                         SFRS=2;P1MF76|=0x10
#define set_P1MF76_P1MF6_3                         SFRS=2;P1MF76|=0x08
#define set_P1MF76_P1MF6_2                         SFRS=2;P1MF76|=0x04
#define set_P1MF76_P1MF6_1                         SFRS=2;P1MF76|=0x02
#define set_P1MF76_P1MF6_0                         SFRS=2;P1MF76|=0x01

#define clr_P1MF76_P1MF7_3                         SFRS=2;P1MF76&=0x7F
#define clr_P1MF76_P1MF7_2                         SFRS=2;P1MF76&=0xBF
#define clr_P1MF76_P1MF7_1                         SFRS=2;P1MF76&=0xDF
#define clr_P1MF76_P1MF7_0                         SFRS=2;P1MF76&=0xEF
#define clr_P1MF76_P1MF6_3                         SFRS=2;P1MF76&=0xF7
#define clr_P1MF76_P1MF6_2                         SFRS=2;P1MF76&=0xFB
#define clr_P1MF76_P1MF6_1                         SFRS=2;P1MF76&=0xFD
#define clr_P1MF76_P1MF6_0                         SFRS=2;P1MF76&=0xFE

/**** P2MF10  F2H  PAGE 2 ****/
#define set_P2MF10_P2MF1_3                         SFRS=2;P2MF10|=0x80
#define set_P2MF10_P2MF1_2                         SFRS=2;P2MF10|=0x40
#define set_P2MF10_P2MF1_1                         SFRS=2;P2MF10|=0x20
#define set_P2MF10_P2MF1_0                         SFRS=2;P2MF10|=0x10
#define set_P2MF10_P2MF0_3                         SFRS=2;P2MF10|=0x08
#define set_P2MF10_P2MF0_2                         SFRS=2;P2MF10|=0x04
#define set_P2MF10_P2MF0_1                         SFRS=2;P2MF10|=0x02
#define set_P2MF10_P2MF0_0                         SFRS=2;P2MF10|=0x01

#define clr_P2MF10_P2MF1_3                         SFRS=2;P2MF10&=0x7F
#define clr_P2MF10_P2MF1_2                         SFRS=2;P2MF10&=0xBF
#define clr_P2MF10_P2MF1_1                         SFRS=2;P2MF10&=0xDF
#define clr_P2MF10_P2MF1_0                         SFRS=2;P2MF10&=0xEF
#define clr_P2MF10_P2MF0_3                         SFRS=2;P2MF10&=0xF7
#define clr_P2MF10_P2MF0_2                         SFRS=2;P2MF10&=0xFB
#define clr_P2MF10_P2MF0_1                         SFRS=2;P2MF10&=0xFD
#define clr_P2MF10_P2MF0_0                         SFRS=2;P2MF10&=0xFE

/**** P2MF32  F3H  PAGE 2 ****/
#define set_P2MF32_P2MF3_3                         SFRS=2;P2MF32|=0x80
#define set_P2MF32_P2MF3_2                         SFRS=2;P2MF32|=0x40
#define set_P2MF32_P2MF3_1                         SFRS=2;P2MF32|=0x20
#define set_P2MF32_P2MF3_0                         SFRS=2;P2MF32|=0x10
#define set_P2MF32_P2MF2_3                         SFRS=2;P2MF32|=0x08
#define set_P2MF32_P2MF2_2                         SFRS=2;P2MF32|=0x04
#define set_P2MF32_P2MF2_1                         SFRS=2;P2MF32|=0x02
#define set_P2MF32_P2MF2_0                         SFRS=2;P2MF32|=0x01

#define clr_P2MF32_P2MF3_3                         SFRS=2;P2MF32&=0x7F
#define clr_P2MF32_P2MF3_2                         SFRS=2;P2MF32&=0xBF
#define clr_P2MF32_P2MF3_1                         SFRS=2;P2MF32&=0xDF
#define clr_P2MF32_P2MF3_0                         SFRS=2;P2MF32&=0xEF
#define clr_P2MF32_P2MF2_3                         SFRS=2;P2MF32&=0xF7
#define clr_P2MF32_P2MF2_2                         SFRS=2;P2MF32&=0xFB
#define clr_P2MF32_P2MF2_1                         SFRS=2;P2MF32&=0xFD
#define clr_P2MF32_P2MF2_0                         SFRS=2;P2MF32&=0xFE

/**** P2MF54  F4H  PAGE 2 ****/
#define set_P2MF54_P2MF5_3                         SFRS=2;P2MF54|=0x80
#define set_P2MF54_P2MF5_2                         SFRS=2;P2MF54|=0x40
#define set_P2MF54_P2MF5_1                         SFRS=2;P2MF54|=0x20
#define set_P2MF54_P2MF5_0                         SFRS=2;P2MF54|=0x10
#define set_P2MF54_P2MF4_3                         SFRS=2;P2MF54|=0x08
#define set_P2MF54_P2MF4_2                         SFRS=2;P2MF54|=0x04
#define set_P2MF54_P2MF4_1                         SFRS=2;P2MF54|=0x02
#define set_P2MF54_P2MF4_0                         SFRS=2;P2MF54|=0x01

#define clr_P2MF54_P2MF5_3                         SFRS=2;P2MF54&=0x7F
#define clr_P2MF54_P2MF5_2                         SFRS=2;P2MF54&=0xBF
#define clr_P2MF54_P2MF5_1                         SFRS=2;P2MF54&=0xDF
#define clr_P2MF54_P2MF5_0                         SFRS=2;P2MF54&=0xEF
#define clr_P2MF54_P2MF4_3                         SFRS=2;P2MF54&=0xF7
#define clr_P2MF54_P2MF4_2                         SFRS=2;P2MF54&=0xFB
#define clr_P2MF54_P2MF4_1                         SFRS=2;P2MF54&=0xFD
#define clr_P2MF54_P2MF4_0                         SFRS=2;P2MF54&=0xFE

/**** P3MF10  F6H  PAGE 2 ****/
#define set_P3MF10_P3MF1_3                         SFRS=2;P3MF10|=0x80
#define set_P3MF10_P3MF1_2                         SFRS=2;P3MF10|=0x40
#define set_P3MF10_P3MF1_1                         SFRS=2;P3MF10|=0x20
#define set_P3MF10_P3MF1_0                         SFRS=2;P3MF10|=0x10
#define set_P3MF10_P3MF0_3                         SFRS=2;P3MF10|=0x08
#define set_P3MF10_P3MF0_2                         SFRS=2;P3MF10|=0x04
#define set_P3MF10_P3MF0_1                         SFRS=2;P3MF10|=0x02
#define set_P3MF10_P3MF0_0                         SFRS=2;P3MF10|=0x01

#define clr_P3MF10_P3MF1_3                         SFRS=2;P3MF10&=0x7F
#define clr_P3MF10_P3MF1_2                         SFRS=2;P3MF10&=0xBF
#define clr_P3MF10_P3MF1_1                         SFRS=2;P3MF10&=0xDF
#define clr_P3MF10_P3MF1_0                         SFRS=2;P3MF10&=0xEF
#define clr_P3MF10_P3MF0_3                         SFRS=2;P3MF10&=0xF7
#define clr_P3MF10_P3MF0_2                         SFRS=2;P3MF10&=0xFB
#define clr_P3MF10_P3MF0_1                         SFRS=2;P3MF10&=0xFD
#define clr_P3MF10_P3MF0_0                         SFRS=2;P3MF10&=0xFE

/**** P3MF32  F7H  PAGE 2 ****/
#define set_P3MF32_P3MF3_3                         SFRS=2;P3MF32|=0x80
#define set_P3MF32_P3MF3_2                         SFRS=2;P3MF32|=0x40
#define set_P3MF32_P3MF3_1                         SFRS=2;P3MF32|=0x20
#define set_P3MF32_P3MF3_0                         SFRS=2;P3MF32|=0x10
#define set_P3MF32_P3MF2_3                         SFRS=2;P3MF32|=0x08
#define set_P3MF32_P3MF2_2                         SFRS=2;P3MF32|=0x04
#define set_P3MF32_P3MF2_1                         SFRS=2;P3MF32|=0x02
#define set_P3MF32_P3MF2_0                         SFRS=2;P3MF32|=0x01

#define clr_P3MF32_P3MF3_3                         SFRS=2;P3MF32&=0x7F
#define clr_P3MF32_P3MF3_2                         SFRS=2;P3MF32&=0xBF
#define clr_P3MF32_P3MF3_1                         SFRS=2;P3MF32&=0xDF
#define clr_P3MF32_P3MF3_0                         SFRS=2;P3MF32&=0xEF
#define clr_P3MF32_P3MF2_3                         SFRS=2;P3MF32&=0xF7
#define clr_P3MF32_P3MF2_2                         SFRS=2;P3MF32&=0xFB
#define clr_P3MF32_P3MF2_1                         SFRS=2;P3MF32&=0xFD
#define clr_P3MF32_P3MF2_0                         SFRS=2;P3MF32&=0xFE

/**** P0MF10  F9H  PAGE 2 ****/
#define set_P0MF10_P0MF1_3                         SFRS=2;P0MF10|=0x80
#define set_P0MF10_P0MF1_2                         SFRS=2;P0MF10|=0x40
#define set_P0MF10_P0MF1_1                         SFRS=2;P0MF10|=0x20
#define set_P0MF10_P0MF1_0                         SFRS=2;P0MF10|=0x10
#define set_P0MF10_P0MF0_3                         SFRS=2;P0MF10|=0x08
#define set_P0MF10_P0MF0_2                         SFRS=2;P0MF10|=0x04
#define set_P0MF10_P0MF0_1                         SFRS=2;P0MF10|=0x02
#define set_P0MF10_P0MF0_0                         SFRS=2;P0MF10|=0x01

#define clr_P0MF10_P0MF1_3                         SFRS=2;P0MF10&=0x7F
#define clr_P0MF10_P0MF1_2                         SFRS=2;P0MF10&=0xBF
#define clr_P0MF10_P0MF1_1                         SFRS=2;P0MF10&=0xDF
#define clr_P0MF10_P0MF1_0                         SFRS=2;P0MF10&=0xEF
#define clr_P0MF10_P0MF0_3                         SFRS=2;P0MF10&=0xF7
#define clr_P0MF10_P0MF0_2                         SFRS=2;P0MF10&=0xFB
#define clr_P0MF10_P0MF0_1                         SFRS=2;P0MF10&=0xFD
#define clr_P0MF10_P0MF0_0                         SFRS=2;P0MF10&=0xFE

/**** P0MF32  FAH  PAGE 2 ****/
#define set_P0MF32_P0MF3_3                         SFRS=2;P0MF32|=0x80
#define set_P0MF32_P0MF3_2                         SFRS=2;P0MF32|=0x40
#define set_P0MF32_P0MF3_1                         SFRS=2;P0MF32|=0x20
#define set_P0MF32_P0MF3_0                         SFRS=2;P0MF32|=0x10
#define set_P0MF32_P0MF2_3                         SFRS=2;P0MF32|=0x08
#define set_P0MF32_P0MF2_2                         SFRS=2;P0MF32|=0x04
#define set_P0MF32_P0MF2_1                         SFRS=2;P0MF32|=0x02
#define set_P0MF32_P0MF2_0                         SFRS=2;P0MF32|=0x01

#define clr_P0MF32_P0MF3_3                         SFRS=2;P0MF32&=0x7F
#define clr_P0MF32_P0MF3_2                         SFRS=2;P0MF32&=0xBF
#define clr_P0MF32_P0MF3_1                         SFRS=2;P0MF32&=0xDF
#define clr_P0MF32_P0MF3_0                         SFRS=2;P0MF32&=0xEF
#define clr_P0MF32_P0MF2_3                         SFRS=2;P0MF32&=0xF7
#define clr_P0MF32_P0MF2_2                         SFRS=2;P0MF32&=0xFB
#define clr_P0MF32_P0MF2_1                         SFRS=2;P0MF32&=0xFD
#define clr_P0MF32_P0MF2_0                         SFRS=2;P0MF32&=0xFE

/********SFR PAGE 3*************/
/**** MRCTRIM0  84H  PAGE 3 ****/
#define set_MRCTRIM0_MRCTRIM_9                     SFRS=3;MRCTRIM0|=0x80
#define set_MRCTRIM0_MRCTRIM_8                     SFRS=3;MRCTRIM0|=0x40
#define set_MRCTRIM0_MRCTRIM_7                     SFRS=3;MRCTRIM0|=0x20
#define set_MRCTRIM0_MRCTRIM_6                     SFRS=3;MRCTRIM0|=0x10
#define set_MRCTRIM0_MRCTRIM_5                     SFRS=3;MRCTRIM0|=0x08
#define set_MRCTRIM0_MRCTRIM_4                     SFRS=3;MRCTRIM0|=0x04
#define set_MRCTRIM0_MRCTRIM_3                     SFRS=3;MRCTRIM0|=0x02
#define set_MRCTRIM0_MRCTRIM_2                     SFRS=3;MRCTRIM0|=0x01

#define clr_MRCTRIM0_MRCTRIM_9                     SFRS=3;MRCTRIM0&=0x7F
#define clr_MRCTRIM0_MRCTRIM_8                     SFRS=3;MRCTRIM0&=0xBF
#define clr_MRCTRIM0_MRCTRIM_7                     SFRS=3;MRCTRIM0&=0xDF
#define clr_MRCTRIM0_MRCTRIM_6                     SFRS=3;MRCTRIM0&=0xEF
#define clr_MRCTRIM0_MRCTRIM_5                     SFRS=3;MRCTRIM0&=0xF7
#define clr_MRCTRIM0_MRCTRIM_4                     SFRS=3;MRCTRIM0&=0xFB
#define clr_MRCTRIM0_MRCTRIM_3                     SFRS=3;MRCTRIM0&=0xFD
#define clr_MRCTRIM0_MRCTRIM_2                     SFRS=3;MRCTRIM0&=0xFE

/**** MRCTRIM1  85H  PAGE 3 ****/
#define set_MRCTRIM1_MRCTRIM_1                     SFRS=3;MRCTRIM1|=0x02
#define set_MRCTRIM1_MRCTRIM_0                     SFRS=3;MRCTRIM1|=0x01

#define clr_MRCTRIM1_MRCTRIM_1                     SFRS=3;MRCTRIM1&=0xFD
#define clr_MRCTRIM1_MRCTRIM_0                     SFRS=3;MRCTRIM1&=0xFE

/**** DMA0CR1  8AH  PAGE 3 ****/
#define set_DMA0CR1_XOROUT                         SFRS=3;DMA0CR1|=0x08
#define set_DMA0CR1_REFOUT                         SFRS=3;DMA0CR1|=0x04
#define set_DMA0CR1_REFIN                          SFRS=3;DMA0CR1|=0x02
#define set_DMA0CR1_CRCEN                          SFRS=3;DMA0CR1|=0x01

#define clr_DMA0CR1_XOROUT                         SFRS=3;DMA0CR1&=0xF7
#define clr_DMA0CR1_REFOUT                         SFRS=3;DMA0CR1&=0xFB
#define clr_DMA0CR1_REFIN                          SFRS=3;DMA0CR1&=0xFD
#define clr_DMA0CR1_CRCEN                          SFRS=3;DMA0CR1&=0xFE

/**** DMA1CR1  8BH  PAGE 3 ****/
#define set_DMA1CR1_XOROUT                         SFRS=3;DMA1CR1|=0x08
#define set_DMA1CR1_REFOUT                         SFRS=3;DMA1CR1|=0x04
#define set_DMA1CR1_REFIN                          SFRS=3;DMA1CR1|=0x02
#define set_DMA1CR1_CRCEN                          SFRS=3;DMA1CR1|=0x01

#define clr_DMA1CR1_XOROUT                         SFRS=3;DMA1CR1&=0xF7
#define clr_DMA1CR1_REFOUT                         SFRS=3;DMA1CR1&=0xFB
#define clr_DMA1CR1_REFIN                          SFRS=3;DMA1CR1&=0xFD
#define clr_DMA1CR1_CRCEN                          SFRS=3;DMA1CR1&=0xFE

/**** T2ACMP  8EH  PAGE 3 ****/
#define set_T2ACMP_T2CKS1                          SFRS=3;T2ACMP|=0x80
#define set_T2ACMP_T2CKS0                          SFRS=3;T2ACMP|=0x40
#define set_T2ACMP_IC2S1                           SFRS=3;T2ACMP|=0x20
#define set_T2ACMP_IC2S0                           SFRS=3;T2ACMP|=0x10
#define set_T2ACMP_IC1S1                           SFRS=3;T2ACMP|=0x08
#define set_T2ACMP_IC1S0                           SFRS=3;T2ACMP|=0x04
#define set_T2ACMP_IC0S1                           SFRS=3;T2ACMP|=0x02
#define set_T2ACMP_IC0S0                           SFRS=3;T2ACMP|=0x01

#define clr_T2ACMP_T2CKS1                          SFRS=3;T2ACMP&=0x7F
#define clr_T2ACMP_T2CKS0                          SFRS=3;T2ACMP&=0xBF
#define clr_T2ACMP_IC2S1                           SFRS=3;T2ACMP&=0xDF
#define clr_T2ACMP_IC2S0                           SFRS=3;T2ACMP&=0xEF
#define clr_T2ACMP_IC1S1                           SFRS=3;T2ACMP&=0xF7
#define clr_T2ACMP_IC1S0                           SFRS=3;T2ACMP&=0xFB
#define clr_T2ACMP_IC0S1                           SFRS=3;T2ACMP&=0xFD
#define clr_T2ACMP_IC0S0                           SFRS=3;T2ACMP&=0xFE

/**** PDL  8FH  PAGE 3 ****/
#define set_PDL_PDLS1                              SFRS=3;PDL|=0x02
#define set_PDL_PDLS0                              SFRS=3;PDL|=0x01

#define clr_PDL_PDLS1                              SFRS=3;PDL&=0xFD
#define clr_PDL_PDLS0                              SFRS=3;PDL&=0xFE

/**** WDCONH  99H  PAGE 3 TA protect register ****/
#define set_WDCONH_WDPS                            SFRS=3;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCONH|=0x01;EA=BIT_TMP

#define clr_WDCONH_WDPS                            SFRS=3;BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCONH&=0xFE;EA=BIT_TMP

/**** PRTHCON0  C9H  PAGE 3 ****/
#define set_PRTHCON0_P40RTH1                       SFRS=3;PRTHCON0|=0x80
#define set_PRTHCON0_P40RTH0                       SFRS=3;PRTHCON0|=0x40
#define set_PRTHCON0_P30RTH1                       SFRS=3;PRTHCON0|=0x20
#define set_PRTHCON0_P30RTH0                       SFRS=3;PRTHCON0|=0x10
#define set_PRTHCON0_P21RTH1                       SFRS=3;PRTHCON0|=0x08
#define set_PRTHCON0_P21RTH0                       SFRS=3;PRTHCON0|=0x04
#define set_PRTHCON0_P20RTH1                       SFRS=3;PRTHCON0|=0x02
#define set_PRTHCON0_P20RTH0                       SFRS=3;PRTHCON0|=0x01

#define clr_PRTHCON0_P40RTH1                       SFRS=3;PRTHCON0&=0x7F
#define clr_PRTHCON0_P40RTH0                       SFRS=3;PRTHCON0&=0xBF
#define clr_PRTHCON0_P30RTH1                       SFRS=3;PRTHCON0&=0xDF
#define clr_PRTHCON0_P30RTH0                       SFRS=3;PRTHCON0&=0xEF
#define clr_PRTHCON0_P21RTH1                       SFRS=3;PRTHCON0&=0xF7
#define clr_PRTHCON0_P21RTH0                       SFRS=3;PRTHCON0&=0xFB
#define clr_PRTHCON0_P20RTH1                       SFRS=3;PRTHCON0&=0xFD
#define clr_PRTHCON0_P20RTH0                       SFRS=3;PRTHCON0&=0xFE

/**** PWM0FBS  CEH  PAGE 3 ****/
#define set_PWM0FBS_PWM0FBS_1                      SFRS=3;PWM0FBS|=0x02
#define set_PWM0FBS_PWM0FBS_0                      SFRS=3;PWM0FBS|=0x01

#define clr_PWM0FBS_PWM0FBS_1                      SFRS=3;PWM0FBS&=0xFD
#define clr_PWM0FBS_PWM0FBS_0                      SFRS=3;PWM0FBS&=0xFE

/**** AUXR3  CFH  PAGE 3 ****/
#define set_AUXR3_UART3DG                          SFRS=3;AUXR3|=0x08
#define set_AUXR3_UART2DG                          SFRS=3;AUXR3|=0x04
#define set_AUXR3_UART1DG                          SFRS=3;AUXR3|=0x02
#define set_AUXR3_UART0DG                          SFRS=3;AUXR3|=0x01

#define clr_AUXR3_UART3DG                          SFRS=3;AUXR3&=0xF7
#define clr_AUXR3_UART2DG                          SFRS=3;AUXR3&=0xFB
#define clr_AUXR3_UART1DG                          SFRS=3;AUXR3&=0xFD
#define clr_AUXR3_UART0DG                          SFRS=3;AUXR3&=0xFE

/**** LCDCON1  F4H  PAGE 3 ****/
#define set_LCDCON1_LCDIS                          SFRS=3;LCDCON1|=0x08
#define set_LCDCON1_LCDIE                          SFRS=3;LCDCON1|=0x04
#define set_LCDCON1_RE_MODE                        SFRS=3;LCDCON1|=0x02

#define clr_LCDCON1_LCDIS                          SFRS=3;LCDCON1&=0xF7
#define clr_LCDCON1_LCDIE                          SFRS=3;LCDCON1&=0xFB
#define clr_LCDCON1_RE_MODE                        SFRS=3;LCDCON1&=0xFD

