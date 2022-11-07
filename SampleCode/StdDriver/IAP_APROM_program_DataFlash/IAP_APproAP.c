/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

#include "MUG51_IAR.h"

/**
 * @brief       IAP program APROM as DATAFLASH sample 
 * @param       None
 * @return      None
 * @details     include erase APROM address 0x6000~0x60FF -> erase verify check blank -> program 128 byte in DATAFALSH data from 0~128 -> verify programed data.
 * @note        PLEASE always confirm the DATAFLASH area not overlap the APROM code. Since all APROM code can be erased no configuration limitation.
 * @note        BOD reset maybe cause IAP process error. Disable BOD reset function and enable BOD interrupt to check and reset. 
 */

#pragma vector=0x43
__interrupt void Timer0_ISR(void){
  
    TA=0xAA;TA=0x55;IAPUEN=0;         //Disable all Write enable
    clr_CHPCON_IAPEN;
    clr_BODCON0_BOF;                  //clear BOD flag
    set_CHPCON_SWRST;                 //Software reset
}

void main (void) 
{
    unsigned char count;
/* Loop while P32not connect to GND */ 
    MFP_P32_GPIO;
    P32_QUASI_MODE;
    while(P32);
/* define buffer data */
    for(count=0;count<128;count++)
    {
      IAPDataBuf[count]=count;
    }

/** IAP program LDROM, this code only run in APROM.
   * include IAP.c in Library for IAP function
   * @note  now maxima buffer size for program is 128 byte. buffer is locate in XRAM please check iap.h IAPDataBuf[128] define.
*/
#ifdef BOR_Enabled_in_CONFIG
    ENABLE_BOD_INTERRUPT;
    DISABLE_BOD_RESET;
#endif
    APROM_Erase(0x6000,128);
    APROM_Blank_Check(0x6000,2048);
    APROM_Program(0x6000,128);
    APROM_Read_Verify(0x6000,128);

    while(1);
}



