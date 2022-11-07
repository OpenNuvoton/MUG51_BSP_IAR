/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2022 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

#include "MUG51_IAR.h"

  /**
  * @brief This API configures system clock
  * @param[in] u8FsysMode Decides the ADC operation mode. Valid values are:
  *                       - \ref FSYS_MIRC               :System clock is MIRC.
  *                       - \ref FSYS_LIRC               :System clock is LIRC.
  * @return  None
  * @note    Call this API direct to switch system clock.
  * @exmaple :  FsysSelect(FSYS_LIRC);
  */
void FsysSelect(unsigned char u8FsysMode)
{
  switch (u8FsysMode)
  {
    /***** MIRC ***** */
    case FSYS_MIRC:
        ClockEnable(FSYS_MIRC);                 /* switching system clock MIRC  */
        ClockSwitch(FSYS_MIRC);
        while (CKEN&SET_BIT0);                  /* loop here if switch error */
                                                /* Disable other clock  */
    break;
    /***** LIRC *****/
    case FSYS_LIRC:
        ClockEnable(FSYS_LIRC);                 /* Enable LIRC   */
        ClockSwitch(FSYS_LIRC);                 /* Switch system clock to LIRC */
        while (CKEN&SET_BIT0);                  /* loop here if switch error */
        ClockDisable(FSYS_MIRC);                /* Disable other clock source */
     break;
  }
}

  /**
  * @brief This API Enable MCU clock
  * @param[in] u8FsysMode Decides the clock which to enable. Valid values are:
  *                       - \ref FSYS_MIRC               :Enable MIRC clock.
  *                       - \ref FSYS_LIRC               :Enable LIRC clock.
  * @return  None
  * @note    Call this API only enable MCU clock.
  * @exmaple :  ClockEnable(FSYS_LIRC);
  */
void ClockEnable(unsigned char u8FsysMode)
{
  switch (u8FsysMode)
  {
    /***** MIRC ******/
    case FSYS_MIRC:
        set_CKEN_MIRCEN;                        /*  Enable extnal clock source. */
        while(!(CKSWT&SET_BIT3));               /*  check clock source status and wait for ready */
    break;
    /***** LIRC ******/
    case FSYS_LIRC:
        set_CKEN_LIRCEN;                        //step1: Enable extnal clock source.
        while(!(CKSWT&SET_BIT4));      //step2: check clock source status and wait for ready
    break;
  }
}

  /**
  * @brief This API Disable MCU clock
  * @param[in] u8FsysMode Decides the clock to disable. Valid values are:
  *                       - \ref FSYS_MIRC               :Enable MIRC clock.
  *                       - \ref FSYS_LIRC               :Enable LIRC clock.
  * @return  None
  * @note    Call this API only enable MCU clock.
  * @exmaple :  ClockDisable(FSYS_LIRC);
  */
void ClockDisable(unsigned char u8FsysMode)
{
  switch (u8FsysMode)
  {
    /***** MIRC ******/
    case FSYS_MIRC:
        clr_CKEN_MIRCEN;
    break;
    /***** LIRC ******/
    case FSYS_LIRC:
        clr_CKEN_LIRCEN;
    break;
  }
}

  /**
  * @brief This API Switch MCU system clock
  * @param[in] u8FsysMode Decides the system clock which . Valid values are:
  *                       - \ref FSYS_MIRC               :Enable MIRC clock.
  *                       - \ref FSYS_LIRC               :Enable LIRC clock.
  * @return  None
  * @note    Enalble clock source before switch.
  * @exmaple :  ClockSwitch(FSYS_LIRC);
  */
void ClockSwitch(unsigned char u8FsysMode)
{
  BIT_TMP=EA;EA=0;
  switch (u8FsysMode)
  {
    /***** MIRC ******/
    case FSYS_MIRC:
        TA=0xAA;TA=0x55;CKSWT&=0xF8;
    break;
    /***** LIRC ******/
    case FSYS_LIRC:
        TA=0xAA;TA=0x55;CKSWT|=0x04;
    break;
  }
  EA=BIT_TMP;
}

/***************************************************************************
 Before call software reset function, please first confirm PCON define 
 Boot from APROM or LDROM
***************************************************************************/
void SW_Reset(void)
{
    set_CHPCON_SWRST;
}
/*==========================================================================*/


