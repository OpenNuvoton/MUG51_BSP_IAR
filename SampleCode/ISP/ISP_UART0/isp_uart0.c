/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  File Function: MUG51 UART0 ISP subroutine
//***********************************************************************************************************
#include "MUG51_IAR.h"
#include "isp_uart0.h"


__xdata volatile uint8_t uart_rcvbuf[64];
__xdata volatile uint8_t uart_txbuf[64];
__data volatile uint8_t bufhead;
__data volatile uint16_t flash_address;
__data volatile uint16_t AP_size;
__data volatile uint8_t g_timer1Counter;
__data volatile uint8_t count;
__data volatile uint16_t g_timer0Counter;
__data volatile uint32_t g_checksum;
__data volatile uint32_t g_totalchecksum;
BIT volatile bUartDataReady;
BIT volatile g_timer0Over;
BIT volatile g_timer1Over;
BIT volatile g_programflag;
BIT  BIT_TMP;
unsigned char PID_highB, PID_lowB, DID_highB, DID_lowB, CONF0, CONF1, CONF2, CONF4;
unsigned char recv_CONF0, recv_CONF1, recv_CONF2, recv_CONF4;

void READ_ID(void)
{
//    set_CHPCON_IAPEN;
    IAPCN = READ_DID;
    IAPAH = 0x00;
    IAPAL = 0x00;
//    set_IAPTRG_IAPGO;
    SFRS=0;BIT_TMP=EA;EA=0;
    TA=0xAA;TA=0x55;IAPTRG|=0x01;
    DID_lowB = IAPFD;
//    IAPAL = 0x01;
//    set_IAPTRG_IAPGO;
    IAPAL++;
    TA=0xAA;TA=0x55;IAPTRG|=0x01; 
    DID_highB = IAPFD;
//    IAPAL = 0x02;
//    set_IAPTRG_IAPGO;
    IAPAL++;
    TA=0xAA;TA=0x55;IAPTRG|=0x01;
    PID_lowB = IAPFD;
//    IAPAL = 0x03;
//    set_IAPTRG_IAPGO;
    IAPAL++;
    TA=0xAA;TA=0x55;IAPTRG|=0x01;
    EA=BIT_TMP;
    PID_highB = IAPFD;
}
void READ_CONFIG(void)
{
    IAPCN = BYTE_READ_CONFIG;
    IAPAL = 0x00;
    IAPAH = 0x00;
    set_IAPTRG_IAPGO;
    CONF0 = IAPFD;
//    IAPAL = 0x01;
//    set_IAPTRG_IAPGO;
    IAPAL++;
    SFRS=0;BIT_TMP=EA;EA=0;
    TA=0xAA;TA=0x55;IAPTRG|=0x01;
    CONF1 = IAPFD;
//    IAPAL = 0x02;
//    set_IAPTRG_IAPGO;
    IAPAL++;
    TA=0xAA;TA=0x55;IAPTRG|=0x01;
    CONF2 = IAPFD;
    IAPAL = 0x04;
//    set_IAPTRG_IAPGO;
    TA=0xAA;TA=0x55;IAPTRG|=0x01;
    CONF4 = IAPFD;
//    clr_CHPCON_IAPEN;
}

void TM0_ini(void)
{
    TH0 = TL0 = 150;     //interrupt timer 140us
    set_TCON_TR0;      //Start timer0
    set_IPH_PSH;       // Serial port 0 interrupt level2
    set_IE_ET0;
}


void UART0_ini_115200_7_3728Hz(void)
{
    MFP_P31_UART0_TXD;                              /* set P2.3 and P2.2 as Quasi mode for UART0 trasnfer */
    MFP_P30_UART0_RXD;

    P31_QUASI_MODE;
    P30_QUASI_MODE;

    SFRS = 0x00;
    SCON = 0x50;            /*UART0 Mode1,REN=1,TI=1*/
    set_PCON_SMOD;          /*UART0 Double Rate Enable*/
    T3CON &= 0xF8;          /*T3PS2=0,T3PS1=0,T3PS0=0(Prescale=1)*/
    set_T3CON_BRCK;         /*UART0 baud rate clock source = Timer3*/
    RH3    = 0xFF;          /* HIBYTE(65536 - 13)*/
    RL3    = 0xFC;          /* LOBYTE(65536 - 13); */
    set_T3CON_TR3;          /*Trigger Timer3*/
    ES=1;
    EA=1;
}

void Package_checksum(void)
{
    g_checksum = 0;

    for (count = 0; count < 64; count++)
    {
        g_checksum = g_checksum + uart_rcvbuf[count];
    }

    uart_txbuf[0] = g_checksum & 0xff;
    uart_txbuf[1] = (g_checksum >> 8) & 0xff;
    uart_txbuf[4] = uart_rcvbuf[4] + 1;
    uart_txbuf[5] = uart_rcvbuf[5];

    if (uart_txbuf[4] == 0x00)
        uart_txbuf[5]++;

}


void Send_64byte_To_UART0(void)
{
//_push_(SFRS);
    SFRS = 0;
    for (count = 0; count < 64; count++)
    {
        TI = 0;
        SBUF = uart_txbuf[count];
        set_WDCON_WDCLR;
        while (TI == 0);
    }
//_pop_(SFRS);
}

#pragma vector=0x23
__interrupt void UART0_ISR(void){
  
//_push_(SFRS);  
  SFRS=0;
    if (RI == 1)
    {   
      uart_rcvbuf[bufhead++]=  SBUF;    
      clr_SCON_RI;                                         // Clear RI (Receive Interrupt).
    }
    if (TI == 1)
    {       
        clr_SCON_TI;                                       // Clear TI (Transmit Interrupt).
    }
    if(bufhead ==1)
    {
      g_timer1Over=0;
      g_timer1Counter=90;                                  //for check uart timeout using
    }
  if(bufhead == 64)
    {
      bUartDataReady = TRUE;
      g_timer1Counter=0;
      g_timer1Over=0;
      bufhead = 0;
    }
//_pop_(SFRS);    
}

#pragma vector=0x0B
__interrupt void Timer0_ISR(void){
//_push_(SFRS);
    if (g_timer0Counter)
    {
        g_timer0Counter--;
        if (!g_timer0Counter)
        {
            g_timer0Over = 1;
        }
    }
    if (g_timer1Counter)
    {
        g_timer1Counter--;
        if (!g_timer1Counter)
        {
            g_timer1Over = 1;
        }
    }
//_pop_(SFRS);
}
