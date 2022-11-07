/*--------------------------------------------------------------------------*/
/* @file     MUG51.h                                                        */
/* @version  V1.00                                                          */
/* @brief    MUG51 peripheral access layer header file.                     */
/*           This file contains all the peripheral register's definitions,  */
/*           bits definitions and memory mapping for NuMicro MUG51 MCU.     */
/* @copyright (C) 2022 Nuvoton Technology Corp. All rights reserved.        */
/*--------------------------------------------------------------------------*/
/**
  \mainpage Introduction
  *
  *
  * This user manual describes the usage of MUG51 device driver
  *
  * <b>Disclaimer</b>
  *
  * The Software is furnished "AS IS", without warranty as to performance or results, and
  * the entire risk as to performance or results is assumed by YOU. Nuvoton disclaims all
  * warranties, express, implied or otherwise, with regard to the Software, its use, or
  * operation, including without limitation any and all warranties of merchantability, fitness
  * for a particular purpose, and non-infringement of intellectual property rights.
  *
  * <b>Copyright Notice</b>
  *
  * Copyright (C) 2022 Nuvoton Technology Corp. All rights reserved.
  */

#ifndef __MUG51_H__
#define __MUG51_H__
/********************************************************************/
/*  <Define rule I> set or clr _ regsiter name _ register bit name  */
/********************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/******************************************************************************/
/*                         Peripheral header files                            */
/******************************************************************************/
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

/**
  @addtogroup CTRL_REG Special Function Register (SFR)
  @{ */

/**
 @addtogroup SFR_PAGE0 SFR Page 0
 @{ */

/**
   @addtogroup SFR_PAGE0_P0 P0
   Special Function Register P0
   @{ */

/**
@var P0
Address: 80H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[1]     |1         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[2]     |2         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[3]     |3         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[4]     |4         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[5]     |5         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[6]     |6         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[7]     |7         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
*/
__sfr __no_init volatile union
{
  unsigned char P0; /* Port 0 */
  struct /* Port 0 */
  { 
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } P0_bit;
} @ 0x80;

/**
@addtogroup SFR_PAGE0_P0_MACRO Bit Macro Functions
Bit Macro Functions of P0
@{ */

#define set_P0_0                 P0 |= 0x01 /*!<Set P0.0                       */
#define set_P0_1                 P0 |= 0x02 /*!<Set P0.1                       */
#define set_P0_2                 P0 |= 0x04 /*!<Set P0.2                       */
#define set_P0_3                 P0 |= 0x08 /*!<Set P0.3                       */
#define set_P0_4                 P0 |= 0x10 /*!<Set P0.4                       */
#define set_P0_5                 P0 |= 0x20 /*!<Set P0.5                       */
#define set_P0_6                 P0 |= 0x40 /*!<Set P0.6                       */
#define set_P0_7                 P0 |= 0x80 /*!<Set P0.7                       */

#define clr_P0_0                 P0 &=~0x01 /*!<Clear P0.0                     */
#define clr_P0_1                 P0 &=~0x02 /*!<Clear P0.1                     */
#define clr_P0_2                 P0 &=~0x04 /*!<Clear P0.2                     */
#define clr_P0_3                 P0 &=~0x08 /*!<Clear P0.3                     */
#define clr_P0_4                 P0 &=~0x10 /*!<Clear P0.4                     */
#define clr_P0_5                 P0 &=~0x20 /*!<Clear P0.5                     */
#define clr_P0_6                 P0 &=~0x40 /*!<Clear P0.6                     */
#define clr_P0_7                 P0 &=~0x80 /*!<Clear P0.7                     */

/**@} end of SFR_PAGE0_P0_MACRO group */
/**@} end of SFR_PAGE0_P0 group */
__sfr __no_init volatile unsigned char  SP          @ 0x81;
/**
   @addtogroup SFR_PAGE0_DPL DPL
   Special Function Register DPL
   @{ */

/**
@var DPL
Address: 82H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |DPTR[7:0] |Data Pointer Low Byte
|        |          |This is the low byte of 16-bit data pointer. DPL combined with DPH
|        |          |serve as a 16-bit data pointer DPTR to access indirect addressed RAM
|        |          |or Program Memory. DPS (AUXR0.0) bit decides which data pointer, DPTR
|        |          |or DPTR1, is activated.
*/
__sfr __no_init volatile unsigned char  DPL         @ 0x82;

/**@} end of SFR_PAGE0_DPL group */

/**
   @addtogroup SFR_PAGE0_DPH DPH
   Special Function Register DPH
   @{ */

/**
@var DPH
Address: 83H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |DPTR[15:8]|Data Pointer High Byte
|        |          |This is the high byte of 16-bit data pointer. DPH combined with DPL
|        |          |serve as a 16-bit data pointer DPTR to access indirect addressed RAM
|        |          |or Program Memory. DPS (AUXR0.0) bit decides which data pointer, DPTR
|        |          |or DPTR1, is activated.
*/
__sfr __no_init volatile unsigned char DPH @ 0x83;

/**@} end of SFR_PAGE0_DPH group */

/**
   @addtogroup SFR_PAGE0_RWKL RWKL
   Special Function Register RWKL
   @{ */

/**
@var RWKL
Address: 86H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RWK[7:0]  |WKT Reload Low Byte
|        |          |It holds the 16-bit reload value of WKT. Note that RWK should not be
|        |          |FFFFH if the pre-scale is 1/1 for implement limitation.
*/
__sfr __no_init volatile unsigned char RWKL @ 0x86;

/**@} end of SFR_PAGE0_RWKL group */

/**
   @addtogroup SFR_PAGE0_PCON PCON
   Special Function Register PCON
   @{ */

/**
@var PCON
Address: 87H, All pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IDL       |Idle Mode
|        |          |Setting this bit puts CPU into Idle mode. Under this mode, the CPU
|        |          |clock stops and Program Counter (PC) suspends but all peripherals keep
|        |          |activated. After CPU is woken up from Idle, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the ISR of the very interrupt source that woke the system up before.
|        |          |After return from the ISR, the device continues execution at the
|        |          |instruction which follows the instruction that put the system into
|        |          |Idle mode.
|[1]     |PD        |Power-Down Mode
|        |          |Setting this bit puts CPU
|        |          |into Power-down mode. Under this mode, both CPU and peripheral clocks
|        |          |stop and Program Counter (PC) suspends. It provides the lowest power
|        |          |consumption. After CPU is woken up from Power-down, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the interrupt service routine (ISR) of the very interrupt source that
|        |          |woke the system up before. After return from the ISR, the device
|        |          |continues execution at the instruction, which follows the instruction
|        |          |that put the system into Power-down mode.
|        |          |Note that If IDL bit and PD bit are set simultaneously, CPU
|        |          |will enter Power-down mode. Then it does not go to Idle mode after
|        |          |exiting Power-down.
|[2]     |GF0       |General Purpose Flag 0
|        |          |The general purpose flag that can be set or cleared by user via
|        |          |software.
|[3]     |GF1       |General Purpose Flag 1
|        |          |The general purpose flag that can be set or cleared by user via
|        |          |software.
|[4]     |POF       |Power-on Reset Flag
|        |          |This bit will be set as 1 after a power-on reset. It indicates a cold
|        |          |reset, a power-on reset complete. This bit remains its value after any
|        |          |other resets. This flag is recommended to be cleared via software.
|[5]     |LPR       |Low Power Run Mode
|        |          |0 = disable
|        |          |1 = enable
|        |          |Note: If PD = 1 and LPR = 1 at the same time, LPR is invalid, CPU will
|        |          |enter Power-down mode.
|[6]     |SMOD0     |Serial Port 0 Framing Error Flag Access Enable
|        |          |0 = SCON.7 accesses to SM0 bit.
|        |          |1 = SCON.7 accesses to FE bit.
|[7]     |SMOD      |Serial Port 0 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART0 is in
|        |          |Mode 2 or when Timer 1 overflow is used as the baud rate source of
|        |          |UART0 Mode 1 or 3. See Table 6.91 Serial Port 0 Mode / baud rate
|        |          |Description for details.
*/
__sfr __no_init volatile unsigned char PCON @ 0x87;

/**
@addtogroup SFR_PAGE0_PCON_MACRO Bit Macro Functions
Bit Macro Functions of PCON
@{ */

#define set_PCON_IDL             PCON |= 0x01 /*!<Set PCON.IDL                   */
#define set_PCON_PD              PCON |= 0x02 /*!<Set PCON.PD                    */
#define set_PCON_GF0             PCON |= 0x04 /*!<Set PCON.GF0                   */
#define set_PCON_GF1             PCON |= 0x08 /*!<Set PCON.GF1                   */
#define set_PCON_POF             PCON |= 0x10 /*!<Set PCON.POF                   */
#define set_PCON_LPR             PCON |= 0x20 /*!<Set PCON.LPR                   */
#define set_PCON_SMOD0           PCON |= 0x40 /*!<Set PCON.SMOD0                 */
#define set_PCON_SMOD            PCON |= 0x80 /*!<Set PCON.SMOD                  */

#define clr_PCON_IDL             PCON &=~0x01 /*!<Clear PCON.IDL                 */
#define clr_PCON_PD              PCON &=~0x02 /*!<Clear PCON.PD                  */
#define clr_PCON_GF0             PCON &=~0x04 /*!<Clear PCON.GF0                 */
#define clr_PCON_GF1             PCON &=~0x08 /*!<Clear PCON.GF1                 */
#define clr_PCON_POF             PCON &=~0x10 /*!<Clear PCON.POF                 */
#define clr_PCON_LPR             PCON &=~0x20 /*!<Clear PCON.LPR                 */
#define clr_PCON_SMOD0           PCON &=~0x40 /*!<Clear PCON.SMOD0               */
#define clr_PCON_SMOD            PCON &=~0x80 /*!<Clear PCON.SMOD                */

/**@} end of SFR_PAGE0_PCON_MACRO group */
/**@} end of SFR_PAGE0_PCON group */

/**
   @addtogroup SFR_PAGE0_PCON PCON
   Special Function Register PCON
   @{ */

/**
@var PCON
Address: 87H, All pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IDL       |Idle Mode
|        |          |Setting this bit puts CPU into Idle mode. Under this mode, the CPU
|        |          |clock stops and Program Counter (PC) suspends but all peripherals keep
|        |          |activated. After CPU is woken up from Idle, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the ISR of the very interrupt source that woke the system up before.
|        |          |After return from the ISR, the device continues execution at the
|        |          |instruction which follows the instruction that put the system into
|        |          |Idle mode.
*/

/**
@addtogroup SFR_PAGE0_PCON_MACRO Bit Macro Functions
Bit Macro Functions of PCON
@{ */

#define set_PCON_IDL             PCON |= 0x01 /*!<Set PCON.IDL                   */

#define clr_PCON_IDL             PCON &=~0x01 /*!<Clear PCON.IDL                 */

/**@} end of SFR_PAGE0_PCON_MACRO group */
/**@} end of SFR_PAGE0_PCON group */

/**
   @addtogroup SFR_PAGE0_PCON PCON
   Special Function Register PCON
   @{ */

/**
@var PCON
Address: 87H, All pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |PD        |Power-Down Mode
|        |          |Setting this bit puts CPU
|        |          |into Power-down mode. Under this mode, both CPU and peripheral clocks
|        |          |stop and Program Counter (PC) suspends. It provides the lowest power
|        |          |consumption. After CPU is woken up from Power-down, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the interrupt service routine (ISR) of the very interrupt source that
|        |          |woke the system up before. After return from the ISR, the device
|        |          |continues execution at the instruction, which follows the instruction
|        |          |that put the system into Power-down mode.
|        |          |Note that If IDL bit and PD bit are set simultaneously, CPU
|        |          |will enter Power-down mode. Then it does not go to Idle mode after
|        |          |exiting Power-down.
*/

/**
@addtogroup SFR_PAGE0_PCON_MACRO Bit Macro Functions
Bit Macro Functions of PCON
@{ */

#define set_PCON_PD              PCON |= 0x02 /*!<Set PCON.PD                    */

#define clr_PCON_PD              PCON &=~0x02 /*!<Clear PCON.PD                  */

/**@} end of SFR_PAGE0_PCON_MACRO group */
/**@} end of SFR_PAGE0_PCON group */

/**
   @addtogroup SFR_PAGE0_PCON PCON
   Special Function Register PCON
   @{ */

/**
@var PCON
Address: 87H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |SMOD0     |Serial Port 0 Framing Error Flag Access Enable
|        |          |0 = SCON.7 accesses to SM0 bit.
|        |          |1 = SCON.7 accesses to FE bit.
|[7]     |SMOD      |Serial Port 0 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART0 is in
|        |          |Mode 2 or when Timer 1 overflow is used as the baud rate source of
|        |          |UART0 Mode 1 or 3. See Table 6.91 Serial Port 0 Mode / baud rate
|        |          |Description for details.
*/

/**
@addtogroup SFR_PAGE0_PCON_MACRO Bit Macro Functions
Bit Macro Functions of PCON
@{ */

#define set_PCON_SMOD0           PCON |= 0x40 /*!<Set PCON.SMOD0                 */
#define set_PCON_SMOD            PCON |= 0x80 /*!<Set PCON.SMOD                  */

#define clr_PCON_SMOD0           PCON &=~0x40 /*!<Clear PCON.SMOD0               */
#define clr_PCON_SMOD            PCON &=~0x80 /*!<Clear PCON.SMOD                */

/**@} end of SFR_PAGE0_PCON_MACRO group */
/**@} end of SFR_PAGE0_PCON group */

/**
   @addtogroup SFR_PAGE0_TCON TCON
   Special Function Register TCON
   @{ */

/**
@var TCON
Address: 88H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IT0       |External Interrupt 0 Type Select
|        |          |This bit selects by which type that INT0 is triggered.
|        |          |0 = INT0 is low level triggered.
|        |          |1 = INT0 is falling edge triggered.
|[1]     |IE0       |External Interrupt 0 Edge Flag
|        |          |If IT0 = 1 (falling edge trigger), this flag will be set by hardware
|        |          |when a falling edge is detected. It remain set until cleared via
|        |          |software or cleared by hardware in the beginning of its interrupt
|        |          |service routine.
|        |          |If IT0 = 0 (low level trigger), this flag follows the inverse of the
|        |          |INT0 input signal’s logic level. Software cannot control it.
|[2]     |IT1       |External Interrupt 1 Type Select
|        |          |This bit selects by which type that INT1 is triggered.
|        |          |0 = INT1 is low level triggered.
|        |          |1 = INT1 is fallinVg edge triggered.
|[3]     |IE1       |External Interrupt 1 Edge Flag
|        |          |If IT1 = 1 (falling edge trigger), this flag will be set by hardware
|        |          |when a falling edge is detected. It remain set until cleared via
|        |          |software or cleared by hardware in the beginning of its interrupt
|        |          |service routine.
|        |          |If IT1 = 0 (low level trigger), this flag follows the inverse of the
|        |          |INT1 input signal’s logic level. Software cannot control it.
|[4]     |TR0       |Timer 0 Run Control
|        |          |0 = Timer 0 Disabled. Clearing this bit will halt Timer 0 and the
|        |          |current count will be preserved in TH0 and TL0.
|        |          |1 = Timer 0 Enabled.
|[5]     |TF0       |Timer 0 Overflow Flag
|        |          |This bit is set when Timer 0 overflows. It is automatically cleared
|        |          |via hardware when the program executes the Timer 0 interrupt service
|        |          |routine. This bit can be set or cleared by software.
|[6]     |TR1       |Timer 1 Run Control
|        |          |0 = Timer 1 Disabled. Clearing this bit will halt Timer 1 and the
|        |          |current count will be preserved in TH1 and TL1.
|        |          |1 = Timer 1 Enabled.
|[7]     |TF1       |Timer 1 Overflow Flag
|        |          |This bit is set when Timer 1 overflows. It is automatically cleared by
|        |          |hardware when the program executes the Timer 1 interrupt service
|        |          |routine. This bit can be set or cleared by software.
*/
__sfr __no_init volatile union
{
  unsigned char TCON; /* Timer Control */
  struct /* Timer Control */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } TCON_bit;
} @ 0x88; 

/**
@addtogroup SFR_PAGE0_TCON_MACRO Bit Macro Functions
Bit Macro Functions of TCON
@{ */

#define set_TCON_IT0             TCON |= 0x01 /*!<Set TCON.IT0                   */
#define set_TCON_IE0             TCON |= 0x02 /*!<Set TCON.IE0                   */
#define set_TCON_IT1             TCON |= 0x04 /*!<Set TCON.IT1                   */
#define set_TCON_IE1             TCON |= 0x08 /*!<Set TCON.IE1                   */
#define set_TCON_TR0             TCON |= 0x10 /*!<Set TCON.TR0                   */
#define set_TCON_TF0             TCON |= 0x20 /*!<Set TCON.TF0                   */
#define set_TCON_TR1             TCON |= 0x40 /*!<Set TCON.TR1                   */
#define set_TCON_TF1             TCON |= 0x80 /*!<Set TCON.TF1                   */

#define clr_TCON_IT0             TCON &=~0x01 /*!<Clear TCON.IT0                 */
#define clr_TCON_IE0             TCON &=~0x02 /*!<Clear TCON.IE0                 */
#define clr_TCON_IT1             TCON &=~0x04 /*!<Clear TCON.IT1                 */
#define clr_TCON_IE1             TCON &=~0x08 /*!<Clear TCON.IE1                 */
#define clr_TCON_TR0             TCON &=~0x10 /*!<Clear TCON.TR0                 */
#define clr_TCON_TF0             TCON &=~0x20 /*!<Clear TCON.TF0                 */
#define clr_TCON_TR1             TCON &=~0x40 /*!<Clear TCON.TR1                 */
#define clr_TCON_TF1             TCON &=~0x80 /*!<Clear TCON.TF1                 */

/**@} end of SFR_PAGE0_TCON_MACRO group */
/**@} end of SFR_PAGE0_TCON group */

/**
   @addtogroup SFR_PAGE0_TMOD TMOD
   Special Function Register TMOD
   @{ */

/**
@var TMOD
Address: 89H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |M0_T0     |Check with bit 1 description
|[1]     |M1_T0     |Timer 0 Mode Select
|        |          |M1
|        |          |M0
|        |          |Timer 0 Mode
|        |          |0
|        |          |0
|        |          |Mode 0: 13-bit   Timer/Counter
|        |          |0
|        |          |1
|        |          |Mode 1: 16-bit   Timer/Counter
|        |          |1
|        |          |0
|        |          |Mode 2: 8-bit   Timer/Counter with auto-reload from TH0
|        |          |1
|        |          |1
|        |          |Mode 3: TL0 as a   8-bit Timer/Counter and TH0 as a 8-bit Timer
|[2]     |CT_T0     |Timer 0 Counter/Timer Select
|        |          |0 = Timer 0 is incremented by internal system clock.
|        |          |1 = Timer 0 is incremented by the falling edge of the external pin T0.
|[3]     |GATE_T0   |Timer 0 Gate Control
|        |          |0 = Timer 0 will clock when TR0 is 1 regardless of INT0 logic level.
|        |          |1 = Timer 0 will clock only when TR0 is 1 and INT0 is logic 1.
|[4]     |M0_T1     |Check with bit 5 description.
|[5]     |M1_T1     |Timer 1 Mode Select
|        |          |M1
|        |          |M0
|        |          |Timer 1 Mode
|        |          |0
|        |          |0
|        |          |Mode 0: 13-bit   Timer/Counter
|        |          |0
|        |          |1
|        |          |Mode 1: 16-bit   Timer/Counter
|        |          |1
|        |          |0
|        |          |Mode 2: 8-bit   Timer/Counter with auto-reload from TH1
|        |          |1
|        |          |1
|        |          |Mode 3: Timer 1   halted
|[6]     |CT_T1     |Timer 1 Counter/Timer Select
|        |          |0 = Timer 1 is incremented by internal system clock.
|        |          |1 = Timer 1 is incremented by the falling edge of the external pin T1.
|[7]     |GATE_T1   |Timer 1 Gate Control
|        |          |0 = Timer 1 will clock when TR1 is 1 regardless of INT1 logic level.
|        |          |1 = Timer 1 will clock only when TR1 is 1 and INT1 is logic 1.
*/
__sfr __no_init volatile unsigned char TMOD @ 0x89;

/**
@addtogroup SFR_PAGE0_TMOD_MACRO Bit Macro Functions
Bit Macro Functions of TMOD
@{ */

#define set_TMOD_M0_T0           TMOD |= 0x01 /*!<Set TMOD.M0_T0                 */
#define set_TMOD_M1_T0           TMOD |= 0x02 /*!<Set TMOD.M1_T0                 */
#define set_TMOD_CT_T0           TMOD |= 0x04 /*!<Set TMOD.CT_T0                 */
#define set_TMOD_GATE_T0         TMOD |= 0x08 /*!<Set TMOD.GATE_T0               */
#define set_TMOD_M0_T1           TMOD |= 0x10 /*!<Set TMOD.M0_T1                 */
#define set_TMOD_M1_T1           TMOD |= 0x20 /*!<Set TMOD.M1_T1                 */
#define set_TMOD_CT_T1           TMOD |= 0x40 /*!<Set TMOD.CT_T1                 */
#define set_TMOD_GATE_T1         TMOD |= 0x80 /*!<Set TMOD.GATE_T1               */

#define clr_TMOD_M0_T0           TMOD &=~0x01 /*!<Clear TMOD.M0_T0               */
#define clr_TMOD_M1_T0           TMOD &=~0x02 /*!<Clear TMOD.M1_T0               */
#define clr_TMOD_CT_T0           TMOD &=~0x04 /*!<Clear TMOD.CT_T0               */
#define clr_TMOD_GATE_T0         TMOD &=~0x08 /*!<Clear TMOD.GATE_T0             */
#define clr_TMOD_M0_T1           TMOD &=~0x10 /*!<Clear TMOD.M0_T1               */
#define clr_TMOD_M1_T1           TMOD &=~0x20 /*!<Clear TMOD.M1_T1               */
#define clr_TMOD_CT_T1           TMOD &=~0x40 /*!<Clear TMOD.CT_T1               */
#define clr_TMOD_GATE_T1         TMOD &=~0x80 /*!<Clear TMOD.GATE_T1             */

/**@} end of SFR_PAGE0_TMOD_MACRO group */
/**@} end of SFR_PAGE0_TMOD group */

/**
   @addtogroup SFR_PAGE0_TL0 TL0
   Special Function Register TL0
   @{ */

/**
@var TL0
Address: 8AH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TL0[7:0]  |Timer 0 Low Byte
|        |          |The TL0 register is the low byte of the 16-bit counting register of
|        |          |Timer 0.
*/
__sfr __no_init volatile unsigned char TL0 @ 0x8A;

/**@} end of SFR_PAGE0_TL0 group */

/**
   @addtogroup SFR_PAGE0_TL1 TL1
   Special Function Register TL1
   @{ */

/**
@var TL1
Address: 8BH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TL1[7:0]  |Timer 1 Low Byte
|        |          |The TL1 register is the low byte of the 16-bit counting register of
|        |          |Timer 1.
*/
__sfr __no_init volatile unsigned char TL1 @ 0x8B;

/**@} end of SFR_PAGE0_TL1 group */

/**
   @addtogroup SFR_PAGE0_TH0 TH0
   Special Function Register TH0
   @{ */

/**
@var TH0
Address: 8CH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TH0[7:0]  |Timer 0 High Byte
|        |          |The TH0 register is the high byte of the 16-bit counting register of
|        |          |Timer 0.
*/
__sfr __no_init volatile unsigned char TH0 @ 0x8C;

/**@} end of SFR_PAGE0_TH0 group */

/**
   @addtogroup SFR_PAGE0_TH1 TH1
   Special Function Register TH1
   @{ */

/**
@var TH1
Address: 8DH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TH1[7:0]  |Timer 1 High Byte
|        |          |The TH1 register is the high byte of the 16-bit counting register of
|        |          |Timer 1.
*/
__sfr __no_init volatile unsigned char TH1 @ 0x8D;

/**@} end of SFR_PAGE0_TH1 group */

/**
   @addtogroup SFR_PAGE0_CKCON CKCON
   Special Function Register CKCON
   @{ */

/**
@var CKCON
Address: 8EH, Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |DPIDL     |0 = keep chip internal clock in IDLE mode.
|        |          |1= chip enter IDLE mode, the chip internal clock will stop.
|[1]     |CLOEN     |System Clock Output Enable
|        |          |0 = System clock output Disabled.
|        |          |1 = System clock output Enabled from CLO pin.
|        |          |Once system clock output was enabled, only POR/BOD reset can disable
|        |          |it.
|[2]     |T0OE      |Timer 0 Output Enable
|        |          |0 = Timer 0 output Disabled.
|        |          |1 = Timer 0 output Enabled from T0 pin.
|        |          |Note that Timer 0 output should be enabled only when operating in its
|        |          |Timer mode.
|[3]     |T0M       |Timer 0 Clock Mode Select
|        |          |0 = The clock source of Timer 0 is the system clock divided by 12. It
|        |          |maintains standard 8051 compatibility.
|        |          |1 = The clock source of Timer 0 is direct the system clock.
|[4]     |T1M       |Timer 1 Clock Mode Select
|        |          |0 = The clock source of Timer 1 is the system clock divided by 12. It
|        |          |maintains standard 8051 compatibility.
|        |          |1 = The clock source of Timer 1 is direct the system clock.
|[5]     |T1OE      |Timer 1 Output Enable
|        |          |0 = Timer 1 output Disabled.
|        |          |1 = Timer 1 output Enabled from T1 pin.
|        |          |Note that Timer 1 output should be enabled only when operating in its
|        |          |Timer mode.
|[5]     |PWMCKS    |PWM Clock Source Select
|        |          |0 = The clock source of PWM is the system clock FSYS.
|        |          |1 = The clock source of PWM is the overflow of Timer 1.
|[7]     |FASTWK    |Fast Wakeup Enable
|        |          |0 = Faster Wakeup Disabled, when system wakeup from power down mode,
|        |          |MIRC clock stable time is about 10us.
|        |          |1 = Faster Wakeup Enabled, when system wakeup from power down mode,
|        |          |MIRC clock stable time is about 3us.
*/
__sfr __no_init volatile unsigned char CKCON @ 0x8E;

/**
@addtogroup SFR_PAGE0_CKCON_MACRO Bit Macro Functions
Bit Macro Functions of CKCON
@{ */

#define set_CKCON_DPIDL          SFRS = 0; CKCON |= 0x01 /*!<Set CKCON.DPIDL                */
#define set_CKCON_CLOEN          SFRS = 0; CKCON |= 0x02 /*!<Set CKCON.CLOEN                */
#define set_CKCON_T0OE           SFRS = 0; CKCON |= 0x04 /*!<Set CKCON.T0OE                 */
#define set_CKCON_T0M            SFRS = 0; CKCON |= 0x08 /*!<Set CKCON.T0M                  */
#define set_CKCON_T1M            SFRS = 0; CKCON |= 0x10 /*!<Set CKCON.T1M                  */
#define set_CKCON_T1OE           SFRS = 0; CKCON |= 0x20 /*!<Set CKCON.T1OE                 */
#define set_CKCON_PWMCKS         SFRS = 0; CKCON |= 0x20 /*!<Set CKCON.PWMCKS               */
#define set_CKCON_FASTWK         SFRS = 0; CKCON |= 0x80 /*!<Set CKCON.FASTWK               */

#define clr_CKCON_DPIDL          SFRS = 0; CKCON &=~0x01 /*!<Clear CKCON.DPIDL              */
#define clr_CKCON_CLOEN          SFRS = 0; CKCON &=~0x02 /*!<Clear CKCON.CLOEN              */
#define clr_CKCON_T0OE           SFRS = 0; CKCON &=~0x04 /*!<Clear CKCON.T0OE               */
#define clr_CKCON_T0M            SFRS = 0; CKCON &=~0x08 /*!<Clear CKCON.T0M                */
#define clr_CKCON_T1M            SFRS = 0; CKCON &=~0x10 /*!<Clear CKCON.T1M                */
#define clr_CKCON_T1OE           SFRS = 0; CKCON &=~0x20 /*!<Clear CKCON.T1OE               */
#define clr_CKCON_PWMCKS         SFRS = 0; CKCON &=~0x20 /*!<Clear CKCON.PWMCKS             */
#define clr_CKCON_FASTWK         SFRS = 0; CKCON &=~0x80 /*!<Clear CKCON.FASTWK             */

/**@} end of SFR_PAGE0_CKCON_MACRO group */
/**@} end of SFR_PAGE0_CKCON group */

/**
   @addtogroup SFR_PAGE0_WKCON WKCON
   Special Function Register WKCON
   @{ */

/**
@var WKCON
Address: 8FH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |WKPS[2:0] |WKT Pre-Scalar
|        |          |These bits determine the pre-scale of WKT clock.
|        |          |000 = 1/1.
|        |          |001 = 1/4.
|        |          |010 = 1/16.
|        |          |011 = 1/64.
|        |          |100 = 1/256.
|        |          |101 = 1/512.
|        |          |110 = 1/1024.
|        |          |111 = 1/2048.
|[3]     |WKTR      |WKT Run Control
|        |          |0 = WKT is halted.
|        |          |1 = WKT starts running.
|        |          |Note that the reload register RWK can only be written when WKT is
|        |          |halted (WKTR bit is 0). If WKT is written while WKTR is 1, result is
|        |          |unpredictable.
|[4]     |WKTF      |WKT Overflow Flag
|        |          |This bit is set when WKT overflows. If the WKT interrupt and the
|        |          |global interrupt are enabled, setting this bit will make CPU execute
|        |          |WKT interrupt service routine. This bit is not automatically cleared
|        |          |via hardware and should be cleared via software.
|[5]     |WKTCK     |WKT Clock Source
|        |          |This bit is set WKT clock source select bit.
|        |          |0 = LIRC
|        |          |1 = LXT
|[7:6]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char WKCON @ 0x8F;

/**
@addtogroup SFR_PAGE0_WKCON_MACRO Bit Macro Functions
Bit Macro Functions of WKCON
@{ */


#define set_WKCON_WKTR           SFRS = 0; WKCON |= 0x08 /*!<Set WKCON.WKTR                 */
#define set_WKCON_WKTF           SFRS = 0; WKCON |= 0x10 /*!<Set WKCON.WKTF                 */
#define set_WKCON_WKTCK          SFRS = 0; WKCON |= 0x20 /*!<Set WKCON.WKTCK                */


#define clr_WKCON_WKTR           SFRS = 0; WKCON &=~0x08 /*!<Clear WKCON.WKTR               */
#define clr_WKCON_WKTF           SFRS = 0; WKCON &=~0x10 /*!<Clear WKCON.WKTF               */
#define clr_WKCON_WKTCK          SFRS = 0; WKCON &=~0x20 /*!<Clear WKCON.WKTCK              */

/**@} end of SFR_PAGE0_WKCON_MACRO group */
/**@} end of SFR_PAGE0_WKCON group */

/**
   @addtogroup SFR_PAGE0_P1 P1
   Special Function Register P1
   @{ */

/**
@var P1
Address: 90H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[1]     |1         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[2]     |2         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[3]     |3         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[4]     |4         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[5]     |5         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[6]     |6         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[7]     |7         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
*/
__sfr __no_init volatile union
{
  unsigned char P1; /* Port 1 */
  struct /* Port 1 */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;    
  } P1_bit;
} @ 0x90;

/**
@addtogroup SFR_PAGE0_P1_MACRO Bit Macro Functions
Bit Macro Functions of P1
@{ */

#define set_P1_0                 P1 |= 0x01 /*!<Set P1.0                       */
#define set_P1_1                 P1 |= 0x02 /*!<Set P1.1                       */
#define set_P1_2                 P1 |= 0x04 /*!<Set P1.2                       */
#define set_P1_3                 P1 |= 0x08 /*!<Set P1.3                       */
#define set_P1_4                 P1 |= 0x10 /*!<Set P1.4                       */
#define set_P1_5                 P1 |= 0x20 /*!<Set P1.5                       */
#define set_P1_6                 P1 |= 0x40 /*!<Set P1.6                       */
#define set_P1_7                 P1 |= 0x80 /*!<Set P1.7                       */

#define clr_P1_0                 P1 &=~0x01 /*!<Clear P1.0                     */
#define clr_P1_1                 P1 &=~0x02 /*!<Clear P1.1                     */
#define clr_P1_2                 P1 &=~0x04 /*!<Clear P1.2                     */
#define clr_P1_3                 P1 &=~0x08 /*!<Clear P1.3                     */
#define clr_P1_4                 P1 &=~0x10 /*!<Clear P1.4                     */
#define clr_P1_5                 P1 &=~0x20 /*!<Clear P1.5                     */
#define clr_P1_6                 P1 &=~0x40 /*!<Clear P1.6                     */
#define clr_P1_7                 P1 &=~0x80 /*!<Clear P1.7                     */

/**@} end of SFR_PAGE0_P1_MACRO group */
/**@} end of SFR_PAGE0_P1 group */

/**
   @addtogroup SFR_PAGE0_SFRS SFRS
   Special Function Register SFRS
   @{ */

/**
@var SFRS
Address: 91H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |SFRPAGE[1:0]|SFR Page Select
|        |          |00 = Instructions access SFR Page 0.
|        |          |01 = Instructions access SFR Page 1.
|        |          |10 = Instructions access SFR page 2.
|        |          |11 = Instructions access SFR page 3.
*/
__sfr __no_init volatile unsigned char SFRS @ 0x91;

/**@} end of SFR_PAGE0_SFRS group */

/**
   @addtogroup SFR_PAGE0_DMA0CR0 DMA0CR0
   Special Function Register DMA0CR0
   @{ */

/**
@var DMA0CR0
Address: 92H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/
__sfr __no_init volatile unsigned char DMA0CR0 @ 0x92;

/**
@addtogroup SFR_PAGE0_DMA0CR0_MACRO Bit Macro Functions
Bit Macro Functions of DMA0CR0
@{ */

#define set_DMA0CR0_EN           SFRS = 0; DMA0CR0 |= 0x01 /*!<Set DMA0CR0.EN                 */
#define set_DMA0CR0_RUN          SFRS = 0; DMA0CR0 |= 0x02 /*!<Set DMA0CR0.RUN                */
#define set_DMA0CR0_FIE          SFRS = 0; DMA0CR0 |= 0x04 /*!<Set DMA0CR0.FIE                */
#define set_DMA0CR0_HIE          SFRS = 0; DMA0CR0 |= 0x08 /*!<Set DMA0CR0.HIE                */


#define clr_DMA0CR0_EN           SFRS = 0; DMA0CR0 &=~0x01 /*!<Clear DMA0CR0.EN               */
#define clr_DMA0CR0_RUN          SFRS = 0; DMA0CR0 &=~0x02 /*!<Clear DMA0CR0.RUN              */
#define clr_DMA0CR0_FIE          SFRS = 0; DMA0CR0 &=~0x04 /*!<Clear DMA0CR0.FIE              */
#define clr_DMA0CR0_HIE          SFRS = 0; DMA0CR0 &=~0x08 /*!<Clear DMA0CR0.HIE              */


/**@} end of SFR_PAGE0_DMA0CR0_MACRO group */
/**@} end of SFR_PAGE0_DMA0CR0 group */

/**
   @addtogroup SFR_PAGE0_DMA0CR0 DMA0CR0
   Special Function Register DMA0CR0
   @{ */

/**
@var DMA0CR0
Address: 92H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |Others = Reserved.
|        |          |The others are reserved, no peripheral source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup SFR_PAGE0_DMA0CR0_MACRO Bit Macro Functions
Bit Macro Functions of DMA0CR0
@{ */

#define set_DMA0CR0_EN           SFRS = 0; DMA0CR0 |= 0x01 /*!<Set DMA0CR0.EN                 */
#define set_DMA0CR0_RUN          SFRS = 0; DMA0CR0 |= 0x02 /*!<Set DMA0CR0.RUN                */
#define set_DMA0CR0_FIE          SFRS = 0; DMA0CR0 |= 0x04 /*!<Set DMA0CR0.FIE                */
#define set_DMA0CR0_HIE          SFRS = 0; DMA0CR0 |= 0x08 /*!<Set DMA0CR0.HIE                */


#define clr_DMA0CR0_EN           SFRS = 0; DMA0CR0 &=~0x01 /*!<Clear DMA0CR0.EN               */
#define clr_DMA0CR0_RUN          SFRS = 0; DMA0CR0 &=~0x02 /*!<Clear DMA0CR0.RUN              */
#define clr_DMA0CR0_FIE          SFRS = 0; DMA0CR0 &=~0x04 /*!<Clear DMA0CR0.FIE              */
#define clr_DMA0CR0_HIE          SFRS = 0; DMA0CR0 &=~0x08 /*!<Clear DMA0CR0.HIE              */


/**@} end of SFR_PAGE0_DMA0CR0_MACRO group */
/**@} end of SFR_PAGE0_DMA0CR0 group */

/**
   @addtogroup SFR_PAGE0_DMA0MAL DMA0MAL
   Special Function Register DMA0MAL
   @{ */

/**
@var DMA0MAL
Address: 93H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MAL[7:0]  |PDMA XRAM Base Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the source address.
|        |          |XRAM address = {MAH[3:0],MAL[7:0]}
*/
__sfr __no_init volatile unsigned char DMA0MAL @ 0x93;

/**@} end of SFR_PAGE0_DMA0MAL group */

/**
   @addtogroup SFR_PAGE0_DMA0CNT DMA0CNT
   Special Function Register DMA0CNT
   @{ */

/**
@var DMA0CNT
Address: 94H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CNT[7:0]  |PDMA Transfer Count
|        |          |The total transfer count for PDMA request operation.
|        |          |Total transfer count = CNT[7:0] + 1
*/
__sfr __no_init volatile unsigned char DMA0CNT @ 0x94;

/**@} end of SFR_PAGE0_DMA0CNT group */

/**
   @addtogroup SFR_PAGE0_DMA0CCNT DMA0CCNT
   Special Function Register DMA0CCNT
   @{ */

/**
@var DMA0CCNT
Address: 95H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CCNT[7:0] |PDMA Current Transfer Count
|        |          |The current transfer count for PDMA request operation.
|        |          |Current transfer count = CCNT[7:0]
|        |          |Note: while DMAnCNT=0xFF (total transfer count = 256) and DMAnCCNT =
|        |          |0x00 , If PDMA FDONE flag (DMAnTSR[0])=0, that means, 1’st byte data
|        |          |is not complete.If PDMA FDONE flag (DMAnTSR[0])=1, that means, all of
|        |          |data are transferred..
*/
__sfr __no_init volatile unsigned char DMA0CCNT @ 0x95;

/**@} end of SFR_PAGE0_DMA0CCNT group */

/**
   @addtogroup SFR_PAGE0_CKSWT CKSWT
   Special Function Register CKSWT
   @{ */

/**
@var CKSWT
Address: 96H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |OSC[2:0]  |Oscillator Selection Bits
|        |          |This field selects the system clock source.
|        |          |000 = Internal 8 MHz oscillator. Defaul value accoding to
|        |          |MIRCEN(CKEN.1) enabled
|        |          |001 = Internal 24 MHz oscillator accoding to HIRCEN(CKEN.5) enabled
|        |          |01x = External oscillator clock source accoding to ECLKEN(CKEN.3)
|        |          |enabled.
|        |          |10x = Internal 38.4 kHz oscillator according to LIRCEN(CKEN.4)
|        |          |enabled.
|        |          |110 = External High speed crystal/resonator clock source (4 MHz ~ 24
|        |          |MHz) accoding to EHXTEN(CKEN.7) enabled.
|        |          |111 = External Low speed crystal/resonator clock source (32.768 kHz)
|        |          |accoding to ELXTEN(CKEN.6) enabled.
|        |          |Others = Reseved.
|        |          |Note that this field is write only. The read back value of this field
|        |          |may not correspond to the present system clock source.
|[3]     |ECLKSTMIRCST|External Clock Input Status
|        |          |0 = External clock input is not stable or disabled.
|        |          |1 = External clock input is enabled and stable.
|        |          |Mid-Speed Internal Oscillator Status
|        |          |0 = Internal median speed oscillator
|        |          |is not stable or disabled.
|        |          |1 = Internal median speed internal oscillator is enabled and stable.
|[4]     |LIRCST    |Low Speed Internal Oscillator 38.4 kHz Status
|        |          |0 = Low speed internal oscillator is not stable or is disabled.
|        |          |1 = Low speed internal oscillator is enabled and stable.
|[5]     |HIRCST    |High-Speed Internal Oscillator 24 MHz Status
|        |          |0 = High-speed internal oscillator is not stable or disabled.
|        |          |1 = High-speed internal oscillator is enabled and stable.
|[6]     |LXTST     |Low Speed External Crystal/Resonator 32.768 kHz Status
|        |          |0 = Low speed external crystal/resonator is not stable or is disabled.
|        |          |1 = Low speed external crystal/resonator is enabled and stable.
|[7]     |HXTST     |High Speed External Crystal/Resonator 4 MHz to 24 MHz Status
|        |          |0 = High speed external crystal/resonator is not stable or is
|        |          |disabled.
|        |          |1 = High speed external crystal/resonator is enabled and stable.
*/
__sfr __no_init volatile unsigned char CKSWT @ 0x96;

/**
@addtogroup SFR_PAGE0_CKSWT_MACRO Bit Macro Functions
Bit Macro Functions of CKSWT
@{ */
#define set_CKSWT_OSC_0          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x01; EA = BIT_TMP /*!<Set CKSWT.OSC_0                */
#define set_CKSWT_OSC_1          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x02; EA = BIT_TMP /*!<Set CKSWT.OSC_1                */
#define set_CKSWT_OSC_2          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x04; EA = BIT_TMP /*!<Set CKSWT.OSC_2                */
#define set_CKSWT_ECLKSTMIRCST   SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x08; EA = BIT_TMP /*!<Set CKSWT.ECLKSTMIRCST         */
#define set_CKSWT_LIRCST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x10; EA = BIT_TMP /*!<Set CKSWT.LIRCST               */
#define set_CKSWT_HIRCST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x20; EA = BIT_TMP /*!<Set CKSWT.HIRCST               */
#define set_CKSWT_LXTST          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x40; EA = BIT_TMP /*!<Set CKSWT.LXTST                */
#define set_CKSWT_HXTST          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT |= 0x80; EA = BIT_TMP /*!<Set CKSWT.HXTST                */

#define clr_CKSWT_OSC_0          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x01; EA = BIT_TMP /*!<Clear CKSWT.OSC_0              */
#define clr_CKSWT_OSC_1          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x02; EA = BIT_TMP /*!<Clear CKSWT.OSC_1              */
#define clr_CKSWT_OSC_2          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x04; EA = BIT_TMP /*!<Clear CKSWT.OSC_2              */
#define clr_CKSWT_ECLKSTMIRCST   SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x08; EA = BIT_TMP /*!<Clear CKSWT.ECLKSTMIRCST       */
#define clr_CKSWT_LIRCST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x10; EA = BIT_TMP /*!<Clear CKSWT.LIRCST             */
#define clr_CKSWT_HIRCST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x20; EA = BIT_TMP /*!<Clear CKSWT.HIRCST             */
#define clr_CKSWT_LXTST          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x40; EA = BIT_TMP /*!<Clear CKSWT.LXTST              */
#define clr_CKSWT_HXTST          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKSWT &=~0x80; EA = BIT_TMP /*!<Clear CKSWT.HXTST              */

/**@} end of SFR_PAGE0_CKSWT_MACRO group */
/**@} end of SFR_PAGE0_CKSWT group */

/**
   @addtogroup SFR_PAGE0_CKEN CKEN
   Special Function Register CKEN
   @{ */

/**
@var CKEN
Address: 97H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CKSWTF    |Clock Switch Fault Flag
|        |          |0 = The previous system clock source switch was successful.
|        |          |1 = User tried to switch to an instable or disabled clock source at
|        |          |the previous system clock source switch. If switching to an instable
|        |          |clock source, this bit remains 1 until the clock source is stable and
|        |          |switching is successful.
|[1]     |MIRCEN    |Median Speed Internal Oscillator Enable
|        |          |0 = The median
|        |          |speed internal oscillator Disabled.
|        |          |1 = The median speed internal oscillator Enabled.
|        |          |Note that once IAP is enabled by setting IAPEN (CHPCON.0), the median
|        |          |speed internal oscillator will be enabled automatically. The hardware
|        |          |will also set MIRCEN and MIRCST bits. After IAPEN is cleared, MIRCEN
|        |          |and MIRCST resume the original values.
|[2]     |BIRCEN    |Bias Internal Oscillator 3.3 kHz Enable
|        |          |0 = The bias internal oscillator Disabled.
|        |          |1 = The bias internal oscillator Enabled.
|        |          |Note that when BIRCEN is disabled, the bias refresh clock is changed
|        |          |from 3.3 kHz to ~10 kHz ( LIRC 38.4 kHz /4)
|        |          |應該always keep at 1, 否則 會影響LIRC 無法受user control OFF.
|[3]     |ECLKEN    |External Clock Input Enable
|        |          |1 = External clock input (Xin , P5.3) Enabled.
|        |          |0 = External clock input (Xin, P5.3) Disabled, P5.2 and P5.3 work as
|        |          |general purpose I/O or other functions if EHXTEN set to 0.
|[4]     |LIRCEN    |Low Speed Internal Oscillator 38.4 kHz Enable
|        |          |0 = The low speed internal oscillator Disabled.
|        |          |1 = The low speed internal oscillator
|        |          |Enabled.
|        |          |Note that when (1)WDT is enabled, (2)WKT is running by the clock
|        |          |source of the internal 38.4 kHz oscillator ,(3) BOD is enabled, or
|        |          |(4)LVR filter is enabled, a write 0 to LIRCEN will be ignored. LIRCEN
|        |          |is always 1 and the internal 38.4 kHz oscillator is always enabled.
|[5]     |HIRCEN    |High-Speed Internal Oscillator 24 MHz Enable
|        |          |0 =
|        |          |The high-speed internal oscillator Disabled.
|        |          |1 =
|        |          |The high-speed internal oscillator Enabled.
|        |          |Note that once IAP is enabled by setting IAPEN (CHPCON.0), the high-
|        |          |speed internal 24 MHz oscillator will be enabled automatically. The
|        |          |hardware will also set HIRCEN and HIRCST bits. After IAPEN is cleared,
|        |          |HIRCEN and EHRCST resume the original values.
|[6]     |ELXTEN    |External Low-Speed Crystal/Resonator Enable
|        |          |1 = Low-speed external crystal/resonator 32.768 kHz Enabled.
|        |          |0 = Low-speed external crystal/resonator 32.768 kHz Disabled, P5.4 and
|        |          |P5.5 work as general purpose I/O or other functions.
|[7]     |EHXTEN    |External High-Speed Crystal/Resonator Enable
|        |          |1 = High-speed external crystal/resonator 4 MHz to 24 MHz Enabled.
|        |          |0 = High-speed external crystal/resonator 4 MHz to 24 MHz Disabled,
|        |          |P5.2 and P5.3 work as general purpose I/O or other functions if ECLKEN
|        |          |set to 0.
*/
__sfr __no_init volatile unsigned char CKEN @ 0x97;

/**
@addtogroup SFR_PAGE0_CKEN_MACRO Bit Macro Functions
Bit Macro Functions of CKEN
@{ */

#define set_CKEN_CKSWTF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x01; EA = BIT_TMP /*!<Set CKEN.CKSWTF                */
#define set_CKEN_MIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x02; EA = BIT_TMP /*!<Set CKEN.MIRCEN                */
#define set_CKEN_BIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x04; EA = BIT_TMP /*!<Set CKEN.BIRCEN                */
#define set_CKEN_ECLKEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x08; EA = BIT_TMP /*!<Set CKEN.ECLKEN                */
#define set_CKEN_LIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x10; EA = BIT_TMP /*!<Set CKEN.LIRCEN                */
#define set_CKEN_HIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x20; EA = BIT_TMP /*!<Set CKEN.HIRCEN                */
#define set_CKEN_ELXTEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x40; EA = BIT_TMP /*!<Set CKEN.ELXTEN                */
#define set_CKEN_EHXTEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN |= 0x80; EA = BIT_TMP /*!<Set CKEN.EHXTEN                */

#define clr_CKEN_CKSWTF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x01; EA = BIT_TMP /*!<Clear CKEN.CKSWTF              */
#define clr_CKEN_MIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x02; EA = BIT_TMP /*!<Clear CKEN.MIRCEN              */
#define clr_CKEN_BIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x04; EA = BIT_TMP /*!<Clear CKEN.BIRCEN              */
#define clr_CKEN_ECLKEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x08; EA = BIT_TMP /*!<Clear CKEN.ECLKEN              */
#define clr_CKEN_LIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x10; EA = BIT_TMP /*!<Clear CKEN.LIRCEN              */
#define clr_CKEN_HIRCEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x20; EA = BIT_TMP /*!<Clear CKEN.HIRCEN              */
#define clr_CKEN_ELXTEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x40; EA = BIT_TMP /*!<Clear CKEN.ELXTEN              */
#define clr_CKEN_EHXTEN          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CKEN &=~0x80; EA = BIT_TMP /*!<Clear CKEN.EHXTEN              */

/**@} end of SFR_PAGE0_CKEN_MACRO group */
/**@} end of SFR_PAGE0_CKEN group */

/**
   @addtogroup SFR_PAGE0_SCON SCON
   Special Function Register SCON
   @{ */

/**
@var SCON
Address: 98H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RI        |Receiving Interrupt Flag
|        |          |This flag is set via hardware when a data frame has been received by
|        |          |the serial port 0 after the 8th bit in Mode 0 or after sampling the
|        |          |stop bit in Mode 1, 2, or 3. SM2 bit as logic 1 has restriction for
|        |          |exception. When the serial port 0 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute to the serial port 0 interrupt service
|        |          |routine. This bit should be cleared manually via software.
|[1]     |TI        |Transmission Interrupt Flag
|        |          |This flag is set by hardware when a data frame has been transmitted by
|        |          |the serial port 0 after the 8th bit in Mode 0 or the last data bit in
|        |          |other modes. When the serial port 0 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute the serial port 0 interrupt service
|        |          |routine. This bit should be cleared manually via software.
|[2]     |RB8       |9th Received Bit
|        |          |The bit identifies the logic level of the 9th received bit in serial
|        |          |port 0 Mode 2 or 3. In Mode 1, RB8 is the logic level of the received
|        |          |stop bit. SM2 bit as logic 1 has restriction for exception. RB8 is not
|        |          |used in Mode 0.
|[3]     |TB8       |9th Transmitted Bit
|        |          |This bit defines the state of the 9th transmission bit in serial port
|        |          |0 Mode 2 or 3. It is not used in Mode 0 or 1.
|[4]     |REN       |Receiving Enable
|        |          |0 = Serial port 0 reception Disabled.
|        |          |1 = Serial port 0 reception Enabled in Mode 1,2, or 3. In Mode 0,
|        |          |reception is initiated by the condition REN = 1 and RI = 0.
|[5]     |SM2       |Multiprocessor Communication Mode Enable
|        |          |The function of this bit is dependent on the serial port 0 mode.
|        |          |Mode 0:
|        |          |This bit select the baud rate between FSYS/12 and FSYS/2.
|        |          |0 = The clock runs at FSYS/12 baud rate. It maintains standard
|        |          |8051compatibility.
|        |          |1 = The clock runs at FSYS/2 baud rate for faster serial
|        |          |communication.
|        |          |Mode 1:
|        |          |This bit checks valid stop bit.
|        |          |0 = Reception is always valid no matter the logic level of stop bit.
|        |          |1 = Reception is valid only when the received stop bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|        |          |Mode 2 or 3:
|        |          |For multiprocessor communication.
|        |          |0 = Reception is always valid no matter the logic level of the 9th
|        |          |bit.
|        |          |1 = Reception is valid only when the received 9th bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|[6]     |SM1       |Check with bit 7 description.
|[7]     |SM0_FE    |Serial Port Mode Select
|        |          |SMOD0 (PCON.6) = 0:
|        |          |See Table 6.91 Serial Port 0 Mode / baud rate
|        |          |Description for details.
|        |          |SMOD0 (PCON.6) = 1:
|        |          |SM0/FE bit is used as frame error (FE) status flag. It is cleared by
|        |          |software.
|        |          |0 = Frame error (FE) did not occur.
|        |          |1 = Frame error (FE) occurred and detected.
*/
__sfr __no_init volatile union
{
  unsigned char SCON; /* Serial Control */
  struct /* Serial Control */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } SCON_bit;
} @ 0x98;

/**
@addtogroup SFR_PAGE0_SCON_MACRO Bit Macro Functions
Bit Macro Functions of SCON
@{ */

#define set_SCON_RI              SCON |= 0x01 /*!<Set SCON.RI                    */
#define set_SCON_TI              SCON |= 0x02 /*!<Set SCON.TI                    */
#define set_SCON_RB8             SCON |= 0x04 /*!<Set SCON.RB8                   */
#define set_SCON_TB8             SCON |= 0x08 /*!<Set SCON.TB8                   */
#define set_SCON_REN             SCON |= 0x10 /*!<Set SCON.REN                   */
#define set_SCON_SM2             SCON |= 0x20 /*!<Set SCON.SM2                   */
#define set_SCON_SM1             SCON |= 0x40 /*!<Set SCON.SM1                   */
#define set_SCON_SM0_FE          SCON |= 0x80 /*!<Set SCON.SM0_FE                */

#define clr_SCON_RI              SCON &=~0x01 /*!<Clear SCON.RI                  */
#define clr_SCON_TI              SCON &=~0x02 /*!<Clear SCON.TI                  */
#define clr_SCON_RB8             SCON &=~0x04 /*!<Clear SCON.RB8                 */
#define clr_SCON_TB8             SCON &=~0x08 /*!<Clear SCON.TB8                 */
#define clr_SCON_REN             SCON &=~0x10 /*!<Clear SCON.REN                 */
#define clr_SCON_SM2             SCON &=~0x20 /*!<Clear SCON.SM2                 */
#define clr_SCON_SM1             SCON &=~0x40 /*!<Clear SCON.SM1                 */
#define clr_SCON_SM0_FE          SCON &=~0x80 /*!<Clear SCON.SM0_FE              */

/**@} end of SFR_PAGE0_SCON_MACRO group */
/**@} end of SFR_PAGE0_SCON group */

/**
   @addtogroup SFR_PAGE0_SBUF SBUF
   Special Function Register SBUF
   @{ */

/**
@var SBUF
Address: 99H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SBUF[7:0] |Serial Port 0 Data Buffer
|        |          |This byte actually consists two separate registers. One is the
|        |          |receiving resister, and the other is the transmitting buffer. When
|        |          |data is moved to SBUF, it goes to the transmitting buffer and is
|        |          |shifted for serial transmission. When data is moved from SBUF, it
|        |          |comes from the receiving register.
|        |          |The transmission is initiated through giving data to SBUF.
*/
__sfr __no_init volatile unsigned char SBUF @ 0x99;

/**@} end of SFR_PAGE0_SBUF group */

/**
   @addtogroup SFR_PAGE0_SBUF1 SBUF1
   Special Function Register SBUF1
   @{ */

/**
@var SBUF1
Address: 9AH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SBUF1[7:0]|Serial Port 1 Data Buffer
|        |          |This byte actually consists two separate registers. One is the
|        |          |receiving resister, and the other is the transmitting buffer. When
|        |          |data is moved to SBUF1, it goes to the transmitting buffer and is
|        |          |shifted for serial transmission. When data is moved from SBUF1, it
|        |          |comes from the receiving register.
|        |          |The transmission is initiated through giving data to SBUF1.
*/
__sfr __no_init volatile unsigned char SBUF1 @ 0x9A;

/**@} end of SFR_PAGE0_SBUF1 group */

/**
   @addtogroup SFR_PAGE0_EIE0 EIE0
   Special Function Register EIE0
   @{ */

/**
@var EIE0
Address: 9BH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EI2C0     |Enable I2C0 Interrupt
|        |          |0 = I2C interrupt Disabled.
|        |          |1 = I2C interrupt Enable. When interrupt generated SI (I2C0CON.3) or
|        |          |I2TOF (I2C0TOC.0) set 1.
|[1]     |EPI       |Enable Pin Interrupt
|        |          |0 = Pin interrupt Disabled.
|        |          |1 = Pin interrupt Enable. When interrupt generated PIF related bit set
|        |          |1.
|[2]     |ECAP      |Enable Input Capture Interrupt
|        |          |0 = Input capture interrupt Disabled.
|        |          |1 = Input capture interrupt Enable. When interrupt generated CAPF[2:0]
|        |          |(CAPCON0[2:0]) set 1.
|[3]     |EPWM0     |Enable PWM0 Interrupt
|        |          |0 = PWM interrupt Disabled.
|        |          |1 = PWM interrupt Enable. When interrupt generated PWMF (PWMnCON0.5)
|        |          |set 1.
|[4]     |EWDT      |Enable WDT Interrupt
|        |          |0 = WDT interrupt Disabled.
|        |          |1 = WDT interrupt Enable. When interrupt generated WDTF (WDCON.5) set
|        |          |1.
|[5]     |EFB0      |Enable Fault Brake Interrupt
|        |          |0 = Fault Brake interrupt Disabled.
|        |          |1 = Fault Brake interrupt Enable. When interrupt generated FBF
|        |          |(PWM0FBD.7) set 1.
|[6]     |ESPI0     |Enable SPI Interrupt
|        |          |0 = SPI interrupt Disabled.
|        |          |1 = SPI interrupt Enable. When interrupt generated SPIF (SPInSR.7),
|        |          |SPIOVF (SPInSR.5), or MODF (SPInSR.4) set 1 .
|[7]     |ET2       |Enable Timer 2 Interrupt
|        |          |0 = Timer 2 interrupt Disabled.
|        |          |1 = Timer 2 interrupt Enable. When interrupt generated, TF2 (T2CON.7)
|        |          |set 1
*/
__sfr __no_init volatile unsigned char EIE0 @ 0x9B;

/**
@addtogroup SFR_PAGE0_EIE0_MACRO Bit Macro Functions
Bit Macro Functions of EIE0
@{ */

#define set_EIE0_EI2C0           SFRS = 0; EIE0 |= 0x01 /*!<Set EIE0.EI2C0                 */
#define set_EIE0_EPI             SFRS = 0; EIE0 |= 0x02 /*!<Set EIE0.EPI                   */
#define set_EIE0_ECAP            SFRS = 0; EIE0 |= 0x04 /*!<Set EIE0.ECAP                  */
#define set_EIE0_EPWM0           SFRS = 0; EIE0 |= 0x08 /*!<Set EIE0.EPWM0                 */
#define set_EIE0_EWDT            SFRS = 0; EIE0 |= 0x10 /*!<Set EIE0.EWDT                  */
#define set_EIE0_EFB0            SFRS = 0; EIE0 |= 0x20 /*!<Set EIE0.EFB0                  */
#define set_EIE0_ESPI0           SFRS = 0; EIE0 |= 0x40 /*!<Set EIE0.ESPI0                 */
#define set_EIE0_ET2             SFRS = 0; EIE0 |= 0x80 /*!<Set EIE0.ET2                   */

#define clr_EIE0_EI2C0           SFRS = 0; EIE0 &=~0x01 /*!<Clear EIE0.EI2C0               */
#define clr_EIE0_EPI             SFRS = 0; EIE0 &=~0x02 /*!<Clear EIE0.EPI                 */
#define clr_EIE0_ECAP            SFRS = 0; EIE0 &=~0x04 /*!<Clear EIE0.ECAP                */
#define clr_EIE0_EPWM0           SFRS = 0; EIE0 &=~0x08 /*!<Clear EIE0.EPWM0               */
#define clr_EIE0_EWDT            SFRS = 0; EIE0 &=~0x10 /*!<Clear EIE0.EWDT                */
#define clr_EIE0_EFB0            SFRS = 0; EIE0 &=~0x20 /*!<Clear EIE0.EFB0                */
#define clr_EIE0_ESPI0           SFRS = 0; EIE0 &=~0x40 /*!<Clear EIE0.ESPI0               */
#define clr_EIE0_ET2             SFRS = 0; EIE0 &=~0x80 /*!<Clear EIE0.ET2                 */

/**@} end of SFR_PAGE0_EIE0_MACRO group */
/**@} end of SFR_PAGE0_EIE0 group */

/**
   @addtogroup SFR_PAGE0_EIE1 EIE1
   Special Function Register EIE1
   @{ */

/**
@var EIE1
Address: 9CH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ES1       |Enable Serial Port 1 Interrupt
|        |          |0 = Serial port 1 interrupt Disabled.
|        |          |1 = Serial port 1 interrupt Enable. When interrupt generated TI_1
|        |          |(S1CON.1) or RI_1 (S1CON.0) set 1.
|[1]     |ET3       |Enable Timer 3 Interrupt
|        |          |0 = Timer 3 interrupt Disabled.
|        |          |1 = Timer 3interrupt Enable. When interrupt generated TF3 (T3CON.4)
|        |          |set 1.
|[2]     |EWKT      |Enable WKT Interrupt
|        |          |0 = WKT interrupt Disabled.
|        |          |1 = WKT interrupt Enable. When interrupt generated WKTF (WKCON.4) set
|        |          |1.
|[3]     |EHFI      |Enable Hard Fault Interrupt
|        |          |0 = hard fault interrupt Disabled and hard fault reset is Enabled
|        |          |1 = hard fault interrupt Enable. When interrupt generated HFIF
|        |          |(AUXR0.4) set 1.
|[4]     |ESPI1     |Enable SPI1 Interrupt
|        |          |0 = SPI1 interrupt Disabled.
|        |          |1 = SPI1 interrupt Enable. When interrupt generated SPIF (SP2SR.7),
|        |          |MODF (SP2SR.4) or SPIOVF (SP2SR.5) set 1
|[5]     |EI2C1     |Enable I2C1 Interrupt
|        |          |0 = I2C1 interrupt Disabled.
|        |          |1 = I2C1 interrupt Enable. When interrupt generated SI (I2C1CON.3) or
|        |          |I2TOF (I2C1TOC.0) set 1.
|[6]     |EPWM123   |Enable PWM123 Interrupt
|        |          |0 = PWM1/2/3 interrupt Disabled.
|        |          |1 = PWM1/2/3 interrupt Enable. When interrupt generated PWMF
|        |          |(PWM1CON0.5) set 1.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char EIE1 @ 0x9C;

/**
@addtogroup SFR_PAGE0_EIE1_MACRO Bit Macro Functions
Bit Macro Functions of EIE1
@{ */

#define set_EIE1_ES1             SFRS = 0; EIE1 |= 0x01 /*!<Set EIE1.ES1                   */
#define set_EIE1_ET3             SFRS = 0; EIE1 |= 0x02 /*!<Set EIE1.ET3                   */
#define set_EIE1_EWKT            SFRS = 0; EIE1 |= 0x04 /*!<Set EIE1.EWKT                  */
#define set_EIE1_EHFI            SFRS = 0; EIE1 |= 0x08 /*!<Set EIE1.EHFI                  */
#define set_EIE1_ESPI1           SFRS = 0; EIE1 |= 0x10 /*!<Set EIE1.ESPI1                 */
#define set_EIE1_EI2C1           SFRS = 0; EIE1 |= 0x20 /*!<Set EIE1.EI2C1                 */
#define set_EIE1_EPWM123         SFRS = 0; EIE1 |= 0x40 /*!<Set EIE1.EPWM123               */

#define clr_EIE1_ES1             SFRS = 0; EIE1 &=~0x01 /*!<Clear EIE1.ES1                 */
#define clr_EIE1_ET3             SFRS = 0; EIE1 &=~0x02 /*!<Clear EIE1.ET3                 */
#define clr_EIE1_EWKT            SFRS = 0; EIE1 &=~0x04 /*!<Clear EIE1.EWKT                */
#define clr_EIE1_EHFI            SFRS = 0; EIE1 &=~0x08 /*!<Clear EIE1.EHFI                */
#define clr_EIE1_ESPI1           SFRS = 0; EIE1 &=~0x10 /*!<Clear EIE1.ESPI1               */
#define clr_EIE1_EI2C1           SFRS = 0; EIE1 &=~0x20 /*!<Clear EIE1.EI2C1               */
#define clr_EIE1_EPWM123         SFRS = 0; EIE1 &=~0x40 /*!<Clear EIE1.EPWM123             */

/**@} end of SFR_PAGE0_EIE1_MACRO group */
/**@} end of SFR_PAGE0_EIE1 group */

/**
   @addtogroup SFR_PAGE0_EIE1 EIE1
   Special Function Register EIE1
   @{ */

/**
@var EIE1
Address: 9CH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ES1       |Enable Serial Port 1 Interrupt
|        |          |0 = Serial port 1 interrupt Disabled.
|        |          |1 = Serial port 1Interrupt Enable. When interrupt generated TI_1
|        |          |(S1CON.1) or RI_1 (S1CON.0) set 1.
*/

/**
@addtogroup SFR_PAGE0_EIE1_MACRO Bit Macro Functions
Bit Macro Functions of EIE1
@{ */

#define set_EIE1_ES1             SFRS = 0; EIE1 |= 0x01 /*!<Set EIE1.ES1                   */

#define clr_EIE1_ES1             SFRS = 0; EIE1 &=~0x01 /*!<Clear EIE1.ES1                 */

/**@} end of SFR_PAGE0_EIE1_MACRO group */
/**@} end of SFR_PAGE0_EIE1 group */

/**
   @addtogroup SFR_PAGE0_CHPCON CHPCON
   Special Function Register CHPCON
   @{ */

/**
@var CHPCON
Address: 9FH, Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IAPEN     |IAP Enable
|        |          |0 = IAP function Disabled.
|        |          |1 = IAP function Enabled.
|        |          |Once enabling IAP function, the MIRC will be turned on for timing
|        |          |control. To clear IAPEN should always be the last instruction after
|        |          |IAP operation to stop internal oscillator if reducing power
|        |          |consumption is concerned.
|[1]     |BS        |Boot Select
|        |          |This bit defines from which block that MCU re-boots after all resets.
|        |          |0 = MCU will re-boot from APROM after all resets.
|        |          |1 = MCU will re-boot from LDROM after all resets.
|[5:2]   |Reserved  |Reserved
|[6]     |IAPFF     |IAP Fault Flag
|        |          |The hardware will set this bit after IAPGO (IAPTRG.0) is set if any of
|        |          |the following condition is met:
|        |          |(1) The accessing address is oversize.
|        |          |(2) IAPCN command is invalid.
|        |          |(3) IAP erases or programs updating un-enabled block.
|        |          |(4) IAP erasing or programming operates under VBOD while BOIAP
|        |          |(CONFIG2.5) remains un-programmed 1 with BODEN (BODCON0.7) as 1 and
|        |          |BORST (BODCON0.2) as 0.
|        |          |This bit should be cleared via software.
|[7]     |SWRST     |Software Reset
|        |          |To set this bit as logic 1 will cause a software reset. It will
|        |          |automatically be cleared via hardware after reset is finished.
*/
__sfr __no_init volatile unsigned char CHPCON @ 0x9F;

/**
@addtogroup SFR_PAGE0_CHPCON_MACRO Bit Macro Functions
Bit Macro Functions of CHPCON
@{ */

#define set_CHPCON_IAPEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON |= 0x01; EA = BIT_TMP /*!<Set CHPCON.IAPEN               */
#define set_CHPCON_BS            SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON |= 0x02; EA = BIT_TMP /*!<Set CHPCON.BS                  */
#define set_CHPCON_IAPFF         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON |= 0x40; EA = BIT_TMP /*!<Set CHPCON.IAPFF               */
#define set_CHPCON_SWRST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON |= 0x80; EA = BIT_TMP /*!<Set CHPCON.SWRST               */

#define clr_CHPCON_IAPEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON &=~0x01; EA = BIT_TMP /*!<Clear CHPCON.IAPEN             */
#define clr_CHPCON_BS            SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON &=~0x02; EA = BIT_TMP /*!<Clear CHPCON.BS                */
#define clr_CHPCON_IAPFF         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON &=~0x40; EA = BIT_TMP /*!<Clear CHPCON.IAPFF             */
#define clr_CHPCON_SWRST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON &=~0x80; EA = BIT_TMP /*!<Clear CHPCON.SWRST             */

/**@} end of SFR_PAGE0_CHPCON_MACRO group */
/**@} end of SFR_PAGE0_CHPCON group */

/**
   @addtogroup SFR_PAGE0_CHPCON CHPCON
   Special Function Register CHPCON
   @{ */

/**
@var CHPCON
Address: 9FH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7]     |SWRST     |Software Reset
|        |          |To set this bit as logic 1 will cause a software reset. It will
|        |          |automatically be cleared via hardware after reset is finished.
*/

/**
@addtogroup SFR_PAGE0_CHPCON_MACRO Bit Macro Functions
Bit Macro Functions of CHPCON
@{ */

#define set_CHPCON_SWRST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON |= 0x80; EA = BIT_TMP /*!<Set CHPCON.SWRST               */

#define clr_CHPCON_SWRST         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; CHPCON &=~0x80; EA = BIT_TMP /*!<Clear CHPCON.SWRST             */

/**@} end of SFR_PAGE0_CHPCON_MACRO group */
/**@} end of SFR_PAGE0_CHPCON group */

/**
   @addtogroup SFR_PAGE0_P2 P2
   Special Function Register P2
   @{ */

/**
@var P2
Address: A0H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[1]     |1         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[2]     |2         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[3]     |3         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[4]     |4         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[5]     |5         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
*/
__sfr __no_init volatile union
{
  unsigned char P2; /* Port 2 */
  struct /* Port 2 */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } P2_bit;
} @ 0xA0;

/**
@addtogroup SFR_PAGE0_P2_MACRO Bit Macro Functions
Bit Macro Functions of P2
@{ */

#define set_P2_0                 P2 |= 0x01 /*!<Set P2.0                       */
#define set_P2_1                 P2 |= 0x02 /*!<Set P2.1                       */
#define set_P2_2                 P2 |= 0x04 /*!<Set P2.2                       */
#define set_P2_3                 P2 |= 0x08 /*!<Set P2.3                       */
#define set_P2_4                 P2 |= 0x10 /*!<Set P2.4                       */
#define set_P2_5                 P2 |= 0x20 /*!<Set P2.5                       */

#define clr_P2_0                 P2 &=~0x01 /*!<Clear P2.0                     */
#define clr_P2_1                 P2 &=~0x02 /*!<Clear P2.1                     */
#define clr_P2_2                 P2 &=~0x04 /*!<Clear P2.2                     */
#define clr_P2_3                 P2 &=~0x08 /*!<Clear P2.3                     */
#define clr_P2_4                 P2 &=~0x10 /*!<Clear P2.4                     */
#define clr_P2_5                 P2 &=~0x20 /*!<Clear P2.5                     */

/**@} end of SFR_PAGE0_P2_MACRO group */
/**@} end of SFR_PAGE0_P2 group */

/**
   @addtogroup SFR_PAGE0_AUXR0 AUXR0
   Special Function Register AUXR0
   @{ */

/**
@var AUXR0
Address: A2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |DPS       |Data Pointer Select
|        |          |0 = Data pointer 0 (DPTR) is active by default.
|        |          |1 = Data pointer 1 (DPTR1) is active.
|        |          |After DPS switches the activated data pointer, the previous
|        |          |inactivated data pointer remains its original value unchanged.
|[1]     |0         |Reserved This bit is always read as 0.
|[2]     |LIBRF     |LIBROM Flag
|        |          |The LIBROM flag that can be set or cleared by user. via software.
|[3]     |GF2       |General Purpose Flag 2
|        |          |The general purpose flag that can be set or cleared by the user via
|        |          |software.
|[4]     |HFIF      |Hard Fault Interrupt Flag
|        |          |Once CPU fetches instruction address over Flash size while EHFI
|        |          |(EIE1.4)=1. MCU will be interrupt and this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
|[5]     |HFRF      |Hard Fault Reset Flag
|        |          |Once CPU fetches instruction address over Flash size while EHFI
|        |          |(EIE1.4)=0, MCU will reset and this bit will be set via hardware. It
|        |          |is recommended that the flag be cleared via software.
|        |          |Note: If MCU run in OCD debug mode and OCDEN = 0, Hard fault reset
|        |          |will disable. Only HFRF flag be asserted.
|[6]     |RSTPINF   |External Reset Flag
|        |          |When the MCU is reset by the external reset, this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
|[7]     |SWRF      |Software Reset Flag
|        |          |When the MCU is reset via software reset, this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
*/
__sfr __no_init volatile unsigned char AUXR0 @ 0xA2;

/**
@addtogroup SFR_PAGE0_AUXR0_MACRO Bit Macro Functions
Bit Macro Functions of AUXR0
@{ */

#define set_AUXR0_DPS            SFRS = 0; AUXR0 |= 0x01 /*!<Set AUXR0.DPS                  */
#define set_AUXR0_0              SFRS = 0; AUXR0 |= 0x02 /*!<Set AUXR0.0                    */
#define set_AUXR0_LIBRF          SFRS = 0; AUXR0 |= 0x04 /*!<Set AUXR0.LIBRF                */
#define set_AUXR0_GF2            SFRS = 0; AUXR0 |= 0x08 /*!<Set AUXR0.GF2                  */
#define set_AUXR0_HFIF           SFRS = 0; AUXR0 |= 0x10 /*!<Set AUXR0.HFIF                 */
#define set_AUXR0_HFRF           SFRS = 0; AUXR0 |= 0x20 /*!<Set AUXR0.HFRF                 */
#define set_AUXR0_RSTPINF        SFRS = 0; AUXR0 |= 0x40 /*!<Set AUXR0.RSTPINF              */
#define set_AUXR0_SWRF           SFRS = 0; AUXR0 |= 0x80 /*!<Set AUXR0.SWRF                 */

#define clr_AUXR0_DPS            SFRS = 0; AUXR0 &=~0x01 /*!<Clear AUXR0.DPS                */
#define clr_AUXR0_0              SFRS = 0; AUXR0 &=~0x02 /*!<Clear AUXR0.0                  */
#define clr_AUXR0_LIBRF          SFRS = 0; AUXR0 &=~0x04 /*!<Clear AUXR0.LIBRF              */
#define clr_AUXR0_GF2            SFRS = 0; AUXR0 &=~0x08 /*!<Clear AUXR0.GF2                */
#define clr_AUXR0_HFIF           SFRS = 0; AUXR0 &=~0x10 /*!<Clear AUXR0.HFIF               */
#define clr_AUXR0_HFRF           SFRS = 0; AUXR0 &=~0x20 /*!<Clear AUXR0.HFRF               */
#define clr_AUXR0_RSTPINF        SFRS = 0; AUXR0 &=~0x40 /*!<Clear AUXR0.RSTPINF            */
#define clr_AUXR0_SWRF           SFRS = 0; AUXR0 &=~0x80 /*!<Clear AUXR0.SWRF               */

/**@} end of SFR_PAGE0_AUXR0_MACRO group */
/**@} end of SFR_PAGE0_AUXR0 group */

/**
   @addtogroup SFR_PAGE0_AUXR0 AUXR0
   Special Function Register AUXR0
   @{ */

/**
@var AUXR0
Address: A2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7]     |SWRF      |Software Reset Flag
|        |          |When the MCU is reset via software reset, this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
*/

/**
@addtogroup SFR_PAGE0_AUXR0_MACRO Bit Macro Functions
Bit Macro Functions of AUXR0
@{ */

#define set_AUXR0_SWRF           SFRS = 0; AUXR0 |= 0x80 /*!<Set AUXR0.SWRF                 */

#define clr_AUXR0_SWRF           SFRS = 0; AUXR0 &=~0x80 /*!<Clear AUXR0.SWRF               */

/**@} end of SFR_PAGE0_AUXR0_MACRO group */
/**@} end of SFR_PAGE0_AUXR0 group */

/**
   @addtogroup SFR_PAGE0_BODCON0 BODCON0
   Special Function Register BODCON0
   @{ */

/**
@var BODCON0
Address: A3H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |BOS       |Brown-Out Status
|        |          |This bit indicates the VDD voltage level comparing with VBOD while BOD
|        |          |circuit is enabled. It keeps 0 if BOD is not enabled.
|        |          |0 = VDD voltage level is higher than VBOD or BOD is disabled.
|        |          |1 = VDD voltage level is lower than VBOD.
|        |          |Note that this bit is read-only.
|[1]     |BORF      |Brown-Out Reset Flag
|        |          |When the MCU is reset by brown-out event, this bit will be set via
|        |          |hardware. This flag is recommended to be cleared via software.
|[2]     |BORST     |Brown-Out Reset Enable
|        |          |This bit decides whether a brown-out reset is caused by a power drop
|        |          |below VBOD.
|        |          |0 = Brown-out reset when VDD drops below VBOD Disabled.
|        |          |1 = Brown-out reset when VDD drops below VBOD Enabled.
|[3]     |BOF       |Brown-Out Interrupt Flag
|        |          |This flag will be set as logic 1 via hardware after a VDD
|        |          |dropping below or rising above VBOD event occurs. If both EBOD (I.E.5)
|        |          |and EA (I.E.7) are set, a brown-out interrupt requirement will be
|        |          |generated. This bit should be cleared via software.
|[6:4]   |BOV[2:0]  |CONFIG Brown-Out Voltage Select
|        |          |111 = VBOD is 1.8V.
|        |          |110 = VBOD is 1.8V.
|        |          |101 = VBOD is 2.0V.
|        |          |100 = VBOD is 2.4V.
|        |          |011 = VBOD is 2.7V.
|        |          |010 = VBOD is 3.0V.
|        |          |001 = VBOD is 3.7V.
|        |          |000 = VBOD is 4.4V.
|[7]     |BODEN     |Brown-Out Detection Enable
|        |          |0 = Brown-out detection circuit ON.
|        |          |1 = Brown-out detection circuit OFF.
|        |          |Note that BOD output is not available until 2~3 LIRC clocks after
|        |          |enabling.
*/
__sfr __no_init volatile unsigned char BODCON0 @ 0xA3;

/**
@addtogroup SFR_PAGE0_BODCON0_MACRO Bit Macro Functions
Bit Macro Functions of BODCON0
@{ */

#define set_BODCON0_BOS          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 |= 0x01; EA = BIT_TMP /*!<Set BODCON0.BOS                */
#define set_BODCON0_BORF         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 |= 0x02; EA = BIT_TMP /*!<Set BODCON0.BORF               */
#define set_BODCON0_BORST        SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 |= 0x04; EA = BIT_TMP /*!<Set BODCON0.BORST              */
#define set_BODCON0_BOF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 |= 0x08; EA = BIT_TMP /*!<Set BODCON0.BOF                */

#define set_BODCON0_BODEN        SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 |= 0x80; EA = BIT_TMP /*!<Set BODCON0.BODEN              */

#define clr_BODCON0_BOS          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 &=~0x01; EA = BIT_TMP /*!<Clear BODCON0.BOS              */
#define clr_BODCON0_BORF         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 &=~0x02; EA = BIT_TMP /*!<Clear BODCON0.BORF             */
#define clr_BODCON0_BORST        SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 &=~0x04; EA = BIT_TMP /*!<Clear BODCON0.BORST            */
#define clr_BODCON0_BOF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 &=~0x08; EA = BIT_TMP /*!<Clear BODCON0.BOF              */

#define clr_BODCON0_BODEN        SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON0 &=~0x80; EA = BIT_TMP /*!<Clear BODCON0.BODEN            */

/**@} end of SFR_PAGE0_BODCON0_MACRO group */
/**@} end of SFR_PAGE0_BODCON0 group */

/**
   @addtogroup SFR_PAGE0_IAPTRG IAPTRG
   Special Function Register IAPTRG
   @{ */

/**
@var IAPTRG
Address: A4H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IAPGO     |IAP Go
|        |          |IAP begins by setting this bit as logic 1. After this instruction, the
|        |          |CPU holds the Program Counter (PC) and the IAP hardware automation
|        |          |takes over to control the progress. After IAP action completed, the
|        |          |Program Counter continues to run the following instruction. The IAPGO
|        |          |bit will be automatically cleared and always read as logic 0.
|        |          |Before triggering an IAP action, interrupts (if enabled) should be
|        |          |temporary disabled for hardware limitation.
|        |          |The program process should follows below.
|        |          |CLR EA
|        |          |MOV TA,#0AAH
|        |          |MOV TA,#55H
|        |          |ORL IAPTRG,#01H
|        |          |(SETB EA)
|[7:1]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char IAPTRG @ 0xA4;

/**
@addtogroup SFR_PAGE0_IAPTRG_MACRO Bit Macro Functions
Bit Macro Functions of IAPTRG
@{ */

#define set_IAPTRG_IAPGO         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPTRG |= 0x01; EA = BIT_TMP /*!<Set IAPTRG.IAPGO               */

#define set_IAPTRG_IAPGO_WDCLR   BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;WDCON|=0x40;TA=0xAA;TA=0x55;IAPTRG|=0x01;EA=BIT_TMP /*!<Set IAPTRG.IAPGO with WDT clear counter      */

/**@} end of SFR_PAGE0_IAPTRG_MACRO group */
/**@} end of SFR_PAGE0_IAPTRG group */

/**
   @addtogroup SFR_PAGE0_IAPUEN IAPUEN
   Special Function Register IAPUEN
   @{ */

/**
@var IAPUEN
Address: A5H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |APUEN     |APROM Updated Enable
|        |          |0 = Inhibit erasing or programming APROM by IAP.
|        |          |1 = Allow erasing or programming APROM by IAP.
|[1]     |LDUEN     |LDROM Updated Enable
|        |          |0 = Inhibit erasing or programming LDROM by IAP.
|        |          |1 = Allow erasing or programming LDROM by IAP.
|[2]     |CFUEN     |CONFIG Bytes Updated Enable
|        |          |0 = Inhibit erasing or programming CONFIG bytes by IAP.
|        |          |1 = Allow erasing or programming CONFIG bytes by IAP.
|[3]     |SPUEN     |SPROM Memory Space Updated Enable(TA Protected)
|        |          |0 = Inhibit erasing or programming SPRO Mbytes by IAP
|        |          |1 = Allow erasing or programming SPRO Mbytes by IAP.
|[4]     |SPMEN     |SPROM Memory Space Mapping Enable
|        |          |0 = CPU memory address 0xff80~0xffff is mapping to APROM memory
|        |          |1 = CPU memory address 0xff80~0xffff is mapping to SPROM memory
|[7:5]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char IAPUEN @ 0xA5;

/**
@addtogroup SFR_PAGE0_IAPUEN_MACRO Bit Macro Functions
Bit Macro Functions of IAPUEN
@{ */

#define set_IAPUEN_APUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN |= 0x01; EA = BIT_TMP /*!<Set IAPUEN.APUEN               */
#define set_IAPUEN_LDUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN |= 0x02; EA = BIT_TMP /*!<Set IAPUEN.LDUEN               */
#define set_IAPUEN_CFUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN |= 0x04; EA = BIT_TMP /*!<Set IAPUEN.CFUEN               */
#define set_IAPUEN_SPUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN |= 0x08; EA = BIT_TMP /*!<Set IAPUEN.SPUEN               */
#define set_IAPUEN_SPMEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN |= 0x10; EA = BIT_TMP /*!<Set IAPUEN.SPMEN               */

#define clr_IAPUEN_APUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN &=~0x01; EA = BIT_TMP /*!<Clear IAPUEN.APUEN             */
#define clr_IAPUEN_LDUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN &=~0x02; EA = BIT_TMP /*!<Clear IAPUEN.LDUEN             */
#define clr_IAPUEN_CFUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN &=~0x04; EA = BIT_TMP /*!<Clear IAPUEN.CFUEN             */
#define clr_IAPUEN_SPUEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN &=~0x08; EA = BIT_TMP /*!<Clear IAPUEN.SPUEN             */
#define clr_IAPUEN_SPMEN         SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; IAPUEN &=~0x10; EA = BIT_TMP /*!<Clear IAPUEN.SPMEN             */

/**@} end of SFR_PAGE0_IAPUEN_MACRO group */
/**@} end of SFR_PAGE0_IAPUEN group */

/**
   @addtogroup SFR_PAGE0_IAPAL IAPAL
   Special Function Register IAPAL
   @{ */

/**
@var IAPAL
Address: A6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |IAPA[7:0] |IAP Address Low Byte
|        |          |IAPAL contains address IAPA[7:0] for IAP operations.
*/
__sfr __no_init volatile unsigned char IAPAL @ 0xA6;

/**@} end of SFR_PAGE0_IAPAL group */

/**
   @addtogroup SFR_PAGE0_IAPAH IAPAH
   Special Function Register IAPAH
   @{ */

/**
@var IAPAH
Address: A7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |IAPA[15:8]|IAP Address High Byte
|        |          |IAPAH contains address IAPA[15:8] for IAP operations.
*/
__sfr __no_init volatile unsigned char IAPAH @ 0xA7;

/**@} end of SFR_PAGE0_IAPAH group */

/**
   @addtogroup SFR_PAGE0_IE IE
   Special Function Register IE
   @{ */

/**
@var IE
Address: A8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EX0       |Enable External Interrupt 0
|        |          |0 = External interrupt 0 Disabled.
|        |          |1 = External interrupt 0 interrupt Enable. When interrupt generated
|        |          |INT0 pin set 1.
|[1]     |ET0       |Enable Timer 0 Interrupt
|        |          |0 = Timer 0 interrupt Disabled.
|        |          |1 = Timer 0 interrupt Enable. When interrupt generated TF0 (TCON.5)
|        |          |set 1.
|[2]     |EX1       |Enable External Interrupt 1
|        |          |0 = External interrupt 1 Disabled.
|        |          |1 = External interrupt 1 interrupt Enable. When interrupt generated
|        |          |INT1 pin set 1.
|[3]     |ET1       |Enable Timer 1 Interrupt
|        |          |0 = Timer 1 interrupt Disabled.
|        |          |1 = Timer 1 interrupt Enable. When interrupt generated TF1 (TCON.7)
|        |          |set 1.
|[4]     |ES        |Enable Serial Port 0 Interrupt
|        |          |0 = Serial port 0 interrupt Disabled.
|        |          |1 = Serial port 0 interrupt Enable. When interrupt generated TI
|        |          |(SCON.1) or RI (SCON.0) set 1.
|[5]     |EBOD      |Enable Brown-Out Interrupt
|        |          |0 = Brown-out detection interrupt Disabled.
|        |          |1 = Brown-out detection interrupt Enable. When interrupt generated BOF
|        |          |(BODCON0.3) set 1.
|[6]     |EADC      |Enable ADC Interrupt
|        |          |0 = ADC interrupt Disabled.
|        |          |1 = ADC interrupt Enable. When interrupt generated ADCF (ADCCON0.7)
|        |          |set 1.
|[7]     |EA        |Enable All Interrupt
|        |          |This bit globally enables/disables all interrupts that are
|        |          |individually enabled.
|        |          |0 = All interrupt sources Disabled.
|        |          |1 = Each interrupt Enabled depending on its individual mask setting.
|        |          |Individual interrupts will occur if enabled.
*/
__sfr __no_init volatile union
{
  unsigned char IE; /* Interrupt Enable */
  struct /* Interrupt Enable */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } IE_bit;
} @ 0xA8;

/**
@addtogroup SFR_PAGE0_IE_MACRO Bit Macro Functions
Bit Macro Functions of IE
@{ */

#define set_IE_EX0               IE |= 0x01 /*!<Set IE.EX0                     */
#define set_IE_ET0               IE |= 0x02 /*!<Set IE.ET0                     */
#define set_IE_EX1               IE |= 0x04 /*!<Set IE.EX1                     */
#define set_IE_ET1               IE |= 0x08 /*!<Set IE.ET1                     */
#define set_IE_ES                IE |= 0x10 /*!<Set IE.ES                      */
#define set_IE_EBOD              IE |= 0x20 /*!<Set IE.EBOD                    */
#define set_IE_EADC              IE |= 0x40 /*!<Set IE.EADC                    */
#define set_IE_EA                IE |= 0x80 /*!<Set IE.EA                      */

#define clr_IE_EX0               IE &=~0x01 /*!<Clear IE.EX0                   */
#define clr_IE_ET0               IE &=~0x02 /*!<Clear IE.ET0                   */
#define clr_IE_EX1               IE &=~0x04 /*!<Clear IE.EX1                   */
#define clr_IE_ET1               IE &=~0x08 /*!<Clear IE.ET1                   */
#define clr_IE_ES                IE &=~0x10 /*!<Clear IE.ES                    */
#define clr_IE_EBOD              IE &=~0x20 /*!<Clear IE.EBOD                  */
#define clr_IE_EADC              IE &=~0x40 /*!<Clear IE.EADC                  */
#define clr_IE_EA                IE &=~0x80 /*!<Clear IE.EA                    */

/**@} end of SFR_PAGE0_IE_MACRO group */
/**@} end of SFR_PAGE0_IE group */

/**
   @addtogroup SFR_PAGE0_IE IE
   Special Function Register IE
   @{ */

/**
@var IE
Address: A8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[4]     |ES        |Enable Serial Port 0 Interrupt
|        |          |0 = Serial port 0 interrupt Disabled.
|        |          |1 = Interrupt generated by TI (SCON.1) or RI (SCON.0) Enabled.
*/

/**
@addtogroup SFR_PAGE0_IE_MACRO Bit Macro Functions
Bit Macro Functions of IE
@{ */

#define set_IE_ES                IE |= 0x10 /*!<Set IE.ES                      */

#define clr_IE_ES                IE &=~0x10 /*!<Clear IE.ES                    */

/**@} end of SFR_PAGE0_IE_MACRO group */
/**@} end of SFR_PAGE0_IE group */

/**
   @addtogroup SFR_PAGE0_SADDR0 SADDR0
   Special Function Register SADDR0
   @{ */

/**
@var SADDR0
Address: A9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADDR0[7:0]|Slave 0 Address
|        |          |This byte specifies the microcontroller’s own slave address for UATR0
|        |          |multi-processor communication.
*/
__sfr __no_init volatile unsigned char SADDR0 @ 0xA9;

/**@} end of SFR_PAGE0_SADDR0 group */

/**
   @addtogroup SFR_PAGE0_WDCON WDCON
   Special Function Register WDCON
   @{ */

/**
@var WDCON
Address: AAH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3]     |WDTRF     |WDT Reset Flag
|        |          |When the CPU is reset by WDT time-out event, this bit will be set via
|        |          |hardware. This flag is recommended to be cleared via software after
|        |          |reset.
*/
__sfr __no_init volatile unsigned char WDCON @ 0xAA;

/**
@addtogroup SFR_PAGE0_WDCON_MACRO Bit Macro Functions
Bit Macro Functions of WDCON
@{ */

#define set_WDCON_WDTRF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON |= 0x08; EA = BIT_TMP /*!<Set WDCON.WDTRF                */

#define clr_WDCON_WDTRF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON &=~0x08; EA = BIT_TMP /*!<Clear WDCON.WDTRF              */

/**@} end of SFR_PAGE0_WDCON_MACRO group */
/**@} end of SFR_PAGE0_WDCON group */

/**
   @addtogroup SFR_PAGE0_WDCON WDCON
   Special Function Register WDCON
   @{ */

/**
@var WDCON
Address: AAH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |WDPS[2:0] |WDT Clock Pre-Scalar Select
|        |          |These bits determine the pre-scale of WDT clock from 1/1 through
|        |          |1/256. SeeTable 6.61 Watchdog Timer-out Interval Under Different Pre-
|        |          |scalars. The default is the maximum pre-scale value.
|[3]     |WDTRF     |WDT Reset Flag
|        |          |When the CPU is reset by WDT time-out event, this bit will be set via
|        |          |hardware. This flag is recommended to be cleared via software after
|        |          |reset.
|[4]     |WIDPD     |WDT Running in Idle or Power-Down Mode
|        |          |This bit is valid only when control bits in WDTEN[3:0] (CONFIG4[7:4])
|        |          |are all 1. It decides whether WDT runs in Idle or Power-down mode when
|        |          |WDT works as a general purpose timer.
|        |          |0 = WDT stops running during Idle or Power-down mode.
|        |          |1 = WDT keeps running during Idle or Power-down mode.
|[5]     |WDTF      |WDT Time-Out Flag
|        |          |This bit indicates an overflow of WDT counter. This flag should be
|        |          |cleared by software.
|[6]     |WDCLR     |WDT Clear
|        |          |Setting this bit will reset the WDT count to 00H. It puts the counter
|        |          |in a known state and prohibit the system from unpredictable reset. The
|        |          |meaning of writing and reading WDCLR bit is different.
|        |          |Writing:
|        |          |0 = No effect.
|        |          |1 = Clearing WDT counter.
|        |          |Reading:
|        |          |0 = WDT counter is completely cleared.
|        |          |1 = WDT counter is not yet cleared.
|[7]     |WDTR      |WDT Run
|        |          |This bit is valid only when control bits in WDTEN[3:0] (CONFIG4[7:4])
|        |          |are all 1. At this time, WDT works as a general purpose timer.
|        |          |0 = WDT Disabled.
|        |          |1 = WDT Enabled. The WDT counter starts running.
*/

/**
@addtogroup SFR_PAGE0_WDCON_MACRO Bit Macro Functions
Bit Macro Functions of WDCON
@{ */


#define set_WDCON_WDTRF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON |= 0x08; EA = BIT_TMP /*!<Set WDCON.WDTRF                */
#define set_WDCON_WIDPD          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON |= 0x10; EA = BIT_TMP /*!<Set WDCON.WIDPD                */
#define set_WDCON_WDTF           SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON |= 0x20; EA = BIT_TMP /*!<Set WDCON.WDTF                 */
#define set_WDCON_WDCLR          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON |= 0x40; EA = BIT_TMP /*!<Set WDCON.WDCLR                */
#define set_WDCON_WDTR           SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON |= 0x80; EA = BIT_TMP /*!<Set WDCON.WDTR                 */


#define clr_WDCON_WDTRF          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON &=~0x08; EA = BIT_TMP /*!<Clear WDCON.WDTRF              */
#define clr_WDCON_WIDPD          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON &=~0x10; EA = BIT_TMP /*!<Clear WDCON.WIDPD              */
#define clr_WDCON_WDTF           SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON &=~0x20; EA = BIT_TMP /*!<Clear WDCON.WDTF               */
#define clr_WDCON_WDCLR          SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON &=~0x40; EA = BIT_TMP /*!<Clear WDCON.WDCLR              */
#define clr_WDCON_WDTR           SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON &=~0x80; EA = BIT_TMP /*!<Clear WDCON.WDTR               */

/**@} end of SFR_PAGE0_WDCON_MACRO group */
/**@} end of SFR_PAGE0_WDCON group */

/**
   @addtogroup SFR_PAGE3_WDCON1 WDCON1
   Special Function Register WDCON1
   @{ */

/**
@var WDCON
Address: AAH, Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |WDPS[3]   |WDT Clock Pre-Scalar Select
|        |          |These bits determine the pre-scale of WDT clock from 1/1 through
|        |          |1/2048. SeeError! Reference source not found.
|        |          |The default is the maximum pre-scale value.
|[7:1]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char WDCON1 @ 0x99;

/**
@addtogroup SFR_PAGE0_WDCON_MACRO Bit Macro Functions
Bit Macro Functions of WDCON
@{ */

#define set_WDCON1_WDPS_3        SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON1 |= 0x01; EA = BIT_TMP /*!<Set WDCON1.WDPS[3]              */

#define clr_WDCON1_WDPS_3        SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; WDCON1 &=~0x01; EA = BIT_TMP /*!<Clear WDCON1.WDPS[3]            */

/**@} end of SFR_PAGE0_WDCON_MACRO group */
/**@} end of SFR_PAGE0_WDCON group */

/**
   @addtogroup SFR_PAGE0_BODCON1 BODCON1
   Special Function Register BODCON1
   @{ */

/**
@var BODCON1
Address: ABH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |BODFLT    |BOD Filter Control
|        |          |BOD has a filter which counts 32 clocks of FSYS to filter the power
|        |          |noise when MCU runs with MIRC as the system clock and BOD does not
|        |          |operates in its low power mode (LPBOD[1:0] = [0, 0]). In other
|        |          |conditions, the filter counts 2 clocks of LIRC.
|        |          |Note that when CPU is halted in Power-down mode. The BOD output is
|        |          |permanently filtered by 2 clocks of LIRC.
|        |          |The BOD filter avoids the power noise to trigger BOD event. This bit
|        |          |controls BOD filter enabled or disabled.
|        |          |0 = BOD filter Disabled.
|        |          |1 = BOD filter Enabled. (Power-on reset default value.)
|[2:1]   |LPBOD[1:0]|Low Power BOD Enable
|        |          |00 = BOD normal mode. BOD circuit is always enabled.
|        |          |01 = BOD low power mode 1 by turning on BOD circuit every 1.6 ms
|        |          |periodically.
|        |          |10 = BOD low power mode 2 by turning on BOD circuit every 6.4 ms
|        |          |periodically.
|        |          |11 = BOD low power mode 3 by turning on BOD circuit every 25.6 ms
|        |          |periodically.
|[7:3]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char BODCON1 @ 0xAB;

/**
@addtogroup SFR_PAGE0_BODCON1_MACRO Bit Macro Functions
Bit Macro Functions of BODCON1
@{ */

#define set_BODCON1_BODFLT       SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON1 |= 0x01; EA = BIT_TMP /*!<Set BODCON1.BODFLT             */


#define clr_BODCON1_BODFLT       SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; BODCON1 &=~0x01; EA = BIT_TMP /*!<Clear BODCON1.BODFLT           */


/**@} end of SFR_PAGE0_BODCON1_MACRO group */
/**@} end of SFR_PAGE0_BODCON1 group */

/**
   @addtogroup SFR_PAGE0_EIP2 EIP2
   Special Function Register EIP2
   @{ */

/**
@var EIP2
Address: ACH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PACMP     |ACMP interrupt priority low bit
|[1]     |PI2C1     |I2C interrupt priority low bit
|[2]     |PPWM1     |PPWM1 interrupt priority low bit
|[3]     |TK        |Touch Key interrupt priority low bit
|[4]     |SMC1      |SMC1 interrupt priority low bit
|[5]     |PDMA2     |PDMA2 interrupt priority low bit
|[6]     |PDMA3     |PDMA3 interrupt priority low bit
|[7]     |RTC       |RTC interrupt priority low bit
*/
__sfr __no_init volatile unsigned char EIP2 @ 0xAC;

/**
@addtogroup SFR_PAGE0_EIP2_MACRO Bit Macro Functions
Bit Macro Functions of EIP2
@{ */

#define set_EIP2_PACMP           SFRS = 0; EIP2 |= 0x01 /*!<Set EIP2.PACMP                 */
#define set_EIP2_PI2C1           SFRS = 0; EIP2 |= 0x02 /*!<Set EIP2.PI2C1                 */
#define set_EIP2_PPWM1           SFRS = 0; EIP2 |= 0x04 /*!<Set EIP2.PPWM1                 */
#define set_EIP2_TK              SFRS = 0; EIP2 |= 0x08 /*!<Set EIP2.TK                    */
#define set_EIP2_SMC1            SFRS = 0; EIP2 |= 0x10 /*!<Set EIP2.SMC1                  */
#define set_EIP2_PDMA2           SFRS = 0; EIP2 |= 0x20 /*!<Set EIP2.PDMA2                 */
#define set_EIP2_PDMA3           SFRS = 0; EIP2 |= 0x40 /*!<Set EIP2.PDMA3                 */
#define set_EIP2_RTC             SFRS = 0; EIP2 |= 0x80 /*!<Set EIP2.RTC                   */

#define clr_EIP2_PACMP           SFRS = 0; EIP2 &=~0x01 /*!<Clear EIP2.PACMP               */
#define clr_EIP2_PI2C1           SFRS = 0; EIP2 &=~0x02 /*!<Clear EIP2.PI2C1               */
#define clr_EIP2_PPWM1           SFRS = 0; EIP2 &=~0x04 /*!<Clear EIP2.PPWM1               */
#define clr_EIP2_TK              SFRS = 0; EIP2 &=~0x08 /*!<Clear EIP2.TK                  */
#define clr_EIP2_SMC1            SFRS = 0; EIP2 &=~0x10 /*!<Clear EIP2.SMC1                */
#define clr_EIP2_PDMA2           SFRS = 0; EIP2 &=~0x20 /*!<Clear EIP2.PDMA2               */
#define clr_EIP2_PDMA3           SFRS = 0; EIP2 &=~0x40 /*!<Clear EIP2.PDMA3               */
#define clr_EIP2_RTC             SFRS = 0; EIP2 &=~0x80 /*!<Clear EIP2.RTC                 */

/**@} end of SFR_PAGE0_EIP2_MACRO group */
/**@} end of SFR_PAGE0_EIP2 group */

/**
   @addtogroup SFR_PAGE0_EIPH2 EIPH2
   Special Function Register EIPH2
   @{ */

/**
@var EIPH2
Address: ADH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PACMPH    |ACMP interrupt priority high bit
|[1]     |PI2C1H    |I2C interrupt priority high bit
|[2]     |PPWM1H    |PPWM1H interrupt priority high bit
|[3]     |TKH       |Touch Key interrupt priority high bit
|[4]     |SMC1H     |SMC1H interrupt priority high bit
|[5]     |PDMA2H    |PDMA2H interrupt priority high bit
|[6]     |PDMA3H    |PDMA3H interrupt priority high bit
|[7]     |RTCH      |RTCH interrupt priority high bit
*/
__sfr __no_init volatile unsigned char EIPH2 @ 0xAD;

/**
@addtogroup SFR_PAGE0_EIPH2_MACRO Bit Macro Functions
Bit Macro Functions of EIPH2
@{ */

#define set_EIPH2_PACMPH         SFRS = 0; EIPH2 |= 0x01 /*!<Set EIPH2.PACMPH               */
#define set_EIPH2_PI2C1H         SFRS = 0; EIPH2 |= 0x02 /*!<Set EIPH2.PI2C1H               */
#define set_EIPH2_PPWM1H         SFRS = 0; EIPH2 |= 0x04 /*!<Set EIPH2.PPWM1H               */
#define set_EIPH2_TKH            SFRS = 0; EIPH2 |= 0x08 /*!<Set EIPH2.TKH                  */
#define set_EIPH2_SMC1H          SFRS = 0; EIPH2 |= 0x10 /*!<Set EIPH2.SMC1H                */
#define set_EIPH2_PDMA2H         SFRS = 0; EIPH2 |= 0x20 /*!<Set EIPH2.PDMA2H               */
#define set_EIPH2_PDMA3H         SFRS = 0; EIPH2 |= 0x40 /*!<Set EIPH2.PDMA3H               */
#define set_EIPH2_RTCH           SFRS = 0; EIPH2 |= 0x80 /*!<Set EIPH2.RTCH                 */

#define clr_EIPH2_PACMPH         SFRS = 0; EIPH2 &=~0x01 /*!<Clear EIPH2.PACMPH             */
#define clr_EIPH2_PI2C1H         SFRS = 0; EIPH2 &=~0x02 /*!<Clear EIPH2.PI2C1H             */
#define clr_EIPH2_PPWM1H         SFRS = 0; EIPH2 &=~0x04 /*!<Clear EIPH2.PPWM1H             */
#define clr_EIPH2_TKH            SFRS = 0; EIPH2 &=~0x08 /*!<Clear EIPH2.TKH                */
#define clr_EIPH2_SMC1H          SFRS = 0; EIPH2 &=~0x10 /*!<Clear EIPH2.SMC1H              */
#define clr_EIPH2_PDMA2H         SFRS = 0; EIPH2 &=~0x20 /*!<Clear EIPH2.PDMA2H             */
#define clr_EIPH2_PDMA3H         SFRS = 0; EIPH2 &=~0x40 /*!<Clear EIPH2.PDMA3H             */
#define clr_EIPH2_RTCH           SFRS = 0; EIPH2 &=~0x80 /*!<Clear EIPH2.RTCH               */

/**@} end of SFR_PAGE0_EIPH2_MACRO group */
/**@} end of SFR_PAGE0_EIPH2 group */

/**
   @addtogroup SFR_PAGE0_IAPFD IAPFD
   Special Function Register IAPFD
   @{ */

/**
@var IAPFD
Address: AEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |IAPFD[7:0]|IAP Flash Data
|        |          |This byte contains Flash data, which is read from or is going to be
|        |          |written to the Flash Memory. User should write data into IAPFD for
|        |          |program mode before triggering IAP processing and read data from IAPFD
|        |          |for read/verify mode after IAP processing is finished.
*/
__sfr __no_init volatile unsigned char IAPFD @ 0xAE;

/**@} end of SFR_PAGE0_IAPFD group */

/**
   @addtogroup SFR_PAGE0_IAPCN IAPCN
   Special Function Register IAPCN
   @{ */

/**
@var IAPCN
Address: AFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |FCTRL[3:0]|This Byte is Used for IAP Command. For details, see Figure 6.31 IAP Modes and Command Codes.
|[4]     |FCEN      |This Byte is Used for IAP Command. For details, see Figure 6.31 IAP Modes and Command Codes.
|[5]     |FOEN      |This Byte is Used for IAP Command. For details, see Figure 6.31 IAP Modes and Command Codes.
|[7:6]   |IAPB[1:0] |IAP Control
|        |          |This byte is used for IAP command. For details, see Figure 6.31 IAP
|        |          |Modes and Command Codes.
*/
__sfr __no_init volatile unsigned char IAPCN @ 0xAF;

/**
@addtogroup SFR_PAGE0_IAPCN_MACRO Bit Macro Functions
Bit Macro Functions of IAPCN
@{ */


#define set_IAPCN_FCEN           SFRS = 0; IAPCN |= 0x10 /*!<Set IAPCN.FCEN                 */
#define set_IAPCN_FOEN           SFRS = 0; IAPCN |= 0x20 /*!<Set IAPCN.FOEN                 */



#define clr_IAPCN_FCEN           SFRS = 0; IAPCN &=~0x10 /*!<Clear IAPCN.FCEN               */
#define clr_IAPCN_FOEN           SFRS = 0; IAPCN &=~0x20 /*!<Clear IAPCN.FOEN               */


/**@} end of SFR_PAGE0_IAPCN_MACRO group */
/**@} end of SFR_PAGE0_IAPCN group */

/**
   @addtogroup SFR_PAGE0_P3 P3
   Special Function Register P3
   @{ */

/**
@var P3
Address: B0H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
|[1]     |1         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
|[2]     |2         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
|[3]     |3         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
*/
__sfr __no_init volatile union
{
  unsigned char P3; /* Port 3 */
  struct /* Port 3 */
  { 
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } P3_bit;
} @ 0xB0;/**
@addtogroup SFR_PAGE0_P3_MACRO Bit Macro Functions
Bit Macro Functions of P3
@{ */

#define set_P3_0                 P3 |= 0x01 /*!<Set P3.0                       */
#define set_P3_1                 P3 |= 0x02 /*!<Set P3.1                       */
#define set_P3_2                 P3 |= 0x04 /*!<Set P3.2                       */
#define set_P3_3                 P3 |= 0x08 /*!<Set P3.3                       */

#define clr_P3_0                 P3 &=~0x01 /*!<Clear P3.0                     */
#define clr_P3_1                 P3 &=~0x02 /*!<Clear P3.1                     */
#define clr_P3_2                 P3 &=~0x04 /*!<Clear P3.2                     */
#define clr_P3_3                 P3 &=~0x08 /*!<Clear P3.3                     */

/**@} end of SFR_PAGE0_P3_MACRO group */
/**@} end of SFR_PAGE0_P3 group */

/**
   @addtogroup SFR_PAGE0_P5 P5
   Special Function Register P5
   @{ */

/**
@var P5
Address: B1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[1]     |1         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[2]     |2         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[3]     |3         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[4]     |4         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[5]     |5         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
*/
__sfr __no_init volatile unsigned char P5 @ 0xB1;

/**
@addtogroup SFR_PAGE0_P5_MACRO Bit Macro Functions
Bit Macro Functions of P5
@{ */

#define set_P5_0                 SFRS = 0; P5 |= 0x01 /*!<Set P5.0                       */
#define set_P5_1                 SFRS = 0; P5 |= 0x02 /*!<Set P5.1                       */
#define set_P5_2                 SFRS = 0; P5 |= 0x04 /*!<Set P5.2                       */
#define set_P5_3                 SFRS = 0; P5 |= 0x08 /*!<Set P5.3                       */
#define set_P5_4                 SFRS = 0; P5 |= 0x10 /*!<Set P5.4                       */
#define set_P5_5                 SFRS = 0; P5 |= 0x20 /*!<Set P5.5                       */

#define clr_P5_0                 SFRS = 0; P5 &=~0x01 /*!<Clear P5.0                     */
#define clr_P5_1                 SFRS = 0; P5 &=~0x02 /*!<Clear P5.1                     */
#define clr_P5_2                 SFRS = 0; P5 &=~0x04 /*!<Clear P5.2                     */
#define clr_P5_3                 SFRS = 0; P5 &=~0x08 /*!<Clear P5.3                     */
#define clr_P5_4                 SFRS = 0; P5 &=~0x10 /*!<Clear P5.4                     */
#define clr_P5_5                 SFRS = 0; P5 &=~0x20 /*!<Clear P5.5                     */

/**@} end of SFR_PAGE0_P5_MACRO group */
/**@} end of SFR_PAGE0_P5 group */

/**
   @addtogroup SFR_PAGE0_I2C1ADDR0 I2C1ADDR0
   Special Function Register I2C1ADDR0
   @{ */

/**
@var I2C1ADDR0
Address: B2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C1ADDR0 @ 0xB2;

/**
@addtogroup SFR_PAGE0_I2C1ADDR0_MACRO Bit Macro Functions
Bit Macro Functions of I2C1ADDR0
@{ */

#define set_I2C1ADDR0_GC         SFRS = 0; I2C1ADDR0 |= 0x01 /*!<Set I2C1ADDR0.GC               */


#define clr_I2C1ADDR0_GC         SFRS = 0; I2C1ADDR0 &=~0x01 /*!<Clear I2C1ADDR0.GC             */


/**@} end of SFR_PAGE0_I2C1ADDR0_MACRO group */
/**@} end of SFR_PAGE0_I2C1ADDR0 group */

/**
   @addtogroup SFR_PAGE0_I2C1DAT I2C1DAT
   Special Function Register I2C1DAT
   @{ */

/**
@var I2C1DAT
Address: B3H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CDAT[7:0]|I2Cn Data
|        |          |I2CnDAT contains a byte of the I2C data to be transmitted or a byte,
|        |          |which has just received. Data in I2CnDAT remains as long as SI is
|        |          |logic 1. The result of reading or writing I2CnDAT during I2C
|        |          |transceiver progress is unpredicted.
|        |          |While data in I2CnDAT is shifted out, data on the bus is
|        |          |simultaneously being shifted in to update I2CnDAT. I2CnDAT always
|        |          |shows the last byte that presented on the I2C bus. Thus the event of
|        |          |lost arbitration, the original value of I2CnDAT changes after the
|        |          |transaction.
*/
__sfr __no_init volatile unsigned char I2C1DAT @ 0xB3;

/**@} end of SFR_PAGE0_I2C1DAT group */

/**
   @addtogroup SFR_PAGE0_I2C1STAT I2C1STAT
   Special Function Register I2C1STAT
   @{ */

/**
@var I2C1STAT
Address: B4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |0         |Reserved
|        |          |The least significant three bits of I2CnSTAT are always read as 0.
|[7:3]   |I2CSTAT[7:3]|I2Cn Status Code
|        |          |The MSB five bits of I2CnSTAT contains the status code. There are 27
|        |          |possible status codes. When I2CnSTAT is F8H, no relevant state
|        |          |information is available and SI flag keeps 0. All other 26 status
|        |          |codes correspond to the I2C states. When each of these status is
|        |          |entered, SI will be set as logic 1 and a interrupt is requested.
*/
__sfr __no_init volatile unsigned char I2C1STAT @ 0xB4;

/**@} end of SFR_PAGE0_I2C1STAT group */

/**
   @addtogroup SFR_PAGE0_I2C1CLK I2C1CLK
   Special Function Register I2C1CLK
   @{ */

/**
@var I2C1CLK
Address: B5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CCLK[7:0]|I2Cn Clock Setting
|        |          |In master mode:
|        |          |This register determines the clock rate of I2C bus when the device is
|        |          |in a master mode. The clock rate follows the equation,
|        |          |.
|        |          |Note that the I2CnCLK value of 00H and 01H are not valid. This is an
|        |          |implement limitation.
|        |          |In slave mode:
|        |          |This byte has no effect. In slave mode, the I2C device will
|        |          |automatically synchronize with any given clock rate up to 400k bps.
*/
__sfr __no_init volatile unsigned char I2C1CLK @ 0xB5;

/**@} end of SFR_PAGE0_I2C1CLK group */

/**
   @addtogroup SFR_PAGE0_I2C1TOC I2C1TOC
   Special Function Register I2C1TOC
   @{ */

/**
@var I2C1TOC
Address: B6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |DIV       |I2C0 Time-Out Counter Clock Divider
|        |          |0 = The clock of I2C time-out counter is FSYS/1.
|        |          |1 = The clock of I2C time-out counter is FSYS/4.
|[2]     |I2TOCEN   |I2C0 Time-Out Counter Enable
|        |          |0 = I2C time-out counter Disabled.
|        |          |1 = I2C time-out counter Enabled.
|[7:3]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char I2C1TOC @ 0xB6;

/**
@addtogroup SFR_PAGE0_I2C1TOC_MACRO Bit Macro Functions
Bit Macro Functions of I2C1TOC
@{ */
#define set_I2C1TOC_I2TOF        SFRS = 0; I2C1TOC |= 0x01 /*!<Set I2C1TOC.I2TOF              */
#define set_I2C1TOC_DIV          SFRS = 0; I2C1TOC |= 0x02 /*!<Set I2C1TOC.DIV                */
#define set_I2C1TOC_I2TOCEN      SFRS = 0; I2C1TOC |= 0x04 /*!<Set I2C1TOC.I2TOCEN            */

#define clr_I2C1TOC_I2TOF        SFRS = 0; I2C1TOC &=~0x01 /*!<Clear I2C1TOC.I2TOF            */
#define clr_I2C1TOC_DIV          SFRS = 0; I2C1TOC &=~0x02 /*!<Clear I2C1TOC.DIV              */
#define clr_I2C1TOC_I2TOCEN      SFRS = 0; I2C1TOC &=~0x04 /*!<Clear I2C1TOC.I2TOCEN          */

/**@} end of SFR_PAGE0_I2C1TOC_MACRO group */
/**@} end of SFR_PAGE0_I2C1TOC group */

/**
   @addtogroup SFR_PAGE0_IPH IPH
   Special Function Register IPH
   @{ */

/**
@var IPH
Address: B7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PX0H      |External interrupt 0 priority high bit
|[1]     |PT0H      |Timer 0 interrupt priority high bit
|[2]     |PX1H      |External interrupt 1 priority high bit
|[3]     |PT1H      |Timer 1 interrupt priority high bit
|[4]     |PSH       |Serial port 0 interrupt priority high bit
|[5]     |PBODH     |Brown-out detection interrupt priority high bit
|[6]     |PADCH     |ADC interrupt priority high bit
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char IPH @ 0xB7;

/**
@addtogroup SFR_PAGE0_IPH_MACRO Bit Macro Functions
Bit Macro Functions of IPH
@{ */

#define set_IPH_PX0H             SFRS = 0; IPH |= 0x01 /*!<Set IPH.PX0H                   */
#define set_IPH_PT0H             SFRS = 0; IPH |= 0x02 /*!<Set IPH.PT0H                   */
#define set_IPH_PX1H             SFRS = 0; IPH |= 0x04 /*!<Set IPH.PX1H                   */
#define set_IPH_PT1H             SFRS = 0; IPH |= 0x08 /*!<Set IPH.PT1H                   */
#define set_IPH_PSH              SFRS = 0; IPH |= 0x10 /*!<Set IPH.PSH                    */
#define set_IPH_PBODH            SFRS = 0; IPH |= 0x20 /*!<Set IPH.PBODH                  */
#define set_IPH_PADCH            SFRS = 0; IPH |= 0x40 /*!<Set IPH.PADCH                  */

#define clr_IPH_PX0H             SFRS = 0; IPH &=~0x01 /*!<Clear IPH.PX0H                 */
#define clr_IPH_PT0H             SFRS = 0; IPH &=~0x02 /*!<Clear IPH.PT0H                 */
#define clr_IPH_PX1H             SFRS = 0; IPH &=~0x04 /*!<Clear IPH.PX1H                 */
#define clr_IPH_PT1H             SFRS = 0; IPH &=~0x08 /*!<Clear IPH.PT1H                 */
#define clr_IPH_PSH              SFRS = 0; IPH &=~0x10 /*!<Clear IPH.PSH                  */
#define clr_IPH_PBODH            SFRS = 0; IPH &=~0x20 /*!<Clear IPH.PBODH                */
#define clr_IPH_PADCH            SFRS = 0; IPH &=~0x40 /*!<Clear IPH.PADCH                */

/**@} end of SFR_PAGE0_IPH_MACRO group */
/**@} end of SFR_PAGE0_IPH group */

/**
   @addtogroup SFR_PAGE0_IP IP
   Special Function Register IP
   @{ */

/**
@var IP
Address: B8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PX0       |External interrupt 0 priority low bit
|[1]     |PT0       |Timer 0 interrupt priority low bit
|[2]     |PX1       |External interrupt 1 priority low bit
|[3]     |PT1       |Timer 1 interrupt priority low bit
|[4]     |PS        |Serial port 0 interrupt priority low bit
|[5]     |PBOD      |Brown-out detection interrupt priority low bit
|[6]     |PADC      |ADC interrupt priority low bit
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile union
{
  unsigned char IP; /* IP  */
  struct /* IP  */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } IP_bit;
} @ 0xB8;

/**
@addtogroup SFR_PAGE0_IP_MACRO Bit Macro Functions
Bit Macro Functions of IP
@{ */

#define set_IP_PX0               IP |= 0x01 /*!<Set IP.PX0                     */
#define set_IP_PT0               IP |= 0x02 /*!<Set IP.PT0                     */
#define set_IP_PX1               IP |= 0x04 /*!<Set IP.PX1                     */
#define set_IP_PT1               IP |= 0x08 /*!<Set IP.PT1                     */
#define set_IP_PS                IP |= 0x10 /*!<Set IP.PS                      */
#define set_IP_PBOD              IP |= 0x20 /*!<Set IP.PBOD                    */
#define set_IP_PADC              IP |= 0x40 /*!<Set IP.PADC                    */

#define clr_IP_PX0               IP &=~0x01 /*!<Clear IP.PX0                   */
#define clr_IP_PT0               IP &=~0x02 /*!<Clear IP.PT0                   */
#define clr_IP_PX1               IP &=~0x04 /*!<Clear IP.PX1                   */
#define clr_IP_PT1               IP &=~0x08 /*!<Clear IP.PT1                   */
#define clr_IP_PS                IP &=~0x10 /*!<Clear IP.PS                    */
#define clr_IP_PBOD              IP &=~0x20 /*!<Clear IP.PBOD                  */
#define clr_IP_PADC              IP &=~0x40 /*!<Clear IP.PADC                  */

/**@} end of SFR_PAGE0_IP_MACRO group */
/**@} end of SFR_PAGE0_IP group */

/**
   @addtogroup SFR_PAGE0_SADEN0 SADEN0
   Special Function Register SADEN0
   @{ */

/**
@var SADEN0
Address: B9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADEN0[7:0]|Slave 0 Address Mask
|        |          |This byte is a mask byte of UART0 that contains don’t-care bits
|        |          |(defined by zeros) to form the device’s Given address. The don’t-care
|        |          |bits provide the flexibility to address one or more slaves at a time.
*/
__sfr __no_init volatile unsigned char SADEN0 @ 0xB9;

/**@} end of SFR_PAGE0_SADEN0 group */

/**
   @addtogroup SFR_PAGE0_SADEN1 SADEN1
   Special Function Register SADEN1
   @{ */

/**
@var SADEN1
Address: BAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADEN1[7:0]|Slave 1 Address Mask
|        |          |This byte is a mask byte of UART1 that contains don’t-care bits
|        |          |(defined by zeros) to form the device’s Given address. The don’t-care
|        |          |bits provide the flexibility to address one or more slaves at a time.
*/
__sfr __no_init volatile unsigned char SADEN1 @ 0xBA;

/**@} end of SFR_PAGE0_SADEN1 group */

/**
   @addtogroup SFR_PAGE0_SADDR1 SADDR1
   Special Function Register SADDR1
   @{ */

/**
@var SADDR1
Address: BBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADDR1[7:0]|Slave 1 Address
|        |          |This byte specifies the microcontroller’s own slave address for UART1
|        |          |multi-processor communication.
*/
__sfr __no_init volatile unsigned char SADDR1 @ 0xBB;

/**@} end of SFR_PAGE0_SADDR1 group */

/**
   @addtogroup SFR_PAGE0_I2C0DAT I2C0DAT
   Special Function Register I2C0DAT
   @{ */

/**
@var I2C0DAT
Address: BCH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CDAT[7:0]|I2Cn Data
|        |          |I2CnDAT contains a byte of the I2C data to be transmitted or a byte,
|        |          |which has just received. Data in I2CnDAT remains as long as SI is
|        |          |logic 1. The result of reading or writing I2CnDAT during I2C
|        |          |transceiver progress is unpredicted.
|        |          |While data in I2CnDAT is shifted out, data on the bus is
|        |          |simultaneously being shifted in to update I2CnDAT. I2CnDAT always
|        |          |shows the last byte that presented on the I2C bus. Thus the event of
|        |          |lost arbitration, the original value of I2CnDAT changes after the
|        |          |transaction.
*/
__sfr __no_init volatile unsigned char I2C0DAT @ 0xBC;

/**@} end of SFR_PAGE0_I2C0DAT group */

/**
   @addtogroup SFR_PAGE0_I2C0STAT I2C0STAT
   Special Function Register I2C0STAT
   @{ */

/**
@var I2C0STAT
Address: BDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |0         |Reserved
|        |          |The least significant three bits of I2CnSTAT are always read as 0.
|[7:3]   |I2CSTAT[7:3]|I2Cn Status Code
|        |          |The MSB five bits of I2CnSTAT contains the status code. There are 27
|        |          |possible status codes. When I2CnSTAT is F8H, no relevant state
|        |          |information is available and SI flag keeps 0. All other 26 status
|        |          |codes correspond to the I2C states. When each of these status is
|        |          |entered, SI will be set as logic 1 and a interrupt is requested.
*/
__sfr __no_init volatile unsigned char I2C0STAT @ 0xBD;

/**@} end of SFR_PAGE0_I2C0STAT group */

/**
   @addtogroup SFR_PAGE0_I2C0CLK I2C0CLK
   Special Function Register I2C0CLK
   @{ */

/**
@var I2C0CLK
Address: BEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CCLK[7:0]|I2Cn Clock Setting
|        |          |In master mode:
|        |          |This register determines the clock rate of I2C bus when the device is
|        |          |in a master mode. The clock rate follows the equation,
|        |          |.
|        |          |Note that the I2CnCLK value of 00H and 01H are not valid. This is an
|        |          |implement limitation.
|        |          |In slave mode:
|        |          |This byte has no effect. In slave mode, the I2C device will
|        |          |automatically synchronize with any given clock rate up to 400k bps.
*/
__sfr __no_init volatile unsigned char I2C0CLK @ 0xBE;

/**@} end of SFR_PAGE0_I2C0CLK group */

/**
   @addtogroup SFR_PAGE0_I2C0TOC I2C0TOC
   Special Function Register I2C0TOC
   @{ */

/**
@var I2C0TOC
Address: BFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |DIV       |I2C0 Time-Out Counter Clock Divider
|        |          |0 = The clock of I2C time-out counter is FSYS/1.
|        |          |1 = The clock of I2C time-out counter is FSYS/4.
|[2]     |I2TOCEN   |I2C0 Time-Out Counter Enable
|        |          |0 = I2C time-out counter Disabled.
|        |          |1 = I2C time-out counter Enabled.
|[7:3]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char I2C0TOC @ 0xBF;

/**
@addtogroup SFR_PAGE0_I2C0TOC_MACRO Bit Macro Functions
Bit Macro Functions of I2C0TOC
@{ */

#define set_I2C0TOC_I2TOF        SFRS = 0; I2C0TOC |= 0x01 /*!<Set I2C0TOC.I2TOF              */
#define set_I2C0TOC_DIV          SFRS = 0; I2C0TOC |= 0x02 /*!<Set I2C0TOC.DIV                */
#define set_I2C0TOC_I2TOCEN      SFRS = 0; I2C0TOC |= 0x04 /*!<Set I2C0TOC.I2TOCEN            */

#define clr_I2C0TOC_I2TOF        SFRS = 0; I2C0TOC &=~0x01 /*!<Clear I2C0TOC.I2TOF            */
#define clr_I2C0TOC_DIV          SFRS = 0; I2C0TOC &=~0x02 /*!<Clear I2C0TOC.DIV              */
#define clr_I2C0TOC_I2TOCEN      SFRS = 0; I2C0TOC &=~0x04 /*!<Clear I2C0TOC.I2TOCEN          */

/**@} end of SFR_PAGE0_I2C0TOC_MACRO group */
/**@} end of SFR_PAGE0_I2C0TOC group */

/**
   @addtogroup SFR_PAGE0_I2C0CON I2C0CON
   Special Function Register I2C0CON
   @{ */

/**
@var I2C0CON
Address: C0H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |Reserved  |Reserved
|[2]     |AA        |Acknowledge Assert Flag
|        |          |If the AA flag is set, an ACK (low level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave.
|        |          |If the AA flag is cleared, a NACK (high level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave. A device with
|        |          |its own AA flag cleared will ignore its own salve address and the
|        |          |General Call. Consequently, SI will note be asserted and no interrupt
|        |          |is requested.
|        |          |Note that if an addressed slave does not return an ACK under slave
|        |          |receiver mode or not receive an ACK under slave transmitter mode, the
|        |          |slave device will become a not addressed slave. It cannot receive any
|        |          |data until its AA flag is set and a master addresses it again.
|        |          |There is a special case of I2CnSTAT value C8H occurs under slave
|        |          |transmitter mode. Before the slave device transmit the last data byte
|        |          |to the master, AA flag can be cleared as 0. Then after the last data
|        |          |byte transmitted, the slave device will actively switch to not
|        |          |addressed slave mode of disconnecting with the master. The further
|        |          |reading by the master will be all FFH.
|[3]     |SI        |I2Cn Interrupt Flag
|        |          |SI flag is set by hardware when one of 26 possible I2C status (besides
|        |          |F8H status) is entered. After SI is set, the software should read
|        |          |I2CnSTAT register to determine which step has been passed and take
|        |          |actions for next step.
|        |          |SI is cleared by software. Before the SI is cleared, the low period of
|        |          |SCL line is stretched. The transaction is suspended. It is useful for
|        |          |the slave device to deal with previous data bytes until ready for
|        |          |receiving the next byte.
|        |          |The serial transaction is suspended until SI is cleared by software.
|        |          |After SI is cleared, I2C bus will continue to generate START or
|        |          |repeated START condition, STOP condition, 8-bit data, or so on
|        |          |depending on the software configuration of controlling byte or bits.
|        |          |Therefore, user should take care of it by preparing suitable setting
|        |          |of registers before SI is software cleared.
|[4]     |STO       |STOP Flag
|        |          |When STO is set if the I2C is in the master mode, a STOP condition is
|        |          |transmitted to the bus. STO is automatically cleared by hardware once
|        |          |the STOP condition has been detected on the bus.
|        |          |The STO flag setting is also used to recover the I2C device from the
|        |          |bus error state (I2CnSTAT as 00H). In this case, no STOP condition is
|        |          |transmitted to the I2C bus.
|        |          |If the STA and STO bits are both set and the device is original in the
|        |          |master mode, the I2C bus will generate a STOP condition and
|        |          |immediately follow a START condition. If the device is in slave mode,
|        |          |STA and STO simultaneous setting should be avoid from issuing illegal
|        |          |I2C frames.
|[5]     |STA       |START Flag
|        |          |When STA is set, the I2C generates a START condition if the bus is
|        |          |free. If the bus is busy, the I2C waits for a STOP condition and
|        |          |generates a START condition following.
|        |          |If STA is set while the I2C is already in the master mode and one or
|        |          |more bytes have been transmitted or received, the I2C generates a
|        |          |repeated START condition.
|        |          |Note that STA can be set anytime even in a slave mode, but STA is not
|        |          |hardware automatically cleared after START or repeated START condition
|        |          |has been detected. User should take care of it by clearing STA
|        |          |manually.
|[6]     |I2CEN     |I2Cn Bus Enable
|        |          |0 = I2C bus Disabled.
|        |          |1 = I2C bus Enabled.
|        |          |Before enabling the I2C, SCL and SDA port latches should be set to
|        |          |logic 1.
|[7]     |I         |I2Cn Hold Time Extend Enable
|        |          |0 = I2C DATA to SCL hold time extend disabled
|        |          |1 = I2C DATA to SCL hold time extend enabled, extend 8 system clock
*/
__sfr __no_init volatile union
{
  unsigned char I2C0CON; /* I2C0CON  */
  struct /* I2C0CON  */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } I2C0CON_bit;
} @ 0xC0;

/**
@addtogroup SFR_PAGE0_I2C0CON_MACRO Bit Macro Functions
Bit Macro Functions of I2C0CON
@{ */

#define set_I2C0CON_AA           I2C0CON |= 0x04 /*!<Set I2C0CON.AA                 */
#define set_I2C0CON_SI           I2C0CON |= 0x08 /*!<Set I2C0CON.SI                 */
#define set_I2C0CON_STO          I2C0CON |= 0x10 /*!<Set I2C0CON.STO                */
#define set_I2C0CON_STA          I2C0CON |= 0x20 /*!<Set I2C0CON.STA                */
#define set_I2C0CON_I2CEN        I2C0CON |= 0x40 /*!<Set I2C0CON.I2CEN              */
#define set_I2C0CON_I            I2C0CON |= 0x80 /*!<Set I2C0CON.I                  */

#define clr_I2C0CON_AA           I2C0CON &=~0x04 /*!<Clear I2C0CON.AA               */
#define clr_I2C0CON_SI           I2C0CON &=~0x08 /*!<Clear I2C0CON.SI               */
#define clr_I2C0CON_STO          I2C0CON &=~0x10 /*!<Clear I2C0CON.STO              */
#define clr_I2C0CON_STA          I2C0CON &=~0x20 /*!<Clear I2C0CON.STA              */
#define clr_I2C0CON_I2CEN        I2C0CON &=~0x40 /*!<Clear I2C0CON.I2CEN            */
#define clr_I2C0CON_I            I2C0CON &=~0x80 /*!<Clear I2C0CON.I                */

/**@} end of SFR_PAGE0_I2C0CON_MACRO group */
/**@} end of SFR_PAGE0_I2C0CON group */

/**
   @addtogroup SFR_PAGE0_I2C0ADDR0 I2C0ADDR0
   Special Function Register I2C0ADDR0
   @{ */

/**
@var I2C0ADDR0
Address: C1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C0ADDR0 @ 0xC1;

/**
@addtogroup SFR_PAGE0_I2C0ADDR0_MACRO Bit Macro Functions
Bit Macro Functions of I2C0ADDR0
@{ */

#define set_I2C0ADDR0_GC         SFRS = 0; I2C0ADDR0 |= 0x01 /*!<Set I2C0ADDR0.GC               */


#define clr_I2C0ADDR0_GC         SFRS = 0; I2C0ADDR0 &=~0x01 /*!<Clear I2C0ADDR0.GC             */


/**@} end of SFR_PAGE0_I2C0ADDR0_MACRO group */
/**@} end of SFR_PAGE0_I2C0ADDR0 group */

/**
   @addtogroup SFR_PAGE0_T3CON T3CON
   Special Function Register T3CON
   @{ */

/**
@var T3CON
Address: C4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |T3PS[2:0] |Timer 3 Pre-Scalar
|        |          |These bits determine the scale of the clock divider for Timer 3.
|        |          |000 = 1/1.
|        |          |001 = 1/2.
|        |          |010 = 1/4.
|        |          |011 = 1/8.
|        |          |100 = 1/16.
|        |          |101 = 1/32.
|        |          |110 = 1/64.
|        |          |111 = 1/128.
|[3]     |TR3       |Timer 3 Run Control
|        |          |0 = Timer 3 is halted.
|        |          |1 = Timer 3 starts running.
|        |          |Note that the reload registers RH3 and RL3 can only be written when
|        |          |Timer 3 is halted (TR3 bit is 0). If any of RH3 or RL3 is written if
|        |          |TR3 is 1, result is unpredictable.
|[4]     |TF3       |Timer 3 Overflow Flag
|        |          |This bit is set when Timer 3 overflows. It is automatically cleared by
|        |          |hardware when the program executes the Timer 3 interrupt service
|        |          |routine. This bit can be set or cleared by software.
|[5]     |BRCK      |Serial Port 0 Baud Rate Clock Source
|        |          |This bit selects which Timer is used as the baud rate clock source
|        |          |when serial port 0 is in Mode 1 or 3.
|        |          |0 = Timer 1.
|        |          |1 = Timer 3.
|[6]     |SMOD0_1   |Serial Port 1 Framing Error Access Enable
|        |          |0 = S1CON.7 accesses to SM0_1 bit.
|        |          |1 = S1CON.7 accesses to FE_1 bit.
|[7]     |SMOD_1    |Serial Port 1 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART1 is in
|        |          |Mode 2.see Table 6.92 Serial Port 1 Mode / baud rate Description for
|        |          |details.
*/
__sfr __no_init volatile unsigned char T3CON @ 0xC4;

/**
@addtogroup SFR_PAGE0_T3CON_MACRO Bit Macro Functions
Bit Macro Functions of T3CON
@{ */


#define set_T3CON_TR3            SFRS = 0; T3CON |= 0x08 /*!<Set T3CON.TR3                  */
#define set_T3CON_TF3            SFRS = 0; T3CON |= 0x10 /*!<Set T3CON.TF3                  */
#define set_T3CON_BRCK           SFRS = 0; T3CON |= 0x20 /*!<Set T3CON.BRCK                 */
#define set_T3CON_SMOD0_1        SFRS = 0; T3CON |= 0x40 /*!<Set T3CON.SMOD0_1              */
#define set_T3CON_SMOD_1         SFRS = 0; T3CON |= 0x80 /*!<Set T3CON.SMOD_1               */


#define clr_T3CON_TR3            SFRS = 0; T3CON &=~0x08 /*!<Clear T3CON.TR3                */
#define clr_T3CON_TF3            SFRS = 0; T3CON &=~0x10 /*!<Clear T3CON.TF3                */
#define clr_T3CON_BRCK           SFRS = 0; T3CON &=~0x20 /*!<Clear T3CON.BRCK               */
#define clr_T3CON_SMOD0_1        SFRS = 0; T3CON &=~0x40 /*!<Clear T3CON.SMOD0_1            */
#define clr_T3CON_SMOD_1         SFRS = 0; T3CON &=~0x80 /*!<Clear T3CON.SMOD_1             */

/**@} end of SFR_PAGE0_T3CON_MACRO group */
/**@} end of SFR_PAGE0_T3CON group */

/**
   @addtogroup SFR_PAGE0_T3CON T3CON
   Special Function Register T3CON
   @{ */

/**
@var T3CON
Address: C4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |SMOD0_1   |Serial Port 1 Framing Error Access Enable
|        |          |0 = S1CON.7 accesses to SM0_1 bit.
|        |          |1 = S1CON.7 accesses to FE_1 bit.
|[7]     |SMOD_1    |Serial Port 1 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART1 is in
|        |          |Mode 2. See Table 6.92 Serial Port 1 Mode / baud rate Description
|        |          |for details.
*/

/**
@addtogroup SFR_PAGE0_T3CON_MACRO Bit Macro Functions
Bit Macro Functions of T3CON
@{ */

#define set_T3CON_SMOD0_1        SFRS = 0; T3CON |= 0x40 /*!<Set T3CON.SMOD0_1              */
#define set_T3CON_SMOD_1         SFRS = 0; T3CON |= 0x80 /*!<Set T3CON.SMOD_1               */

#define clr_T3CON_SMOD0_1        SFRS = 0; T3CON &=~0x40 /*!<Clear T3CON.SMOD0_1            */
#define clr_T3CON_SMOD_1         SFRS = 0; T3CON &=~0x80 /*!<Clear T3CON.SMOD_1             */

/**@} end of SFR_PAGE0_T3CON_MACRO group */
/**@} end of SFR_PAGE0_T3CON group */

/**
   @addtogroup SFR_PAGE0_RL3 RL3
   Special Function Register RL3
   @{ */

/**
@var RL3
Address: C5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RL3[7:0]  |Timer 3 Reload Low Byte
|        |          |It holds the low byte of the reload value of Timer 3.
*/
__sfr __no_init volatile unsigned char RL3 @ 0xC5;

/**@} end of SFR_PAGE0_RL3 group */

/**
   @addtogroup SFR_PAGE0_RH3 RH3
   Special Function Register RH3
   @{ */

/**
@var RH3
Address: C6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RH3[7:0]  |Timer 3 Reload High Byte
|        |          |It holds the high byte of the reload value of Time 3.
*/
__sfr __no_init volatile unsigned char RH3 @ 0xC6;

/**@} end of SFR_PAGE0_RH3 group */

/**
   @addtogroup SFR_PAGE0_TA TA
   Special Function Register TA
   @{ */

/**
@var TA
Address: C7H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TA[7:0]   |Timed Access
|        |          |The timed access register controls the access to protected SFR. To
|        |          |access protected bits, user should first write AAH to the TA and
|        |          |immediately followed by a write of 55H to TA. After these two steps, a
|        |          |writing permission window is opened for 4 clock cycles during this
|        |          |period that user may write to protected SFR.
*/
__sfr __no_init volatile unsigned char TA @ 0xC7;

/**@} end of SFR_PAGE0_TA group */

/**
   @addtogroup SFR_PAGE0_T2CON T2CON
   Special Function Register T2CON
   @{ */

/**
@var T2CON
Address: C8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CM_RL2    |Timer 2 Compare or Auto-Reload Mode Select
|        |          |This bit selects Timer 2 functioning mode.
|        |          |0 = Auto-reload mode.
|        |          |1 = Compare mode.
|[1]     |Reserved  |Reserved
|[2]     |TR2       |Timer 2 Run Control
|        |          |0 = Timer 2 Disabled. Clearing this bit will halt Timer 2 and the
|        |          |current count will be preserved in TH2 and TL2.
|        |          |1 = Timer 2 Enabled.
|[3]     |TL2RF     |TL2 Reading Status Flag
|        |          |When TL2 is written, software should check this bit first.
|        |          |0 = TL2 reading is available.
|        |          |1 = TL2 reading is not available.
|[4]     |TH2RF     |TH2 Reading Status Flag
|        |          |When TH2 is written, software should check this bit first.
|        |          |0 = TH2 reading is available
|        |          |1 = TH2 reading is not available.
|[6:5]   |Reserved  |Reserved
|[7]     |TF2       |Timer 2 Overflow Flag
|        |          |This bit is set when Timer 2 overflows or a compare match occurs. If
|        |          |the Timer 2 interrupt and the global interrupt are enable, setting
|        |          |this bit will make CPU execute Timer 2 interrupt service routine. This
|        |          |bit is not automatically cleared via hardware and should be cleared
|        |          |via software.
*/
__sfr __no_init volatile union
{
  unsigned char T2CON; /* Timer 2 Control */
  struct /* Timer 2 Control */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } T2CON_bit;
} @ 0xC8;

/**
@addtogroup SFR_PAGE0_T2CON_MACRO Bit Macro Functions
Bit Macro Functions of T2CON
@{ */

#define set_T2CON_CMRL2          T2CON |= 0x01 /*!<Set T2CON.CM_RL2               */
#define set_T2CON_TR2            T2CON |= 0x04 /*!<Set T2CON.TR2                  */
#define set_T2CON_TL2RF          T2CON |= 0x08 /*!<Set T2CON.TL2RF                */
#define set_T2CON_TH2RF          T2CON |= 0x10 /*!<Set T2CON.TH2RF                */
#define set_T2CON_TF2            T2CON |= 0x80 /*!<Set T2CON.TF2                  */

#define clr_T2CON_CMRL2          T2CON &=~0x01 /*!<Clear T2CON.CM_RL2             */
#define clr_T2CON_TR2            T2CON &=~0x04 /*!<Clear T2CON.TR2                */
#define clr_T2CON_TL2RF          T2CON &=~0x08 /*!<Clear T2CON.TL2RF              */
#define clr_T2CON_TH2RF          T2CON &=~0x10 /*!<Clear T2CON.TH2RF              */
#define clr_T2CON_TF2            T2CON &=~0x80 /*!<Clear T2CON.TF2                */

/**@} end of SFR_PAGE0_T2CON_MACRO group */
/**@} end of SFR_PAGE0_T2CON group */

/**
   @addtogroup SFR_PAGE0_T2MOD T2MOD
   Special Function Register T2MOD
   @{ */

/**
@var T2MOD
Address: C9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |LDTS[1:0] |Auto-Reload Trigger Select
|        |          |These bits select the reload trigger event.
|        |          |00 = Reload when Timer 2 overflows.
|        |          |01 = Reload when input capture 0 event occurs.
|        |          |10 = Reload when input capture 1 event occurs.
|        |          |11 = Reload when input capture 2 event occurs.
|[2]     |CMPCR     |Compare Match Auto-Clear
|        |          |This bit is valid only under Timer 2 compare mode. It enables hardware
|        |          |auto-clearing TH2 and TL2 counter registers after a compare match
|        |          |occurs.
|        |          |0 = Timer 2 continues counting when a compare match occurs.
|        |          |1 = Timer 2 value is auto-cleared as 0000H when a compare match
|        |          |occurs.
|[3]     |CAPCR     |Capture Auto-Clear
|        |          |This bit is valid only under Timer 2 auto-reload mode. It enables
|        |          |hardware auto-clearing TH2 and TL2 counter registers after they have
|        |          |been transferred in to RCMP2H and RCMP2L while a capture event occurs.
|        |          |0 = Timer 2 continues counting when a capture event occurs.
|        |          |1 = Timer 2 value is auto-cleared as 0000H when a capture event
|        |          |occurs.
|[6:4]   |T2DIV[2:0]|Timer 2 Clock Divider
|        |          |000 = Timer 2 clock divider is 1/1.
|        |          |001 = Timer 2 clock divider is 1/4.
|        |          |010 = Timer 2 clock divider is 1/16.
|        |          |011 = Timer 2 clock divider is 1/32.
|        |          |100 = Timer 2 clock divider is 1/64.
|        |          |101 = Timer 2 clock divider is 1/128.
|        |          |110 = Timer 2 clock divider is 1/256.
|        |          |111 = Timer 2 clock divider is 1/512.
|[7]     |LDEN      |Enable Auto-Reload
|        |          |0 = Reloading RCMP2H and RCMP2L to TH2 and TL2
|        |          |Disabled.
|        |          |1 = Reloading RCMP2H and RCMP2L to TH2 and TL2 Enabled.
*/
__sfr __no_init volatile unsigned char T2MOD @ 0xC9;

/**
@addtogroup SFR_PAGE0_T2MOD_MACRO Bit Macro Functions
Bit Macro Functions of T2MOD
@{ */


#define set_T2MOD_CMPCR          SFRS = 0; T2MOD |= 0x04 /*!<Set T2MOD.CMPCR                */
#define set_T2MOD_CAPCR          SFRS = 0; T2MOD |= 0x08 /*!<Set T2MOD.CAPCR                */

#define set_T2MOD_LDEN           SFRS = 0; T2MOD |= 0x80 /*!<Set T2MOD.LDEN                 */


#define clr_T2MOD_CMPCR          SFRS = 0; T2MOD &=~0x04 /*!<Clear T2MOD.CMPCR              */
#define clr_T2MOD_CAPCR          SFRS = 0; T2MOD &=~0x08 /*!<Clear T2MOD.CAPCR              */

#define clr_T2MOD_LDEN           SFRS = 0; T2MOD &=~0x80 /*!<Clear T2MOD.LDEN               */

/**@} end of SFR_PAGE0_T2MOD_MACRO group */
/**@} end of SFR_PAGE0_T2MOD group */

/**
   @addtogroup SFR_PAGE0_PIF PIF
   Special Function Register PIF
   @{ */

/**
@var PIF
Address: CAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PIF0      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[1]     |PIF1      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[2]     |PIF2      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[3]     |PIF3      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[4]     |PIF4      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[5]     |PIF5      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[6]     |PIF6      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[7]     |PIF7      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
*/
__sfr __no_init volatile unsigned char PIF @ 0xCA;

/**
@addtogroup SFR_PAGE0_PIF_MACRO Bit Macro Functions
Bit Macro Functions of PIF
@{ */

#define set_PIF_PIF0             SFRS = 0; PIF |= 0x01 /*!<Set PIF.PIF0                   */
#define set_PIF_PIF1             SFRS = 0; PIF |= 0x02 /*!<Set PIF.PIF1                   */
#define set_PIF_PIF2             SFRS = 0; PIF |= 0x04 /*!<Set PIF.PIF2                   */
#define set_PIF_PIF3             SFRS = 0; PIF |= 0x08 /*!<Set PIF.PIF3                   */
#define set_PIF_PIF4             SFRS = 0; PIF |= 0x10 /*!<Set PIF.PIF4                   */
#define set_PIF_PIF5             SFRS = 0; PIF |= 0x20 /*!<Set PIF.PIF5                   */
#define set_PIF_PIF6             SFRS = 0; PIF |= 0x40 /*!<Set PIF.PIF6                   */
#define set_PIF_PIF7             SFRS = 0; PIF |= 0x80 /*!<Set PIF.PIF7                   */

#define clr_PIF_PIF0             SFRS = 0; PIF &=~0x01 /*!<Clear PIF.PIF0                 */
#define clr_PIF_PIF1             SFRS = 0; PIF &=~0x02 /*!<Clear PIF.PIF1                 */
#define clr_PIF_PIF2             SFRS = 0; PIF &=~0x04 /*!<Clear PIF.PIF2                 */
#define clr_PIF_PIF3             SFRS = 0; PIF &=~0x08 /*!<Clear PIF.PIF3                 */
#define clr_PIF_PIF4             SFRS = 0; PIF &=~0x10 /*!<Clear PIF.PIF4                 */
#define clr_PIF_PIF5             SFRS = 0; PIF &=~0x20 /*!<Clear PIF.PIF5                 */
#define clr_PIF_PIF6             SFRS = 0; PIF &=~0x40 /*!<Clear PIF.PIF6                 */
#define clr_PIF_PIF7             SFRS = 0; PIF &=~0x80 /*!<Clear PIF.PIF7                 */

/**@} end of SFR_PAGE0_PIF_MACRO group */
/**@} end of SFR_PAGE0_PIF group */

/**
   @addtogroup SFR_PAGE0_TL2 TL2
   Special Function Register TL2
   @{ */

/**
@var TL2
Address: CCH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |T2[7:0]   |Timer 2 Low Byte
|        |          |The TL2 register is the low byte of the 16-bit counting register of
|        |          |Timer 2.
*/
__sfr __no_init volatile unsigned char TL2 @ 0xCC;

/**@} end of SFR_PAGE0_TL2 group */

/**
   @addtogroup SFR_PAGE0_TH2 TH2
   Special Function Register TH2
   @{ */

/**
@var TH2
Address: CDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |T2[15:8]  |Timer 2 High Byte
|        |          |The TH2 register is the high byte of the 16-bit counting register of
|        |          |Timer 2.
*/
__sfr __no_init volatile unsigned char TH2 @ 0xCD;

/**@} end of SFR_PAGE0_TH2 group */

/**
   @addtogroup SFR_PAGE0_PSW PSW
   Special Function Register PSW
   @{ */

/**
@var PSW
Address: D0H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P         |Parity Flag
|        |          |Set to 1 to indicate an odd number of ones in the accumulator. Cleared
|        |          |for an even number of ones. It performs even parity check.
|[1]     |F1        |User Flag 1
|        |          |The general purpose flag that can be set or cleared by user via
|        |          |software.
|[2]     |OV        |Overflow Flag
|        |          |OV is used for a signed character operands. For a ADD or ADDC
|        |          |instruction, OV will be set if there is a carry out of bit 6 but not
|        |          |out of bit 7, or a carry out of bit 7 but not bit 6. Otherwise, OV is
|        |          |cleared. OV indicates a negative number produced as the sum of two
|        |          |positive operands or a positive sum from two negative operands. For a
|        |          |SUBB, OV is set if a borrow is needed into bit6 but not into bit 7, or
|        |          |into bit7 but not bit 6. Otherwise, OV is cleared. OV indicates a
|        |          |negative number produced when a negative value is subtracted from a
|        |          |positive value, or a positive result when a positive number is
|        |          |subtracted from a negative number.
|        |          |For a MUL, if the product is greater than 255 (00FFH), OV will be set.
|        |          |Otherwise, it is cleared.
|        |          |For a DIV, it is normally 0. However, if B had originally contained
|        |          |00H, the values returned in A and B will be undefined. Meanwhile, the
|        |          |OV will be set.
|[3]     |RS0       |Check with bit 4 description.
|[4]     |RS1       |Register Bank Selection Bits
|        |          |These two bits select one of four banks in which R0 to R7 locate.
|        |          |RS1
|        |          |RS0
|        |          |Register Bank
|        |          |RAM Address
|        |          |0
|        |          |0
|        |          |0
|        |          |00H to 07H
|        |          |0
|        |          |1
|        |          |1
|        |          |08H to 0FH
|        |          |1
|        |          |0
|        |          |2
|        |          |10H to 17H
|        |          |1
|        |          |1
|        |          |3
|        |          |18H to 1FH
|[5]     |F0        |User Flag 0
|        |          |The general purpose flag that can be set or cleared by user.
|[6]     |AC        |Auxiliary Carry
|        |          |Set when the previous operation resulted in a carry-out from or a
|        |          |borrow-in to the 4th bit of the low order nibble, otherwise cleared.
|[7]     |CY        |Carry Flag
|        |          |For a adding or subtracting operation, CY will be set when the
|        |          |previous operation resulted in a carry-out from or a borrow-in to the
|        |          |Most Significant bit, otherwise cleared.
|        |          |If the previous operation is MUL or DIV, CY is always 0.
|        |          |CY is affected by DA A instruction, which indicates that if the
|        |          |original BCD sum is greater than 100.
|        |          |For a CJNE branch, CY will be set if the first unsigned integer value
|        |          |is less than the second one. Otherwise, CY will be cleared.
*/
__sfr __no_init volatile union
{
  unsigned char PSW; /* Program Status Word */
  struct /* Program Status Word */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;    
  } PSW_bit;
} @ 0xD0;

/**
@addtogroup SFR_PAGE0_PSW_MACRO Bit Macro Functions
Bit Macro Functions of PSW
@{ */

#define set_PSW_P                PSW |= 0x01 /*!<Set PSW.P                      */
#define set_PSW_F1               PSW |= 0x02 /*!<Set PSW.F1                     */
#define set_PSW_OV               PSW |= 0x04 /*!<Set PSW.OV                     */
#define set_PSW_RS0              PSW |= 0x08 /*!<Set PSW.RS0                    */
#define set_PSW_RS1              PSW |= 0x10 /*!<Set PSW.RS1                    */
#define set_PSW_F0               PSW |= 0x20 /*!<Set PSW.F0                     */
#define set_PSW_AC               PSW |= 0x40 /*!<Set PSW.AC                     */
#define set_PSW_CY               PSW |= 0x80 /*!<Set PSW.CY                     */

#define clr_PSW_P                PSW &=~0x01 /*!<Clear PSW.P                    */
#define clr_PSW_F1               PSW &=~0x02 /*!<Clear PSW.F1                   */
#define clr_PSW_OV               PSW &=~0x04 /*!<Clear PSW.OV                   */
#define clr_PSW_RS0              PSW &=~0x08 /*!<Clear PSW.RS0                  */
#define clr_PSW_RS1              PSW &=~0x10 /*!<Clear PSW.RS1                  */
#define clr_PSW_F0               PSW &=~0x20 /*!<Clear PSW.F0                   */
#define clr_PSW_AC               PSW &=~0x40 /*!<Clear PSW.AC                   */
#define clr_PSW_CY               PSW &=~0x80 /*!<Clear PSW.CY                   */

/**@} end of SFR_PAGE0_PSW_MACRO group */
/**@} end of SFR_PAGE0_PSW group */

/**
   @addtogroup SFR_PAGE0_PWM0CON0 PWM0CON0
   Special Function Register PWM0CON0
   @{ */

/**
@var PWM0CON0
Address: D1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |Reserved  |Reserved
|[4]     |CLRPWM    |Clear PWM Counter
|        |          |Setting this bit clears the value of PWM 16-bit counter for resetting
|        |          |to 0000H. After the counter value is cleared, CLRPWM will be
|        |          |automatically cleared via hardware. The meaning of writing and reading
|        |          |CLRPWM bit is different.
|        |          |Writing:
|        |          |0 = No effect.
|        |          |1 = Clearing PWM 16-bit counter.
|        |          |Reading:
|        |          |0 = PWM 16-bit counter is completely cleared.
|        |          |1 = PWM 16-bit counter is not yet cleared.
|[5]     |PWMF      |PWM Flag
|        |          |This flag is set according to definitions of INTSEL[2:0] and
|        |          |INTTYP[1:0] in PWMnINTC. This bit is cleared by software.
|[6]     |LOAD      |PWM New Period and Duty Load
|        |          |This bit is used to load period and duty Register Description in their
|        |          |buffer if new period or duty value needs to be updated. The loading
|        |          |will act while a PWM period is completed. The new period and duty
|        |          |affected on the next PWM cycle. After the loading is complete, LOAD
|        |          |will be automatically cleared via hardware. The meaning of writing and
|        |          |reading LOAD bit is different.
|        |          |Writing:
|        |          |0 = No effect.
|        |          |1 = Load new period and duty in their buffers while a PWM period is
|        |          |completed.
|        |          |Reading:
|        |          |0 = A loading of new period and duty is finished.
|        |          |1 = A loading of new period and duty is not yet finished.
|[7]     |PWM0RUN   |PWM0 Run Enable
|        |          |0 = PWM0 stays in idle.
|        |          |1 = PWM0 starts running.
*/
__sfr __no_init volatile unsigned char PWM0CON0 @ 0xD1;

/**
@addtogroup SFR_PAGE0_PWM0CON0_MACRO Bit Macro Functions
Bit Macro Functions of PWM0CON0
@{ */

#define set_PWM0CON0_CLRPWM      SFRS = 0; PWM0CON0 |= 0x10 /*!<Set PWM0CON0.CLRPWM            */
#define set_PWM0CON0_PWMF        SFRS = 0; PWM0CON0 |= 0x20 /*!<Set PWM0CON0.PWMF              */
#define set_PWM0CON0_LOAD        SFRS = 0; PWM0CON0 |= 0x40 /*!<Set PWM0CON0.LOAD              */
#define set_PWM0CON0_PWMRUN      SFRS = 0; PWM0CON0 |= 0x80 /*!<Set PWM0CON0.PWM0RUN           */

#define clr_PWM0CON0_CLRPWM      SFRS = 0; PWM0CON0 &=~0x10 /*!<Clear PWM0CON0.CLRPWM          */
#define clr_PWM0CON0_PWMF        SFRS = 0; PWM0CON0 &=~0x20 /*!<Clear PWM0CON0.PWMF            */
#define clr_PWM0CON0_LOAD        SFRS = 0; PWM0CON0 &=~0x40 /*!<Clear PWM0CON0.LOAD            */
#define clr_PWM0CON0_PWMRUN      SFRS = 0; PWM0CON0 &=~0x80 /*!<Clear PWM0CON0.PWM0RUN         */

/**@} end of SFR_PAGE0_PWM0CON0_MACRO group */
/**@} end of SFR_PAGE0_PWM0CON0 group */

/**
   @addtogroup SFR_PAGE0_ACMPCR0 ACMPCR0
   Special Function Register ACMPCR0
   @{ */

/**
@var ACMPCR0
Address: D2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ACMPEN    |Comparator 0 Enable Bit
|        |          |0 = Comparator 0 Disabled.
|        |          |1 = Comparator 0 Enabled.
|[1]     |ACMPIE    |Comparator 0 Interrupt Enable Bit
|        |          |0 = Comparator 0 interrupt Disabled.
|        |          |1 = Comparator 0 interrupt Enabled. If WKEN (ACMPCR1[3]) is set to 1,
|        |          |the wake-up interrupt function will be enabled as well.
|[2]     |HYSEN     |Comparator 0 Hysteresis Enable Bit
|        |          |0 = Comparator 0 hysteresis Disabled.
|        |          |1 = Comparator 0 hysteresis Enabled.
|[3]     |WKEN      |Comparator 0 Power-Down Wake-Up Enable Bit
|        |          |0 = Comparator 0 Wake-up function Disabled.
|        |          |1 = Comparator 0 Wake-up function Enabled.
|[5:4]   |NEGSEL    |Comparator 0 Negative Input Selection
|        |          |00 = ACMP0_N0 (P2.4) pin.
|        |          |01 = Internal comparator reference voltage (CRV).
|        |          |10 = VBG (Band-gap).
|        |          |11 = ACMP0_N1 (P2.0)pin.
|[7:6]   |POSSEL    |Comparator 0 Positive Input Selection
|        |          |00 = ACMP0_P0 (P2.5) pin.
|        |          |01 = ACMP0_P1 (P2.3) pin.
|        |          |10 = ACMP0_P2 (P2.1) pin.
|        |          |11 = ACMP0_P3 (P3.1) pin.
*/
__sfr __no_init volatile unsigned char ACMPCR0 @ 0xD2;

/**
@addtogroup SFR_PAGE0_ACMPCR0_MACRO Bit Macro Functions
Bit Macro Functions of ACMPCR0
@{ */

#define set_ACMPCR0_ACMPEN       SFRS = 0; ACMPCR0 |= 0x01 /*!<Set ACMPCR0.ACMPEN             */
#define set_ACMPCR0_ACMPIE       SFRS = 0; ACMPCR0 |= 0x02 /*!<Set ACMPCR0.ACMPIE             */
#define set_ACMPCR0_HYSEN        SFRS = 0; ACMPCR0 |= 0x04 /*!<Set ACMPCR0.HYSEN              */
#define set_ACMPCR0_WKEN         SFRS = 0; ACMPCR0 |= 0x08 /*!<Set ACMPCR0.WKEN               */



#define clr_ACMPCR0_ACMPEN       SFRS = 0; ACMPCR0 &=~0x01 /*!<Clear ACMPCR0.ACMPEN           */
#define clr_ACMPCR0_ACMPIE       SFRS = 0; ACMPCR0 &=~0x02 /*!<Clear ACMPCR0.ACMPIE           */
#define clr_ACMPCR0_HYSEN        SFRS = 0; ACMPCR0 &=~0x04 /*!<Clear ACMPCR0.HYSEN            */
#define clr_ACMPCR0_WKEN         SFRS = 0; ACMPCR0 &=~0x08 /*!<Clear ACMPCR0.WKEN             */



/**@} end of SFR_PAGE0_ACMPCR0_MACRO group */
/**@} end of SFR_PAGE0_ACMPCR0 group */

/**
   @addtogroup SFR_PAGE0_ACMPCR1 ACMPCR1
   Special Function Register ACMPCR1
   @{ */

/**
@var ACMPCR1
Address: D3H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ACMPEN    |Comparator 1 Enable Bit
|        |          |0 = Comparator 1 Disabled.
|        |          |1 = Comparator 1 Enabled.
|[1]     |ACMPIE    |Comparator 1 Interrupt Enable Bit
|        |          |0 = Comparator 1 interrupt Disabled.
|        |          |1 = Comparator 1 interrupt Enabled. If WKEN (ACMPCR2[3]) is set to 1,
|        |          |the wake-up interrupt function will be enabled as well.
|[2]     |HYSEN     |Comparator 1 Hysteresis Enable Bit
|        |          |0 = Comparator 1 hysteresis Disabled.
|        |          |1 = Comparator 1 hysteresis Enabled.
|[3]     |WKEN      |Comparator 1 Power-Down Wake-Up Enable Bit
|        |          |0 = Comparator 1 Wake-up function Disabled.
|        |          |1 = Comparator 1 Wake-up function Enabled.
|[5:4]   |NEGSEL    |Comparator 1 Negative Input Selection
|        |          |00 = ACMP1_N0 (P2.2) pin.
|        |          |01 = Internal comparator reference voltage (CRV).
|        |          |10 = VBG (Band-gap).
|        |          |11 = ACMP1_N1 (P3.2)pin.
|[7:6]   |POSSEL    |Comparator 1 Positive Input Selection
|        |          |00 = ACMP1_P0 (P2.5) pin.
|        |          |01 = ACMP1_P1 (P2.3) pin.
|        |          |10 = ACMP1_P2 (P2.1) pin.
|        |          |11 = ACMP1_P3 (P3.1) pin.
*/
__sfr __no_init volatile unsigned char ACMPCR1 @ 0xD3;

/**
@addtogroup SFR_PAGE0_ACMPCR1_MACRO Bit Macro Functions
Bit Macro Functions of ACMPCR1
@{ */

#define set_ACMPCR1_ACMPEN       SFRS = 0; ACMPCR1 |= 0x01 /*!<Set ACMPCR1.ACMPEN             */
#define set_ACMPCR1_ACMPIE       SFRS = 0; ACMPCR1 |= 0x02 /*!<Set ACMPCR1.ACMPIE             */
#define set_ACMPCR1_HYSEN        SFRS = 0; ACMPCR1 |= 0x04 /*!<Set ACMPCR1.HYSEN              */
#define set_ACMPCR1_WKEN         SFRS = 0; ACMPCR1 |= 0x08 /*!<Set ACMPCR1.WKEN               */



#define clr_ACMPCR1_ACMPEN       SFRS = 0; ACMPCR1 &=~0x01 /*!<Clear ACMPCR1.ACMPEN           */
#define clr_ACMPCR1_ACMPIE       SFRS = 0; ACMPCR1 &=~0x02 /*!<Clear ACMPCR1.ACMPIE           */
#define clr_ACMPCR1_HYSEN        SFRS = 0; ACMPCR1 &=~0x04 /*!<Clear ACMPCR1.HYSEN            */
#define clr_ACMPCR1_WKEN         SFRS = 0; ACMPCR1 &=~0x08 /*!<Clear ACMPCR1.WKEN             */



/**@} end of SFR_PAGE0_ACMPCR1_MACRO group */
/**@} end of SFR_PAGE0_ACMPCR1 group */

/**
   @addtogroup SFR_PAGE0_ACMPSR ACMPSR
   Special Function Register ACMPSR
   @{ */

/**
@var ACMPSR
Address: D4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ACMP0IF   |Comparator 0 Interrupt Flag
|        |          |This bit is set by hardware whenever the comparator 0 output changes
|        |          |state. This will generate an interrupt if ACMPIE (ACMPCR0[1]) is set
|        |          |to 1
|        |          |Note: Write 0 to clear this bit to 0.
|[1]     |ACMP0O    |Comparator 0 Output
|        |          |Synchronized to the PCLK to allow reading by software. Cleared when
|        |          |the comparator 0 is disabled, i.e. ACMPEN (ACMPCR0[0]) is cleared to
|        |          |0.
|        |          |Note: This bit is read only.
|[2]     |ACMP1IF   |Comparator 1 Interrupt Flag
|        |          |This bit is set by hardware whenever the comparator 1 output changes
|        |          |state. This will generate an interrupt if ACMPIE (ACMPCR1[1]) is set
|        |          |to 1
|        |          |Note: Write 0 to clear this bit to 0.
|[3]     |ACMP1O    |Comparator 1 Output
|        |          |Synchronized to the PCLK to allow reading by software. Cleared when
|        |          |the comparator 1 is disabled, i.e. ACMPEN (ACMPCR1[0]) is cleared to
|        |          |0.
|        |          |Note: This bit is read only.
|[4]     |INT_Test  |ACMP software test interrupt flag
|[7:5]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char ACMPSR @ 0xD4;

/**
@addtogroup SFR_PAGE0_ACMPSR_MACRO Bit Macro Functions
Bit Macro Functions of ACMPSR
@{ */

#define set_ACMPSR_ACMP0IF       SFRS = 0; ACMPSR |= 0x01 /*!<Set ACMPSR.ACMP0IF             */
#define set_ACMPSR_ACMP0O        SFRS = 0; ACMPSR |= 0x02 /*!<Set ACMPSR.ACMP0O              */
#define set_ACMPSR_ACMP1IF       SFRS = 0; ACMPSR |= 0x04 /*!<Set ACMPSR.ACMP1IF             */
#define set_ACMPSR_ACMP1O        SFRS = 0; ACMPSR |= 0x08 /*!<Set ACMPSR.ACMP1O              */
#define set_ACMPSR_INT_Test      SFRS = 0; ACMPSR |= 0x10 /*!<Set ACMPSR.INT_Test            */

#define clr_ACMPSR_ACMP0IF       SFRS = 0; ACMPSR &=~0x01 /*!<Clear ACMPSR.ACMP0IF           */
#define clr_ACMPSR_ACMP0O        SFRS = 0; ACMPSR &=~0x02 /*!<Clear ACMPSR.ACMP0O            */
#define clr_ACMPSR_ACMP1IF       SFRS = 0; ACMPSR &=~0x04 /*!<Clear ACMPSR.ACMP1IF           */
#define clr_ACMPSR_ACMP1O        SFRS = 0; ACMPSR &=~0x08 /*!<Clear ACMPSR.ACMP1O            */
#define clr_ACMPSR_INT_Test      SFRS = 0; ACMPSR &=~0x10 /*!<Clear ACMPSR.INT_Test          */

/**@} end of SFR_PAGE0_ACMPSR_MACRO group */
/**@} end of SFR_PAGE0_ACMPSR group */

/**
   @addtogroup SFR_PAGE0_ACMPVREF ACMPVREF
   Special Function Register ACMPVREF
   @{ */

/**
@var ACMPVREF
Address: D5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |CRV0CTL[2:0]|Comparator 0 Reference Voltage Setting
|        |          |CRV0 = CRV source voltage * (2/12+CRV0CTL/12).
|[3]     |Reserved  |Reserved
|[6:4]   |CRV1CTL[2:0]|Comparator 1 Reference Voltage Setting
|        |          |CRV1 = CRV source voltage * (2/12+CRV1CTL/12).
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char ACMPVREF @ 0xD5;

/**@} end of SFR_PAGE0_ACMPVREF group */

/**
   @addtogroup SFR_PAGE0_SC0CR0 SC0CR0
   Special Function Register SC0CR0
   @{ */

/**
@var SC0CR0
Address: D6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |SCEN      |SC Engine Enable Bit
|        |          |Set this bit to 1 to enable SC operation. If this bit is cleared, SC
|        |          |will force all transition to IDLE state
|        |          |Note: SCEN must be set to 1 before filling in other registers, or
|        |          |smart card will not work properly.
|[1]     |RXOFF     |RX Transition Disable Bit
|        |          |0 = The receiver Enabled.
|        |          |1 = The receiver Disabled.
|        |          |Note: If AUTOCEN (SCnCR0[3])is enabled, these fields must be ignored.
|[2]     |TXOFF     |TX Transition Disable Bit
|        |          |0 = The transceiver Enabled.
|        |          |1 = The transceiver Disabled.
|[3]     |AUTOCEN   |Auto Convention Enable Bit
|        |          |0 = Auto-convention Disabled.
|        |          |1 = Auto-convention Enabled. When hardware receives TS in answer to
|        |          |reset state and the TS is direct convention, CONSEL(SCnCR0[4]) will be
|        |          |set to 0 automatically, otherwise if the TS is inverse convention, and
|        |          |CONSEL (SCnCR0[4]) will be set to 1.
|        |          |Note: If software enables auto convention function, the setting step
|        |          |must be done before Answer to Reset state and the first data must be
|        |          |0x3B or 0x3F. After hardware received first data and stored it at
|        |          |buffer, hardware will decided the convention and change the CONSEL
|        |          |(SCnCR0[4]) bits automatically.
|[4]     |CONSEL    |Convention Selection
|        |          |0 = Direct convention.
|        |          |1 = Inverse convention.
|        |          |Note 1: This bit is auto clear to 0, if AUTOCEN(SCnCR0[3]) is writing
|        |          |1
|        |          |Note 2: If AUTOCEN(SCnCR0[3]) is enabled, hardware will decide the
|        |          |convention and change the CONSEL (SCnCR0[4]) bits automatically after
|        |          |SCEN (SCnCR0[0]) =1.
|[5]     |RXBGTEN   |Receiver Block Guard Time Function Enable Bit
|        |          |0 = Receiver block guard time function Disabled.
|        |          |1 = Receiver block guard time function Enabled.
|[6]     |T         |T Mode
|        |          |0 = T0 (ISO7816-3 T = 0 mode).
|        |          |1 = T1 (ISO7816-3 T = 1 mode).
|        |          |The T mode controls the BGT (Block Guard Time). Block guard time means
|        |          |the minimum bit length between the leading edges of two consecutive
|        |          |characters between different transfer directions. This field indicates
|        |          |the counter for the bit length of block guard time. According to
|        |          |ISO7816-3, in T = 0 mode, the software must clear T bit to 0 for real
|        |          |block guard time = 16.5. In T = 1 mode, the software must set T bit to
|        |          |1 for real block guard time = 22.5.
|        |          |Note: In T = 0 mode, the receiver will generate the parity flag on
|        |          |PEF(SC0TSR[4]), if parity error is detected and also drive the parity
|        |          |error signal to transceiver. In T = 1 mode, the receiver will generate
|        |          |the parity flag on PEF(SC0TSR[4]), if parity error detected, but
|        |          |doesn’t drive the parity error signal to transceiver.
|        |          |Note: The description please see section 6.10.6.2Error Signal and
|        |          |Character Repetition
|[7]     |NSB       |Stop Bit Length
|        |          |This field indicates the length of stop bit.
|        |          |0 = The stop bit length is 2 ETU.
|        |          |1= The stop bit length is 1 ETU.
|        |          |Note: The default stop bit length is 2. SC and UART adopt NSB to
|        |          |program the stop bit length.
*/
__sfr __no_init volatile unsigned char SC0CR0 @ 0xD6;

/**
@addtogroup SFR_PAGE0_SC0CR0_MACRO Bit Macro Functions
Bit Macro Functions of SC0CR0
@{ */

#define set_SC0CR0_SCEN          SFRS = 0; SC0CR0 |= 0x01 /*!<Set SC0CR0.SCEN                */
#define set_SC0CR0_RXOFF         SFRS = 0; SC0CR0 |= 0x02 /*!<Set SC0CR0.RXOFF               */
#define set_SC0CR0_TXOFF         SFRS = 0; SC0CR0 |= 0x04 /*!<Set SC0CR0.TXOFF               */
#define set_SC0CR0_AUTOCEN       SFRS = 0; SC0CR0 |= 0x08 /*!<Set SC0CR0.AUTOCEN             */
#define set_SC0CR0_CONSEL        SFRS = 0; SC0CR0 |= 0x10 /*!<Set SC0CR0.CONSEL              */
#define set_SC0CR0_RXBGTEN       SFRS = 0; SC0CR0 |= 0x20 /*!<Set SC0CR0.RXBGTEN             */
#define set_SC0CR0_T             SFRS = 0; SC0CR0 |= 0x40 /*!<Set SC0CR0.T                   */
#define set_SC0CR0_NSB           SFRS = 0; SC0CR0 |= 0x80 /*!<Set SC0CR0.NSB                 */

#define clr_SC0CR0_SCEN          SFRS = 0; SC0CR0 &=~0x01 /*!<Clear SC0CR0.SCEN              */
#define clr_SC0CR0_RXOFF         SFRS = 0; SC0CR0 &=~0x02 /*!<Clear SC0CR0.RXOFF             */
#define clr_SC0CR0_TXOFF         SFRS = 0; SC0CR0 &=~0x04 /*!<Clear SC0CR0.TXOFF             */
#define clr_SC0CR0_AUTOCEN       SFRS = 0; SC0CR0 &=~0x08 /*!<Clear SC0CR0.AUTOCEN           */
#define clr_SC0CR0_CONSEL        SFRS = 0; SC0CR0 &=~0x10 /*!<Clear SC0CR0.CONSEL            */
#define clr_SC0CR0_RXBGTEN       SFRS = 0; SC0CR0 &=~0x20 /*!<Clear SC0CR0.RXBGTEN           */
#define clr_SC0CR0_T             SFRS = 0; SC0CR0 &=~0x40 /*!<Clear SC0CR0.T                 */
#define clr_SC0CR0_NSB           SFRS = 0; SC0CR0 &=~0x80 /*!<Clear SC0CR0.NSB               */

/**@} end of SFR_PAGE0_SC0CR0_MACRO group */
/**@} end of SFR_PAGE0_SC0CR0 group */

/**
   @addtogroup SFR_PAGE0_SC0CR1 SC0CR1
   Special Function Register SC0CR1
   @{ */

/**
@var SC0CR1
Address: D7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |UARTEN    |UART Mode Enable Bit
|        |          |0 = Smart Card mode.
|        |          |1 = UART mode.
|        |          |Note 1:When operating in UART mode, user must set CONSEL (SCnCR0[4]) =
|        |          |0 and AUTOCEN(SCnCR0[3]) = 0.
|        |          |Note 2:When operating in Smart Card mode, user must set UARTEN(SCnCR1
|        |          |[0]) = 0.
|        |          |Note 3:When UART is enabled, hardware will generate a reset to reset
|        |          |FIFO and internal state machine.
|[1]     |CLKKEEP   |SC Clock Enable Bit
|        |          |0 = SC clock generation Disabled.
|        |          |1 = SC clock always keeps free running.
|[2]     |RXDMAEN   |SC/UART RX DMA Enable
|        |          |This bit enables the SC/UART RX operating by through PDMA transfer, RX
|        |          |data are saved in XRAM after SC/UART RX operation.
|        |          |0 = SC/UART RX DMA Disabled
|        |          |1 = SC/UART RX DMA Enabled
|[3]     |TXDMAEN   |SC/UART TX DMA Enable
|        |          |This bit enables the SC/UART TX operating by through PDMA transfer, TX
|        |          |data needs to be ready in XRAM before SC/UART TX starting.
|        |          |0 = SPI TX DMA Disabled
|        |          |1 = SPI TX DMA Enabled
|[5:4]   |WLS[1:0]  |Word Length Selection
|        |          |00 = Word length is 8 bits.
|        |          |01 = Word length is 7 bits.
|        |          |10 = Word length is 6 bits.
|        |          |11 = Word length is 5 bits.
|        |          |Note: In smart card mode, this WLS must be ‘00’
|[6]     |PBOFF     |Parity Bit Disable Control
|        |          |0 = Parity bit is generated or checked between the last data word bit
|        |          |and stop bit of the serial data.
|        |          |1 = Parity bit is not generated (transmitting data) or checked
|        |          |(receiving data) during transfer.
|        |          |Note: In smart card mode, this field must be ‘0’ (default setting is
|        |          |with parity bit)
|[7]     |OPE       |Odd Parity Enable Bit
|        |          |0 = Even number of logic 1’s are transmitted or check the data word
|        |          |and parity bits in receiving mode.
|        |          |1 = Odd number of logic 1’s are transmitted or check the data word and
|        |          |parity bits in receiving mode.
|        |          |Note: This bit has effect only when PBOFF bit is ‘0’.
*/
__sfr __no_init volatile unsigned char SC0CR1 @ 0xD7;

/**
@addtogroup SFR_PAGE0_SC0CR1_MACRO Bit Macro Functions
Bit Macro Functions of SC0CR1
@{ */

#define set_SC0CR1_UARTEN        SFRS = 0; SC0CR1 |= 0x01 /*!<Set SC0CR1.UARTEN              */
#define set_SC0CR1_CLKKEEP       SFRS = 0; SC0CR1 |= 0x02 /*!<Set SC0CR1.CLKKEEP             */
#define set_SC0CR1_RXDMAEN       SFRS = 0; SC0CR1 |= 0x04 /*!<Set SC0CR1.RXDMAEN             */
#define set_SC0CR1_TXDMAEN       SFRS = 0; SC0CR1 |= 0x08 /*!<Set SC0CR1.TXDMAEN             */

#define set_SC0CR1_PBOFF         SFRS = 0; SC0CR1 |= 0x40 /*!<Set SC0CR1.PBOFF               */
#define set_SC0CR1_OPE           SFRS = 0; SC0CR1 |= 0x80 /*!<Set SC0CR1.OPE                 */

#define clr_SC0CR1_UARTEN        SFRS = 0; SC0CR1 &=~0x01 /*!<Clear SC0CR1.UARTEN            */
#define clr_SC0CR1_CLKKEEP       SFRS = 0; SC0CR1 &=~0x02 /*!<Clear SC0CR1.CLKKEEP           */
#define clr_SC0CR1_RXDMAEN       SFRS = 0; SC0CR1 &=~0x04 /*!<Clear SC0CR1.RXDMAEN           */
#define clr_SC0CR1_TXDMAEN       SFRS = 0; SC0CR1 &=~0x08 /*!<Clear SC0CR1.TXDMAEN           */

#define clr_SC0CR1_PBOFF         SFRS = 0; SC0CR1 &=~0x40 /*!<Clear SC0CR1.PBOFF             */
#define clr_SC0CR1_OPE           SFRS = 0; SC0CR1 &=~0x80 /*!<Clear SC0CR1.OPE               */

/**@} end of SFR_PAGE0_SC0CR1_MACRO group */
/**@} end of SFR_PAGE0_SC0CR1 group */

/**
   @addtogroup SFR_PAGE0_P4 P4
   Special Function Register P4
   @{ */

/**
@var P4
Address: D8H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[1]     |1         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[2]     |2         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[3]     |3         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[4]     |4         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[5]     |5         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[6]     |6         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[7]     |7         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
*/
__sfr __no_init volatile union
{
  unsigned char P4; /* P4  */
  struct /* P4  */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;    
  } P4_bit;
} @ 0xD8;
/**
@addtogroup SFR_PAGE0_P4_MACRO Bit Macro Functions
Bit Macro Functions of P4
@{ */

#define set_P4_0                 P4 |= 0x01 /*!<Set P4.0                       */
#define set_P4_1                 P4 |= 0x02 /*!<Set P4.1                       */
#define set_P4_2                 P4 |= 0x04 /*!<Set P4.2                       */
#define set_P4_3                 P4 |= 0x08 /*!<Set P4.3                       */
#define set_P4_4                 P4 |= 0x10 /*!<Set P4.4                       */
#define set_P4_5                 P4 |= 0x20 /*!<Set P4.5                       */
#define set_P4_6                 P4 |= 0x40 /*!<Set P4.6                       */
#define set_P4_7                 P4 |= 0x80 /*!<Set P4.7                       */

#define clr_P4_0                 P4 &=~0x01 /*!<Clear P4.0                     */
#define clr_P4_1                 P4 &=~0x02 /*!<Clear P4.1                     */
#define clr_P4_2                 P4 &=~0x04 /*!<Clear P4.2                     */
#define clr_P4_3                 P4 &=~0x08 /*!<Clear P4.3                     */
#define clr_P4_4                 P4 &=~0x10 /*!<Clear P4.4                     */
#define clr_P4_5                 P4 &=~0x20 /*!<Clear P4.5                     */
#define clr_P4_6                 P4 &=~0x40 /*!<Clear P4.6                     */
#define clr_P4_7                 P4 &=~0x80 /*!<Clear P4.7                     */

/**@} end of SFR_PAGE0_P4_MACRO group */
/**@} end of SFR_PAGE0_P4 group */

/**
   @addtogroup SFR_PAGE0_SC0DR SC0DR
   Special Function Register SC0DR
   @{ */

/**
@var SC0DR
Address: D9H, Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SCDR[7:0] |SC / UART Buffer Data
|        |          |This byte is used for transmitting or receiving data on SC / UART bus.
|        |          |A write of this byte is a write to the shift register. A read of this
|        |          |byte is actually a read of the read data buffer.
|        |          |Note: If SCEN(SCnCR0[0]) is not enabled, SCnDR cannot be programmed.
*/
__sfr __no_init volatile unsigned char SC0DR @ 0xD9;

/**@} end of SFR_PAGE0_SC0DR group */

/**
   @addtogroup SFR_PAGE0_SC0EGT SC0EGT
   Special Function Register SC0EGT
   @{ */

/**
@var SC0EGT
Address: DAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SCEGT[7:0]|SC Extra Guard Time
|        |          |This field indicates the extra guard timer value.
|        |          |Note:
|        |          |The counter is ETU base .
*/
__sfr __no_init volatile unsigned char SC0EGT @ 0xDA;

/**@} end of SFR_PAGE0_SC0EGT group */

/**
   @addtogroup SFR_PAGE0_SC0ETURD0 SC0ETURD0
   Special Function Register SC0ETURD0
   @{ */

/**
@var SC0ETURD0
Address: DBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |ETURDIV[7:0]|LSB Bits of ETU Rate Divider
|        |          |The field indicates the LSB of clock rate divider.
|        |          |The real ETU is ETURDIV[11:0] + 1.
|        |          |Note 1:
|        |          |ETURDIV[11:0] must be greater than 0x004.
|        |          |Note 2:
|        |          |SCnETURD0 has to program first, then SCnETUDR2.
*/
__sfr __no_init volatile unsigned char SC0ETURD0 @ 0xDB;

/**@} end of SFR_PAGE0_SC0ETURD0 group */

/**
   @addtogroup SFR_PAGE0_SC0ETURD1 SC0ETURD1
   Special Function Register SC0ETURD1
   @{ */

/**
@var SC0ETURD1
Address: DCH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |ETURDIV[11:8]|MSB Bits of ETU Rate Divider
|        |          |The field indicates the MSB of clock rate divider.
|        |          |The real ETU is ETURDIV[11:0] + 1.
|        |          |Note 1:
|        |          |ETURDIV[11:0] must be greater than 0x004.
|        |          |Note 2:
|        |          |SCnETURD0 has to program first, then SCnETUDR1 .
|[6:4]   |SCDIV[2:0]|SC Clock Divider
|        |          |000 = FSC is FSYS/1.
|        |          |001 = FSC is FSYS/2.
|        |          |010 = FSC is FSYS/4.
|        |          |011 = FSC is FSYS/8. (By default.)
|        |          |100 = FSC is FSYS/16.
|        |          |101 = FSC is FSYS/16.
|        |          |110 = FSC is FSYS/16.
|        |          |111 = FSC is FSYS/16.
|        |          |Note: that the FSC clock should be 1Mhz ~ 5Mhz for ISO/IEC 7816-3
|        |          |standard
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char SC0ETURD1 @ 0xDC;

/**@} end of SFR_PAGE0_SC0ETURD1 group */

/**
   @addtogroup SFR_PAGE0_SC0IE SC0IE
   Special Function Register SC0IE
   @{ */

/**
@var SC0IE
Address: DDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIEN    |Receive Data Reach Interrupt Enable Bit
|        |          |This field is used to enable received data interrupt.
|        |          |0 = Receive data interrupt Disabled.
|        |          |1 = Receive data interrupt Enabled.
|[1]     |TBEIEN    |Transmit Buffer Empty Interrupt Enable Bit
|        |          |This field is used to enable transmit buffer empty interrupt.
|        |          |0 = Transmit buffer empty interrupt Disabled.
|        |          |1 = Transmit buffer empty interrupt Enabled.
|[2]     |TERRIEN   |Transfer Error Interrupt Enable Bit
|        |          |This field is used to enable transfer error interrupt. The transfer
|        |          |error states is at SC0TSR register which includes receiver break error
|        |          |BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]), receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |0 = Transfer error interrupt Disabled.
|        |          |1 = Transfer error interrupt Enabled.
|[3]     |BGTIEN    |Block Guard Time Interrupt Enable Bit
|        |          |This field is used to enable block guard time interrupt.
|        |          |0 = Block guard time interrupt Disabled.
|        |          |1 = Block guard time interrupt Enabled.
|[4]     |ACERRIEN  |Auto Convention Error Interrupt Enable Bit
|        |          |This field is used to enable auto-convention error interrupt.
|        |          |0 = Auto-convention error interrupt Disabled.
|        |          |1 = Auto-convention error interrupt Enabled.
|[7:5]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char SC0IE @ 0xDD;

/**
@addtogroup SFR_PAGE0_SC0IE_MACRO Bit Macro Functions
Bit Macro Functions of SC0IE
@{ */

#define set_SC0IE_RDAIEN         SFRS = 0; SC0IE |= 0x01 /*!<Set SC0IE.RDAIEN               */
#define set_SC0IE_TBEIEN         SFRS = 0; SC0IE |= 0x02 /*!<Set SC0IE.TBEIEN               */
#define set_SC0IE_TERRIEN        SFRS = 0; SC0IE |= 0x04 /*!<Set SC0IE.TERRIEN              */
#define set_SC0IE_BGTIEN         SFRS = 0; SC0IE |= 0x08 /*!<Set SC0IE.BGTIEN               */
#define set_SC0IE_ACERRIEN       SFRS = 0; SC0IE |= 0x10 /*!<Set SC0IE.ACERRIEN             */

#define clr_SC0IE_RDAIEN         SFRS = 0; SC0IE &=~0x01 /*!<Clear SC0IE.RDAIEN             */
#define clr_SC0IE_TBEIEN         SFRS = 0; SC0IE &=~0x02 /*!<Clear SC0IE.TBEIEN             */
#define clr_SC0IE_TERRIEN        SFRS = 0; SC0IE &=~0x04 /*!<Clear SC0IE.TERRIEN            */
#define clr_SC0IE_BGTIEN         SFRS = 0; SC0IE &=~0x08 /*!<Clear SC0IE.BGTIEN             */
#define clr_SC0IE_ACERRIEN       SFRS = 0; SC0IE &=~0x10 /*!<Clear SC0IE.ACERRIEN           */

/**@} end of SFR_PAGE0_SC0IE_MACRO group */
/**@} end of SFR_PAGE0_SC0IE group */

/**
   @addtogroup SFR_PAGE0_SC0IE SC0IE
   Special Function Register SC0IE
   @{ */

/**
@var SC0IE
Address: DDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIEN    |Receive Data Reach Interrupt Enable Bit
|        |          |This field is used to enable received data interrupt.
|        |          |0 = Receive data interrupt Disabled.
|        |          |1 = Receive data interrupt Enabled.
|[1]     |TBEIEN    |Transmit Buffer Empty Interrupt Enable Bit
|        |          |This field is used to enable transmit buffer empty interrupt.
|        |          |0 = Transmit buffer empty interrupt Disabled.
|        |          |1 = Transmit buffer empty interrupt Enabled.
|[2]     |TERRIEN   |Transfer Error Interrupt Enable Bit
|        |          |This field is used to enable transfer error interrupt. The transfer
|        |          |error states is at SC0TSR register which includes receiver break error
|        |          |BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]), receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |0 = Transfer error interrupt Disabled.
|        |          |1 = Transfer error interrupt Enabled.
|[3]     |BGTIEN    |Block Guard Time Interrupt Enable Bit
|        |          |This field is used to enable block guard time interrupt.
|        |          |0 = Block guard time interrupt Disabled.
|        |          |1 = Block guard time interrupt Enabled.
|[4]     |ACERRIEN  |Auto Convention Error Interrupt Enable Bit
|        |          |This field is used to enable auto-convention error interrupt.
|        |          |0 = Auto-convention error interrupt Disabled.
|        |          |1 = Auto-convention error interrupt Enabled.
|[7:5]   |Reserved  |Reserved
*/

/**
@addtogroup SFR_PAGE0_SC0IE_MACRO Bit Macro Functions
Bit Macro Functions of SC0IE
@{ */

#define set_SC0IE_RDAIEN         SFRS = 0; SC0IE |= 0x01 /*!<Set SC0IE.RDAIEN               */
#define set_SC0IE_TBEIEN         SFRS = 0; SC0IE |= 0x02 /*!<Set SC0IE.TBEIEN               */
#define set_SC0IE_TERRIEN        SFRS = 0; SC0IE |= 0x04 /*!<Set SC0IE.TERRIEN              */
#define set_SC0IE_BGTIEN         SFRS = 0; SC0IE |= 0x08 /*!<Set SC0IE.BGTIEN               */
#define set_SC0IE_ACERRIEN       SFRS = 0; SC0IE |= 0x10 /*!<Set SC0IE.ACERRIEN             */

#define clr_SC0IE_RDAIEN         SFRS = 0; SC0IE &=~0x01 /*!<Clear SC0IE.RDAIEN             */
#define clr_SC0IE_TBEIEN         SFRS = 0; SC0IE &=~0x02 /*!<Clear SC0IE.TBEIEN             */
#define clr_SC0IE_TERRIEN        SFRS = 0; SC0IE &=~0x04 /*!<Clear SC0IE.TERRIEN            */
#define clr_SC0IE_BGTIEN         SFRS = 0; SC0IE &=~0x08 /*!<Clear SC0IE.BGTIEN             */
#define clr_SC0IE_ACERRIEN       SFRS = 0; SC0IE &=~0x10 /*!<Clear SC0IE.ACERRIEN           */

/**@} end of SFR_PAGE0_SC0IE_MACRO group */
/**@} end of SFR_PAGE0_SC0IE group */

/**
   @addtogroup SFR_PAGE0_SC0IS SC0IS
   Special Function Register SC0IS
   @{ */

/**
@var SC0IS
Address: DEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIF     |Receive Data Reach Interrupt Status Flag (Read Only)
|        |          |This field is used for received data interrupt status flag.
|        |          |Note: This field is the status flag of received data. If software
|        |          |reads data from SC_DAT pin, this bit will be cleared automatically.
|[1]     |TBEIF     |Transmit Buffer Empty Interrupt Status Flag (Read Only)
|        |          |This field is used for transmit buffer empty interrupt status flag.
|        |          |Note: This field is the status flag of transmit buffer empty state. If
|        |          |software wants to clear this bit, software must write data to
|        |          |DAT(SCnDR[7:0]) buffer and then this bit will be cleared
|        |          |automatically.
|[2]     |TERRIF    |Transfer Error Interrupt Status Flag (Read Only)
|        |          |This field is used for transfer error interrupt status flag. The
|        |          |transfer error states is at SC0TSR register which includes receiver
|        |          |break error BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]) and receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |Note: This field is the status flag of BEF(SC0TSR[6]), FEF(SC0TSR[5]),
|        |          |PEF(SC0TSR[4]), RXOV(SC0TSR[0]) and TXOV(SC0TSR[2]). So, if software
|        |          |wants to clear this bit, software must write 0 to each field.
|[3]     |BGTIF     |Block Guard Time Interrupt Status Flag (Read Only)
|        |          |This field is used for block guard time interrupt status flag.
|        |          |Note 1: This bit is valid when RXBGTEN (SCnCR0[5]) is enabled.
|        |          |Note 2: This bit is read only, but it can be cleared by writing 0 to
|        |          |it.
|[4]     |ACERRIF   |Auto Convention Error Interrupt Status Flag (Read Only)
|        |          |This field indicates auto convention sequence error. If the received
|        |          |TS at ATR state is neither 0x3B nor 0x3F, this bit will be set.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[5]     |Tx_Er     |TX transmit error flag
|[6]     |SIF1      |software interrupt for test
|[7]     |loop_test |loop test interrupt flag for software test
*/
__sfr __no_init volatile unsigned char SC0IS @ 0xDE;

/**
@addtogroup SFR_PAGE0_SC0IS_MACRO Bit Macro Functions
Bit Macro Functions of SC0IS
@{ */

#define set_SC0IS_RDAIF          SFRS = 0; SC0IS |= 0x01 /*!<Set SC0IS.RDAIF                */
#define set_SC0IS_TBEIF          SFRS = 0; SC0IS |= 0x02 /*!<Set SC0IS.TBEIF                */
#define set_SC0IS_TERRIF         SFRS = 0; SC0IS |= 0x04 /*!<Set SC0IS.TERRIF               */
#define set_SC0IS_BGTIF          SFRS = 0; SC0IS |= 0x08 /*!<Set SC0IS.BGTIF                */
#define set_SC0IS_ACERRIF        SFRS = 0; SC0IS |= 0x10 /*!<Set SC0IS.ACERRIF              */
#define set_SC0IS_Tx_Er          SFRS = 0; SC0IS |= 0x20 /*!<Set SC0IS.Tx_Er                */
#define set_SC0IS_SIF1           SFRS = 0; SC0IS |= 0x40 /*!<Set SC0IS.SIF1                 */
#define set_SC0IS_loop_test      SFRS = 0; SC0IS |= 0x80 /*!<Set SC0IS.loop_test            */

#define clr_SC0IS_RDAIF          SFRS = 0; SC0IS &=~0x01 /*!<Clear SC0IS.RDAIF              */
#define clr_SC0IS_TBEIF          SFRS = 0; SC0IS &=~0x02 /*!<Clear SC0IS.TBEIF              */
#define clr_SC0IS_TERRIF         SFRS = 0; SC0IS &=~0x04 /*!<Clear SC0IS.TERRIF             */
#define clr_SC0IS_BGTIF          SFRS = 0; SC0IS &=~0x08 /*!<Clear SC0IS.BGTIF              */
#define clr_SC0IS_ACERRIF        SFRS = 0; SC0IS &=~0x10 /*!<Clear SC0IS.ACERRIF            */
#define clr_SC0IS_Tx_Er          SFRS = 0; SC0IS &=~0x20 /*!<Clear SC0IS.Tx_Er              */
#define clr_SC0IS_SIF1           SFRS = 0; SC0IS &=~0x40 /*!<Clear SC0IS.SIF1               */
#define clr_SC0IS_loop_test      SFRS = 0; SC0IS &=~0x80 /*!<Clear SC0IS.loop_test          */

/**@} end of SFR_PAGE0_SC0IS_MACRO group */
/**@} end of SFR_PAGE0_SC0IS group */

/**
   @addtogroup SFR_PAGE0_SC0TSR SC0TSR
   Special Function Register SC0TSR
   @{ */

/**
@var SC0TSR
Address: DFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RXOV      |RX Overflow Error Status Flag (Read Only)
|        |          |This bit is set when RX buffer overflow.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[1]     |RXEMPTY   |Receiver Buffer Empty Status Flag(Read Only)
|        |          |This bit indicates RX buffer empty or not.
|        |          |Note: When Rx buffer has been read by CPU, hardware sets this bit
|        |          |high. It will be cleared when SC receives any new data.
|[2]     |TXOV      |TX Overflow Error Interrupt Status Flag (Read Only)
|        |          |If TX buffer is full, an additional write to DAT(SCnDR[7:0]) will
|        |          |cause this bit be set to 1 by hardware.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[3]     |TXEMPTY   |Transmit Buffer Empty Status Flag (Read Only)
|        |          |This bit indicates TX buffer empty or not.
|        |          |Note: When TX buffer has been transferred to Transmitter Shift
|        |          |Register, hardware sets this bit high. It will be cleared when writing
|        |          |data into DAT(SCnDR[7:0]) (TX buffer not empty).
|[4]     |PEF       |Receiver Parity Error Status Flag (Read Only)
|        |          |This bit is set to logic 1 whenever the received character does not
|        |          |have a valid
|        |          |parity bit.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[5]     |FEF       |Receiver Frame Error Status Flag (Read Only)
|        |          |This bit is set to logic 1 whenever the received character does not
|        |          |have a valid stop bit (that is, the stop bit following the last data
|        |          |bit or parity bit is detected as logic 0).
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[6]     |BEF       |Receiver Break Error Status Flag (Read Only)
|        |          |This bit is set to logic 1 whenever the received data input (RX) held
|        |          |in the spacing state (logic 0) is longer than a full word transmission
|        |          |time (that is, the total time of start bit + data bits + parity + stop
|        |          |bits). .
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[7]     |ACT       |Transmit /Receive in Active Status Flag (Read Only)
|        |          |0 = This bit is cleared automatically when TX/RX transfer is finished
|        |          |1 = This bit is set by hardware when TX/RX transfer is in active.
*/
__sfr __no_init volatile unsigned char SC0TSR @ 0xDF;

/**
@addtogroup SFR_PAGE0_SC0TSR_MACRO Bit Macro Functions
Bit Macro Functions of SC0TSR
@{ */

#define set_SC0TSR_RXOV          SFRS = 0; SC0TSR |= 0x01 /*!<Set SC0TSR.RXOV                */
#define set_SC0TSR_RXEMPTY       SFRS = 0; SC0TSR |= 0x02 /*!<Set SC0TSR.RXEMPTY             */
#define set_SC0TSR_TXOV          SFRS = 0; SC0TSR |= 0x04 /*!<Set SC0TSR.TXOV                */
#define set_SC0TSR_TXEMPTY       SFRS = 0; SC0TSR |= 0x08 /*!<Set SC0TSR.TXEMPTY             */
#define set_SC0TSR_PEF           SFRS = 0; SC0TSR |= 0x10 /*!<Set SC0TSR.PEF                 */
#define set_SC0TSR_FEF           SFRS = 0; SC0TSR |= 0x20 /*!<Set SC0TSR.FEF                 */
#define set_SC0TSR_BEF           SFRS = 0; SC0TSR |= 0x40 /*!<Set SC0TSR.BEF                 */
#define set_SC0TSR_ACT           SFRS = 0; SC0TSR |= 0x80 /*!<Set SC0TSR.ACT                 */

#define clr_SC0TSR_RXOV          SFRS = 0; SC0TSR &=~0x01 /*!<Clear SC0TSR.RXOV              */
#define clr_SC0TSR_RXEMPTY       SFRS = 0; SC0TSR &=~0x02 /*!<Clear SC0TSR.RXEMPTY           */
#define clr_SC0TSR_TXOV          SFRS = 0; SC0TSR &=~0x04 /*!<Clear SC0TSR.TXOV              */
#define clr_SC0TSR_TXEMPTY       SFRS = 0; SC0TSR &=~0x08 /*!<Clear SC0TSR.TXEMPTY           */
#define clr_SC0TSR_PEF           SFRS = 0; SC0TSR &=~0x10 /*!<Clear SC0TSR.PEF               */
#define clr_SC0TSR_FEF           SFRS = 0; SC0TSR &=~0x20 /*!<Clear SC0TSR.FEF               */
#define clr_SC0TSR_BEF           SFRS = 0; SC0TSR &=~0x40 /*!<Clear SC0TSR.BEF               */
#define clr_SC0TSR_ACT           SFRS = 0; SC0TSR &=~0x80 /*!<Clear SC0TSR.ACT               */

/**@} end of SFR_PAGE0_SC0TSR_MACRO group */
/**@} end of SFR_PAGE0_SC0TSR group */

/**
   @addtogroup SFR_PAGE0_ACC ACC
   Special Function Register ACC
   @{ */

/**
@var ACC
Address: E0H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |ACC[7:0]  |Accumulator
|        |          |The A or ACC register is the standard 80C51 accumulator for arithmetic
|        |          |operation.
*/
__sfr __no_init volatile union
{
  unsigned char ACC; /* Accumulator */
  struct /* Accumulator */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;    
  } ACC_bit;
} @ 0xE0;

/**@} end of SFR_PAGE0_ACC group */

/**
   @addtogroup SFR_PAGE0_I2C1CON I2C1CON
   Special Function Register I2C1CON
   @{ */

/**
@var I2C1CON
Address: E8H, All SFR pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |Reserved  |Reserved
|[2]     |AA        |Acknowledge Assert Flag
|        |          |If the AA flag is set, an ACK (low level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave.
|        |          |If the AA flag is cleared, a NACK (high level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave. A device with
|        |          |its own AA flag cleared will ignore its own salve address and the
|        |          |General Call. Consequently, SI will note be asserted and no interrupt
|        |          |is requested.
|        |          |Note that if an addressed slave does not return an ACK under slave
|        |          |receiver mode or not receive an ACK under slave transmitter mode, the
|        |          |slave device will become a not addressed slave. It cannot receive any
|        |          |data until its AA flag is set and a master addresses it again.
|        |          |There is a special case of I2CnSTAT value C8H occurs under slave
|        |          |transmitter mode. Before the slave device transmit the last data byte
|        |          |to the master, AA flag can be cleared as 0. Then after the last data
|        |          |byte transmitted, the slave device will actively switch to not
|        |          |addressed slave mode of disconnecting with the master. The further
|        |          |reading by the master will be all FFH.
|[3]     |SI        |I2Cn Interrupt Flag
|        |          |SI flag is set by hardware when one of 26 possible I2C status (besides
|        |          |F8H status) is entered. After SI is set, the software should read
|        |          |I2CnSTAT register to determine which step has been passed and take
|        |          |actions for next step.
|        |          |SI is cleared by software. Before the SI is cleared, the low period of
|        |          |SCL line is stretched. The transaction is suspended. It is useful for
|        |          |the slave device to deal with previous data bytes until ready for
|        |          |receiving the next byte.
|        |          |The serial transaction is suspended until SI is cleared by software.
|        |          |After SI is cleared, I2C bus will continue to generate START or
|        |          |repeated START condition, STOP condition, 8-bit data, or so on
|        |          |depending on the software configuration of controlling byte or bits.
|        |          |Therefore, user should take care of it by preparing suitable setting
|        |          |of registers before SI is software cleared.
|[4]     |STO       |STOP Flag
|        |          |When STO is set if the I2C is in the master mode, a STOP condition is
|        |          |transmitted to the bus. STO is automatically cleared by hardware once
|        |          |the STOP condition has been detected on the bus.
|        |          |The STO flag setting is also used to recover the I2C device from the
|        |          |bus error state (I2CnSTAT as 00H). In this case, no STOP condition is
|        |          |transmitted to the I2C bus.
|        |          |If the STA and STO bits are both set and the device is original in the
|        |          |master mode, the I2C bus will generate a STOP condition and
|        |          |immediately follow a START condition. If the device is in slave mode,
|        |          |STA and STO simultaneous setting should be avoid from issuing illegal
|        |          |I2C frames.
|[5]     |STA       |START Flag
|        |          |When STA is set, the I2C generates a START condition if the bus is
|        |          |free. If the bus is busy, the I2C waits for a STOP condition and
|        |          |generates a START condition following.
|        |          |If STA is set while the I2C is already in the master mode and one or
|        |          |more bytes have been transmitted or received, the I2C generates a
|        |          |repeated START condition.
|        |          |Note that STA can be set anytime even in a slave mode, but STA is not
|        |          |hardware automatically cleared after START or repeated START condition
|        |          |has been detected. User should take care of it by clearing STA
|        |          |manually.
|[6]     |I2CEN     |I2Cn Bus Enable
|        |          |0 = I2C bus Disabled.
|        |          |1 = I2C bus Enabled.
|        |          |Before enabling the I2C, SCL and SDA port latches should be set to
|        |          |logic 1.
|[7]     |I         |I2Cn Hold Time Extend Enable
|        |          |0 = I2C DATA to SCL hold time extend disabled
|        |          |1 = I2C DATA to SCL hold time extend enabled, extend 8 system clock
*/
__sfr __no_init volatile union
{
  unsigned char I2C1CON; /* I2C1CON  */
  struct /* I2C1CON  */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } I2C1CON_bit;
} @ 0xE8;
/**
@addtogroup SFR_PAGE0_I2C1CON_MACRO Bit Macro Functions
Bit Macro Functions of I2C1CON
@{ */

#define set_I2C1CON_AA           I2C1CON |= 0x04 /*!<Set I2C1CON.AA                 */
#define set_I2C1CON_SI           I2C1CON |= 0x08 /*!<Set I2C1CON.SI                 */
#define set_I2C1CON_STO          I2C1CON |= 0x10 /*!<Set I2C1CON.STO                */
#define set_I2C1CON_STA          I2C1CON |= 0x20 /*!<Set I2C1CON.STA                */
#define set_I2C1CON_I2CEN        I2C1CON |= 0x40 /*!<Set I2C1CON.I2CEN              */
#define set_I2C1CON_I            I2C1CON |= 0x80 /*!<Set I2C1CON.I                  */

#define clr_I2C1CON_AA           I2C1CON &=~0x04 /*!<Clear I2C1CON.AA               */
#define clr_I2C1CON_SI           I2C1CON &=~0x08 /*!<Clear I2C1CON.SI               */
#define clr_I2C1CON_STO          I2C1CON &=~0x10 /*!<Clear I2C1CON.STO              */
#define clr_I2C1CON_STA          I2C1CON &=~0x20 /*!<Clear I2C1CON.STA              */
#define clr_I2C1CON_I2CEN        I2C1CON &=~0x40 /*!<Clear I2C1CON.I2CEN            */
#define clr_I2C1CON_I            I2C1CON &=~0x80 /*!<Clear I2C1CON.I                */

/**@} end of SFR_PAGE0_I2C1CON_MACRO group */
/**@} end of SFR_PAGE0_I2C1CON group */

/**
   @addtogroup SFR_PAGE0_DMA0TSR DMA0TSR
   Special Function Register DMA0TSR
   @{ */

/**
@var DMA0TSR
Address: E9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |FDONE     |PDMA Full Transfer Done Flag
|        |          |This bit is set by hardware when PDMA full transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[1]     |HDONE     |PDMA Half Transfer Done Flag
|        |          |This bit is set by hardware when PDMA half transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[2]     |ACT       |PDMA in Active Status Flag (Read Only)
|        |          |0 = This bit is cleared automatically when PDMA transfer is done or
|        |          |disabled.
|        |          |1 = This bit is set by hardware when PDMA transfer is in active.
|[3]     |INT_Test  |PDMA software interrupt (for software test)
|[7:4]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char DMA0TSR @ 0xE9;

/**
@addtogroup SFR_PAGE0_DMA0TSR_MACRO Bit Macro Functions
Bit Macro Functions of DMA0TSR
@{ */

#define set_DMA0TSR_FDONE        SFRS = 0; DMA0TSR |= 0x01 /*!<Set DMA0TSR.FDONE              */
#define set_DMA0TSR_HDONE        SFRS = 0; DMA0TSR |= 0x02 /*!<Set DMA0TSR.HDONE              */
#define set_DMA0TSR_ACT          SFRS = 0; DMA0TSR |= 0x04 /*!<Set DMA0TSR.ACT                */
#define set_DMA0TSR_INT_Test     SFRS = 0; DMA0TSR |= 0x08 /*!<Set DMA0TSR.INT_Test           */

#define clr_DMA0TSR_FDONE        SFRS = 0; DMA0TSR &=~0x01 /*!<Clear DMA0TSR.FDONE            */
#define clr_DMA0TSR_HDONE        SFRS = 0; DMA0TSR &=~0x02 /*!<Clear DMA0TSR.HDONE            */
#define clr_DMA0TSR_ACT          SFRS = 0; DMA0TSR &=~0x04 /*!<Clear DMA0TSR.ACT              */
#define clr_DMA0TSR_INT_Test     SFRS = 0; DMA0TSR &=~0x08 /*!<Clear DMA0TSR.INT_Test         */

/**@} end of SFR_PAGE0_DMA0TSR_MACRO group */
/**@} end of SFR_PAGE0_DMA0TSR group */

/**
   @addtogroup SFR_PAGE0_MTM0DAL MTM0DAL
   Special Function Register MTM0DAL
   @{ */

/**
@var MTM0DAL
Address: EAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MDAL[7:0] |Memory to Memory Destination Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/
__sfr __no_init volatile unsigned char MTM0DAL @ 0xEA;

/**@} end of SFR_PAGE0_MTM0DAL group */

/**
   @addtogroup SFR_PAGE0_DMA1CR0 DMA1CR0
   Special Function Register DMA1CR0
   @{ */

/**
@var DMA1CR0
Address: EBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/
__sfr __no_init volatile unsigned char DMA1CR0 @ 0xEB;

/**
@addtogroup SFR_PAGE0_DMA1CR0_MACRO Bit Macro Functions
Bit Macro Functions of DMA1CR0
@{ */

#define set_DMA1CR0_EN           SFRS = 0; DMA1CR0 |= 0x01 /*!<Set DMA1CR0.EN                 */
#define set_DMA1CR0_RUN          SFRS = 0; DMA1CR0 |= 0x02 /*!<Set DMA1CR0.RUN                */
#define set_DMA1CR0_FIE          SFRS = 0; DMA1CR0 |= 0x04 /*!<Set DMA1CR0.FIE                */
#define set_DMA1CR0_HIE          SFRS = 0; DMA1CR0 |= 0x08 /*!<Set DMA1CR0.HIE                */


#define clr_DMA1CR0_EN           SFRS = 0; DMA1CR0 &=~0x01 /*!<Clear DMA1CR0.EN               */
#define clr_DMA1CR0_RUN          SFRS = 0; DMA1CR0 &=~0x02 /*!<Clear DMA1CR0.RUN              */
#define clr_DMA1CR0_FIE          SFRS = 0; DMA1CR0 &=~0x04 /*!<Clear DMA1CR0.FIE              */
#define clr_DMA1CR0_HIE          SFRS = 0; DMA1CR0 &=~0x08 /*!<Clear DMA1CR0.HIE              */


/**@} end of SFR_PAGE0_DMA1CR0_MACRO group */
/**@} end of SFR_PAGE0_DMA1CR0 group */

/**
   @addtogroup SFR_PAGE0_DMA1CR0 DMA1CR0
   Special Function Register DMA1CR0
   @{ */

/**
@var DMA1CR0
Address: EBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |Others = Reserved.
|        |          |The others are reserved, no peripheral source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup SFR_PAGE0_DMA1CR0_MACRO Bit Macro Functions
Bit Macro Functions of DMA1CR0
@{ */

#define set_DMA1CR0_EN           SFRS = 0; DMA1CR0 |= 0x01 /*!<Set DMA1CR0.EN                 */
#define set_DMA1CR0_RUN          SFRS = 0; DMA1CR0 |= 0x02 /*!<Set DMA1CR0.RUN                */
#define set_DMA1CR0_FIE          SFRS = 0; DMA1CR0 |= 0x04 /*!<Set DMA1CR0.FIE                */
#define set_DMA1CR0_HIE          SFRS = 0; DMA1CR0 |= 0x08 /*!<Set DMA1CR0.HIE                */


#define clr_DMA1CR0_EN           SFRS = 0; DMA1CR0 &=~0x01 /*!<Clear DMA1CR0.EN               */
#define clr_DMA1CR0_RUN          SFRS = 0; DMA1CR0 &=~0x02 /*!<Clear DMA1CR0.RUN              */
#define clr_DMA1CR0_FIE          SFRS = 0; DMA1CR0 &=~0x04 /*!<Clear DMA1CR0.FIE              */
#define clr_DMA1CR0_HIE          SFRS = 0; DMA1CR0 &=~0x08 /*!<Clear DMA1CR0.HIE              */


/**@} end of SFR_PAGE0_DMA1CR0_MACRO group */
/**@} end of SFR_PAGE0_DMA1CR0 group */

/**
   @addtogroup SFR_PAGE0_DMA1MAL DMA1MAL
   Special Function Register DMA1MAL
   @{ */

/**
@var DMA1MAL
Address: ECH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MAL[7:0]  |PDMA XRAM Base Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the source address.
|        |          |XRAM address = {MAH[3:0],MAL[7:0]}
*/
__sfr __no_init volatile unsigned char DMA1MAL @ 0xEC;

/**@} end of SFR_PAGE0_DMA1MAL group */

/**
   @addtogroup SFR_PAGE0_DMA1CNT DMA1CNT
   Special Function Register DMA1CNT
   @{ */

/**
@var DMA1CNT
Address: EDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CNT[7:0]  |PDMA Transfer Count
|        |          |The total transfer count for PDMA request operation.
|        |          |Total transfer count = CNT[7:0] + 1
*/
__sfr __no_init volatile unsigned char DMA1CNT @ 0xED;

/**@} end of SFR_PAGE0_DMA1CNT group */

/**
   @addtogroup SFR_PAGE0_DMA1CCNT DMA1CCNT
   Special Function Register DMA1CCNT
   @{ */

/**
@var DMA1CCNT
Address: EEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CCNT[7:0] |PDMA Current Transfer Count
|        |          |The current transfer count for PDMA request operation.
|        |          |Current transfer count = CCNT[7:0]
|        |          |Note: while DMAnCNT=0xFF (total transfer count = 256) and DMAnCCNT =
|        |          |0x00 , If PDMA FDONE flag (DMAnTSR[0])=0, that means, 1’st byte data
|        |          |is not complete.If PDMA FDONE flag (DMAnTSR[0])=1, that means, all of
|        |          |data are transferred..
*/
__sfr __no_init volatile unsigned char DMA1CCNT @ 0xEE;

/**@} end of SFR_PAGE0_DMA1CCNT group */

/**
   @addtogroup SFR_PAGE0_EIP0 EIP0
   Special Function Register EIP0
   @{ */

/**
@var EIP0
Address: EFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PI2C0     |I2C interrupt priority low bit
|[1]     |PPI       |Pin interrupt priority low bit
|[2]     |PCAP      |Input capture interrupt priority low bit
|[3]     |PPWM0     |PWM interrupt priority low bit
|[4]     |PWDT      |WDT interrupt priority low bit
|[5]     |PFB       |Fault Brake interrupt priority low bit
|[6]     |PSPI0     |SPI0 interrupt priority low bit
|[7]     |PT2       |Timer 2 interrupt priority low bit
*/
__sfr __no_init volatile unsigned char EIP0 @ 0xEF;

/**
@addtogroup SFR_PAGE0_EIP0_MACRO Bit Macro Functions
Bit Macro Functions of EIP0
@{ */

#define set_EIP0_PI2C0           SFRS = 0; EIP0 |= 0x01 /*!<Set EIP0.PI2C0                 */
#define set_EIP0_PPI             SFRS = 0; EIP0 |= 0x02 /*!<Set EIP0.PPI                   */
#define set_EIP0_PCAP            SFRS = 0; EIP0 |= 0x04 /*!<Set EIP0.PCAP                  */
#define set_EIP0_PPWM0           SFRS = 0; EIP0 |= 0x08 /*!<Set EIP0.PPWM0                 */
#define set_EIP0_PWDT            SFRS = 0; EIP0 |= 0x10 /*!<Set EIP0.PWDT                  */
#define set_EIP0_PFB             SFRS = 0; EIP0 |= 0x20 /*!<Set EIP0.PFB                   */
#define set_EIP0_PSPI0           SFRS = 0; EIP0 |= 0x40 /*!<Set EIP0.PSPI0                 */
#define set_EIP0_PT2             SFRS = 0; EIP0 |= 0x80 /*!<Set EIP0.PT2                   */

#define clr_EIP0_PI2C0           SFRS = 0; EIP0 &=~0x01 /*!<Clear EIP0.PI2C0               */
#define clr_EIP0_PPI             SFRS = 0; EIP0 &=~0x02 /*!<Clear EIP0.PPI                 */
#define clr_EIP0_PCAP            SFRS = 0; EIP0 &=~0x04 /*!<Clear EIP0.PCAP                */
#define clr_EIP0_PPWM0           SFRS = 0; EIP0 &=~0x08 /*!<Clear EIP0.PPWM0               */
#define clr_EIP0_PWDT            SFRS = 0; EIP0 &=~0x10 /*!<Clear EIP0.PWDT                */
#define clr_EIP0_PFB             SFRS = 0; EIP0 &=~0x20 /*!<Clear EIP0.PFB                 */
#define clr_EIP0_PSPI0           SFRS = 0; EIP0 &=~0x40 /*!<Clear EIP0.PSPI0               */
#define clr_EIP0_PT2             SFRS = 0; EIP0 &=~0x80 /*!<Clear EIP0.PT2                 */

/**@} end of SFR_PAGE0_EIP0_MACRO group */
/**@} end of SFR_PAGE0_EIP0 group */
__sfr __no_init volatile union
{
  unsigned char B; /* B Register */
  struct /* B Register */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } B_bit;
} @ 0xF0;
/**
   @addtogroup SFR_PAGE0_DMA1TSR DMA1TSR
   Special Function Register DMA1TSR
   @{ */

/**
@var DMA1TSR
Address: F1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |FDONE     |PDMA Full Transfer Done Flag
|        |          |This bit is set by hardware when PDMA full transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[1]     |HDONE     |PDMA Half Transfer Done Flag
|        |          |This bit is set by hardware when PDMA half transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[2]     |ACT       |PDMA in Active Status Flag (Read Only)
|        |          |0 = This bit is cleared automatically when PDMA transfer is done or
|        |          |disabled.
|        |          |1 = This bit is set by hardware when PDMA transfer is in active.
|[3]     |INT_Test  |PDMA software interrupt (for software test)
|[7:4]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char DMA1TSR @ 0xF1;

/**
@addtogroup SFR_PAGE0_DMA1TSR_MACRO Bit Macro Functions
Bit Macro Functions of DMA1TSR
@{ */

#define set_DMA1TSR_FDONE        SFRS = 0; DMA1TSR |= 0x01 /*!<Set DMA1TSR.FDONE              */
#define set_DMA1TSR_HDONE        SFRS = 0; DMA1TSR |= 0x02 /*!<Set DMA1TSR.HDONE              */
#define set_DMA1TSR_ACT          SFRS = 0; DMA1TSR |= 0x04 /*!<Set DMA1TSR.ACT                */
#define set_DMA1TSR_INT_Test     SFRS = 0; DMA1TSR |= 0x08 /*!<Set DMA1TSR.INT_Test           */

#define clr_DMA1TSR_FDONE        SFRS = 0; DMA1TSR &=~0x01 /*!<Clear DMA1TSR.FDONE            */
#define clr_DMA1TSR_HDONE        SFRS = 0; DMA1TSR &=~0x02 /*!<Clear DMA1TSR.HDONE            */
#define clr_DMA1TSR_ACT          SFRS = 0; DMA1TSR &=~0x04 /*!<Clear DMA1TSR.ACT              */
#define clr_DMA1TSR_INT_Test     SFRS = 0; DMA1TSR &=~0x08 /*!<Clear DMA1TSR.INT_Test         */

/**@} end of SFR_PAGE0_DMA1TSR_MACRO group */
/**@} end of SFR_PAGE0_DMA1TSR group */

/**
   @addtogroup SFR_PAGE0_MTM1DAL MTM1DAL
   Special Function Register MTM1DAL
   @{ */

/**
@var MTM1DAL
Address: F2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MDAL[7:0] |Memory to Memory Destination Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/
__sfr __no_init volatile unsigned char MTM1DAL @ 0xF2;

/**@} end of SFR_PAGE0_MTM1DAL group */

/**
   @addtogroup SFR_PAGE0_SPI0CR0 SPI0CR0
   Special Function Register SPI0CR0
   @{ */

/**
@var SPI0CR0
Address: F3H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |SPR[1:0]  |SPI Clock Rate Select
|        |          |These four bits select four grades of SPI clock divider. The clock
|        |          |rates below are illustrated under FSYS condition. See Table 6.112 SPI
|        |          |Master Clock Rate Define Table
|        |          |SPR[3:0] are valid only under Master mode (MSTR = 1). If under Slave
|        |          |mode, the clock will automatically synchronize with the external clock
|        |          |on SPICLK pin from Master device up to FSYS/4 communication speed.
|[2]     |CPHA      |SPI Clock Phase Select
|        |          |CPHA bit determines the data sampling edge of the SPI clock. See
|        |          |Figure 6.114 SPI Clock Formats
|        |          |0 = The data is sampled on the first edge of the SPI clock.
|        |          |1 = The data is sampled on the second edge of the SPI clock.
|[3]     |CPOL      |SPI Clock Polarity Select
|        |          |CPOL bit determines the idle state level of the SPI clock. See Figure
|        |          |6.114 SPI Clock Formats
|        |          |0 = The SPI clock is low in idle state.
|        |          |1 = The SPI clock is high in idle state.
|[4]     |MSTR      |Master Mode Enable
|        |          |This bit switches the SPI operating between Master and Slave modes.
|        |          |0 = The SPI is configured as Slave mode.
|        |          |1 = The SPI is configured as Master mode.
|[5]     |LSBFE     |LSB First Enable
|        |          |0 = The SPI data is transferred MSB first.
|        |          |1 = The SPI data is transferred LSB first.
|[6]     |SPIEN     |SPI Enable
|        |          |0 = SPI function Disabled.
|        |          |1 = SPI function Enabled.
|[7]     |SSOE      |Slave Select Output Enable
|        |          |This bit is used in combination with the DISMODF (SPInSR.3) bit to
|        |          |determine the feature of pin as shown inTable 6.114 Slave Select Pin
|        |          |Configurations. This bit takes effect only under MSTR = 1 and DISMODF
|        |          |= 1 condition.
|        |          |0 = functions as a general purpose I/O pin.
|        |          |1 = automatically goes low for each transmission when selecting
|        |          |external Slave device and goes high during each idle state to de-
|        |          |select the Slave device.
*/
__sfr __no_init volatile unsigned char SPI0CR0 @ 0xF3;

/**
@addtogroup SFR_PAGE0_SPI0CR0_MACRO Bit Macro Functions
Bit Macro Functions of SPI0CR0
@{ */
#define set_SPI0CR0_SPR0         SFRS = 0; SPI0CR0 |= 0x01 /*!<Set SPI0CR0.SPR0               */
#define set_SPI0CR0_SPR1         SFRS = 0; SPI0CR0 |= 0x02 /*!<Set SPI0CR0.SPR1               */
#define set_SPI0CR0_CPHA         SFRS = 0; SPI0CR0 |= 0x04 /*!<Set SPI0CR0.CPHA               */
#define set_SPI0CR0_CPOL         SFRS = 0; SPI0CR0 |= 0x08 /*!<Set SPI0CR0.CPOL               */
#define set_SPI0CR0_MSTR         SFRS = 0; SPI0CR0 |= 0x10 /*!<Set SPI0CR0.MSTR               */
#define set_SPI0CR0_LSBFE        SFRS = 0; SPI0CR0 |= 0x20 /*!<Set SPI0CR0.LSBFE              */
#define set_SPI0CR0_SPIEN        SFRS = 0; SPI0CR0 |= 0x40 /*!<Set SPI0CR0.SPIEN              */
#define set_SPI0CR0_SSOE         SFRS = 0; SPI0CR0 |= 0x80 /*!<Set SPI0CR0.SSOE               */

#define clr_SPI0CR0_SPR0         SFRS = 0; SPI0CR0 &=~0x01 /*!<Clear SPI0CR0.SPR0             */
#define clr_SPI0CR0_SPR1         SFRS = 0; SPI0CR0 &=~0x02 /*!<Clear SPI0CR0.SPR1             */
#define clr_SPI0CR0_CPHA         SFRS = 0; SPI0CR0 &=~0x04 /*!<Clear SPI0CR0.CPHA             */
#define clr_SPI0CR0_CPOL         SFRS = 0; SPI0CR0 &=~0x08 /*!<Clear SPI0CR0.CPOL             */
#define clr_SPI0CR0_MSTR         SFRS = 0; SPI0CR0 &=~0x10 /*!<Clear SPI0CR0.MSTR             */
#define clr_SPI0CR0_LSBFE        SFRS = 0; SPI0CR0 &=~0x20 /*!<Clear SPI0CR0.LSBFE            */
#define clr_SPI0CR0_SPIEN        SFRS = 0; SPI0CR0 &=~0x40 /*!<Clear SPI0CR0.SPIEN            */
#define clr_SPI0CR0_SSOE         SFRS = 0; SPI0CR0 &=~0x80 /*!<Clear SPI0CR0.SSOE             */

/**@} end of SFR_PAGE0_SPI0CR0_MACRO group */
/**@} end of SFR_PAGE0_SPI0CR0 group */

/**
   @addtogroup SFR_PAGE0_SPI0SR SPI0SR
   Special Function Register SPI0SR
   @{ */

/**
@var SPI0SR
Address: F4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |TXBFF     |SPI TX Buffer Full Flag
|        |          |0 = SPI TX buffer is empty
|        |          |1 = SPI TX buffer is full
|[2]     |DISSPIF   |Disable SPI Complete Interrupt
|        |          |This bit is used to disable SPI complete interrupt while an SPI data
|        |          |transfer is complete or an receiving data has been moved into the SPI
|        |          |read buffer. Especially in SPI PDMA operation.
|        |          |0 = SPI Complete Interrupt Enabled while ESPI and EA are enabled,
|        |          |1 = SPI Complete Interrupt Disabled
|[3]     |DISMODF   |Disable Mode Fault Error Detection
|        |          |This bit is used in combination with the SSOE (SPInCR.7) bit to
|        |          |determine the feature of pin as shown in Table 6.114 Slave Select Pin
|        |          |Configurations. DISMODF is valid only in Master mode (MSTR = 1).
|        |          |0 = Mode Fault detection Enabled. serves as input pin for Mode Fault
|        |          |detection disregard of SSOE.
|        |          |1 = Mode Fault detection Disabled. The feature of follows SSOE bit.
|[4]     |MODF      |Mode Fault Error Flag
|        |          |This bit indicates a Mode Fault error event. If pin is configured as
|        |          |Mode Fault input (MSTR = 1 and DISMODF = 0) and is pulled low by
|        |          |external devices, a Mode Fault error occurs. Instantly MODF will be
|        |          |set as logic 1. If ESPI and EA are enabled, an SPI interrupt will be
|        |          |required. This bit should be cleared via software.
|[5]     |SPIOVF    |SPI Overrun Error Flag
|        |          |This bit indicates an overrun event. Once an overrun event occurs,
|        |          |this bit will be set. If ESPI and EA are enabled, an SPI interrupt
|        |          |will be required. This bit should be cleared via software.
|[6]     |WCOL      |Write Collision Error Flag
|        |          |This bit indicates a write collision event. Once a write collision
|        |          |event occurs, this bit will be set. It should be cleared via software.
|[7]     |SPIF      |SPI Complete Flag
|        |          |This bit is set to logic 1 via hardware while an SPI data transfer is
|        |          |complete or an receiving data has been moved into the SPI read buffer.
|        |          |If ESPI and EA are enabled, an SPI interrupt will be required. This
|        |          |bit should be cleared via software. Attempting to write to SPInDR is
|        |          |inhibited if SPIF is set.
*/
__sfr __no_init volatile unsigned char SPI0SR @ 0xF4;

/**
@addtogroup SFR_PAGE0_SPI0SR_MACRO Bit Macro Functions
Bit Macro Functions of SPI0SR
@{ */

#define set_SPI0SR_TXBFF         SFRS = 0; SPI0SR |= 0x02 /*!<Set SPI0SR.TXBFF               */
#define set_SPI0SR_DISSPIF       SFRS = 0; SPI0SR |= 0x04 /*!<Set SPI0SR.DISSPIF             */
#define set_SPI0SR_DISMODF       SFRS = 0; SPI0SR |= 0x08 /*!<Set SPI0SR.DISMODF             */
#define set_SPI0SR_MODF          SFRS = 0; SPI0SR |= 0x10 /*!<Set SPI0SR.MODF                */
#define set_SPI0SR_SPIOVF        SFRS = 0; SPI0SR |= 0x20 /*!<Set SPI0SR.SPIOVF              */
#define set_SPI0SR_WCOL          SFRS = 0; SPI0SR |= 0x40 /*!<Set SPI0SR.WCOL                */
#define set_SPI0SR_SPIF          SFRS = 0; SPI0SR |= 0x80 /*!<Set SPI0SR.SPIF                */

#define clr_SPI0SR_TXBFF         SFRS = 0; SPI0SR &=~0x02 /*!<Clear SPI0SR.TXBFF             */
#define clr_SPI0SR_DISSPIF       SFRS = 0; SPI0SR &=~0x04 /*!<Clear SPI0SR.DISSPIF           */
#define clr_SPI0SR_DISMODF       SFRS = 0; SPI0SR &=~0x08 /*!<Clear SPI0SR.DISMODF           */
#define clr_SPI0SR_MODF          SFRS = 0; SPI0SR &=~0x10 /*!<Clear SPI0SR.MODF              */
#define clr_SPI0SR_SPIOVF        SFRS = 0; SPI0SR &=~0x20 /*!<Clear SPI0SR.SPIOVF            */
#define clr_SPI0SR_WCOL          SFRS = 0; SPI0SR &=~0x40 /*!<Clear SPI0SR.WCOL              */
#define clr_SPI0SR_SPIF          SFRS = 0; SPI0SR &=~0x80 /*!<Clear SPI0SR.SPIF              */

/**@} end of SFR_PAGE0_SPI0SR_MACRO group */
/**@} end of SFR_PAGE0_SPI0SR group */

/**
   @addtogroup SFR_PAGE0_SPI0DR SPI0DR
   Special Function Register SPI0DR
   @{ */

/**
@var SPI0DR
Address: F5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SPIDR[7:0]|Serial Peripheral Data
|        |          |This byte is used for transmitting or receiving data on SPI bus. A
|        |          |write of this byte is a write to the shift register. A read of this
|        |          |byte is actually a read of the read data buffer. In Master mode, a
|        |          |write to this register initiates transmission and reception of a byte
|        |          |simultaneously.
*/
__sfr __no_init volatile unsigned char SPI0DR @ 0xF5;

/**@} end of SFR_PAGE0_SPI0DR group */

/**
   @addtogroup SFR_PAGE0_DMA0BAH DMA0BAH
   Special Function Register DMA0BAH
   @{ */

/**
@var DMA0BAH
Address: F6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |MAH[3:0]  |PDMA XRAM Base Address (High Byte)
|        |          |The most significant 4 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the destination address.
|        |          |XRAM address = {MAH[3:0], MAL[7:0]}
|[7:4]   |MDAH[3:0] |Memory to Memory Destination Address (High Byte)
|        |          |The most significant 4 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/
__sfr __no_init volatile unsigned char DMA0BAH @ 0xF6;

/**@} end of SFR_PAGE0_DMA0BAH group */

/**
   @addtogroup SFR_PAGE0_EIPH0 EIPH0
   Special Function Register EIPH0
   @{ */

/**
@var EIPH0
Address: F7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PI2C0H    |I2C interrupt priority high bit
|[1]     |PPIH      |Pin interrupt priority high bit
|[2]     |PCAPH     |Input capture interrupt priority high bit
|[3]     |PPWM0H    |PWM0 interrupt priority high bit
|[4]     |PWDTH     |WDT interrupt priority high bit
|[5]     |PFBH      |Fault Brake interrupt priority high bit
|[6]     |PSPI0H    |SPI0 interrupt priority high bit
|[7]     |PT2H      |Timer 2 interrupt priority high bit
*/
__sfr __no_init volatile unsigned char EIPH0 @ 0xF7;

/**
@addtogroup SFR_PAGE0_EIPH0_MACRO Bit Macro Functions
Bit Macro Functions of EIPH0
@{ */

#define set_EIPH0_PI2C0H         SFRS = 0; EIPH0 |= 0x01 /*!<Set EIPH0.PI2C0H               */
#define set_EIPH0_PPIH           SFRS = 0; EIPH0 |= 0x02 /*!<Set EIPH0.PPIH                 */
#define set_EIPH0_PCAPH          SFRS = 0; EIPH0 |= 0x04 /*!<Set EIPH0.PCAPH                */
#define set_EIPH0_PPWM0H         SFRS = 0; EIPH0 |= 0x08 /*!<Set EIPH0.PPWM0H               */
#define set_EIPH0_PWDTH          SFRS = 0; EIPH0 |= 0x10 /*!<Set EIPH0.PWDTH                */
#define set_EIPH0_PFBH           SFRS = 0; EIPH0 |= 0x20 /*!<Set EIPH0.PFBH                 */
#define set_EIPH0_PSPI0H         SFRS = 0; EIPH0 |= 0x40 /*!<Set EIPH0.PSPI0H               */
#define set_EIPH0_PT2H           SFRS = 0; EIPH0 |= 0x80 /*!<Set EIPH0.PT2H                 */

#define clr_EIPH0_PI2C0H         SFRS = 0; EIPH0 &=~0x01 /*!<Clear EIPH0.PI2C0H             */
#define clr_EIPH0_PPIH           SFRS = 0; EIPH0 &=~0x02 /*!<Clear EIPH0.PPIH               */
#define clr_EIPH0_PCAPH          SFRS = 0; EIPH0 &=~0x04 /*!<Clear EIPH0.PCAPH              */
#define clr_EIPH0_PPWM0H         SFRS = 0; EIPH0 &=~0x08 /*!<Clear EIPH0.PPWM0H             */
#define clr_EIPH0_PWDTH          SFRS = 0; EIPH0 &=~0x10 /*!<Clear EIPH0.PWDTH              */
#define clr_EIPH0_PFBH           SFRS = 0; EIPH0 &=~0x20 /*!<Clear EIPH0.PFBH               */
#define clr_EIPH0_PSPI0H         SFRS = 0; EIPH0 &=~0x40 /*!<Clear EIPH0.PSPI0H             */
#define clr_EIPH0_PT2H           SFRS = 0; EIPH0 &=~0x80 /*!<Clear EIPH0.PT2H               */

/**@} end of SFR_PAGE0_EIPH0_MACRO group */
/**@} end of SFR_PAGE0_EIPH0 group */

/**
   @addtogroup SFR_PAGE0_S1CON S1CON
   Special Function Register S1CON
   @{ */

/**
@var S1CON
Address: F8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RI_1      |Receiving Interrupt Flag
|        |          |This flag is set via hardware when a data frame has been received by
|        |          |the serial port 1 after the 8th bit in Mode 0 or after sampling the
|        |          |stop bit in Mode 1, 2, or 3. SM2_1 bit as logic 1 has restriction for
|        |          |exception. When the serial port 1 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute to the serial port 1 interrupt service
|        |          |routine. This bit must be cleared manually via software.
|[1]     |TI_1      |Transmission Interrupt Flag
|        |          |This flag is set by hardware when a data frame has been transmitted by
|        |          |the serial port 1 after the 8th bit in Mode 0 or the last data bit in
|        |          |other modes. When the serial port 1 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute the serial port 1 interrupt service
|        |          |routine. This bit must be cleared manually via software.
|[2]     |RB8_1     |9th Received Bit
|        |          |The bit identifies the logic level of the 9th received bit in serial
|        |          |port 1 Mode 2 or 3. In Mode 1, RB8_1 is the logic level of the
|        |          |received stop bit. SM2_1 bit as logic 1 has restriction for exception.
|        |          |RB8_1 is not used in Mode 0.
|[3]     |TB8_1     |9th Transmitted Bit
|        |          |This bit defines the state of the 9th transmission bit in serial port
|        |          |1 Mode 2 or 3. It is not used in Mode 0 or 1.
|[4]     |REN_1     |Receiving Enable
|        |          |0 = Serial port 1 reception Disabled.
|        |          |1 = Serial port 1 reception Enabled in Mode 1,2, or 3. In Mode 0,
|        |          |reception is initiated by the condition REN_1 = 1 and RI_1 = 0.
|[5]     |SM2_1     |Multiprocessor Communication Mode Enable
|        |          |The function of this bit is dependent on the serial port 1 mode.
|        |          |Mode 0:
|        |          |No effect.
|        |          |Mode 1:
|        |          |This bit checks valid stop bit.
|        |          |0 = Reception is always valid no matter the logic level of stop bit.
|        |          |1 = Reception is valid only when the received stop bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|        |          |Mode 2 or 3:
|        |          |For multiprocessor communication.
|        |          |0 = Reception is always valid no matter the logic level of the 9th
|        |          |bit.
|        |          |1 = Reception is valid only when the received 9th bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|[6]     |SM1_1     |Check with bit 7 description.
|[7]     |SM0_1_FE_1|Serial Port 1 Mode Select
|        |          |SMOD0_1 (T3CON.6) = 0:
|        |          |See Table 6.92 Serial Port 1 Mode / baud rate Description
|        |          |for details.
|        |          |SMOD0_1 (T3CON.6) = 1:
|        |          |SM0_1/FE_1 bit is used as frame error (FE) status flag. It is cleared
|        |          |by software.
|        |          |0 = Frame error (FE) did not occur.
|        |          |1 = Frame error (FE) occurred and detected.
*/
__sfr __no_init volatile union
{
  unsigned char S1CON ; /* SCON_1  Register */
  struct /* SCON_1  Register */
  {
    unsigned char BIT0 : 1;
    unsigned char BIT1 : 1;
    unsigned char BIT2 : 1;
    unsigned char BIT3 : 1;
    unsigned char BIT4 : 1;
    unsigned char BIT5 : 1;
    unsigned char BIT6 : 1;
    unsigned char BIT7 : 1;
  } S1CON_bit;
} @ 0xF8;
/**
@addtogroup SFR_PAGE0_S1CON_MACRO Bit Macro Functions
Bit Macro Functions of S1CON
@{ */

#define set_S1CON_RI_1           S1CON |= 0x01 /*!<Set S1CON.RI_1                 */
#define set_S1CON_TI_1           S1CON |= 0x02 /*!<Set S1CON.TI_1                 */
#define set_S1CON_RB8_1          S1CON |= 0x04 /*!<Set S1CON.RB8_1                */
#define set_S1CON_TB8_1          S1CON |= 0x08 /*!<Set S1CON.TB8_1                */
#define set_S1CON_REN_1          S1CON |= 0x10 /*!<Set S1CON.REN_1                */
#define set_S1CON_SM2_1          S1CON |= 0x20 /*!<Set S1CON.SM2_1                */
#define set_S1CON_SM1_1          S1CON |= 0x40 /*!<Set S1CON.SM1_1                */
#define set_S1CON_SM0_1_FE_1     S1CON |= 0x80 /*!<Set S1CON.SM0_1_FE_1           */

#define clr_S1CON_RI_1           S1CON &=~0x01 /*!<Clear S1CON.RI_1               */
#define clr_S1CON_TI_1           S1CON &=~0x02 /*!<Clear S1CON.TI_1               */
#define clr_S1CON_RB8_1          S1CON &=~0x04 /*!<Clear S1CON.RB8_1              */
#define clr_S1CON_TB8_1          S1CON &=~0x08 /*!<Clear S1CON.TB8_1              */
#define clr_S1CON_REN_1          S1CON &=~0x10 /*!<Clear S1CON.REN_1              */
#define clr_S1CON_SM2_1          S1CON &=~0x20 /*!<Clear S1CON.SM2_1              */
#define clr_S1CON_SM1_1          S1CON &=~0x40 /*!<Clear S1CON.SM1_1              */
#define clr_S1CON_SM0_1_FE_1     S1CON &=~0x80 /*!<Clear S1CON.SM0_1_FE_1         */

/**@} end of SFR_PAGE0_S1CON_MACRO group */
/**@} end of SFR_PAGE0_S1CON group */

/**
   @addtogroup SFR_PAGE0_DMA1BAH DMA1BAH
   Special Function Register DMA1BAH
   @{ */

/**
@var DMA1BAH
Address: FDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |MAH[3:0]  |PDMA XRAM Base Address (High Byte)
|        |          |The most significant 4 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the destination address.
|        |          |XRAM address = {MAH[3:0], MAL[7:0]}
|[7:4]   |MDAH[3:0] |Memory to Memory Destination Address (High Byte)
|        |          |The most significant 4 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/
__sfr __no_init volatile unsigned char DMA1BAH @ 0xFD;

/**@} end of SFR_PAGE0_DMA1BAH group */

/**
   @addtogroup SFR_PAGE0_EIP1 EIP1
   Special Function Register EIP1
   @{ */

/**
@var EIP1
Address: FEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PS1       |Serial port 1 interrupt priority low bit
|[1]     |PT3       |Timer 3 interrupt priority low bit
|[2]     |PWKT      |WKT interrupt priority low bit
|[3]     |PHF       |Hard fault interrupt priority low bit
|[4]     |PSMC      |SMC interrupt priority low bit
|[5]     |PDMA0     |PDMA0 interrupt priority low bit
|[6]     |PDMA1     |PDMA1 interrupt priority low bit
|[7]     |PSPI1     |SPI1 interrupt priority low bit
*/
__sfr __no_init volatile unsigned char EIP1 @ 0xFE;

/**
@addtogroup SFR_PAGE0_EIP1_MACRO Bit Macro Functions
Bit Macro Functions of EIP1
@{ */

#define set_EIP1_PS1             SFRS = 0; EIP1 |= 0x01 /*!<Set EIP1.PS1                   */
#define set_EIP1_PT3             SFRS = 0; EIP1 |= 0x02 /*!<Set EIP1.PT3                   */
#define set_EIP1_PWKT            SFRS = 0; EIP1 |= 0x04 /*!<Set EIP1.PWKT                  */
#define set_EIP1_PHF             SFRS = 0; EIP1 |= 0x08 /*!<Set EIP1.PHF                   */
#define set_EIP1_PSMC            SFRS = 0; EIP1 |= 0x10 /*!<Set EIP1.PSMC                  */
#define set_EIP1_PDMA0           SFRS = 0; EIP1 |= 0x20 /*!<Set EIP1.PDMA0                 */
#define set_EIP1_PDMA1           SFRS = 0; EIP1 |= 0x40 /*!<Set EIP1.PDMA1                 */
#define set_EIP1_PSPI1           SFRS = 0; EIP1 |= 0x80 /*!<Set EIP1.PSPI1                 */

#define clr_EIP1_PS1             SFRS = 0; EIP1 &=~0x01 /*!<Clear EIP1.PS1                 */
#define clr_EIP1_PT3             SFRS = 0; EIP1 &=~0x02 /*!<Clear EIP1.PT3                 */
#define clr_EIP1_PWKT            SFRS = 0; EIP1 &=~0x04 /*!<Clear EIP1.PWKT                */
#define clr_EIP1_PHF             SFRS = 0; EIP1 &=~0x08 /*!<Clear EIP1.PHF                 */
#define clr_EIP1_PSMC            SFRS = 0; EIP1 &=~0x10 /*!<Clear EIP1.PSMC                */
#define clr_EIP1_PDMA0           SFRS = 0; EIP1 &=~0x20 /*!<Clear EIP1.PDMA0               */
#define clr_EIP1_PDMA1           SFRS = 0; EIP1 &=~0x40 /*!<Clear EIP1.PDMA1               */
#define clr_EIP1_PSPI1           SFRS = 0; EIP1 &=~0x80 /*!<Clear EIP1.PSPI1               */

/**@} end of SFR_PAGE0_EIP1_MACRO group */
/**@} end of SFR_PAGE0_EIP1 group */

/**
   @addtogroup SFR_PAGE0_EIPH1 EIPH1
   Special Function Register EIPH1
   @{ */

/**
@var EIPH1
Address: FFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PS1H      |Serial port 1 interrupt priority high bit
|[1]     |PT3H      |Timer 3 interrupt priority high bit
|[2]     |PWKTH     |WKT interrupt priority high bit
|[3]     |PHFH      |Hard fault interrupt priority high bit
|[4]     |PSMCH     |SMC interrupt priority high bit
|[5]     |PDMA0H    |PDMA0 interrupt priority high bit
|[6]     |PDMA1H    |PDMA1 interrupt priority high bit
|[7]     |PSPI1H    |SPI1 interrupt priority high bit
*/
__sfr __no_init volatile unsigned char EIPH1 @ 0xFF;

/**
@addtogroup SFR_PAGE0_EIPH1_MACRO Bit Macro Functions
Bit Macro Functions of EIPH1
@{ */

#define set_EIPH1_PS1H           SFRS = 0; EIPH1 |= 0x01 /*!<Set EIPH1.PS1H                 */
#define set_EIPH1_PT3H           SFRS = 0; EIPH1 |= 0x02 /*!<Set EIPH1.PT3H                 */
#define set_EIPH1_PWKTH          SFRS = 0; EIPH1 |= 0x04 /*!<Set EIPH1.PWKTH                */
#define set_EIPH1_PHFH           SFRS = 0; EIPH1 |= 0x08 /*!<Set EIPH1.PHFH                 */
#define set_EIPH1_PSMCH          SFRS = 0; EIPH1 |= 0x10 /*!<Set EIPH1.PSMCH                */
#define set_EIPH1_PDMA0H         SFRS = 0; EIPH1 |= 0x20 /*!<Set EIPH1.PDMA0H               */
#define set_EIPH1_PDMA1H         SFRS = 0; EIPH1 |= 0x40 /*!<Set EIPH1.PDMA1H               */
#define set_EIPH1_PSPI1H         SFRS = 0; EIPH1 |= 0x80 /*!<Set EIPH1.PSPI1H               */

#define clr_EIPH1_PS1H           SFRS = 0; EIPH1 &=~0x01 /*!<Clear EIPH1.PS1H               */
#define clr_EIPH1_PT3H           SFRS = 0; EIPH1 &=~0x02 /*!<Clear EIPH1.PT3H               */
#define clr_EIPH1_PWKTH          SFRS = 0; EIPH1 &=~0x04 /*!<Clear EIPH1.PWKTH              */
#define clr_EIPH1_PHFH           SFRS = 0; EIPH1 &=~0x08 /*!<Clear EIPH1.PHFH               */
#define clr_EIPH1_PSMCH          SFRS = 0; EIPH1 &=~0x10 /*!<Clear EIPH1.PSMCH              */
#define clr_EIPH1_PDMA0H         SFRS = 0; EIPH1 &=~0x20 /*!<Clear EIPH1.PDMA0H             */
#define clr_EIPH1_PDMA1H         SFRS = 0; EIPH1 &=~0x40 /*!<Clear EIPH1.PDMA1H             */
#define clr_EIPH1_PSPI1H         SFRS = 0; EIPH1 &=~0x80 /*!<Clear EIPH1.PSPI1H             */

/**@} end of SFR_PAGE0_EIPH1_MACRO group */
/**@} end of SFR_PAGE0_EIPH1 group */

/**@} end of SFR_PAGE0 group */


/**
 @addtogroup SFR_PAGE1 SFR Page 1
 @{ */

/**
   @addtogroup SFR_PAGE1_P0 P0
   Special Function Register @ref P0
   @{ */
/**@} end of SFR_PAGE1_P0 group */

/**
   @addtogroup SFR_PAGE1_DPL DPL
   Special Function Register @ref DPL
   @{ */
/**@} end of SFR_PAGE1_DPL group */

/**
   @addtogroup SFR_PAGE1_DPH DPH
   Special Function Register @ref DPH
   @{ */
/**@} end of SFR_PAGE1_DPH group */

/**
   @addtogroup SFR_PAGE1_LIRCTRIM LIRCTRIM
   Special Function Register LIRCTRIM
   @{ */

/**
@var LIRCTRIM
Address: 84H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |LIRCTRIM[7:0]|Low Speed Internal Oscillator Trim Value
*/
__sfr __no_init volatile unsigned char LIRCTRIM @ 0x84;

/**@} end of SFR_PAGE1_LIRCTRIM group */

/**
   @addtogroup SFR_PAGE1_CWKL CWKL
   Special Function Register CWKL
   @{ */

/**
@var CWKL
Address: 86H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CWK[7:0]  |WKT Current Count Value Low Byte Low Byte
|        |          |It is store value of WKT current count.
*/
__sfr __no_init volatile unsigned char CWKL @ 0x86;

/**@} end of SFR_PAGE1_CWKL group */

/**
   @addtogroup SFR_PAGE1_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE1_PCON group */

/**
   @addtogroup SFR_PAGE1_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE1_PCON group */

/**
   @addtogroup SFR_PAGE1_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE1_PCON group */

/**
   @addtogroup SFR_PAGE1_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE1_PCON group */

/**
   @addtogroup SFR_PAGE1_TCON TCON
   Special Function Register @ref TCON
   @{ */
/**@} end of SFR_PAGE1_TCON group */

/**
   @addtogroup SFR_PAGE1_TMOD TMOD
   Special Function Register @ref TMOD
   @{ */
/**@} end of SFR_PAGE1_TMOD group */

/**
   @addtogroup SFR_PAGE1_P0DW P0DW
   Special Function Register P0DW
   @{ */

/**
@var P0DW
Address: 8AH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
|[1]     |1         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
|[2]     |2         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
|[3]     |3         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
*/
__sfr __no_init volatile unsigned char P0DW @ 0x8A;

/**
@addtogroup SFR_PAGE1_P0DW_MACRO Bit Macro Functions
Bit Macro Functions of P0DW
@{ */

#define set_P0DW_0               SFRS = 1; P0DW |= 0x01 /*!<Set P0DW.0                     */
#define set_P0DW_1               SFRS = 1; P0DW |= 0x02 /*!<Set P0DW.1                     */
#define set_P0DW_2               SFRS = 1; P0DW |= 0x04 /*!<Set P0DW.2                     */
#define set_P0DW_3               SFRS = 1; P0DW |= 0x08 /*!<Set P0DW.3                     */

#define clr_P0DW_0               SFRS = 1; P0DW &=~0x01 /*!<Clear P0DW.0                   */
#define clr_P0DW_1               SFRS = 1; P0DW &=~0x02 /*!<Clear P0DW.1                   */
#define clr_P0DW_2               SFRS = 1; P0DW &=~0x04 /*!<Clear P0DW.2                   */
#define clr_P0DW_3               SFRS = 1; P0DW &=~0x08 /*!<Clear P0DW.3                   */

/**@} end of SFR_PAGE1_P0DW_MACRO group */
/**@} end of SFR_PAGE1_P0DW group */

/**
   @addtogroup SFR_PAGE1_P1DW P1DW
   Special Function Register P1DW
   @{ */

/**
@var P1DW
Address: 8BH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Pull-Down Enable
|        |          |0 = P1.n pull-down Disabled.
|        |          |1 = P1.n pull-down Enabled.
|[7]     |7         |P1 Pull-Down Enable
|        |          |0 = P1.n pull-down Disabled.
|        |          |1 = P1.n pull-down Enabled.
*/
__sfr __no_init volatile unsigned char P1DW @ 0x8B;

/**
@addtogroup SFR_PAGE1_P1DW_MACRO Bit Macro Functions
Bit Macro Functions of P1DW
@{ */

#define set_P1DW_6               SFRS = 1; P1DW |= 0x40 /*!<Set P1DW.6                     */
#define set_P1DW_7               SFRS = 1; P1DW |= 0x80 /*!<Set P1DW.7                     */

#define clr_P1DW_6               SFRS = 1; P1DW &=~0x40 /*!<Clear P1DW.6                   */
#define clr_P1DW_7               SFRS = 1; P1DW &=~0x80 /*!<Clear P1DW.7                   */

/**@} end of SFR_PAGE1_P1DW_MACRO group */
/**@} end of SFR_PAGE1_P1DW group */

/**
   @addtogroup SFR_PAGE1_P2DW P2DW
   Special Function Register P2DW
   @{ */

/**
@var P2DW
Address: 8CH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[1]     |1         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[2]     |2         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[3]     |3         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[4]     |4         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[5]     |5         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
*/
__sfr __no_init volatile unsigned char P2DW @ 0x8C;

/**
@addtogroup SFR_PAGE1_P2DW_MACRO Bit Macro Functions
Bit Macro Functions of P2DW
@{ */

#define set_P2DW_0               SFRS = 1; P2DW |= 0x01 /*!<Set P2DW.0                     */
#define set_P2DW_1               SFRS = 1; P2DW |= 0x02 /*!<Set P2DW.1                     */
#define set_P2DW_2               SFRS = 1; P2DW |= 0x04 /*!<Set P2DW.2                     */
#define set_P2DW_3               SFRS = 1; P2DW |= 0x08 /*!<Set P2DW.3                     */
#define set_P2DW_4               SFRS = 1; P2DW |= 0x10 /*!<Set P2DW.4                     */
#define set_P2DW_5               SFRS = 1; P2DW |= 0x20 /*!<Set P2DW.5                     */

#define clr_P2DW_0               SFRS = 1; P2DW &=~0x01 /*!<Clear P2DW.0                   */
#define clr_P2DW_1               SFRS = 1; P2DW &=~0x02 /*!<Clear P2DW.1                   */
#define clr_P2DW_2               SFRS = 1; P2DW &=~0x04 /*!<Clear P2DW.2                   */
#define clr_P2DW_3               SFRS = 1; P2DW &=~0x08 /*!<Clear P2DW.3                   */
#define clr_P2DW_4               SFRS = 1; P2DW &=~0x10 /*!<Clear P2DW.4                   */
#define clr_P2DW_5               SFRS = 1; P2DW &=~0x20 /*!<Clear P2DW.5                   */

/**@} end of SFR_PAGE1_P2DW_MACRO group */
/**@} end of SFR_PAGE1_P2DW group */

/**
   @addtogroup SFR_PAGE1_P3DW P3DW
   Special Function Register P3DW
   @{ */

/**
@var P3DW
Address: 8DH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
|[1]     |1         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
|[2]     |2         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
|[3]     |3         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
*/
__sfr __no_init volatile unsigned char P3DW @ 0x8D;

/**
@addtogroup SFR_PAGE1_P3DW_MACRO Bit Macro Functions
Bit Macro Functions of P3DW
@{ */

#define set_P3DW_0               SFRS = 1; P3DW |= 0x01 /*!<Set P3DW.0                     */
#define set_P3DW_1               SFRS = 1; P3DW |= 0x02 /*!<Set P3DW.1                     */
#define set_P3DW_2               SFRS = 1; P3DW |= 0x04 /*!<Set P3DW.2                     */
#define set_P3DW_3               SFRS = 1; P3DW |= 0x08 /*!<Set P3DW.3                     */

#define clr_P3DW_0               SFRS = 1; P3DW &=~0x01 /*!<Clear P3DW.0                   */
#define clr_P3DW_1               SFRS = 1; P3DW &=~0x02 /*!<Clear P3DW.1                   */
#define clr_P3DW_2               SFRS = 1; P3DW &=~0x04 /*!<Clear P3DW.2                   */
#define clr_P3DW_3               SFRS = 1; P3DW &=~0x08 /*!<Clear P3DW.3                   */

/**@} end of SFR_PAGE1_P3DW_MACRO group */
/**@} end of SFR_PAGE1_P3DW group */

/**
   @addtogroup SFR_PAGE1_P4DW P4DW
   Special Function Register P4DW
   @{ */

/**
@var P4DW
Address: 8EH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Pull-Down Enable
|        |          |0 = P4.n pull-down Disabled.
|        |          |1 = P4.n pull-down Enabled.
|[1]     |1         |P4 Pull-Down Enable
|        |          |0 = P4.n pull-down Disabled.
|        |          |1 = P4.n pull-down Enabled.
*/
__sfr __no_init volatile unsigned char P4DW @ 0x8E;

/**
@addtogroup SFR_PAGE1_P4DW_MACRO Bit Macro Functions
Bit Macro Functions of P4DW
@{ */

#define set_P4DW_0               SFRS = 1; P4DW |= 0x01 /*!<Set P4DW.0                     */
#define set_P4DW_1               SFRS = 1; P4DW |= 0x02 /*!<Set P4DW.1                     */

#define clr_P4DW_0               SFRS = 1; P4DW &=~0x01 /*!<Clear P4DW.0                   */
#define clr_P4DW_1               SFRS = 1; P4DW &=~0x02 /*!<Clear P4DW.1                   */

/**@} end of SFR_PAGE1_P4DW_MACRO group */
/**@} end of SFR_PAGE1_P4DW group */

/**
   @addtogroup SFR_PAGE1_P5DW P5DW
   Special Function Register P5DW
   @{ */

/**
@var P5DW
Address: 8FH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[1]     |1         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[2]     |2         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[3]     |3         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[4]     |4         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[5]     |5         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
*/
__sfr __no_init volatile unsigned char P5DW @ 0x8F;

/**
@addtogroup SFR_PAGE1_P5DW_MACRO Bit Macro Functions
Bit Macro Functions of P5DW
@{ */

#define set_P5DW_0               SFRS = 1; P5DW |= 0x01 /*!<Set P5DW.0                     */
#define set_P5DW_1               SFRS = 1; P5DW |= 0x02 /*!<Set P5DW.1                     */
#define set_P5DW_2               SFRS = 1; P5DW |= 0x04 /*!<Set P5DW.2                     */
#define set_P5DW_3               SFRS = 1; P5DW |= 0x08 /*!<Set P5DW.3                     */
#define set_P5DW_4               SFRS = 1; P5DW |= 0x10 /*!<Set P5DW.4                     */
#define set_P5DW_5               SFRS = 1; P5DW |= 0x20 /*!<Set P5DW.5                     */

#define clr_P5DW_0               SFRS = 1; P5DW &=~0x01 /*!<Clear P5DW.0                   */
#define clr_P5DW_1               SFRS = 1; P5DW &=~0x02 /*!<Clear P5DW.1                   */
#define clr_P5DW_2               SFRS = 1; P5DW &=~0x04 /*!<Clear P5DW.2                   */
#define clr_P5DW_3               SFRS = 1; P5DW &=~0x08 /*!<Clear P5DW.3                   */
#define clr_P5DW_4               SFRS = 1; P5DW &=~0x10 /*!<Clear P5DW.4                   */
#define clr_P5DW_5               SFRS = 1; P5DW &=~0x20 /*!<Clear P5DW.5                   */

/**@} end of SFR_PAGE1_P5DW_MACRO group */
/**@} end of SFR_PAGE1_P5DW group */

/**
   @addtogroup SFR_PAGE1_P1 P1
   Special Function Register @ref P1
   @{ */
/**@} end of SFR_PAGE1_P1 group */

/**
   @addtogroup SFR_PAGE1_SFRS SFRS
   Special Function Register @ref SFRS
   @{ */
/**@} end of SFR_PAGE1_SFRS group */

/**
   @addtogroup SFR_PAGE1_P0UP P0UP
   Special Function Register P0UP
   @{ */

/**
@var P0UP
Address: 92H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
|[1]     |1         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
|[2]     |2         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
|[3]     |3         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
*/
__sfr __no_init volatile unsigned char P0UP @ 0x92;

/**
@addtogroup SFR_PAGE1_P0UP_MACRO Bit Macro Functions
Bit Macro Functions of P0UP
@{ */

#define set_P0UP_0               SFRS = 1; P0UP |= 0x01 /*!<Set P0UP.0                     */
#define set_P0UP_1               SFRS = 1; P0UP |= 0x02 /*!<Set P0UP.1                     */
#define set_P0UP_2               SFRS = 1; P0UP |= 0x04 /*!<Set P0UP.2                     */
#define set_P0UP_3               SFRS = 1; P0UP |= 0x08 /*!<Set P0UP.3                     */

#define clr_P0UP_0               SFRS = 1; P0UP &=~0x01 /*!<Clear P0UP.0                   */
#define clr_P0UP_1               SFRS = 1; P0UP &=~0x02 /*!<Clear P0UP.1                   */
#define clr_P0UP_2               SFRS = 1; P0UP &=~0x04 /*!<Clear P0UP.2                   */
#define clr_P0UP_3               SFRS = 1; P0UP &=~0x08 /*!<Clear P0UP.3                   */

/**@} end of SFR_PAGE1_P0UP_MACRO group */
/**@} end of SFR_PAGE1_P0UP group */

/**
   @addtogroup SFR_PAGE1_P1UP P1UP
   Special Function Register P1UP
   @{ */

/**
@var P1UP
Address: 93H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Pull-Up Enable
|        |          |0 = P1.n pull-up Disabled.
|        |          |1 = P1.n pull-up Enabled.
|[7]     |7         |P1 Pull-Up Enable
|        |          |0 = P1.n pull-up Disabled.
|        |          |1 = P1.n pull-up Enabled.
*/
__sfr __no_init volatile unsigned char P1UP @ 0x93;

/**
@addtogroup SFR_PAGE1_P1UP_MACRO Bit Macro Functions
Bit Macro Functions of P1UP
@{ */

#define set_P1UP_6               SFRS = 1; P1UP |= 0x40 /*!<Set P1UP.6                     */
#define set_P1UP_7               SFRS = 1; P1UP |= 0x80 /*!<Set P1UP.7                     */

#define clr_P1UP_6               SFRS = 1; P1UP &=~0x40 /*!<Clear P1UP.6                   */
#define clr_P1UP_7               SFRS = 1; P1UP &=~0x80 /*!<Clear P1UP.7                   */

/**@} end of SFR_PAGE1_P1UP_MACRO group */
/**@} end of SFR_PAGE1_P1UP group */

/**
   @addtogroup SFR_PAGE1_P2UP P2UP
   Special Function Register P2UP
   @{ */

/**
@var P2UP
Address: 94H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[1]     |1         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[2]     |2         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[3]     |3         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[4]     |4         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[5]     |5         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
*/
__sfr __no_init volatile unsigned char P2UP @ 0x94;

/**
@addtogroup SFR_PAGE1_P2UP_MACRO Bit Macro Functions
Bit Macro Functions of P2UP
@{ */

#define set_P2UP_0               SFRS = 1; P2UP |= 0x01 /*!<Set P2UP.0                     */
#define set_P2UP_1               SFRS = 1; P2UP |= 0x02 /*!<Set P2UP.1                     */
#define set_P2UP_2               SFRS = 1; P2UP |= 0x04 /*!<Set P2UP.2                     */
#define set_P2UP_3               SFRS = 1; P2UP |= 0x08 /*!<Set P2UP.3                     */
#define set_P2UP_4               SFRS = 1; P2UP |= 0x10 /*!<Set P2UP.4                     */
#define set_P2UP_5               SFRS = 1; P2UP |= 0x20 /*!<Set P2UP.5                     */

#define clr_P2UP_0               SFRS = 1; P2UP &=~0x01 /*!<Clear P2UP.0                   */
#define clr_P2UP_1               SFRS = 1; P2UP &=~0x02 /*!<Clear P2UP.1                   */
#define clr_P2UP_2               SFRS = 1; P2UP &=~0x04 /*!<Clear P2UP.2                   */
#define clr_P2UP_3               SFRS = 1; P2UP &=~0x08 /*!<Clear P2UP.3                   */
#define clr_P2UP_4               SFRS = 1; P2UP &=~0x10 /*!<Clear P2UP.4                   */
#define clr_P2UP_5               SFRS = 1; P2UP &=~0x20 /*!<Clear P2UP.5                   */

/**@} end of SFR_PAGE1_P2UP_MACRO group */
/**@} end of SFR_PAGE1_P2UP group */

/**
   @addtogroup SFR_PAGE1_P3UP P3UP
   Special Function Register P3UP
   @{ */

/**
@var P3UP
Address: 95H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
|[1]     |1         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
|[2]     |2         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
|[3]     |3         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
*/
__sfr __no_init volatile unsigned char P3UP @ 0x95;

/**
@addtogroup SFR_PAGE1_P3UP_MACRO Bit Macro Functions
Bit Macro Functions of P3UP
@{ */

#define set_P3UP_0               SFRS = 1; P3UP |= 0x01 /*!<Set P3UP.0                     */
#define set_P3UP_1               SFRS = 1; P3UP |= 0x02 /*!<Set P3UP.1                     */
#define set_P3UP_2               SFRS = 1; P3UP |= 0x04 /*!<Set P3UP.2                     */
#define set_P3UP_3               SFRS = 1; P3UP |= 0x08 /*!<Set P3UP.3                     */

#define clr_P3UP_0               SFRS = 1; P3UP &=~0x01 /*!<Clear P3UP.0                   */
#define clr_P3UP_1               SFRS = 1; P3UP &=~0x02 /*!<Clear P3UP.1                   */
#define clr_P3UP_2               SFRS = 1; P3UP &=~0x04 /*!<Clear P3UP.2                   */
#define clr_P3UP_3               SFRS = 1; P3UP &=~0x08 /*!<Clear P3UP.3                   */

/**@} end of SFR_PAGE1_P3UP_MACRO group */
/**@} end of SFR_PAGE1_P3UP group */

/**
   @addtogroup SFR_PAGE1_P4UP P4UP
   Special Function Register P4UP
   @{ */

/**
@var P4UP
Address: 96H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Pull-Up Enable
|        |          |0 = P4.n pull-up Disabled.
|        |          |1 = P4.n pull-up Enabled.
|[1]     |1         |P4 Pull-Up Enable
|        |          |0 = P4.n pull-up Disabled.
|        |          |1 = P4.n pull-up Enabled.
*/
__sfr __no_init volatile unsigned char P4UP @ 0x96;

/**
@addtogroup SFR_PAGE1_P4UP_MACRO Bit Macro Functions
Bit Macro Functions of P4UP
@{ */

#define set_P4UP_0               SFRS = 1; P4UP |= 0x01 /*!<Set P4UP.0                     */
#define set_P4UP_1               SFRS = 1; P4UP |= 0x02 /*!<Set P4UP.1                     */

#define clr_P4UP_0               SFRS = 1; P4UP &=~0x01 /*!<Clear P4UP.0                   */
#define clr_P4UP_1               SFRS = 1; P4UP &=~0x02 /*!<Clear P4UP.1                   */

/**@} end of SFR_PAGE1_P4UP_MACRO group */
/**@} end of SFR_PAGE1_P4UP group */

/**
   @addtogroup SFR_PAGE1_P5UP P5UP
   Special Function Register P5UP
   @{ */

/**
@var P5UP
Address: 97H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[1]     |1         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[2]     |2         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[3]     |3         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[4]     |4         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[5]     |5         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
*/
__sfr __no_init volatile unsigned char P5UP @ 0x97;

/**
@addtogroup SFR_PAGE1_P5UP_MACRO Bit Macro Functions
Bit Macro Functions of P5UP
@{ */

#define set_P5UP_0               SFRS = 1; P5UP |= 0x01 /*!<Set P5UP.0                     */
#define set_P5UP_1               SFRS = 1; P5UP |= 0x02 /*!<Set P5UP.1                     */
#define set_P5UP_2               SFRS = 1; P5UP |= 0x04 /*!<Set P5UP.2                     */
#define set_P5UP_3               SFRS = 1; P5UP |= 0x08 /*!<Set P5UP.3                     */
#define set_P5UP_4               SFRS = 1; P5UP |= 0x10 /*!<Set P5UP.4                     */
#define set_P5UP_5               SFRS = 1; P5UP |= 0x20 /*!<Set P5UP.5                     */

#define clr_P5UP_0               SFRS = 1; P5UP &=~0x01 /*!<Clear P5UP.0                   */
#define clr_P5UP_1               SFRS = 1; P5UP &=~0x02 /*!<Clear P5UP.1                   */
#define clr_P5UP_2               SFRS = 1; P5UP &=~0x04 /*!<Clear P5UP.2                   */
#define clr_P5UP_3               SFRS = 1; P5UP &=~0x08 /*!<Clear P5UP.3                   */
#define clr_P5UP_4               SFRS = 1; P5UP &=~0x10 /*!<Clear P5UP.4                   */
#define clr_P5UP_5               SFRS = 1; P5UP &=~0x20 /*!<Clear P5UP.5                   */

/**@} end of SFR_PAGE1_P5UP_MACRO group */
/**@} end of SFR_PAGE1_P5UP group */

/**
   @addtogroup SFR_PAGE1_SCON SCON
   Special Function Register @ref SCON
   @{ */
/**@} end of SFR_PAGE1_SCON group */

/**
   @addtogroup SFR_PAGE1_P0S P0S
   Special Function Register P0S
   @{ */

/**
@var P0S
Address: 99H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/
__sfr __no_init volatile unsigned char P0S @ 0x99;

/**
@addtogroup SFR_PAGE1_P0S_MACRO Bit Macro Functions
Bit Macro Functions of P0S
@{ */

#define set_P0S_0                SFRS = 1; P0S |= 0x01 /*!<Set P0S.0                      */
#define set_P0S_1                SFRS = 1; P0S |= 0x02 /*!<Set P0S.1                      */
#define set_P0S_2                SFRS = 1; P0S |= 0x04 /*!<Set P0S.2                      */
#define set_P0S_3                SFRS = 1; P0S |= 0x08 /*!<Set P0S.3                      */

#define clr_P0S_0                SFRS = 1; P0S &=~0x01 /*!<Clear P0S.0                    */
#define clr_P0S_1                SFRS = 1; P0S &=~0x02 /*!<Clear P0S.1                    */
#define clr_P0S_2                SFRS = 1; P0S &=~0x04 /*!<Clear P0S.2                    */
#define clr_P0S_3                SFRS = 1; P0S &=~0x08 /*!<Clear P0S.3                    */

/**@} end of SFR_PAGE1_P0S_MACRO group */
/**@} end of SFR_PAGE1_P0S group */

/**
   @addtogroup SFR_PAGE1_P0SR P0SR
   Special Function Register P0SR
   @{ */

/**
@var P0SR
Address: 9AH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/
__sfr __no_init volatile unsigned char P0SR @ 0x9A;

/**
@addtogroup SFR_PAGE1_P0SR_MACRO Bit Macro Functions
Bit Macro Functions of P0SR
@{ */

#define set_P0SR_0               SFRS = 1; P0SR |= 0x01 /*!<Set P0SR.0                     */
#define set_P0SR_1               SFRS = 1; P0SR |= 0x02 /*!<Set P0SR.1                     */
#define set_P0SR_2               SFRS = 1; P0SR |= 0x04 /*!<Set P0SR.2                     */
#define set_P0SR_3               SFRS = 1; P0SR |= 0x08 /*!<Set P0SR.3                     */

#define clr_P0SR_0               SFRS = 1; P0SR &=~0x01 /*!<Clear P0SR.0                   */
#define clr_P0SR_1               SFRS = 1; P0SR &=~0x02 /*!<Clear P0SR.1                   */
#define clr_P0SR_2               SFRS = 1; P0SR &=~0x04 /*!<Clear P0SR.2                   */
#define clr_P0SR_3               SFRS = 1; P0SR &=~0x08 /*!<Clear P0SR.3                   */

/**@} end of SFR_PAGE1_P0SR_MACRO group */
/**@} end of SFR_PAGE1_P0SR group */

/**
   @addtogroup SFR_PAGE1_P1S P1S
   Special Function Register P1S
   @{ */

/**
@var P1S
Address: 9BH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[7]     |7         |P1 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/
__sfr __no_init volatile unsigned char P1S @ 0x9B;

/**
@addtogroup SFR_PAGE1_P1S_MACRO Bit Macro Functions
Bit Macro Functions of P1S
@{ */

#define set_P1S_6                SFRS = 1; P1S |= 0x40 /*!<Set P1S.6                      */
#define set_P1S_7                SFRS = 1; P1S |= 0x80 /*!<Set P1S.7                      */

#define clr_P1S_6                SFRS = 1; P1S &=~0x40 /*!<Clear P1S.6                    */
#define clr_P1S_7                SFRS = 1; P1S &=~0x80 /*!<Clear P1S.7                    */

/**@} end of SFR_PAGE1_P1S_MACRO group */
/**@} end of SFR_PAGE1_P1S group */

/**
   @addtogroup SFR_PAGE1_P1SR P1SR
   Special Function Register P1SR
   @{ */

/**
@var P1SR
Address: 9CH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[7]     |7         |P1 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/
__sfr __no_init volatile unsigned char P1SR @ 0x9C;

/**
@addtogroup SFR_PAGE1_P1SR_MACRO Bit Macro Functions
Bit Macro Functions of P1SR
@{ */

#define set_P1SR_6               SFRS = 1; P1SR |= 0x40 /*!<Set P1SR.6                     */
#define set_P1SR_7               SFRS = 1; P1SR |= 0x80 /*!<Set P1SR.7                     */

#define clr_P1SR_6               SFRS = 1; P1SR &=~0x40 /*!<Clear P1SR.6                   */
#define clr_P1SR_7               SFRS = 1; P1SR &=~0x80 /*!<Clear P1SR.7                   */

/**@} end of SFR_PAGE1_P1SR_MACRO group */
/**@} end of SFR_PAGE1_P1SR group */

/**
   @addtogroup SFR_PAGE1_P2S P2S
   Special Function Register P2S
   @{ */

/**
@var P2S
Address: 9DH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[4]     |4         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[5]     |5         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/
__sfr __no_init volatile unsigned char P2S @ 0x9D;

/**
@addtogroup SFR_PAGE1_P2S_MACRO Bit Macro Functions
Bit Macro Functions of P2S
@{ */

#define set_P2S_0                SFRS = 1; P2S |= 0x01 /*!<Set P2S.0                      */
#define set_P2S_1                SFRS = 1; P2S |= 0x02 /*!<Set P2S.1                      */
#define set_P2S_2                SFRS = 1; P2S |= 0x04 /*!<Set P2S.2                      */
#define set_P2S_3                SFRS = 1; P2S |= 0x08 /*!<Set P2S.3                      */
#define set_P2S_4                SFRS = 1; P2S |= 0x10 /*!<Set P2S.4                      */
#define set_P2S_5                SFRS = 1; P2S |= 0x20 /*!<Set P2S.5                      */

#define clr_P2S_0                SFRS = 1; P2S &=~0x01 /*!<Clear P2S.0                    */
#define clr_P2S_1                SFRS = 1; P2S &=~0x02 /*!<Clear P2S.1                    */
#define clr_P2S_2                SFRS = 1; P2S &=~0x04 /*!<Clear P2S.2                    */
#define clr_P2S_3                SFRS = 1; P2S &=~0x08 /*!<Clear P2S.3                    */
#define clr_P2S_4                SFRS = 1; P2S &=~0x10 /*!<Clear P2S.4                    */
#define clr_P2S_5                SFRS = 1; P2S &=~0x20 /*!<Clear P2S.5                    */

/**@} end of SFR_PAGE1_P2S_MACRO group */
/**@} end of SFR_PAGE1_P2S group */

/**
   @addtogroup SFR_PAGE1_P2SR P2SR
   Special Function Register P2SR
   @{ */

/**
@var P2SR
Address: 9EH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[4]     |4         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[5]     |5         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/
__sfr __no_init volatile unsigned char P2SR @ 0x9E;

/**
@addtogroup SFR_PAGE1_P2SR_MACRO Bit Macro Functions
Bit Macro Functions of P2SR
@{ */

#define set_P2SR_0               SFRS = 1; P2SR |= 0x01 /*!<Set P2SR.0                     */
#define set_P2SR_1               SFRS = 1; P2SR |= 0x02 /*!<Set P2SR.1                     */
#define set_P2SR_2               SFRS = 1; P2SR |= 0x04 /*!<Set P2SR.2                     */
#define set_P2SR_3               SFRS = 1; P2SR |= 0x08 /*!<Set P2SR.3                     */
#define set_P2SR_4               SFRS = 1; P2SR |= 0x10 /*!<Set P2SR.4                     */
#define set_P2SR_5               SFRS = 1; P2SR |= 0x20 /*!<Set P2SR.5                     */

#define clr_P2SR_0               SFRS = 1; P2SR &=~0x01 /*!<Clear P2SR.0                   */
#define clr_P2SR_1               SFRS = 1; P2SR &=~0x02 /*!<Clear P2SR.1                   */
#define clr_P2SR_2               SFRS = 1; P2SR &=~0x04 /*!<Clear P2SR.2                   */
#define clr_P2SR_3               SFRS = 1; P2SR &=~0x08 /*!<Clear P2SR.3                   */
#define clr_P2SR_4               SFRS = 1; P2SR &=~0x10 /*!<Clear P2SR.4                   */
#define clr_P2SR_5               SFRS = 1; P2SR &=~0x20 /*!<Clear P2SR.5                   */

/**@} end of SFR_PAGE1_P2SR_MACRO group */
/**@} end of SFR_PAGE1_P2SR group */

/**
   @addtogroup SFR_PAGE1_P2 P2
   Special Function Register @ref P2
   @{ */
/**@} end of SFR_PAGE1_P2 group */

/**
   @addtogroup SFR_PAGE1_PIPS0 PIPS0
   Special Function Register PIPS0
   @{ */

/**
@var PIPS0
Address: A1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS0 @ 0xA1;

/**@} end of SFR_PAGE1_PIPS0 group */

/**
   @addtogroup SFR_PAGE1_PIPS1 PIPS1
   Special Function Register PIPS1
   @{ */

/**
@var PIPS1
Address: A2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS1 @ 0xA2;

/**@} end of SFR_PAGE1_PIPS1 group */

/**
   @addtogroup SFR_PAGE1_PIPS2 PIPS2
   Special Function Register PIPS2
   @{ */

/**
@var PIPS2
Address: A3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS2 @ 0xA3;

/**@} end of SFR_PAGE1_PIPS2 group */

/**
   @addtogroup SFR_PAGE1_PIPS3 PIPS3
   Special Function Register PIPS3
   @{ */

/**
@var PIPS3
Address: A4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS3 @ 0xA4;

/**@} end of SFR_PAGE1_PIPS3 group */

/**
   @addtogroup SFR_PAGE1_PIPS4 PIPS4
   Special Function Register PIPS4
   @{ */

/**
@var PIPS4
Address: A5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS4 @ 0xA5;

/**@} end of SFR_PAGE1_PIPS4 group */

/**
   @addtogroup SFR_PAGE1_PIPS5 PIPS5
   Special Function Register PIPS5
   @{ */

/**
@var PIPS5
Address: A6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS5 @ 0xA6;

/**@} end of SFR_PAGE1_PIPS5 group */

/**
   @addtogroup SFR_PAGE1_PIPS6 PIPS6
   Special Function Register PIPS6
   @{ */

/**
@var PIPS6
Address: A7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS6 @ 0xA7;

/**@} end of SFR_PAGE1_PIPS6 group */

/**
   @addtogroup SFR_PAGE1_IE IE
   Special Function Register @ref IE
   @{ */
/**@} end of SFR_PAGE1_IE group */

/**
   @addtogroup SFR_PAGE1_IE IE
   Special Function Register @ref IE
   @{ */
/**@} end of SFR_PAGE1_IE group */

/**
   @addtogroup SFR_PAGE1_ACMPCR2 ACMPCR2
   Special Function Register ACMPCR2
   @{ */

/**
@var ACMPCR2
Address: ABH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CRVEN     |CRV Enable Bit
|        |          |0 = CRV Disabled.
|        |          |1 = CRV Enabled.
|[1]     |CRVSSEL   |CRV Source Voltage Selection
|        |          |0 = VDD is selected as CRV source voltage.
|        |          |1 = The reference voltage (VREF) is selected as CRV source voltage.
|[3:2]   |SPEED0    |Analog Comparator 0 Speed Control
|        |          |00 = slow speed, propagation delay : 4.5us, 1.2uA (typ.)
|        |          |01 = slow+ speed, propagation delay : 2.0us, 3uA (typ.)
|        |          |10 = fast speed, propagation delay : 0.6us, 10uA (typ.)
|        |          |11 = fast+ speed, propagation delay : 0.2us, 75uA (typ.)
|[4]     |POE0      |Analog Comparator 0 Polarity Output Enable
|        |          |0 = ACMP0 outputs directly.
|        |          |1 = ACMP0 outputs inversely.
|[5]     |POE1      |Analog Comparator 1 Polarity Output Enable
|        |          |0 = ACMP1 output directly.
|        |          |1 = ACMP1 output inversely.
|[7:6]   |SPEED1    |Analog Comparator 1 Speed Control
|        |          |00 = slow speed, propagation delay : 4.5us, 1.2uA (typ.)
|        |          |01 = slow+ speed, propagation delay : 2.0us, 3uA (typ.)
|        |          |10 = fast speed, propagation delay : 0.6us, 10uA (typ.)
|        |          |11 = fast+ speed, propagation delay : 0.2us, 75uA (typ.)
*/
__sfr __no_init volatile unsigned char ACMPCR2 @ 0xAB;

/**
@addtogroup SFR_PAGE1_ACMPCR2_MACRO Bit Macro Functions
Bit Macro Functions of ACMPCR2
@{ */

#define set_ACMPCR2_CRVEN        SFRS = 1; ACMPCR2 |= 0x01 /*!<Set ACMPCR2.CRVEN              */
#define set_ACMPCR2_CRVSSEL      SFRS = 1; ACMPCR2 |= 0x02 /*!<Set ACMPCR2.CRVSSEL            */

#define set_ACMPCR2_POE0         SFRS = 1; ACMPCR2 |= 0x10 /*!<Set ACMPCR2.POE0               */
#define set_ACMPCR2_POE1         SFRS = 1; ACMPCR2 |= 0x20 /*!<Set ACMPCR2.POE1               */


#define clr_ACMPCR2_CRVEN        SFRS = 1; ACMPCR2 &=~0x01 /*!<Clear ACMPCR2.CRVEN            */
#define clr_ACMPCR2_CRVSSEL      SFRS = 1; ACMPCR2 &=~0x02 /*!<Clear ACMPCR2.CRVSSEL          */

#define clr_ACMPCR2_POE0         SFRS = 1; ACMPCR2 &=~0x10 /*!<Clear ACMPCR2.POE0             */
#define clr_ACMPCR2_POE1         SFRS = 1; ACMPCR2 &=~0x20 /*!<Clear ACMPCR2.POE1             */


/**@} end of SFR_PAGE1_ACMPCR2_MACRO group */
/**@} end of SFR_PAGE1_ACMPCR2 group */

/**
   @addtogroup SFR_PAGE1_P3S P3S
   Special Function Register P3S
   @{ */

/**
@var P3S
Address: ACH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/
__sfr __no_init volatile unsigned char P3S @ 0xAC;

/**
@addtogroup SFR_PAGE1_P3S_MACRO Bit Macro Functions
Bit Macro Functions of P3S
@{ */

#define set_P3S_0                SFRS = 1; P3S |= 0x01 /*!<Set P3S.0                      */
#define set_P3S_1                SFRS = 1; P3S |= 0x02 /*!<Set P3S.1                      */
#define set_P3S_2                SFRS = 1; P3S |= 0x04 /*!<Set P3S.2                      */
#define set_P3S_3                SFRS = 1; P3S |= 0x08 /*!<Set P3S.3                      */

#define clr_P3S_0                SFRS = 1; P3S &=~0x01 /*!<Clear P3S.0                    */
#define clr_P3S_1                SFRS = 1; P3S &=~0x02 /*!<Clear P3S.1                    */
#define clr_P3S_2                SFRS = 1; P3S &=~0x04 /*!<Clear P3S.2                    */
#define clr_P3S_3                SFRS = 1; P3S &=~0x08 /*!<Clear P3S.3                    */

/**@} end of SFR_PAGE1_P3S_MACRO group */
/**@} end of SFR_PAGE1_P3S group */

/**
   @addtogroup SFR_PAGE1_P3SR P3SR
   Special Function Register P3SR
   @{ */

/**
@var P3SR
Address: ADH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/
__sfr __no_init volatile unsigned char P3SR @ 0xAD;

/**
@addtogroup SFR_PAGE1_P3SR_MACRO Bit Macro Functions
Bit Macro Functions of P3SR
@{ */

#define set_P3SR_0               SFRS = 1; P3SR |= 0x01 /*!<Set P3SR.0                     */
#define set_P3SR_1               SFRS = 1; P3SR |= 0x02 /*!<Set P3SR.1                     */
#define set_P3SR_2               SFRS = 1; P3SR |= 0x04 /*!<Set P3SR.2                     */
#define set_P3SR_3               SFRS = 1; P3SR |= 0x08 /*!<Set P3SR.3                     */

#define clr_P3SR_0               SFRS = 1; P3SR &=~0x01 /*!<Clear P3SR.0                   */
#define clr_P3SR_1               SFRS = 1; P3SR &=~0x02 /*!<Clear P3SR.1                   */
#define clr_P3SR_2               SFRS = 1; P3SR &=~0x04 /*!<Clear P3SR.2                   */
#define clr_P3SR_3               SFRS = 1; P3SR &=~0x08 /*!<Clear P3SR.3                   */

/**@} end of SFR_PAGE1_P3SR_MACRO group */
/**@} end of SFR_PAGE1_P3SR group */

/**
   @addtogroup SFR_PAGE1_P5SR P5SR
   Special Function Register P5SR
   @{ */

/**
@var P5SR
Address: AEH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[4]     |4         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[5]     |5         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/
__sfr __no_init volatile unsigned char P5SR @ 0xAE;

/**
@addtogroup SFR_PAGE1_P5SR_MACRO Bit Macro Functions
Bit Macro Functions of P5SR
@{ */

#define set_P5SR_0               SFRS = 1; P5SR |= 0x01 /*!<Set P5SR.0                     */
#define set_P5SR_1               SFRS = 1; P5SR |= 0x02 /*!<Set P5SR.1                     */
#define set_P5SR_2               SFRS = 1; P5SR |= 0x04 /*!<Set P5SR.2                     */
#define set_P5SR_3               SFRS = 1; P5SR |= 0x08 /*!<Set P5SR.3                     */
#define set_P5SR_4               SFRS = 1; P5SR |= 0x10 /*!<Set P5SR.4                     */
#define set_P5SR_5               SFRS = 1; P5SR |= 0x20 /*!<Set P5SR.5                     */

#define clr_P5SR_0               SFRS = 1; P5SR &=~0x01 /*!<Clear P5SR.0                   */
#define clr_P5SR_1               SFRS = 1; P5SR &=~0x02 /*!<Clear P5SR.1                   */
#define clr_P5SR_2               SFRS = 1; P5SR &=~0x04 /*!<Clear P5SR.2                   */
#define clr_P5SR_3               SFRS = 1; P5SR &=~0x08 /*!<Clear P5SR.3                   */
#define clr_P5SR_4               SFRS = 1; P5SR &=~0x10 /*!<Clear P5SR.4                   */
#define clr_P5SR_5               SFRS = 1; P5SR &=~0x20 /*!<Clear P5SR.5                   */

/**@} end of SFR_PAGE1_P5SR_MACRO group */
/**@} end of SFR_PAGE1_P5SR group */

/**
   @addtogroup SFR_PAGE1_PIPS7 PIPS7
   Special Function Register PIPS7
   @{ */

/**
@var PIPS7
Address: AFH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PIPS7 @ 0xAF;

/**@} end of SFR_PAGE1_PIPS7 group */

/**
   @addtogroup SFR_PAGE1_P3 P3
   Special Function Register @ref P3
   @{ */
/**@} end of SFR_PAGE1_P3 group */

/**
   @addtogroup SFR_PAGE1_P0M1 P0M1
   Special Function Register P0M1
   @{ */

/**
@var P0M1
Address: B1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[1]     |1         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[2]     |2         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[3]     |3         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
*/
__sfr __no_init volatile unsigned char P0M1 @ 0xB1;

/**
@addtogroup SFR_PAGE1_P0M1_MACRO Bit Macro Functions
Bit Macro Functions of P0M1
@{ */

#define set_P0M1_0               SFRS = 1; P0M1 |= 0x01 /*!<Set P0M1.0                     */
#define set_P0M1_1               SFRS = 1; P0M1 |= 0x02 /*!<Set P0M1.1                     */
#define set_P0M1_2               SFRS = 1; P0M1 |= 0x04 /*!<Set P0M1.2                     */
#define set_P0M1_3               SFRS = 1; P0M1 |= 0x08 /*!<Set P0M1.3                     */

#define clr_P0M1_0               SFRS = 1; P0M1 &=~0x01 /*!<Clear P0M1.0                   */
#define clr_P0M1_1               SFRS = 1; P0M1 &=~0x02 /*!<Clear P0M1.1                   */
#define clr_P0M1_2               SFRS = 1; P0M1 &=~0x04 /*!<Clear P0M1.2                   */
#define clr_P0M1_3               SFRS = 1; P0M1 &=~0x08 /*!<Clear P0M1.3                   */

/**@} end of SFR_PAGE1_P0M1_MACRO group */
/**@} end of SFR_PAGE1_P0M1 group */

/**
   @addtogroup SFR_PAGE1_P0M2 P0M2
   Special Function Register P0M2
   @{ */

/**
@var P0M2
Address: B2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[1]     |1         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[2]     |2         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[3]     |3         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
*/
__sfr __no_init volatile unsigned char P0M2 @ 0xB2;

/**
@addtogroup SFR_PAGE1_P0M2_MACRO Bit Macro Functions
Bit Macro Functions of P0M2
@{ */

#define set_P0M2_0               SFRS = 1; P0M2 |= 0x01 /*!<Set P0M2.0                     */
#define set_P0M2_1               SFRS = 1; P0M2 |= 0x02 /*!<Set P0M2.1                     */
#define set_P0M2_2               SFRS = 1; P0M2 |= 0x04 /*!<Set P0M2.2                     */
#define set_P0M2_3               SFRS = 1; P0M2 |= 0x08 /*!<Set P0M2.3                     */

#define clr_P0M2_0               SFRS = 1; P0M2 &=~0x01 /*!<Clear P0M2.0                   */
#define clr_P0M2_1               SFRS = 1; P0M2 &=~0x02 /*!<Clear P0M2.1                   */
#define clr_P0M2_2               SFRS = 1; P0M2 &=~0x04 /*!<Clear P0M2.2                   */
#define clr_P0M2_3               SFRS = 1; P0M2 &=~0x08 /*!<Clear P0M2.3                   */

/**@} end of SFR_PAGE1_P0M2_MACRO group */
/**@} end of SFR_PAGE1_P0M2 group */

/**
   @addtogroup SFR_PAGE1_P1M1 P1M1
   Special Function Register P1M1
   @{ */

/**
@var P1M1
Address: B3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |Port 1 mode select 1
|[7]     |7         |Port 1 mode select 1
*/
__sfr __no_init volatile unsigned char P1M1 @ 0xB3;

/**
@addtogroup SFR_PAGE1_P1M1_MACRO Bit Macro Functions
Bit Macro Functions of P1M1
@{ */

#define set_P1M1_6               SFRS = 1; P1M1 |= 0x40 /*!<Set P1M1.6                     */
#define set_P1M1_7               SFRS = 1; P1M1 |= 0x80 /*!<Set P1M1.7                     */

#define clr_P1M1_6               SFRS = 1; P1M1 &=~0x40 /*!<Clear P1M1.6                   */
#define clr_P1M1_7               SFRS = 1; P1M1 &=~0x80 /*!<Clear P1M1.7                   */

/**@} end of SFR_PAGE1_P1M1_MACRO group */
/**@} end of SFR_PAGE1_P1M1 group */

/**
   @addtogroup SFR_PAGE1_P1M2 P1M2
   Special Function Register P1M2
   @{ */

/**
@var P1M2
Address: B4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |Port 1 Mode Select 2
|[7]     |7         |Port 1 Mode Select 2
*/
__sfr __no_init volatile unsigned char P1M2 @ 0xB4;

/**
@addtogroup SFR_PAGE1_P1M2_MACRO Bit Macro Functions
Bit Macro Functions of P1M2
@{ */

#define set_P1M2_6               SFRS = 1; P1M2 |= 0x40 /*!<Set P1M2.6                     */
#define set_P1M2_7               SFRS = 1; P1M2 |= 0x80 /*!<Set P1M2.7                     */

#define clr_P1M2_6               SFRS = 1; P1M2 &=~0x40 /*!<Clear P1M2.6                   */
#define clr_P1M2_7               SFRS = 1; P1M2 &=~0x80 /*!<Clear P1M2.7                   */

/**@} end of SFR_PAGE1_P1M2_MACRO group */
/**@} end of SFR_PAGE1_P1M2 group */

/**
   @addtogroup SFR_PAGE1_P2M1 P2M1
   Special Function Register P2M1
   @{ */

/**
@var P2M1
Address: B5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 2 mode select 1
|[1]     |1         |Port 2 mode select 1
|[2]     |2         |Port 2 mode select 1
|[3]     |3         |Port 2 mode select 1
|[4]     |4         |Port 2 mode select 1
|[5]     |5         |Port 2 mode select 1
*/
__sfr __no_init volatile unsigned char P2M1 @ 0xB5;

/**
@addtogroup SFR_PAGE1_P2M1_MACRO Bit Macro Functions
Bit Macro Functions of P2M1
@{ */

#define set_P2M1_0               SFRS = 1; P2M1 |= 0x01 /*!<Set P2M1.0                     */
#define set_P2M1_1               SFRS = 1; P2M1 |= 0x02 /*!<Set P2M1.1                     */
#define set_P2M1_2               SFRS = 1; P2M1 |= 0x04 /*!<Set P2M1.2                     */
#define set_P2M1_3               SFRS = 1; P2M1 |= 0x08 /*!<Set P2M1.3                     */
#define set_P2M1_4               SFRS = 1; P2M1 |= 0x10 /*!<Set P2M1.4                     */
#define set_P2M1_5               SFRS = 1; P2M1 |= 0x20 /*!<Set P2M1.5                     */

#define clr_P2M1_0               SFRS = 1; P2M1 &=~0x01 /*!<Clear P2M1.0                   */
#define clr_P2M1_1               SFRS = 1; P2M1 &=~0x02 /*!<Clear P2M1.1                   */
#define clr_P2M1_2               SFRS = 1; P2M1 &=~0x04 /*!<Clear P2M1.2                   */
#define clr_P2M1_3               SFRS = 1; P2M1 &=~0x08 /*!<Clear P2M1.3                   */
#define clr_P2M1_4               SFRS = 1; P2M1 &=~0x10 /*!<Clear P2M1.4                   */
#define clr_P2M1_5               SFRS = 1; P2M1 &=~0x20 /*!<Clear P2M1.5                   */

/**@} end of SFR_PAGE1_P2M1_MACRO group */
/**@} end of SFR_PAGE1_P2M1 group */

/**
   @addtogroup SFR_PAGE1_P2M2 P2M2
   Special Function Register P2M2
   @{ */

/**
@var P2M2
Address: B6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 2 Mode Select 2
|[1]     |1         |Port 2 Mode Select 2
|[2]     |2         |Port 2 Mode Select 2
|[3]     |3         |Port 2 Mode Select 2
|[4]     |4         |Port 2 Mode Select 2
|[5]     |5         |Port 2 Mode Select 2
*/
__sfr __no_init volatile unsigned char P2M2 @ 0xB6;

/**
@addtogroup SFR_PAGE1_P2M2_MACRO Bit Macro Functions
Bit Macro Functions of P2M2
@{ */

#define set_P2M2_0               SFRS = 1; P2M2 |= 0x01 /*!<Set P2M2.0                     */
#define set_P2M2_1               SFRS = 1; P2M2 |= 0x02 /*!<Set P2M2.1                     */
#define set_P2M2_2               SFRS = 1; P2M2 |= 0x04 /*!<Set P2M2.2                     */
#define set_P2M2_3               SFRS = 1; P2M2 |= 0x08 /*!<Set P2M2.3                     */
#define set_P2M2_4               SFRS = 1; P2M2 |= 0x10 /*!<Set P2M2.4                     */
#define set_P2M2_5               SFRS = 1; P2M2 |= 0x20 /*!<Set P2M2.5                     */

#define clr_P2M2_0               SFRS = 1; P2M2 &=~0x01 /*!<Clear P2M2.0                   */
#define clr_P2M2_1               SFRS = 1; P2M2 &=~0x02 /*!<Clear P2M2.1                   */
#define clr_P2M2_2               SFRS = 1; P2M2 &=~0x04 /*!<Clear P2M2.2                   */
#define clr_P2M2_3               SFRS = 1; P2M2 &=~0x08 /*!<Clear P2M2.3                   */
#define clr_P2M2_4               SFRS = 1; P2M2 &=~0x10 /*!<Clear P2M2.4                   */
#define clr_P2M2_5               SFRS = 1; P2M2 &=~0x20 /*!<Clear P2M2.5                   */

/**@} end of SFR_PAGE1_P2M2_MACRO group */
/**@} end of SFR_PAGE1_P2M2 group */

/**
   @addtogroup SFR_PAGE1_PWM0INTC PWM0INTC
   Special Function Register PWM0INTC
   @{ */

/**
@var PWM0INTC
Address: B7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |INTSEL0   |PWM Interrupt Pair Select
|        |          |These bits select which PWM channel asserts PWM interrupt when PWM
|        |          |interrupt type is selected as falling or rising edge on PWM0/1/2/3/4/5
|        |          |pin..
|        |          |000 = PWMn_CH0.
|        |          |001 = PWMn_CH1.
|        |          |010 = PWMn_CH2.
|        |          |011 = PWMn_CH3.
|        |          |100 = PWMn_CH4.
|        |          |101 = PWMn_CH5.
|        |          |Others = PWMn_CH0.
|[1]     |INTSEL1   |PWM Interrupt Pair Select
|        |          |These bits select which PWM channel asserts PWM interrupt when PWM
|        |          |interrupt type is selected as falling or rising edge on PWM0/1/2/3/4/5
|        |          |pin..
|        |          |000 = PWMn_CH0.
|        |          |001 = PWMn_CH1.
|        |          |010 = PWMn_CH2.
|        |          |011 = PWMn_CH3.
|        |          |100 = PWMn_CH4.
|        |          |101 = PWMn_CH5.
|        |          |Others = PWMn_CH0.
|[2]     |INTSEL2   |PWM Interrupt Pair Select
|        |          |These bits select which PWM channel asserts PWM interrupt when PWM
|        |          |interrupt type is selected as falling or rising edge on PWM0/1/2/3/4/5
|        |          |pin..
|        |          |000 = PWMn_CH0.
|        |          |001 = PWMn_CH1.
|        |          |010 = PWMn_CH2.
|        |          |011 = PWMn_CH3.
|        |          |100 = PWMn_CH4.
|        |          |101 = PWMn_CH5.
|        |          |Others = PWMn_CH0.
|[3]     |Reserved  |Reserved
|[4]     |INTTYP0   |PWM Interrupt Type Select
|        |          |These bit select PWM interrupt type.
|        |          |00 = Falling edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |01 = Rising edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |10 = Central point of a PWM period.
|        |          |11 = End point of a PWM period.
|        |          |Note that the central point interrupt or the end point interrupt is
|        |          |only available while PWM operates in center-aligned type.
|[5]     |INTTYP1   |PWM Interrupt Type Select
|        |          |These bit select PWM interrupt type.
|        |          |00 = Falling edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |01 = Rising edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |10 = Central point of a PWM period.
|        |          |11 = End point of a PWM period.
|        |          |Note that the central point interrupt or the end point interrupt is
|        |          |only available while PWM operates in center-aligned type.
|[7:6]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char PWM0INTC @ 0xB7;

/**
@addtogroup SFR_PAGE1_PWM0INTC_MACRO Bit Macro Functions
Bit Macro Functions of PWM0INTC
@{ */

#define set_PWM0INTC_INTSEL0     SFRS = 1; PWM0INTC |= 0x01 /*!<Set PWM0INTC.INTSEL0           */
#define set_PWM0INTC_INTSEL1     SFRS = 1; PWM0INTC |= 0x02 /*!<Set PWM0INTC.INTSEL1           */
#define set_PWM0INTC_INTSEL2     SFRS = 1; PWM0INTC |= 0x04 /*!<Set PWM0INTC.INTSEL2           */
#define set_PWM0INTC_INTTYP0     SFRS = 1; PWM0INTC |= 0x10 /*!<Set PWM0INTC.INTTYP0           */
#define set_PWM0INTC_INTTYP1     SFRS = 1; PWM0INTC |= 0x20 /*!<Set PWM0INTC.INTTYP1           */

#define clr_PWM0INTC_INTSEL0     SFRS = 1; PWM0INTC &=~0x01 /*!<Clear PWM0INTC.INTSEL0         */
#define clr_PWM0INTC_INTSEL1     SFRS = 1; PWM0INTC &=~0x02 /*!<Clear PWM0INTC.INTSEL1         */
#define clr_PWM0INTC_INTSEL2     SFRS = 1; PWM0INTC &=~0x04 /*!<Clear PWM0INTC.INTSEL2         */
#define clr_PWM0INTC_INTTYP0     SFRS = 1; PWM0INTC &=~0x10 /*!<Clear PWM0INTC.INTTYP0         */
#define clr_PWM0INTC_INTTYP1     SFRS = 1; PWM0INTC &=~0x20 /*!<Clear PWM0INTC.INTTYP1         */

/**@} end of SFR_PAGE1_PWM0INTC_MACRO group */
/**@} end of SFR_PAGE1_PWM0INTC group */

/**
   @addtogroup SFR_PAGE1_IP IP
   Special Function Register @ref IP
   @{ */
/**@} end of SFR_PAGE1_IP group */

/**
   @addtogroup SFR_PAGE1_P4M1 P4M1
   Special Function Register P4M1
   @{ */

/**
@var P4M1
Address: B9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 4 mode select 1
|[1]     |1         |Port 4 mode select 1
*/
__sfr __no_init volatile unsigned char P4M1 @ 0xB9;

/**
@addtogroup SFR_PAGE1_P4M1_MACRO Bit Macro Functions
Bit Macro Functions of P4M1
@{ */

#define set_P4M1_0               SFRS = 1; P4M1 |= 0x01 /*!<Set P4M1.0                     */
#define set_P4M1_1               SFRS = 1; P4M1 |= 0x02 /*!<Set P4M1.1                     */

#define clr_P4M1_0               SFRS = 1; P4M1 &=~0x01 /*!<Clear P4M1.0                   */
#define clr_P4M1_1               SFRS = 1; P4M1 &=~0x02 /*!<Clear P4M1.1                   */

/**@} end of SFR_PAGE1_P4M1_MACRO group */
/**@} end of SFR_PAGE1_P4M1 group */

/**
   @addtogroup SFR_PAGE1_P4M2 P4M2
   Special Function Register P4M2
   @{ */

/**
@var P4M2
Address: BAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 4 Mode Select 2
|[1]     |1         |Port 4 Mode Select 2
*/
__sfr __no_init volatile unsigned char P4M2 @ 0xBA;

/**
@addtogroup SFR_PAGE1_P4M2_MACRO Bit Macro Functions
Bit Macro Functions of P4M2
@{ */

#define set_P4M2_0               SFRS = 1; P4M2 |= 0x01 /*!<Set P4M2.0                     */
#define set_P4M2_1               SFRS = 1; P4M2 |= 0x02 /*!<Set P4M2.1                     */

#define clr_P4M2_0               SFRS = 1; P4M2 &=~0x01 /*!<Clear P4M2.0                   */
#define clr_P4M2_1               SFRS = 1; P4M2 &=~0x02 /*!<Clear P4M2.1                   */

/**@} end of SFR_PAGE1_P4M2_MACRO group */
/**@} end of SFR_PAGE1_P4M2 group */

/**
   @addtogroup SFR_PAGE1_P4S P4S
   Special Function Register P4S
   @{ */

/**
@var P4S
Address: BBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P4 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/
__sfr __no_init volatile unsigned char P4S @ 0xBB;

/**
@addtogroup SFR_PAGE1_P4S_MACRO Bit Macro Functions
Bit Macro Functions of P4S
@{ */

#define set_P4S_0                SFRS = 1; P4S |= 0x01 /*!<Set P4S.0                      */
#define set_P4S_1                SFRS = 1; P4S |= 0x02 /*!<Set P4S.1                      */

#define clr_P4S_0                SFRS = 1; P4S &=~0x01 /*!<Clear P4S.0                    */
#define clr_P4S_1                SFRS = 1; P4S &=~0x02 /*!<Clear P4S.1                    */

/**@} end of SFR_PAGE1_P4S_MACRO group */
/**@} end of SFR_PAGE1_P4S group */

/**
   @addtogroup SFR_PAGE1_P4SR P4SR
   Special Function Register P4SR
   @{ */

/**
@var P4SR
Address: BCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/
__sfr __no_init volatile unsigned char P4SR @ 0xBC;

/**
@addtogroup SFR_PAGE1_P4SR_MACRO Bit Macro Functions
Bit Macro Functions of P4SR
@{ */

#define set_P4SR_0               SFRS = 1; P4SR |= 0x01 /*!<Set P4SR.0                     */
#define set_P4SR_1               SFRS = 1; P4SR |= 0x02 /*!<Set P4SR.1                     */
#define set_P4SR_2               SFRS = 1; P4SR |= 0x04 /*!<Set P4SR.2                     */
#define set_P4SR_3               SFRS = 1; P4SR |= 0x08 /*!<Set P4SR.3                     */

#define clr_P4SR_0               SFRS = 1; P4SR &=~0x01 /*!<Clear P4SR.0                   */
#define clr_P4SR_1               SFRS = 1; P4SR &=~0x02 /*!<Clear P4SR.1                   */
#define clr_P4SR_2               SFRS = 1; P4SR &=~0x04 /*!<Clear P4SR.2                   */
#define clr_P4SR_3               SFRS = 1; P4SR &=~0x08 /*!<Clear P4SR.3                   */

/**@} end of SFR_PAGE1_P4SR_MACRO group */
/**@} end of SFR_PAGE1_P4SR group */

/**
   @addtogroup SFR_PAGE1_P5M1 P5M1
   Special Function Register P5M1
   @{ */

/**
@var P5M1
Address: BDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 5 mode select 1
|[1]     |1         |Port 5 mode select 1
|[2]     |2         |Port 5 mode select 1
|[3]     |3         |Port 5 mode select 1
|[4]     |4         |Port 5 mode select 1
|[5]     |5         |Port 5 mode select 1
*/
__sfr __no_init volatile unsigned char P5M1 @ 0xBD;

/**
@addtogroup SFR_PAGE1_P5M1_MACRO Bit Macro Functions
Bit Macro Functions of P5M1
@{ */

#define set_P5M1_0               SFRS = 1; P5M1 |= 0x01 /*!<Set P5M1.0                     */
#define set_P5M1_1               SFRS = 1; P5M1 |= 0x02 /*!<Set P5M1.1                     */
#define set_P5M1_2               SFRS = 1; P5M1 |= 0x04 /*!<Set P5M1.2                     */
#define set_P5M1_3               SFRS = 1; P5M1 |= 0x08 /*!<Set P5M1.3                     */
#define set_P5M1_4               SFRS = 1; P5M1 |= 0x10 /*!<Set P5M1.4                     */
#define set_P5M1_5               SFRS = 1; P5M1 |= 0x20 /*!<Set P5M1.5                     */

#define clr_P5M1_0               SFRS = 1; P5M1 &=~0x01 /*!<Clear P5M1.0                   */
#define clr_P5M1_1               SFRS = 1; P5M1 &=~0x02 /*!<Clear P5M1.1                   */
#define clr_P5M1_2               SFRS = 1; P5M1 &=~0x04 /*!<Clear P5M1.2                   */
#define clr_P5M1_3               SFRS = 1; P5M1 &=~0x08 /*!<Clear P5M1.3                   */
#define clr_P5M1_4               SFRS = 1; P5M1 &=~0x10 /*!<Clear P5M1.4                   */
#define clr_P5M1_5               SFRS = 1; P5M1 &=~0x20 /*!<Clear P5M1.5                   */

/**@} end of SFR_PAGE1_P5M1_MACRO group */
/**@} end of SFR_PAGE1_P5M1 group */

/**
   @addtogroup SFR_PAGE1_P5M2 P5M2
   Special Function Register P5M2
   @{ */

/**
@var P5M2
Address: BEH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 5 Mode Select 2
|[1]     |1         |Port 5 Mode Select 2
|[2]     |2         |Port 5 Mode Select 2
|[3]     |3         |Port 5 Mode Select 2
|[4]     |4         |Port 5 Mode Select 2
|[5]     |5         |Port 5 Mode Select 2
*/
__sfr __no_init volatile unsigned char P5M2 @ 0xBE;

/**
@addtogroup SFR_PAGE1_P5M2_MACRO Bit Macro Functions
Bit Macro Functions of P5M2
@{ */

#define set_P5M2_0               SFRS = 1; P5M2 |= 0x01 /*!<Set P5M2.0                     */
#define set_P5M2_1               SFRS = 1; P5M2 |= 0x02 /*!<Set P5M2.1                     */
#define set_P5M2_2               SFRS = 1; P5M2 |= 0x04 /*!<Set P5M2.2                     */
#define set_P5M2_3               SFRS = 1; P5M2 |= 0x08 /*!<Set P5M2.3                     */
#define set_P5M2_4               SFRS = 1; P5M2 |= 0x10 /*!<Set P5M2.4                     */
#define set_P5M2_5               SFRS = 1; P5M2 |= 0x20 /*!<Set P5M2.5                     */

#define clr_P5M2_0               SFRS = 1; P5M2 &=~0x01 /*!<Clear P5M2.0                   */
#define clr_P5M2_1               SFRS = 1; P5M2 &=~0x02 /*!<Clear P5M2.1                   */
#define clr_P5M2_2               SFRS = 1; P5M2 &=~0x04 /*!<Clear P5M2.2                   */
#define clr_P5M2_3               SFRS = 1; P5M2 &=~0x08 /*!<Clear P5M2.3                   */
#define clr_P5M2_4               SFRS = 1; P5M2 &=~0x10 /*!<Clear P5M2.4                   */
#define clr_P5M2_5               SFRS = 1; P5M2 &=~0x20 /*!<Clear P5M2.5                   */

/**@} end of SFR_PAGE1_P5M2_MACRO group */
/**@} end of SFR_PAGE1_P5M2 group */

/**
   @addtogroup SFR_PAGE1_P5S P5S
   Special Function Register P5S
   @{ */

/**
@var P5S
Address: BFH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[4]     |4         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[5]     |5         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/
__sfr __no_init volatile unsigned char P5S @ 0xBF;

/**
@addtogroup SFR_PAGE1_P5S_MACRO Bit Macro Functions
Bit Macro Functions of P5S
@{ */

#define set_P5S_0                SFRS = 1; P5S |= 0x01 /*!<Set P5S.0                      */
#define set_P5S_1                SFRS = 1; P5S |= 0x02 /*!<Set P5S.1                      */
#define set_P5S_2                SFRS = 1; P5S |= 0x04 /*!<Set P5S.2                      */
#define set_P5S_3                SFRS = 1; P5S |= 0x08 /*!<Set P5S.3                      */
#define set_P5S_4                SFRS = 1; P5S |= 0x10 /*!<Set P5S.4                      */
#define set_P5S_5                SFRS = 1; P5S |= 0x20 /*!<Set P5S.5                      */

#define clr_P5S_0                SFRS = 1; P5S &=~0x01 /*!<Clear P5S.0                    */
#define clr_P5S_1                SFRS = 1; P5S &=~0x02 /*!<Clear P5S.1                    */
#define clr_P5S_2                SFRS = 1; P5S &=~0x04 /*!<Clear P5S.2                    */
#define clr_P5S_3                SFRS = 1; P5S &=~0x08 /*!<Clear P5S.3                    */
#define clr_P5S_4                SFRS = 1; P5S &=~0x10 /*!<Clear P5S.4                    */
#define clr_P5S_5                SFRS = 1; P5S &=~0x20 /*!<Clear P5S.5                    */

/**@} end of SFR_PAGE1_P5S_MACRO group */
/**@} end of SFR_PAGE1_P5S group */

/**
   @addtogroup SFR_PAGE1_I2C0CON I2C0CON
   Special Function Register @ref I2C0CON
   @{ */
/**@} end of SFR_PAGE1_I2C0CON group */

/**
   @addtogroup SFR_PAGE1_CKDIV CKDIV
   Special Function Register CKDIV
   @{ */

/**
@var CKDIV
Address: C1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CKDIV[7:0]|Clock Divider
|        |          |The system clock frequency FSYS follows the equation below according
|        |          |to CKDIV value.
|        |          |FSYS = FOSC, while CKDIV = 00H
|        |          |, while CKDIV = 01H to FFH.
|        |          |CKDIV register will be reload and setting by CONFIG3[1:0] after reset
*/
__sfr __no_init volatile unsigned char CKDIV @ 0xC1;

/**@} end of SFR_PAGE1_CKDIV group */

/**
   @addtogroup SFR_PAGE1_P3M1 P3M1
   Special Function Register P3M1
   @{ */

/**
@var P3M1
Address: C2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 3 mode select 1
|[1]     |1         |Port 3 mode select 1
|[2]     |2         |Port 3 mode select 1
|[3]     |3         |Port 3 mode select 1
|[4]     |4         |Port 3 mode select 1
*/
__sfr __no_init volatile unsigned char P3M1 @ 0xC2;

/**
@addtogroup SFR_PAGE1_P3M1_MACRO Bit Macro Functions
Bit Macro Functions of P3M1
@{ */

#define set_P3M1_0               SFRS = 1; P3M1 |= 0x01 /*!<Set P3M1.0                     */
#define set_P3M1_1               SFRS = 1; P3M1 |= 0x02 /*!<Set P3M1.1                     */
#define set_P3M1_2               SFRS = 1; P3M1 |= 0x04 /*!<Set P3M1.2                     */
#define set_P3M1_3               SFRS = 1; P3M1 |= 0x08 /*!<Set P3M1.3                     */
#define set_P3M1_4               SFRS = 1; P3M1 |= 0x10 /*!<Set P3M1.4                     */

#define clr_P3M1_0               SFRS = 1; P3M1 &=~0x01 /*!<Clear P3M1.0                   */
#define clr_P3M1_1               SFRS = 1; P3M1 &=~0x02 /*!<Clear P3M1.1                   */
#define clr_P3M1_2               SFRS = 1; P3M1 &=~0x04 /*!<Clear P3M1.2                   */
#define clr_P3M1_3               SFRS = 1; P3M1 &=~0x08 /*!<Clear P3M1.3                   */
#define clr_P3M1_4               SFRS = 1; P3M1 &=~0x10 /*!<Clear P3M1.4                   */

/**@} end of SFR_PAGE1_P3M1_MACRO group */
/**@} end of SFR_PAGE1_P3M1 group */

/**
   @addtogroup SFR_PAGE1_P3M2 P3M2
   Special Function Register P3M2
   @{ */

/**
@var P3M2
Address: C3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 3 Mode Select 2
|[1]     |1         |Port 3 Mode Select 2
|[2]     |2         |Port 3 Mode Select 2
|[3]     |3         |Port 3 Mode Select 2
*/
__sfr __no_init volatile unsigned char P3M2 @ 0xC3;

/**
@addtogroup SFR_PAGE1_P3M2_MACRO Bit Macro Functions
Bit Macro Functions of P3M2
@{ */

#define set_P3M2_0               SFRS = 1; P3M2 |= 0x01 /*!<Set P3M2.0                     */
#define set_P3M2_1               SFRS = 1; P3M2 |= 0x02 /*!<Set P3M2.1                     */
#define set_P3M2_2               SFRS = 1; P3M2 |= 0x04 /*!<Set P3M2.2                     */
#define set_P3M2_3               SFRS = 1; P3M2 |= 0x08 /*!<Set P3M2.3                     */

#define clr_P3M2_0               SFRS = 1; P3M2 &=~0x01 /*!<Clear P3M2.0                   */
#define clr_P3M2_1               SFRS = 1; P3M2 &=~0x02 /*!<Clear P3M2.1                   */
#define clr_P3M2_2               SFRS = 1; P3M2 &=~0x04 /*!<Clear P3M2.2                   */
#define clr_P3M2_3               SFRS = 1; P3M2 &=~0x08 /*!<Clear P3M2.3                   */

/**@} end of SFR_PAGE1_P3M2_MACRO group */
/**@} end of SFR_PAGE1_P3M2 group */

/**
   @addtogroup SFR_PAGE1_PWM0C4H PWM0C4H
   Special Function Register PWM0C4H
   @{ */

/**
@var PWM0C4H
Address: C4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C4H @ 0xC4;

/**
@addtogroup SFR_PAGE1_PWM0C4H_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C4H
@{ */

#define set_PWM0C4H_PWM8Cx       SFRS = 1; PWM0C4H |= 0x01 /*!<Set PWM0C4H.PWM8Cx             */
#define set_PWM0C4H_PWM9Cx       SFRS = 1; PWM0C4H |= 0x02 /*!<Set PWM0C4H.PWM9Cx             */
#define set_PWM0C4H_PWM10Cx      SFRS = 1; PWM0C4H |= 0x04 /*!<Set PWM0C4H.PWM10Cx            */
#define set_PWM0C4H_PWM11Cx      SFRS = 1; PWM0C4H |= 0x08 /*!<Set PWM0C4H.PWM11Cx            */
#define set_PWM0C4H_PWM12Cx      SFRS = 1; PWM0C4H |= 0x10 /*!<Set PWM0C4H.PWM12Cx            */
#define set_PWM0C4H_PWM13Cx      SFRS = 1; PWM0C4H |= 0x20 /*!<Set PWM0C4H.PWM13Cx            */
#define set_PWM0C4H_PWM14Cx      SFRS = 1; PWM0C4H |= 0x40 /*!<Set PWM0C4H.PWM14Cx            */
#define set_PWM0C4H_PWM15Cx      SFRS = 1; PWM0C4H |= 0x80 /*!<Set PWM0C4H.PWM15Cx            */

#define clr_PWM0C4H_PWM8Cx       SFRS = 1; PWM0C4H &=~0x01 /*!<Clear PWM0C4H.PWM8Cx           */
#define clr_PWM0C4H_PWM9Cx       SFRS = 1; PWM0C4H &=~0x02 /*!<Clear PWM0C4H.PWM9Cx           */
#define clr_PWM0C4H_PWM10Cx      SFRS = 1; PWM0C4H &=~0x04 /*!<Clear PWM0C4H.PWM10Cx          */
#define clr_PWM0C4H_PWM11Cx      SFRS = 1; PWM0C4H &=~0x08 /*!<Clear PWM0C4H.PWM11Cx          */
#define clr_PWM0C4H_PWM12Cx      SFRS = 1; PWM0C4H &=~0x10 /*!<Clear PWM0C4H.PWM12Cx          */
#define clr_PWM0C4H_PWM13Cx      SFRS = 1; PWM0C4H &=~0x20 /*!<Clear PWM0C4H.PWM13Cx          */
#define clr_PWM0C4H_PWM14Cx      SFRS = 1; PWM0C4H &=~0x40 /*!<Clear PWM0C4H.PWM14Cx          */
#define clr_PWM0C4H_PWM15Cx      SFRS = 1; PWM0C4H &=~0x80 /*!<Clear PWM0C4H.PWM15Cx          */

/**@} end of SFR_PAGE1_PWM0C4H_MACRO group */
/**@} end of SFR_PAGE1_PWM0C4H group */

/**
   @addtogroup SFR_PAGE1_PWM0C5H PWM0C5H
   Special Function Register PWM0C5H
   @{ */

/**
@var PWM0C5H
Address: C5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C5H @ 0xC5;

/**
@addtogroup SFR_PAGE1_PWM0C5H_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C5H
@{ */

#define set_PWM0C5H_PWM8Cx       SFRS = 1; PWM0C5H |= 0x01 /*!<Set PWM0C5H.PWM8Cx             */
#define set_PWM0C5H_PWM9Cx       SFRS = 1; PWM0C5H |= 0x02 /*!<Set PWM0C5H.PWM9Cx             */
#define set_PWM0C5H_PWM10Cx      SFRS = 1; PWM0C5H |= 0x04 /*!<Set PWM0C5H.PWM10Cx            */
#define set_PWM0C5H_PWM11Cx      SFRS = 1; PWM0C5H |= 0x08 /*!<Set PWM0C5H.PWM11Cx            */
#define set_PWM0C5H_PWM12Cx      SFRS = 1; PWM0C5H |= 0x10 /*!<Set PWM0C5H.PWM12Cx            */
#define set_PWM0C5H_PWM13Cx      SFRS = 1; PWM0C5H |= 0x20 /*!<Set PWM0C5H.PWM13Cx            */
#define set_PWM0C5H_PWM14Cx      SFRS = 1; PWM0C5H |= 0x40 /*!<Set PWM0C5H.PWM14Cx            */
#define set_PWM0C5H_PWM15Cx      SFRS = 1; PWM0C5H |= 0x80 /*!<Set PWM0C5H.PWM15Cx            */

#define clr_PWM0C5H_PWM8Cx       SFRS = 1; PWM0C5H &=~0x01 /*!<Clear PWM0C5H.PWM8Cx           */
#define clr_PWM0C5H_PWM9Cx       SFRS = 1; PWM0C5H &=~0x02 /*!<Clear PWM0C5H.PWM9Cx           */
#define clr_PWM0C5H_PWM10Cx      SFRS = 1; PWM0C5H &=~0x04 /*!<Clear PWM0C5H.PWM10Cx          */
#define clr_PWM0C5H_PWM11Cx      SFRS = 1; PWM0C5H &=~0x08 /*!<Clear PWM0C5H.PWM11Cx          */
#define clr_PWM0C5H_PWM12Cx      SFRS = 1; PWM0C5H &=~0x10 /*!<Clear PWM0C5H.PWM12Cx          */
#define clr_PWM0C5H_PWM13Cx      SFRS = 1; PWM0C5H &=~0x20 /*!<Clear PWM0C5H.PWM13Cx          */
#define clr_PWM0C5H_PWM14Cx      SFRS = 1; PWM0C5H &=~0x40 /*!<Clear PWM0C5H.PWM14Cx          */
#define clr_PWM0C5H_PWM15Cx      SFRS = 1; PWM0C5H &=~0x80 /*!<Clear PWM0C5H.PWM15Cx          */

/**@} end of SFR_PAGE1_PWM0C5H_MACRO group */
/**@} end of SFR_PAGE1_PWM0C5H group */

/**
   @addtogroup SFR_PAGE1_PORDIS PORDIS
   Special Function Register PORDIS
   @{ */

/**
@var PORDIS
Address: C6H, SFR Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |PORDIS[7:0]|POR Disable
|        |          |To first writing 5AH to the PORDIS and immediately followed by a
|        |          |writing of A5H will disable all of PORs (POR50 and POR15).
*/
__sfr __no_init volatile unsigned char PORDIS @ 0xC6;

/**@} end of SFR_PAGE1_PORDIS group */

/**
   @addtogroup SFR_PAGE1_TA TA
   Special Function Register @ref TA
   @{ */
/**@} end of SFR_PAGE1_TA group */

/**
   @addtogroup SFR_PAGE1_T2CON T2CON
   Special Function Register @ref T2CON
   @{ */
/**@} end of SFR_PAGE1_T2CON group */

/**
   @addtogroup SFR_PAGE1_AUXR1 AUXR1
   Special Function Register AUXR1
   @{ */

/**
@var AUXR1
Address: C9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |UART0PX   |Serial Port 0 RX/TX Pin Exchange
|        |          |0 = Assign UART0 RXD to multiple I/O pin RXD
|        |          |UART0 TXD to multiple I/O pin TXD
|        |          |1 = Assign UART0 RXD to multiple I/O pin TXD
|        |          |UART0 TXD to multiple I/O pin RXD
|        |          |Note:
|        |          |that Pin direction is controlled by I/O type of relative pin.
|        |          |RXD/TXD will exchange immediately once setting or clearing this bit.
|        |          |User should take care of not exchanging pins during transmission or
|        |          |receiving. Or it may cause unpredictable situation and no warning
|        |          |alarms.
|[1]     |UART1PX   |Serial Port 1 RX/TX Pin Exchange
|        |          |0 = Assign UART1 RXD to multiple I/O pin RXD
|        |          |UART1 TXD to multiple I/O pin TXD
|        |          |1 = Assign UART1 RXD to multiple I/O pin TXD
|        |          |UART1 TXD to multiple I/O pin RXD
|        |          |Note:
|        |          |that Pin direction is controlled by I/O type of relative pin.
|        |          |RXD/TXD will exchange immediately once setting or clearing this bit.
|        |          |User should take care of not exchanging pins during transmission or
|        |          |receiving. Or it may cause unpredictable situation and no warning
|        |          |alarms.
|[2]     |UART2PX   |Serial Port 2 RX (SMC0 DATA) /TX (SMC0 CLK) Pin Exchange
|        |          |0 = Assign UART2 RXD (SMC0 DATA) to multiple I/O pin RXD
|        |          |UART2 TXD (SMC CLK) to multiple I/O pin TXD
|        |          |1 = Assign UART2 RXD (SMC0 DATA) to multiple I/O pin TXD
|        |          |UART2 TXD (SMC CLK) to multiple I/O pin RXD
|        |          |Note : that Pin direction is controlled by I/O type of relative pin.
|        |          |RXD/TXD will exchange immediately once setting or clearing this bit.
|        |          |User should take care of not exchanging pins during transmission or
|        |          |receiving. Or it may cause unpredictable situation and no warning
|        |          |alarms.
|[7:3]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char AUXR1 @ 0xC9;

/**
@addtogroup SFR_PAGE1_AUXR1_MACRO Bit Macro Functions
Bit Macro Functions of AUXR1
@{ */

#define set_AUXR1_UART0PX        SFRS = 1; AUXR1 |= 0x01 /*!<Set AUXR1.UART0PX              */
#define set_AUXR1_UART1PX        SFRS = 1; AUXR1 |= 0x02 /*!<Set AUXR1.UART1PX              */
#define set_AUXR1_UART2PX        SFRS = 1; AUXR1 |= 0x04 /*!<Set AUXR1.UART2PX              */

#define clr_AUXR1_UART0PX        SFRS = 1; AUXR1 &=~0x01 /*!<Clear AUXR1.UART0PX            */
#define clr_AUXR1_UART1PX        SFRS = 1; AUXR1 &=~0x02 /*!<Clear AUXR1.UART1PX            */
#define clr_AUXR1_UART2PX        SFRS = 1; AUXR1 &=~0x04 /*!<Clear AUXR1.UART2PX            */

/**@} end of SFR_PAGE1_AUXR1_MACRO group */
/**@} end of SFR_PAGE1_AUXR1 group */

/**
   @addtogroup SFR_PAGE1_RCMP2L RCMP2L
   Special Function Register RCMP2L
   @{ */

/**
@var RCMP2L
Address: CAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RCMP2[7:0]|Timer 2 Reload/Compare Low Byte
|        |          |This register stores the low byte of compare value when Timer 2 is
|        |          |configured in compare mode. Also it holds the low byte of the reload
|        |          |value in auto-reload mode.
*/
__sfr __no_init volatile unsigned char RCMP2L @ 0xCA;

/**@} end of SFR_PAGE1_RCMP2L group */

/**
   @addtogroup SFR_PAGE1_RCMP2H RCMP2H
   Special Function Register RCMP2H
   @{ */

/**
@var RCMP2H
Address: CBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RCMP2[15:8]|Timer 2 Reload/Compare High Byte
|        |          |This register stores the high byte of compare value when Timer 2 is
|        |          |configured in compare mode. Also it holds the high byte of the reload
|        |          |value in auto-reload mode.
*/
__sfr __no_init volatile unsigned char RCMP2H @ 0xCB;

/**@} end of SFR_PAGE1_RCMP2H group */

/**
   @addtogroup SFR_PAGE1_PWM0C4L PWM0C4L
   Special Function Register PWM0C4L
   @{ */

/**
@var PWM0C4L
Address: CCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C4L @ 0xCC;

/**
@addtogroup SFR_PAGE1_PWM0C4L_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C4L
@{ */

#define set_PWM0C4L_PWM0Cx       SFRS = 1; PWM0C4L |= 0x01 /*!<Set PWM0C4L.PWM0Cx             */
#define set_PWM0C4L_PWM1Cx       SFRS = 1; PWM0C4L |= 0x02 /*!<Set PWM0C4L.PWM1Cx             */
#define set_PWM0C4L_PWM2Cx       SFRS = 1; PWM0C4L |= 0x04 /*!<Set PWM0C4L.PWM2Cx             */
#define set_PWM0C4L_PWM3Cx       SFRS = 1; PWM0C4L |= 0x08 /*!<Set PWM0C4L.PWM3Cx             */
#define set_PWM0C4L_PWM4Cx       SFRS = 1; PWM0C4L |= 0x10 /*!<Set PWM0C4L.PWM4Cx             */
#define set_PWM0C4L_PWM5Cx       SFRS = 1; PWM0C4L |= 0x20 /*!<Set PWM0C4L.PWM5Cx             */
#define set_PWM0C4L_PWM6Cx       SFRS = 1; PWM0C4L |= 0x40 /*!<Set PWM0C4L.PWM6Cx             */
#define set_PWM0C4L_PWM7Cx       SFRS = 1; PWM0C4L |= 0x80 /*!<Set PWM0C4L.PWM7Cx             */

#define clr_PWM0C4L_PWM0Cx       SFRS = 1; PWM0C4L &=~0x01 /*!<Clear PWM0C4L.PWM0Cx           */
#define clr_PWM0C4L_PWM1Cx       SFRS = 1; PWM0C4L &=~0x02 /*!<Clear PWM0C4L.PWM1Cx           */
#define clr_PWM0C4L_PWM2Cx       SFRS = 1; PWM0C4L &=~0x04 /*!<Clear PWM0C4L.PWM2Cx           */
#define clr_PWM0C4L_PWM3Cx       SFRS = 1; PWM0C4L &=~0x08 /*!<Clear PWM0C4L.PWM3Cx           */
#define clr_PWM0C4L_PWM4Cx       SFRS = 1; PWM0C4L &=~0x10 /*!<Clear PWM0C4L.PWM4Cx           */
#define clr_PWM0C4L_PWM5Cx       SFRS = 1; PWM0C4L &=~0x20 /*!<Clear PWM0C4L.PWM5Cx           */
#define clr_PWM0C4L_PWM6Cx       SFRS = 1; PWM0C4L &=~0x40 /*!<Clear PWM0C4L.PWM6Cx           */
#define clr_PWM0C4L_PWM7Cx       SFRS = 1; PWM0C4L &=~0x80 /*!<Clear PWM0C4L.PWM7Cx           */

/**@} end of SFR_PAGE1_PWM0C4L_MACRO group */
/**@} end of SFR_PAGE1_PWM0C4L group */

/**
   @addtogroup SFR_PAGE1_PWM0C5L PWM0C5L
   Special Function Register PWM0C5L
   @{ */

/**
@var PWM0C5L
Address: CDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C5L @ 0xCD;

/**
@addtogroup SFR_PAGE1_PWM0C5L_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C5L
@{ */

#define set_PWM0C5L_PWM0Cx       SFRS = 1; PWM0C5L |= 0x01 /*!<Set PWM0C5L.PWM0Cx             */
#define set_PWM0C5L_PWM1Cx       SFRS = 1; PWM0C5L |= 0x02 /*!<Set PWM0C5L.PWM1Cx             */
#define set_PWM0C5L_PWM2Cx       SFRS = 1; PWM0C5L |= 0x04 /*!<Set PWM0C5L.PWM2Cx             */
#define set_PWM0C5L_PWM3Cx       SFRS = 1; PWM0C5L |= 0x08 /*!<Set PWM0C5L.PWM3Cx             */
#define set_PWM0C5L_PWM4Cx       SFRS = 1; PWM0C5L |= 0x10 /*!<Set PWM0C5L.PWM4Cx             */
#define set_PWM0C5L_PWM5Cx       SFRS = 1; PWM0C5L |= 0x20 /*!<Set PWM0C5L.PWM5Cx             */
#define set_PWM0C5L_PWM6Cx       SFRS = 1; PWM0C5L |= 0x40 /*!<Set PWM0C5L.PWM6Cx             */
#define set_PWM0C5L_PWM7Cx       SFRS = 1; PWM0C5L |= 0x80 /*!<Set PWM0C5L.PWM7Cx             */

#define clr_PWM0C5L_PWM0Cx       SFRS = 1; PWM0C5L &=~0x01 /*!<Clear PWM0C5L.PWM0Cx           */
#define clr_PWM0C5L_PWM1Cx       SFRS = 1; PWM0C5L &=~0x02 /*!<Clear PWM0C5L.PWM1Cx           */
#define clr_PWM0C5L_PWM2Cx       SFRS = 1; PWM0C5L &=~0x04 /*!<Clear PWM0C5L.PWM2Cx           */
#define clr_PWM0C5L_PWM3Cx       SFRS = 1; PWM0C5L &=~0x08 /*!<Clear PWM0C5L.PWM3Cx           */
#define clr_PWM0C5L_PWM4Cx       SFRS = 1; PWM0C5L &=~0x10 /*!<Clear PWM0C5L.PWM4Cx           */
#define clr_PWM0C5L_PWM5Cx       SFRS = 1; PWM0C5L &=~0x20 /*!<Clear PWM0C5L.PWM5Cx           */
#define clr_PWM0C5L_PWM6Cx       SFRS = 1; PWM0C5L &=~0x40 /*!<Clear PWM0C5L.PWM6Cx           */
#define clr_PWM0C5L_PWM7Cx       SFRS = 1; PWM0C5L &=~0x80 /*!<Clear PWM0C5L.PWM7Cx           */

/**@} end of SFR_PAGE1_PWM0C5L_MACRO group */
/**@} end of SFR_PAGE1_PWM0C5L group */

/**
   @addtogroup SFR_PAGE1_PSW PSW
   Special Function Register @ref PSW
   @{ */
/**@} end of SFR_PAGE1_PSW group */

/**
   @addtogroup SFR_PAGE1_PWM0PH PWM0PH
   Special Function Register PWM0PH
   @{ */

/**
@var PWM0PH
Address: D1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8P     |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[1]     |PWM9P     |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[2]     |PWM10P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[3]     |PWM11P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[4]     |PWM12P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[5]     |PWM13P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[6]     |PWM14P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[7]     |PWM15P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
*/
__sfr __no_init volatile unsigned char PWM0PH @ 0xD1;

/**
@addtogroup SFR_PAGE1_PWM0PH_MACRO Bit Macro Functions
Bit Macro Functions of PWM0PH
@{ */

#define set_PWM0PH_PWM8P         SFRS = 1; PWM0PH |= 0x01 /*!<Set PWM0PH.PWM8P               */
#define set_PWM0PH_PWM9P         SFRS = 1; PWM0PH |= 0x02 /*!<Set PWM0PH.PWM9P               */
#define set_PWM0PH_PWM10P        SFRS = 1; PWM0PH |= 0x04 /*!<Set PWM0PH.PWM10P              */
#define set_PWM0PH_PWM11P        SFRS = 1; PWM0PH |= 0x08 /*!<Set PWM0PH.PWM11P              */
#define set_PWM0PH_PWM12P        SFRS = 1; PWM0PH |= 0x10 /*!<Set PWM0PH.PWM12P              */
#define set_PWM0PH_PWM13P        SFRS = 1; PWM0PH |= 0x20 /*!<Set PWM0PH.PWM13P              */
#define set_PWM0PH_PWM14P        SFRS = 1; PWM0PH |= 0x40 /*!<Set PWM0PH.PWM14P              */
#define set_PWM0PH_PWM15P        SFRS = 1; PWM0PH |= 0x80 /*!<Set PWM0PH.PWM15P              */

#define clr_PWM0PH_PWM8P         SFRS = 1; PWM0PH &=~0x01 /*!<Clear PWM0PH.PWM8P             */
#define clr_PWM0PH_PWM9P         SFRS = 1; PWM0PH &=~0x02 /*!<Clear PWM0PH.PWM9P             */
#define clr_PWM0PH_PWM10P        SFRS = 1; PWM0PH &=~0x04 /*!<Clear PWM0PH.PWM10P            */
#define clr_PWM0PH_PWM11P        SFRS = 1; PWM0PH &=~0x08 /*!<Clear PWM0PH.PWM11P            */
#define clr_PWM0PH_PWM12P        SFRS = 1; PWM0PH &=~0x10 /*!<Clear PWM0PH.PWM12P            */
#define clr_PWM0PH_PWM13P        SFRS = 1; PWM0PH &=~0x20 /*!<Clear PWM0PH.PWM13P            */
#define clr_PWM0PH_PWM14P        SFRS = 1; PWM0PH &=~0x40 /*!<Clear PWM0PH.PWM14P            */
#define clr_PWM0PH_PWM15P        SFRS = 1; PWM0PH &=~0x80 /*!<Clear PWM0PH.PWM15P            */

/**@} end of SFR_PAGE1_PWM0PH_MACRO group */
/**@} end of SFR_PAGE1_PWM0PH group */

/**
   @addtogroup SFR_PAGE1_PWM0C0H PWM0C0H
   Special Function Register PWM0C0H
   @{ */

/**
@var PWM0C0H
Address: D2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C0H @ 0xD2;

/**
@addtogroup SFR_PAGE1_PWM0C0H_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C0H
@{ */

#define set_PWM0C0H_PWM8Cx       SFRS = 1; PWM0C0H |= 0x01 /*!<Set PWM0C0H.PWM8Cx             */
#define set_PWM0C0H_PWM9Cx       SFRS = 1; PWM0C0H |= 0x02 /*!<Set PWM0C0H.PWM9Cx             */
#define set_PWM0C0H_PWM10Cx      SFRS = 1; PWM0C0H |= 0x04 /*!<Set PWM0C0H.PWM10Cx            */
#define set_PWM0C0H_PWM11Cx      SFRS = 1; PWM0C0H |= 0x08 /*!<Set PWM0C0H.PWM11Cx            */
#define set_PWM0C0H_PWM12Cx      SFRS = 1; PWM0C0H |= 0x10 /*!<Set PWM0C0H.PWM12Cx            */
#define set_PWM0C0H_PWM13Cx      SFRS = 1; PWM0C0H |= 0x20 /*!<Set PWM0C0H.PWM13Cx            */
#define set_PWM0C0H_PWM14Cx      SFRS = 1; PWM0C0H |= 0x40 /*!<Set PWM0C0H.PWM14Cx            */
#define set_PWM0C0H_PWM15Cx      SFRS = 1; PWM0C0H |= 0x80 /*!<Set PWM0C0H.PWM15Cx            */

#define clr_PWM0C0H_PWM8Cx       SFRS = 1; PWM0C0H &=~0x01 /*!<Clear PWM0C0H.PWM8Cx           */
#define clr_PWM0C0H_PWM9Cx       SFRS = 1; PWM0C0H &=~0x02 /*!<Clear PWM0C0H.PWM9Cx           */
#define clr_PWM0C0H_PWM10Cx      SFRS = 1; PWM0C0H &=~0x04 /*!<Clear PWM0C0H.PWM10Cx          */
#define clr_PWM0C0H_PWM11Cx      SFRS = 1; PWM0C0H &=~0x08 /*!<Clear PWM0C0H.PWM11Cx          */
#define clr_PWM0C0H_PWM12Cx      SFRS = 1; PWM0C0H &=~0x10 /*!<Clear PWM0C0H.PWM12Cx          */
#define clr_PWM0C0H_PWM13Cx      SFRS = 1; PWM0C0H &=~0x20 /*!<Clear PWM0C0H.PWM13Cx          */
#define clr_PWM0C0H_PWM14Cx      SFRS = 1; PWM0C0H &=~0x40 /*!<Clear PWM0C0H.PWM14Cx          */
#define clr_PWM0C0H_PWM15Cx      SFRS = 1; PWM0C0H &=~0x80 /*!<Clear PWM0C0H.PWM15Cx          */

/**@} end of SFR_PAGE1_PWM0C0H_MACRO group */
/**@} end of SFR_PAGE1_PWM0C0H group */

/**
   @addtogroup SFR_PAGE1_PWM0C1H PWM0C1H
   Special Function Register PWM0C1H
   @{ */

/**
@var PWM0C1H
Address: D3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C1H @ 0xD3;

/**
@addtogroup SFR_PAGE1_PWM0C1H_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C1H
@{ */

#define set_PWM0C1H_PWM8Cx       SFRS = 1; PWM0C1H |= 0x01 /*!<Set PWM0C1H.PWM8Cx             */
#define set_PWM0C1H_PWM9Cx       SFRS = 1; PWM0C1H |= 0x02 /*!<Set PWM0C1H.PWM9Cx             */
#define set_PWM0C1H_PWM10Cx      SFRS = 1; PWM0C1H |= 0x04 /*!<Set PWM0C1H.PWM10Cx            */
#define set_PWM0C1H_PWM11Cx      SFRS = 1; PWM0C1H |= 0x08 /*!<Set PWM0C1H.PWM11Cx            */
#define set_PWM0C1H_PWM12Cx      SFRS = 1; PWM0C1H |= 0x10 /*!<Set PWM0C1H.PWM12Cx            */
#define set_PWM0C1H_PWM13Cx      SFRS = 1; PWM0C1H |= 0x20 /*!<Set PWM0C1H.PWM13Cx            */
#define set_PWM0C1H_PWM14Cx      SFRS = 1; PWM0C1H |= 0x40 /*!<Set PWM0C1H.PWM14Cx            */
#define set_PWM0C1H_PWM15Cx      SFRS = 1; PWM0C1H |= 0x80 /*!<Set PWM0C1H.PWM15Cx            */

#define clr_PWM0C1H_PWM8Cx       SFRS = 1; PWM0C1H &=~0x01 /*!<Clear PWM0C1H.PWM8Cx           */
#define clr_PWM0C1H_PWM9Cx       SFRS = 1; PWM0C1H &=~0x02 /*!<Clear PWM0C1H.PWM9Cx           */
#define clr_PWM0C1H_PWM10Cx      SFRS = 1; PWM0C1H &=~0x04 /*!<Clear PWM0C1H.PWM10Cx          */
#define clr_PWM0C1H_PWM11Cx      SFRS = 1; PWM0C1H &=~0x08 /*!<Clear PWM0C1H.PWM11Cx          */
#define clr_PWM0C1H_PWM12Cx      SFRS = 1; PWM0C1H &=~0x10 /*!<Clear PWM0C1H.PWM12Cx          */
#define clr_PWM0C1H_PWM13Cx      SFRS = 1; PWM0C1H &=~0x20 /*!<Clear PWM0C1H.PWM13Cx          */
#define clr_PWM0C1H_PWM14Cx      SFRS = 1; PWM0C1H &=~0x40 /*!<Clear PWM0C1H.PWM14Cx          */
#define clr_PWM0C1H_PWM15Cx      SFRS = 1; PWM0C1H &=~0x80 /*!<Clear PWM0C1H.PWM15Cx          */

/**@} end of SFR_PAGE1_PWM0C1H_MACRO group */
/**@} end of SFR_PAGE1_PWM0C1H group */

/**
   @addtogroup SFR_PAGE1_PWM0C2H PWM0C2H
   Special Function Register PWM0C2H
   @{ */

/**
@var PWM0C2H
Address: D4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C2H @ 0xD4;

/**
@addtogroup SFR_PAGE1_PWM0C2H_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C2H
@{ */

#define set_PWM0C2H_PWM8Cx       SFRS = 1; PWM0C2H |= 0x01 /*!<Set PWM0C2H.PWM8Cx             */
#define set_PWM0C2H_PWM9Cx       SFRS = 1; PWM0C2H |= 0x02 /*!<Set PWM0C2H.PWM9Cx             */
#define set_PWM0C2H_PWM10Cx      SFRS = 1; PWM0C2H |= 0x04 /*!<Set PWM0C2H.PWM10Cx            */
#define set_PWM0C2H_PWM11Cx      SFRS = 1; PWM0C2H |= 0x08 /*!<Set PWM0C2H.PWM11Cx            */
#define set_PWM0C2H_PWM12Cx      SFRS = 1; PWM0C2H |= 0x10 /*!<Set PWM0C2H.PWM12Cx            */
#define set_PWM0C2H_PWM13Cx      SFRS = 1; PWM0C2H |= 0x20 /*!<Set PWM0C2H.PWM13Cx            */
#define set_PWM0C2H_PWM14Cx      SFRS = 1; PWM0C2H |= 0x40 /*!<Set PWM0C2H.PWM14Cx            */
#define set_PWM0C2H_PWM15Cx      SFRS = 1; PWM0C2H |= 0x80 /*!<Set PWM0C2H.PWM15Cx            */

#define clr_PWM0C2H_PWM8Cx       SFRS = 1; PWM0C2H &=~0x01 /*!<Clear PWM0C2H.PWM8Cx           */
#define clr_PWM0C2H_PWM9Cx       SFRS = 1; PWM0C2H &=~0x02 /*!<Clear PWM0C2H.PWM9Cx           */
#define clr_PWM0C2H_PWM10Cx      SFRS = 1; PWM0C2H &=~0x04 /*!<Clear PWM0C2H.PWM10Cx          */
#define clr_PWM0C2H_PWM11Cx      SFRS = 1; PWM0C2H &=~0x08 /*!<Clear PWM0C2H.PWM11Cx          */
#define clr_PWM0C2H_PWM12Cx      SFRS = 1; PWM0C2H &=~0x10 /*!<Clear PWM0C2H.PWM12Cx          */
#define clr_PWM0C2H_PWM13Cx      SFRS = 1; PWM0C2H &=~0x20 /*!<Clear PWM0C2H.PWM13Cx          */
#define clr_PWM0C2H_PWM14Cx      SFRS = 1; PWM0C2H &=~0x40 /*!<Clear PWM0C2H.PWM14Cx          */
#define clr_PWM0C2H_PWM15Cx      SFRS = 1; PWM0C2H &=~0x80 /*!<Clear PWM0C2H.PWM15Cx          */

/**@} end of SFR_PAGE1_PWM0C2H_MACRO group */
/**@} end of SFR_PAGE1_PWM0C2H group */

/**
   @addtogroup SFR_PAGE1_PWM0C3H PWM0C3H
   Special Function Register PWM0C3H
   @{ */

/**
@var PWM0C3H
Address: D5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C3H @ 0xD5;

/**
@addtogroup SFR_PAGE1_PWM0C3H_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C3H
@{ */

#define set_PWM0C3H_PWM8Cx       SFRS = 1; PWM0C3H |= 0x01 /*!<Set PWM0C3H.PWM8Cx             */
#define set_PWM0C3H_PWM9Cx       SFRS = 1; PWM0C3H |= 0x02 /*!<Set PWM0C3H.PWM9Cx             */
#define set_PWM0C3H_PWM10Cx      SFRS = 1; PWM0C3H |= 0x04 /*!<Set PWM0C3H.PWM10Cx            */
#define set_PWM0C3H_PWM11Cx      SFRS = 1; PWM0C3H |= 0x08 /*!<Set PWM0C3H.PWM11Cx            */
#define set_PWM0C3H_PWM12Cx      SFRS = 1; PWM0C3H |= 0x10 /*!<Set PWM0C3H.PWM12Cx            */
#define set_PWM0C3H_PWM13Cx      SFRS = 1; PWM0C3H |= 0x20 /*!<Set PWM0C3H.PWM13Cx            */
#define set_PWM0C3H_PWM14Cx      SFRS = 1; PWM0C3H |= 0x40 /*!<Set PWM0C3H.PWM14Cx            */
#define set_PWM0C3H_PWM15Cx      SFRS = 1; PWM0C3H |= 0x80 /*!<Set PWM0C3H.PWM15Cx            */

#define clr_PWM0C3H_PWM8Cx       SFRS = 1; PWM0C3H &=~0x01 /*!<Clear PWM0C3H.PWM8Cx           */
#define clr_PWM0C3H_PWM9Cx       SFRS = 1; PWM0C3H &=~0x02 /*!<Clear PWM0C3H.PWM9Cx           */
#define clr_PWM0C3H_PWM10Cx      SFRS = 1; PWM0C3H &=~0x04 /*!<Clear PWM0C3H.PWM10Cx          */
#define clr_PWM0C3H_PWM11Cx      SFRS = 1; PWM0C3H &=~0x08 /*!<Clear PWM0C3H.PWM11Cx          */
#define clr_PWM0C3H_PWM12Cx      SFRS = 1; PWM0C3H &=~0x10 /*!<Clear PWM0C3H.PWM12Cx          */
#define clr_PWM0C3H_PWM13Cx      SFRS = 1; PWM0C3H &=~0x20 /*!<Clear PWM0C3H.PWM13Cx          */
#define clr_PWM0C3H_PWM14Cx      SFRS = 1; PWM0C3H &=~0x40 /*!<Clear PWM0C3H.PWM14Cx          */
#define clr_PWM0C3H_PWM15Cx      SFRS = 1; PWM0C3H &=~0x80 /*!<Clear PWM0C3H.PWM15Cx          */

/**@} end of SFR_PAGE1_PWM0C3H_MACRO group */
/**@} end of SFR_PAGE1_PWM0C3H group */

/**
   @addtogroup SFR_PAGE1_PWM0NP PWM0NP
   Special Function Register PWM0NP
   @{ */

/**
@var PWM0NP
Address: D6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PNP0      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[1]     |PNP1      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[2]     |PNP2      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[3]     |PNP3      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[4]     |PNP4      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[5]     |PNP5      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
*/
__sfr __no_init volatile unsigned char PWM0NP @ 0xD6;

/**
@addtogroup SFR_PAGE1_PWM0NP_MACRO Bit Macro Functions
Bit Macro Functions of PWM0NP
@{ */

#define set_PWM0NP_PNP0          SFRS = 1; PWM0NP |= 0x01 /*!<Set PWM0NP.PNP0                */
#define set_PWM0NP_PNP1          SFRS = 1; PWM0NP |= 0x02 /*!<Set PWM0NP.PNP1                */
#define set_PWM0NP_PNP2          SFRS = 1; PWM0NP |= 0x04 /*!<Set PWM0NP.PNP2                */
#define set_PWM0NP_PNP3          SFRS = 1; PWM0NP |= 0x08 /*!<Set PWM0NP.PNP3                */
#define set_PWM0NP_PNP4          SFRS = 1; PWM0NP |= 0x10 /*!<Set PWM0NP.PNP4                */
#define set_PWM0NP_PNP5          SFRS = 1; PWM0NP |= 0x20 /*!<Set PWM0NP.PNP5                */

#define clr_PWM0NP_PNP0          SFRS = 1; PWM0NP &=~0x01 /*!<Clear PWM0NP.PNP0              */
#define clr_PWM0NP_PNP1          SFRS = 1; PWM0NP &=~0x02 /*!<Clear PWM0NP.PNP1              */
#define clr_PWM0NP_PNP2          SFRS = 1; PWM0NP &=~0x04 /*!<Clear PWM0NP.PNP2              */
#define clr_PWM0NP_PNP3          SFRS = 1; PWM0NP &=~0x08 /*!<Clear PWM0NP.PNP3              */
#define clr_PWM0NP_PNP4          SFRS = 1; PWM0NP &=~0x10 /*!<Clear PWM0NP.PNP4              */
#define clr_PWM0NP_PNP5          SFRS = 1; PWM0NP &=~0x20 /*!<Clear PWM0NP.PNP5              */

/**@} end of SFR_PAGE1_PWM0NP_MACRO group */
/**@} end of SFR_PAGE1_PWM0NP group */

/**
   @addtogroup SFR_PAGE1_PWM0FBD PWM0FBD
   Special Function Register PWM0FBD
   @{ */

/**
@var PWM0FBD
Address: D7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[5:0]   |FBDn      |PWMn Fault Brake Data
|        |          |0 = PWMn signal is overwritten by 0 once Fault Brake asserted.
|        |          |1 = PWMn signal is overwritten by 1 once Fault Brake asserted.
|[6]     |FBINLS    |PWM_BRAKE Pin Input Level Selection
|        |          |0 = Falling edge.
|        |          |1 = Rising edge.
|[7]     |FBF       |Fault Brake Flag
|        |          |This flag is set when FBINEN is set as 1 and FB pin detects an edge,
|        |          |which matches FBINLS (PWM0FBD.6) selection. This bit is cleared by
|        |          |software. After FBF is cleared, Fault Brake data output will not be
|        |          |released until PWM0RUN (PWM0CON0.7) is set.
*/
__sfr __no_init volatile unsigned char PWM0FBD @ 0xD7;

/**
@addtogroup SFR_PAGE1_PWM0FBD_MACRO Bit Macro Functions
Bit Macro Functions of PWM0FBD
@{ */


#define set_PWM0FBD_FBINLS       SFRS = 1; PWM0FBD |= 0x40 /*!<Set PWM0FBD.FBINLS             */
#define set_PWM0FBD_FBF          SFRS = 1; PWM0FBD |= 0x80 /*!<Set PWM0FBD.FBF                */


#define clr_PWM0FBD_FBINLS       SFRS = 1; PWM0FBD &=~0x40 /*!<Clear PWM0FBD.FBINLS           */
#define clr_PWM0FBD_FBF          SFRS = 1; PWM0FBD &=~0x80 /*!<Clear PWM0FBD.FBF              */

/**@} end of SFR_PAGE1_PWM0FBD_MACRO group */
/**@} end of SFR_PAGE1_PWM0FBD group */

/**
   @addtogroup SFR_PAGE1_P4 P4
   Special Function Register @ref P4
   @{ */
/**@} end of SFR_PAGE1_P4 group */

/**
   @addtogroup SFR_PAGE1_PWM0PL PWM0PL
   Special Function Register PWM0PL
   @{ */

/**
@var PWM0PL
Address: D9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[1]     |PWM1P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[2]     |PWM2P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[3]     |PWM3P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[4]     |PWM4P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[5]     |PWM5P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[6]     |PWM6P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[7]     |PWM7P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
*/
__sfr __no_init volatile unsigned char PWM0PL @ 0xD9;

/**
@addtogroup SFR_PAGE1_PWM0PL_MACRO Bit Macro Functions
Bit Macro Functions of PWM0PL
@{ */

#define set_PWM0PL_PWM0P         SFRS = 1; PWM0PL |= 0x01 /*!<Set PWM0PL.PWM0P               */
#define set_PWM0PL_PWM1P         SFRS = 1; PWM0PL |= 0x02 /*!<Set PWM0PL.PWM1P               */
#define set_PWM0PL_PWM2P         SFRS = 1; PWM0PL |= 0x04 /*!<Set PWM0PL.PWM2P               */
#define set_PWM0PL_PWM3P         SFRS = 1; PWM0PL |= 0x08 /*!<Set PWM0PL.PWM3P               */
#define set_PWM0PL_PWM4P         SFRS = 1; PWM0PL |= 0x10 /*!<Set PWM0PL.PWM4P               */
#define set_PWM0PL_PWM5P         SFRS = 1; PWM0PL |= 0x20 /*!<Set PWM0PL.PWM5P               */
#define set_PWM0PL_PWM6P         SFRS = 1; PWM0PL |= 0x40 /*!<Set PWM0PL.PWM6P               */
#define set_PWM0PL_PWM7P         SFRS = 1; PWM0PL |= 0x80 /*!<Set PWM0PL.PWM7P               */

#define clr_PWM0PL_PWM0P         SFRS = 1; PWM0PL &=~0x01 /*!<Clear PWM0PL.PWM0P             */
#define clr_PWM0PL_PWM1P         SFRS = 1; PWM0PL &=~0x02 /*!<Clear PWM0PL.PWM1P             */
#define clr_PWM0PL_PWM2P         SFRS = 1; PWM0PL &=~0x04 /*!<Clear PWM0PL.PWM2P             */
#define clr_PWM0PL_PWM3P         SFRS = 1; PWM0PL &=~0x08 /*!<Clear PWM0PL.PWM3P             */
#define clr_PWM0PL_PWM4P         SFRS = 1; PWM0PL &=~0x10 /*!<Clear PWM0PL.PWM4P             */
#define clr_PWM0PL_PWM5P         SFRS = 1; PWM0PL &=~0x20 /*!<Clear PWM0PL.PWM5P             */
#define clr_PWM0PL_PWM6P         SFRS = 1; PWM0PL &=~0x40 /*!<Clear PWM0PL.PWM6P             */
#define clr_PWM0PL_PWM7P         SFRS = 1; PWM0PL &=~0x80 /*!<Clear PWM0PL.PWM7P             */

/**@} end of SFR_PAGE1_PWM0PL_MACRO group */
/**@} end of SFR_PAGE1_PWM0PL group */

/**
   @addtogroup SFR_PAGE1_PWM0C0L PWM0C0L
   Special Function Register PWM0C0L
   @{ */

/**
@var PWM0C0L
Address: DAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C0L @ 0xDA;

/**
@addtogroup SFR_PAGE1_PWM0C0L_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C0L
@{ */

#define set_PWM0C0L_PWM0Cx       SFRS = 1; PWM0C0L |= 0x01 /*!<Set PWM0C0L.PWM0Cx             */
#define set_PWM0C0L_PWM1Cx       SFRS = 1; PWM0C0L |= 0x02 /*!<Set PWM0C0L.PWM1Cx             */
#define set_PWM0C0L_PWM2Cx       SFRS = 1; PWM0C0L |= 0x04 /*!<Set PWM0C0L.PWM2Cx             */
#define set_PWM0C0L_PWM3Cx       SFRS = 1; PWM0C0L |= 0x08 /*!<Set PWM0C0L.PWM3Cx             */
#define set_PWM0C0L_PWM4Cx       SFRS = 1; PWM0C0L |= 0x10 /*!<Set PWM0C0L.PWM4Cx             */
#define set_PWM0C0L_PWM5Cx       SFRS = 1; PWM0C0L |= 0x20 /*!<Set PWM0C0L.PWM5Cx             */
#define set_PWM0C0L_PWM6Cx       SFRS = 1; PWM0C0L |= 0x40 /*!<Set PWM0C0L.PWM6Cx             */
#define set_PWM0C0L_PWM7Cx       SFRS = 1; PWM0C0L |= 0x80 /*!<Set PWM0C0L.PWM7Cx             */

#define clr_PWM0C0L_PWM0Cx       SFRS = 1; PWM0C0L &=~0x01 /*!<Clear PWM0C0L.PWM0Cx           */
#define clr_PWM0C0L_PWM1Cx       SFRS = 1; PWM0C0L &=~0x02 /*!<Clear PWM0C0L.PWM1Cx           */
#define clr_PWM0C0L_PWM2Cx       SFRS = 1; PWM0C0L &=~0x04 /*!<Clear PWM0C0L.PWM2Cx           */
#define clr_PWM0C0L_PWM3Cx       SFRS = 1; PWM0C0L &=~0x08 /*!<Clear PWM0C0L.PWM3Cx           */
#define clr_PWM0C0L_PWM4Cx       SFRS = 1; PWM0C0L &=~0x10 /*!<Clear PWM0C0L.PWM4Cx           */
#define clr_PWM0C0L_PWM5Cx       SFRS = 1; PWM0C0L &=~0x20 /*!<Clear PWM0C0L.PWM5Cx           */
#define clr_PWM0C0L_PWM6Cx       SFRS = 1; PWM0C0L &=~0x40 /*!<Clear PWM0C0L.PWM6Cx           */
#define clr_PWM0C0L_PWM7Cx       SFRS = 1; PWM0C0L &=~0x80 /*!<Clear PWM0C0L.PWM7Cx           */

/**@} end of SFR_PAGE1_PWM0C0L_MACRO group */
/**@} end of SFR_PAGE1_PWM0C0L group */

/**
   @addtogroup SFR_PAGE1_PWM0C1L PWM0C1L
   Special Function Register PWM0C1L
   @{ */

/**
@var PWM0C1L
Address: DBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C1L @ 0xDB;

/**
@addtogroup SFR_PAGE1_PWM0C1L_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C1L
@{ */

#define set_PWM0C1L_PWM0Cx       SFRS = 1; PWM0C1L |= 0x01 /*!<Set PWM0C1L.PWM0Cx             */
#define set_PWM0C1L_PWM1Cx       SFRS = 1; PWM0C1L |= 0x02 /*!<Set PWM0C1L.PWM1Cx             */
#define set_PWM0C1L_PWM2Cx       SFRS = 1; PWM0C1L |= 0x04 /*!<Set PWM0C1L.PWM2Cx             */
#define set_PWM0C1L_PWM3Cx       SFRS = 1; PWM0C1L |= 0x08 /*!<Set PWM0C1L.PWM3Cx             */
#define set_PWM0C1L_PWM4Cx       SFRS = 1; PWM0C1L |= 0x10 /*!<Set PWM0C1L.PWM4Cx             */
#define set_PWM0C1L_PWM5Cx       SFRS = 1; PWM0C1L |= 0x20 /*!<Set PWM0C1L.PWM5Cx             */
#define set_PWM0C1L_PWM6Cx       SFRS = 1; PWM0C1L |= 0x40 /*!<Set PWM0C1L.PWM6Cx             */
#define set_PWM0C1L_PWM7Cx       SFRS = 1; PWM0C1L |= 0x80 /*!<Set PWM0C1L.PWM7Cx             */

#define clr_PWM0C1L_PWM0Cx       SFRS = 1; PWM0C1L &=~0x01 /*!<Clear PWM0C1L.PWM0Cx           */
#define clr_PWM0C1L_PWM1Cx       SFRS = 1; PWM0C1L &=~0x02 /*!<Clear PWM0C1L.PWM1Cx           */
#define clr_PWM0C1L_PWM2Cx       SFRS = 1; PWM0C1L &=~0x04 /*!<Clear PWM0C1L.PWM2Cx           */
#define clr_PWM0C1L_PWM3Cx       SFRS = 1; PWM0C1L &=~0x08 /*!<Clear PWM0C1L.PWM3Cx           */
#define clr_PWM0C1L_PWM4Cx       SFRS = 1; PWM0C1L &=~0x10 /*!<Clear PWM0C1L.PWM4Cx           */
#define clr_PWM0C1L_PWM5Cx       SFRS = 1; PWM0C1L &=~0x20 /*!<Clear PWM0C1L.PWM5Cx           */
#define clr_PWM0C1L_PWM6Cx       SFRS = 1; PWM0C1L &=~0x40 /*!<Clear PWM0C1L.PWM6Cx           */
#define clr_PWM0C1L_PWM7Cx       SFRS = 1; PWM0C1L &=~0x80 /*!<Clear PWM0C1L.PWM7Cx           */

/**@} end of SFR_PAGE1_PWM0C1L_MACRO group */
/**@} end of SFR_PAGE1_PWM0C1L group */

/**
   @addtogroup SFR_PAGE1_PWM0C2L PWM0C2L
   Special Function Register PWM0C2L
   @{ */

/**
@var PWM0C2L
Address: DCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C2L @ 0xDC;

/**
@addtogroup SFR_PAGE1_PWM0C2L_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C2L
@{ */

#define set_PWM0C2L_PWM0Cx       SFRS = 1; PWM0C2L |= 0x01 /*!<Set PWM0C2L.PWM0Cx             */
#define set_PWM0C2L_PWM1Cx       SFRS = 1; PWM0C2L |= 0x02 /*!<Set PWM0C2L.PWM1Cx             */
#define set_PWM0C2L_PWM2Cx       SFRS = 1; PWM0C2L |= 0x04 /*!<Set PWM0C2L.PWM2Cx             */
#define set_PWM0C2L_PWM3Cx       SFRS = 1; PWM0C2L |= 0x08 /*!<Set PWM0C2L.PWM3Cx             */
#define set_PWM0C2L_PWM4Cx       SFRS = 1; PWM0C2L |= 0x10 /*!<Set PWM0C2L.PWM4Cx             */
#define set_PWM0C2L_PWM5Cx       SFRS = 1; PWM0C2L |= 0x20 /*!<Set PWM0C2L.PWM5Cx             */
#define set_PWM0C2L_PWM6Cx       SFRS = 1; PWM0C2L |= 0x40 /*!<Set PWM0C2L.PWM6Cx             */
#define set_PWM0C2L_PWM7Cx       SFRS = 1; PWM0C2L |= 0x80 /*!<Set PWM0C2L.PWM7Cx             */

#define clr_PWM0C2L_PWM0Cx       SFRS = 1; PWM0C2L &=~0x01 /*!<Clear PWM0C2L.PWM0Cx           */
#define clr_PWM0C2L_PWM1Cx       SFRS = 1; PWM0C2L &=~0x02 /*!<Clear PWM0C2L.PWM1Cx           */
#define clr_PWM0C2L_PWM2Cx       SFRS = 1; PWM0C2L &=~0x04 /*!<Clear PWM0C2L.PWM2Cx           */
#define clr_PWM0C2L_PWM3Cx       SFRS = 1; PWM0C2L &=~0x08 /*!<Clear PWM0C2L.PWM3Cx           */
#define clr_PWM0C2L_PWM4Cx       SFRS = 1; PWM0C2L &=~0x10 /*!<Clear PWM0C2L.PWM4Cx           */
#define clr_PWM0C2L_PWM5Cx       SFRS = 1; PWM0C2L &=~0x20 /*!<Clear PWM0C2L.PWM5Cx           */
#define clr_PWM0C2L_PWM6Cx       SFRS = 1; PWM0C2L &=~0x40 /*!<Clear PWM0C2L.PWM6Cx           */
#define clr_PWM0C2L_PWM7Cx       SFRS = 1; PWM0C2L &=~0x80 /*!<Clear PWM0C2L.PWM7Cx           */

/**@} end of SFR_PAGE1_PWM0C2L_MACRO group */
/**@} end of SFR_PAGE1_PWM0C2L group */

/**
   @addtogroup SFR_PAGE1_PWM0C3L PWM0C3L
   Special Function Register PWM0C3L
   @{ */

/**
@var PWM0C3L
Address: DDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/
__sfr __no_init volatile unsigned char PWM0C3L @ 0xDD;

/**
@addtogroup SFR_PAGE1_PWM0C3L_MACRO Bit Macro Functions
Bit Macro Functions of PWM0C3L
@{ */

#define set_PWM0C3L_PWM0Cx       SFRS = 1; PWM0C3L |= 0x01 /*!<Set PWM0C3L.PWM0Cx             */
#define set_PWM0C3L_PWM1Cx       SFRS = 1; PWM0C3L |= 0x02 /*!<Set PWM0C3L.PWM1Cx             */
#define set_PWM0C3L_PWM2Cx       SFRS = 1; PWM0C3L |= 0x04 /*!<Set PWM0C3L.PWM2Cx             */
#define set_PWM0C3L_PWM3Cx       SFRS = 1; PWM0C3L |= 0x08 /*!<Set PWM0C3L.PWM3Cx             */
#define set_PWM0C3L_PWM4Cx       SFRS = 1; PWM0C3L |= 0x10 /*!<Set PWM0C3L.PWM4Cx             */
#define set_PWM0C3L_PWM5Cx       SFRS = 1; PWM0C3L |= 0x20 /*!<Set PWM0C3L.PWM5Cx             */
#define set_PWM0C3L_PWM6Cx       SFRS = 1; PWM0C3L |= 0x40 /*!<Set PWM0C3L.PWM6Cx             */
#define set_PWM0C3L_PWM7Cx       SFRS = 1; PWM0C3L |= 0x80 /*!<Set PWM0C3L.PWM7Cx             */

#define clr_PWM0C3L_PWM0Cx       SFRS = 1; PWM0C3L &=~0x01 /*!<Clear PWM0C3L.PWM0Cx           */
#define clr_PWM0C3L_PWM1Cx       SFRS = 1; PWM0C3L &=~0x02 /*!<Clear PWM0C3L.PWM1Cx           */
#define clr_PWM0C3L_PWM2Cx       SFRS = 1; PWM0C3L &=~0x04 /*!<Clear PWM0C3L.PWM2Cx           */
#define clr_PWM0C3L_PWM3Cx       SFRS = 1; PWM0C3L &=~0x08 /*!<Clear PWM0C3L.PWM3Cx           */
#define clr_PWM0C3L_PWM4Cx       SFRS = 1; PWM0C3L &=~0x10 /*!<Clear PWM0C3L.PWM4Cx           */
#define clr_PWM0C3L_PWM5Cx       SFRS = 1; PWM0C3L &=~0x20 /*!<Clear PWM0C3L.PWM5Cx           */
#define clr_PWM0C3L_PWM6Cx       SFRS = 1; PWM0C3L &=~0x40 /*!<Clear PWM0C3L.PWM6Cx           */
#define clr_PWM0C3L_PWM7Cx       SFRS = 1; PWM0C3L &=~0x80 /*!<Clear PWM0C3L.PWM7Cx           */

/**@} end of SFR_PAGE1_PWM0C3L_MACRO group */
/**@} end of SFR_PAGE1_PWM0C3L group */

/**
   @addtogroup SFR_PAGE1_PWM0CON1 PWM0CON1
   Special Function Register PWM0CON1
   @{ */

/**
@var PWM0CON1
Address: DFH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |PWMDIV[2:0]|PWM Clock Divider
|        |          |This field decides the pre-scale of PWM clock source.
|        |          |000 = 1/1.
|        |          |001 = 1/2
|        |          |010 = 1/4.
|        |          |011 = 1/8.
|        |          |100 = 1/16.
|        |          |101 = 1/32.
|        |          |110 = 1/64.
|        |          |111 = 1/128.
|[3]     |FBINEN    |FB Pin Input Enable
|        |          |0 = PWM0 output Fault Braked by FB pin input Disabled.
|        |          |1 = PWM0 output Fault Braked by FB pin input Enabled. Once an edge,
|        |          |which matches FBINLS (PWM0FBD.6) selection, occurs on FB pin,
|        |          |PWM0CH0~5 output Fault Brake data in PWMnFBD register. PWMRUN
|        |          |(PWM0CON0.7) will also be automatically cleared by hardware. The PWM
|        |          |output resumes when PWM0RUN is set again.
|        |          |Note: This bit is only vaild in PWM0
|[4]     |PWMTYP    |PWM Type Select
|        |          |0 = Edge-aligned PWM.
|        |          |1 = Center-aligned PWM.
|[5]     |GP        |Group Mode Enable
|        |          |This bit enables the group mode. If enabled, the duty of first three
|        |          |pairs of PWM are decided by PWM01H and PWM01L rather than their
|        |          |original duty Register Description.
|        |          |0 = Group mode Disabled.
|        |          |1 = Group mode Enabled.
|[7:6]   |PWMMOD[1:0]|PWM Mode Select
|        |          |00 = Independent mode.
|        |          |01 = Complementary mode.
|        |          |10 = Synchronized mode.
|        |          |11 = Reserved.
*/
__sfr __no_init volatile unsigned char PWM0CON1 @ 0xDF;

/**
@addtogroup SFR_PAGE1_PWM0CON1_MACRO Bit Macro Functions
Bit Macro Functions of PWM0CON1
@{ */


#define set_PWM0CON1_FBINEN      SFRS = 1; PWM0CON1 |= 0x08 /*!<Set PWM0CON1.FBINEN            */
#define set_PWM0CON1_PWMTYP      SFRS = 1; PWM0CON1 |= 0x10 /*!<Set PWM0CON1.PWMTYP            */
#define set_PWM0CON1_GP          SFRS = 1; PWM0CON1 |= 0x20 /*!<Set PWM0CON1.GP                */



#define clr_PWM0CON1_FBINEN      SFRS = 1; PWM0CON1 &=~0x08 /*!<Clear PWM0CON1.FBINEN          */
#define clr_PWM0CON1_PWMTYP      SFRS = 1; PWM0CON1 &=~0x10 /*!<Clear PWM0CON1.PWMTYP          */
#define clr_PWM0CON1_GP          SFRS = 1; PWM0CON1 &=~0x20 /*!<Clear PWM0CON1.GP              */


/**@} end of SFR_PAGE1_PWM0CON1_MACRO group */
/**@} end of SFR_PAGE1_PWM0CON1 group */

/**
   @addtogroup SFR_PAGE1_ACC ACC
   Special Function Register @ref ACC
   @{ */
/**@} end of SFR_PAGE1_ACC group */

/**
   @addtogroup SFR_PAGE1_CAPCON0 CAPCON0
   Special Function Register CAPCON0
   @{ */

/**
@var CAPCON0
Address: E1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CAPF0     |Input Capture 0 Flag
|        |          |This bit is set by hardware if the determined edge of input capture 0
|        |          |occurs. This bit should cleared by software.
|[1]     |CAPF1     |Input Capture 1 Flag
|        |          |This bit is set by hardware if the determined edge of input capture 1
|        |          |occurs. This bit should cleared by software.
|[2]     |CAPF2     |Input Capture 2 Flag
|        |          |This bit is set by hardware if the determined edge of input capture 2
|        |          |occurs. This bit should cleared by software.
|[3]     |Reserved  |Reserved
|[4]     |CAPEN0    |Input Capture 0 Enable
|        |          |0 = Input capture channel 0 Disabled.
|        |          |1 = Input capture channel 0 Enabled.
|[5]     |CAPEN1    |Input Capture 1 Enable
|        |          |0 = Input capture channel 1 Disabled.
|        |          |1 = Input capture channel 1 Enabled.
|[6]     |CAPEN2    |Input Capture 2 Enable
|        |          |0 = Input capture channel 2 Disabled.
|        |          |1 = Input capture channel 2 Enabled.
|[7]     |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char CAPCON0 @ 0xE1;

/**
@addtogroup SFR_PAGE1_CAPCON0_MACRO Bit Macro Functions
Bit Macro Functions of CAPCON0
@{ */

#define set_CAPCON0_CAPF0        SFRS = 1; CAPCON0 |= 0x01 /*!<Set CAPCON0.CAPF0              */
#define set_CAPCON0_CAPF1        SFRS = 1; CAPCON0 |= 0x02 /*!<Set CAPCON0.CAPF1              */
#define set_CAPCON0_CAPF2        SFRS = 1; CAPCON0 |= 0x04 /*!<Set CAPCON0.CAPF2              */
#define set_CAPCON0_CAPEN0       SFRS = 1; CAPCON0 |= 0x10 /*!<Set CAPCON0.CAPEN0             */
#define set_CAPCON0_CAPEN1       SFRS = 1; CAPCON0 |= 0x20 /*!<Set CAPCON0.CAPEN1             */
#define set_CAPCON0_CAPEN2       SFRS = 1; CAPCON0 |= 0x40 /*!<Set CAPCON0.CAPEN2             */

#define clr_CAPCON0_CAPF0        SFRS = 1; CAPCON0 &=~0x01 /*!<Clear CAPCON0.CAPF0            */
#define clr_CAPCON0_CAPF1        SFRS = 1; CAPCON0 &=~0x02 /*!<Clear CAPCON0.CAPF1            */
#define clr_CAPCON0_CAPF2        SFRS = 1; CAPCON0 &=~0x04 /*!<Clear CAPCON0.CAPF2            */
#define clr_CAPCON0_CAPEN0       SFRS = 1; CAPCON0 &=~0x10 /*!<Clear CAPCON0.CAPEN0           */
#define clr_CAPCON0_CAPEN1       SFRS = 1; CAPCON0 &=~0x20 /*!<Clear CAPCON0.CAPEN1           */
#define clr_CAPCON0_CAPEN2       SFRS = 1; CAPCON0 &=~0x40 /*!<Clear CAPCON0.CAPEN2           */

/**@} end of SFR_PAGE1_CAPCON0_MACRO group */
/**@} end of SFR_PAGE1_CAPCON0 group */

/**
   @addtogroup SFR_PAGE1_CAPCON1 CAPCON1
   Special Function Register CAPCON1
   @{ */

/**
@var CAPCON1
Address: E2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |CAP0LS[1:0]|Input Capture 0 Level Select
|        |          |00 = Falling edge.
|        |          |01 = Rising edge.
|        |          |10 = Either rising or falling edge.
|        |          |11 = Reserved.
|[3:2]   |CAP1LS[1:0]|Input Capture 1 Level Select
|        |          |00 = Falling edge.
|        |          |01 = Rising edge.
|        |          |10 = Either rising or falling edge.
|        |          |11 = Reserved.
|[5:4]   |CAP2LS[1:0]|Input Capture 2 Level Select
|        |          |00 = Falling edge.
|        |          |01 = Rising edge.
|        |          |10 = Either rising or falling edge.
|        |          |11 = Reserved.
|[7:6]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char CAPCON1 @ 0xE2;

/**@} end of SFR_PAGE1_CAPCON1 group */

/**
   @addtogroup SFR_PAGE1_CAPCON2 CAPCON2
   Special Function Register CAPCON2
   @{ */

/**
@var CAPCON2
Address: E3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[4]     |ENF0      |Enable Noise Filer on Input Capture 0
|        |          |0 = Noise filter on input capture channel 0 Disabled.
|        |          |1 = Noise filter on input capture channel 0 Enabled.
|[5]     |ENF1      |Enable Noise Filer on Input Capture 1
|        |          |0 = Noise filter on input capture channel 1 Disabled.
|        |          |1 = Noise filter on input capture channel 1 Enabled.
|[6]     |ENF2      |Enable Noise Filer on Input Capture 2
|        |          |0 = Noise filter on input capture channel 2 Disabled.
|        |          |1 = Noise filter on input capture channel 2 Enabled.
*/
__sfr __no_init volatile unsigned char CAPCON2 @ 0xE3;

/**
@addtogroup SFR_PAGE1_CAPCON2_MACRO Bit Macro Functions
Bit Macro Functions of CAPCON2
@{ */
#define set_CAPCON2_CMOD         SFRS = 1; CAPCON2 |= 0x01 /*!<Set CAPCON2.CMOD               */
#define set_CAPCON2_ENF0         SFRS = 1; CAPCON2 |= 0x10 /*!<Set CAPCON2.ENF0               */
#define set_CAPCON2_ENF1         SFRS = 1; CAPCON2 |= 0x20 /*!<Set CAPCON2.ENF1               */
#define set_CAPCON2_ENF2         SFRS = 1; CAPCON2 |= 0x40 /*!<Set CAPCON2.ENF2               */

#define clr_CAPCON2_CMOD         SFRS = 1; CAPCON2 &=~0x01 /*!<Clear CAPCON2.CMOD             */
#define clr_CAPCON2_ENF0         SFRS = 1; CAPCON2 &=~0x10 /*!<Clear CAPCON2.ENF0             */
#define clr_CAPCON2_ENF1         SFRS = 1; CAPCON2 &=~0x20 /*!<Clear CAPCON2.ENF1             */
#define clr_CAPCON2_ENF2         SFRS = 1; CAPCON2 &=~0x40 /*!<Clear CAPCON2.ENF2             */

/**@} end of SFR_PAGE1_CAPCON2_MACRO group */
/**@} end of SFR_PAGE1_CAPCON2 group */

/**
   @addtogroup SFR_PAGE1_C0L C0L
   Special Function Register C0L
   @{ */

/**
@var C0L
Address: E4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
*/
__sfr __no_init volatile unsigned char C0L @ 0xE4;

/**
@addtogroup SFR_PAGE1_C0L_MACRO Bit Macro Functions
Bit Macro Functions of C0L
@{ */

#define set_C0L_C0L              SFRS = 1; C0L |= 0x01 /*!<Set C0L.C0L                    */
#define set_C0L_C1L              SFRS = 1; C0L |= 0x02 /*!<Set C0L.C1L                    */
#define set_C0L_C2L              SFRS = 1; C0L |= 0x04 /*!<Set C0L.C2L                    */
#define set_C0L_C3L              SFRS = 1; C0L |= 0x08 /*!<Set C0L.C3L                    */
#define set_C0L_C4L              SFRS = 1; C0L |= 0x10 /*!<Set C0L.C4L                    */
#define set_C0L_C5L              SFRS = 1; C0L |= 0x20 /*!<Set C0L.C5L                    */
#define set_C0L_C6L              SFRS = 1; C0L |= 0x40 /*!<Set C0L.C6L                    */
#define set_C0L_C7L              SFRS = 1; C0L |= 0x80 /*!<Set C0L.C7L                    */

#define clr_C0L_C0L              SFRS = 1; C0L &=~0x01 /*!<Clear C0L.C0L                  */
#define clr_C0L_C1L              SFRS = 1; C0L &=~0x02 /*!<Clear C0L.C1L                  */
#define clr_C0L_C2L              SFRS = 1; C0L &=~0x04 /*!<Clear C0L.C2L                  */
#define clr_C0L_C3L              SFRS = 1; C0L &=~0x08 /*!<Clear C0L.C3L                  */
#define clr_C0L_C4L              SFRS = 1; C0L &=~0x10 /*!<Clear C0L.C4L                  */
#define clr_C0L_C5L              SFRS = 1; C0L &=~0x20 /*!<Clear C0L.C5L                  */
#define clr_C0L_C6L              SFRS = 1; C0L &=~0x40 /*!<Clear C0L.C6L                  */
#define clr_C0L_C7L              SFRS = 1; C0L &=~0x80 /*!<Clear C0L.C7L                  */

/**@} end of SFR_PAGE1_C0L_MACRO group */
/**@} end of SFR_PAGE1_C0L group */

/**
   @addtogroup SFR_PAGE1_C0H C0H
   Special Function Register C0H
   @{ */

/**
@var C0H
Address: E5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
*/
__sfr __no_init volatile unsigned char C0H @ 0xE5;

/**
@addtogroup SFR_PAGE1_C0H_MACRO Bit Macro Functions
Bit Macro Functions of C0H
@{ */

#define set_C0H_C0H              SFRS = 1; C0H |= 0x01 /*!<Set C0H.C0H                    */
#define set_C0H_C1H              SFRS = 1; C0H |= 0x02 /*!<Set C0H.C1H                    */
#define set_C0H_C2H              SFRS = 1; C0H |= 0x04 /*!<Set C0H.C2H                    */
#define set_C0H_C3H              SFRS = 1; C0H |= 0x08 /*!<Set C0H.C3H                    */
#define set_C0H_C4H              SFRS = 1; C0H |= 0x10 /*!<Set C0H.C4H                    */
#define set_C0H_C5H              SFRS = 1; C0H |= 0x20 /*!<Set C0H.C5H                    */
#define set_C0H_C6H              SFRS = 1; C0H |= 0x40 /*!<Set C0H.C6H                    */
#define set_C0H_C7H              SFRS = 1; C0H |= 0x80 /*!<Set C0H.C7H                    */

#define clr_C0H_C0H              SFRS = 1; C0H &=~0x01 /*!<Clear C0H.C0H                  */
#define clr_C0H_C1H              SFRS = 1; C0H &=~0x02 /*!<Clear C0H.C1H                  */
#define clr_C0H_C2H              SFRS = 1; C0H &=~0x04 /*!<Clear C0H.C2H                  */
#define clr_C0H_C3H              SFRS = 1; C0H &=~0x08 /*!<Clear C0H.C3H                  */
#define clr_C0H_C4H              SFRS = 1; C0H &=~0x10 /*!<Clear C0H.C4H                  */
#define clr_C0H_C5H              SFRS = 1; C0H &=~0x20 /*!<Clear C0H.C5H                  */
#define clr_C0H_C6H              SFRS = 1; C0H &=~0x40 /*!<Clear C0H.C6H                  */
#define clr_C0H_C7H              SFRS = 1; C0H &=~0x80 /*!<Clear C0H.C7H                  */

/**@} end of SFR_PAGE1_C0H_MACRO group */
/**@} end of SFR_PAGE1_C0H group */

/**
   @addtogroup SFR_PAGE1_C1L C1L
   Special Function Register C1L
   @{ */

/**
@var C1L
Address: E6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
*/
__sfr __no_init volatile unsigned char C1L @ 0xE6;

/**
@addtogroup SFR_PAGE1_C1L_MACRO Bit Macro Functions
Bit Macro Functions of C1L
@{ */

#define set_C1L_C0L              SFRS = 1; C1L |= 0x01 /*!<Set C1L.C0L                    */
#define set_C1L_C1L              SFRS = 1; C1L |= 0x02 /*!<Set C1L.C1L                    */
#define set_C1L_C2L              SFRS = 1; C1L |= 0x04 /*!<Set C1L.C2L                    */
#define set_C1L_C3L              SFRS = 1; C1L |= 0x08 /*!<Set C1L.C3L                    */
#define set_C1L_C4L              SFRS = 1; C1L |= 0x10 /*!<Set C1L.C4L                    */
#define set_C1L_C5L              SFRS = 1; C1L |= 0x20 /*!<Set C1L.C5L                    */
#define set_C1L_C6L              SFRS = 1; C1L |= 0x40 /*!<Set C1L.C6L                    */
#define set_C1L_C7L              SFRS = 1; C1L |= 0x80 /*!<Set C1L.C7L                    */

#define clr_C1L_C0L              SFRS = 1; C1L &=~0x01 /*!<Clear C1L.C0L                  */
#define clr_C1L_C1L              SFRS = 1; C1L &=~0x02 /*!<Clear C1L.C1L                  */
#define clr_C1L_C2L              SFRS = 1; C1L &=~0x04 /*!<Clear C1L.C2L                  */
#define clr_C1L_C3L              SFRS = 1; C1L &=~0x08 /*!<Clear C1L.C3L                  */
#define clr_C1L_C4L              SFRS = 1; C1L &=~0x10 /*!<Clear C1L.C4L                  */
#define clr_C1L_C5L              SFRS = 1; C1L &=~0x20 /*!<Clear C1L.C5L                  */
#define clr_C1L_C6L              SFRS = 1; C1L &=~0x40 /*!<Clear C1L.C6L                  */
#define clr_C1L_C7L              SFRS = 1; C1L &=~0x80 /*!<Clear C1L.C7L                  */

/**@} end of SFR_PAGE1_C1L_MACRO group */
/**@} end of SFR_PAGE1_C1L group */

/**
   @addtogroup SFR_PAGE1_C1H C1H
   Special Function Register C1H
   @{ */

/**
@var C1H
Address: E7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
*/
__sfr __no_init volatile unsigned char C1H @ 0xE7;

/**
@addtogroup SFR_PAGE1_C1H_MACRO Bit Macro Functions
Bit Macro Functions of C1H
@{ */

#define set_C1H_C0H              SFRS = 1; C1H |= 0x01 /*!<Set C1H.C0H                    */
#define set_C1H_C1H              SFRS = 1; C1H |= 0x02 /*!<Set C1H.C1H                    */
#define set_C1H_C2H              SFRS = 1; C1H |= 0x04 /*!<Set C1H.C2H                    */
#define set_C1H_C3H              SFRS = 1; C1H |= 0x08 /*!<Set C1H.C3H                    */
#define set_C1H_C4H              SFRS = 1; C1H |= 0x10 /*!<Set C1H.C4H                    */
#define set_C1H_C5H              SFRS = 1; C1H |= 0x20 /*!<Set C1H.C5H                    */
#define set_C1H_C6H              SFRS = 1; C1H |= 0x40 /*!<Set C1H.C6H                    */
#define set_C1H_C7H              SFRS = 1; C1H |= 0x80 /*!<Set C1H.C7H                    */

#define clr_C1H_C0H              SFRS = 1; C1H &=~0x01 /*!<Clear C1H.C0H                  */
#define clr_C1H_C1H              SFRS = 1; C1H &=~0x02 /*!<Clear C1H.C1H                  */
#define clr_C1H_C2H              SFRS = 1; C1H &=~0x04 /*!<Clear C1H.C2H                  */
#define clr_C1H_C3H              SFRS = 1; C1H &=~0x08 /*!<Clear C1H.C3H                  */
#define clr_C1H_C4H              SFRS = 1; C1H &=~0x10 /*!<Clear C1H.C4H                  */
#define clr_C1H_C5H              SFRS = 1; C1H &=~0x20 /*!<Clear C1H.C5H                  */
#define clr_C1H_C6H              SFRS = 1; C1H &=~0x40 /*!<Clear C1H.C6H                  */
#define clr_C1H_C7H              SFRS = 1; C1H &=~0x80 /*!<Clear C1H.C7H                  */

/**@} end of SFR_PAGE1_C1H_MACRO group */
/**@} end of SFR_PAGE1_C1H group */

/**
   @addtogroup SFR_PAGE1_I2C1CON I2C1CON
   Special Function Register @ref I2C1CON
   @{ */
/**@} end of SFR_PAGE1_I2C1CON group */

/**
   @addtogroup SFR_PAGE1_PICON PICON
   Special Function Register PICON
   @{ */

/**
@var PICON
Address: E9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7]     |PIT0      |Pin Interrupt Channel nType Select
|        |          |This bit selects which type that pin interrupt channel 7 is triggered.
|        |          |0 = Level triggered.
|        |          |1 = Edge triggered.
*/
__sfr __no_init volatile unsigned char PICON @ 0xE9;

/** 
@addtogroup SFR_PAGE1_PICON_MACRO Bit Macro Functions
Bit Macro Functions of PICON
@{ */
#define set_PICON_PIT0           SFRS = 1; PICON |= 0x01 /*!<Set PICON.PIT0                 */
#define set_PICON_PIT1           SFRS = 1; PICON |= 0x02 /*!<Set PICON.PIT1                 */
#define set_PICON_PIT2           SFRS = 1; PICON |= 0x04 /*!<Set PICON.PIT2                 */
#define set_PICON_PIT3           SFRS = 1; PICON |= 0x08 /*!<Set PICON.PIT3                 */
#define set_PICON_PIT4           SFRS = 1; PICON |= 0x10 /*!<Set PICON.PIT4                 */
#define set_PICON_PIT5           SFRS = 1; PICON |= 0x20 /*!<Set PICON.PIT5                 */
#define set_PICON_PIT6           SFRS = 1; PICON |= 0x40 /*!<Set PICON.PIT6                 */
#define set_PICON_PIT7           SFRS = 1; PICON |= 0x80 /*!<Set PICON.PIT7                 */

#define clr_PICON_PIT0           SFRS = 1; PICON &=~0x01 /*!<Clear PICON.PIT0               */
#define clr_PICON_PIT1           SFRS = 1; PICON &=~0x02 /*!<Clear PICON.PIT1               */
#define clr_PICON_PIT2           SFRS = 1; PICON &=~0x04 /*!<Clear PICON.PIT2               */
#define clr_PICON_PIT3           SFRS = 1; PICON &=~0x08 /*!<Clear PICON.PIT3               */
#define clr_PICON_PIT4           SFRS = 1; PICON &=~0x10 /*!<Clear PICON.PIT4               */
#define clr_PICON_PIT5           SFRS = 1; PICON &=~0x20 /*!<Clear PICON.PIT5               */
#define clr_PICON_PIT6           SFRS = 1; PICON &=~0x40 /*!<Clear PICON.PIT6               */
#define clr_PICON_PIT7           SFRS = 1; PICON &=~0x80 /*!<Clear PICON.PIT7               */

/**@} end of SFR_PAGE1_PICON_MACRO group */
/**@} end of SFR_PAGE1_PICON group */

/**
   @addtogroup SFR_PAGE1_PINEN PINEN
   Special Function Register PINEN
   @{ */

/**
@var PINEN
Address: EAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PINEN0    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[1]     |PINEN1    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[2]     |PINEN2    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[3]     |PINEN3    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[4]     |PINEN4    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[5]     |PINEN5    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[6]     |PINEN6    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[7]     |PINEN7    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
*/
__sfr __no_init volatile unsigned char PINEN @ 0xEA;

/**
@addtogroup SFR_PAGE1_PINEN_MACRO Bit Macro Functions
Bit Macro Functions of PINEN
@{ */

#define set_PINEN_PINEN0         SFRS = 1; PINEN |= 0x01 /*!<Set PINEN.PINEN0               */
#define set_PINEN_PINEN1         SFRS = 1; PINEN |= 0x02 /*!<Set PINEN.PINEN1               */
#define set_PINEN_PINEN2         SFRS = 1; PINEN |= 0x04 /*!<Set PINEN.PINEN2               */
#define set_PINEN_PINEN3         SFRS = 1; PINEN |= 0x08 /*!<Set PINEN.PINEN3               */
#define set_PINEN_PINEN4         SFRS = 1; PINEN |= 0x10 /*!<Set PINEN.PINEN4               */
#define set_PINEN_PINEN5         SFRS = 1; PINEN |= 0x20 /*!<Set PINEN.PINEN5               */
#define set_PINEN_PINEN6         SFRS = 1; PINEN |= 0x40 /*!<Set PINEN.PINEN6               */
#define set_PINEN_PINEN7         SFRS = 1; PINEN |= 0x80 /*!<Set PINEN.PINEN7               */

#define clr_PINEN_PINEN0         SFRS = 1; PINEN &=~0x01 /*!<Clear PINEN.PINEN0             */
#define clr_PINEN_PINEN1         SFRS = 1; PINEN &=~0x02 /*!<Clear PINEN.PINEN1             */
#define clr_PINEN_PINEN2         SFRS = 1; PINEN &=~0x04 /*!<Clear PINEN.PINEN2             */
#define clr_PINEN_PINEN3         SFRS = 1; PINEN &=~0x08 /*!<Clear PINEN.PINEN3             */
#define clr_PINEN_PINEN4         SFRS = 1; PINEN &=~0x10 /*!<Clear PINEN.PINEN4             */
#define clr_PINEN_PINEN5         SFRS = 1; PINEN &=~0x20 /*!<Clear PINEN.PINEN5             */
#define clr_PINEN_PINEN6         SFRS = 1; PINEN &=~0x40 /*!<Clear PINEN.PINEN6             */
#define clr_PINEN_PINEN7         SFRS = 1; PINEN &=~0x80 /*!<Clear PINEN.PINEN7             */

/**@} end of SFR_PAGE1_PINEN_MACRO group */
/**@} end of SFR_PAGE1_PINEN group */

/**
   @addtogroup SFR_PAGE1_PIPEN PIPEN
   Special Function Register PIPEN
   @{ */

/**
@var PIPEN
Address: EBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PIPEN0    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[1]     |PIPEN1    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[2]     |PIPEN2    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[3]     |PIPEN3    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[4]     |PIPEN4    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[5]     |PIPEN5    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[6]     |PIPEN6    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[7]     |PIPEN7    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
*/
__sfr __no_init volatile unsigned char PIPEN @ 0xEB;

/**
@addtogroup SFR_PAGE1_PIPEN_MACRO Bit Macro Functions
Bit Macro Functions of PIPEN
@{ */

#define set_PIPEN_PIPEN0         SFRS = 1; PIPEN |= 0x01 /*!<Set PIPEN.PIPEN0               */
#define set_PIPEN_PIPEN1         SFRS = 1; PIPEN |= 0x02 /*!<Set PIPEN.PIPEN1               */
#define set_PIPEN_PIPEN2         SFRS = 1; PIPEN |= 0x04 /*!<Set PIPEN.PIPEN2               */
#define set_PIPEN_PIPEN3         SFRS = 1; PIPEN |= 0x08 /*!<Set PIPEN.PIPEN3               */
#define set_PIPEN_PIPEN4         SFRS = 1; PIPEN |= 0x10 /*!<Set PIPEN.PIPEN4               */
#define set_PIPEN_PIPEN5         SFRS = 1; PIPEN |= 0x20 /*!<Set PIPEN.PIPEN5               */
#define set_PIPEN_PIPEN6         SFRS = 1; PIPEN |= 0x40 /*!<Set PIPEN.PIPEN6               */
#define set_PIPEN_PIPEN7         SFRS = 1; PIPEN |= 0x80 /*!<Set PIPEN.PIPEN7               */

#define clr_PIPEN_PIPEN0         SFRS = 1; PIPEN &=~0x01 /*!<Clear PIPEN.PIPEN0             */
#define clr_PIPEN_PIPEN1         SFRS = 1; PIPEN &=~0x02 /*!<Clear PIPEN.PIPEN1             */
#define clr_PIPEN_PIPEN2         SFRS = 1; PIPEN &=~0x04 /*!<Clear PIPEN.PIPEN2             */
#define clr_PIPEN_PIPEN3         SFRS = 1; PIPEN &=~0x08 /*!<Clear PIPEN.PIPEN3             */
#define clr_PIPEN_PIPEN4         SFRS = 1; PIPEN &=~0x10 /*!<Clear PIPEN.PIPEN4             */
#define clr_PIPEN_PIPEN5         SFRS = 1; PIPEN &=~0x20 /*!<Clear PIPEN.PIPEN5             */
#define clr_PIPEN_PIPEN6         SFRS = 1; PIPEN &=~0x40 /*!<Clear PIPEN.PIPEN6             */
#define clr_PIPEN_PIPEN7         SFRS = 1; PIPEN &=~0x80 /*!<Clear PIPEN.PIPEN7             */

/**@} end of SFR_PAGE1_PIPEN_MACRO group */
/**@} end of SFR_PAGE1_PIPEN group */

/**
   @addtogroup SFR_PAGE1_C2L C2L
   Special Function Register C2L
   @{ */

/**
@var C2L
Address: EDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
*/
__sfr __no_init volatile unsigned char C2L @ 0xED;

/**
@addtogroup SFR_PAGE1_C2L_MACRO Bit Macro Functions
Bit Macro Functions of C2L
@{ */

#define set_C2L_C0L              SFRS = 1; C2L |= 0x01 /*!<Set C2L.C0L                    */
#define set_C2L_C1L              SFRS = 1; C2L |= 0x02 /*!<Set C2L.C1L                    */
#define set_C2L_C2L              SFRS = 1; C2L |= 0x04 /*!<Set C2L.C2L                    */
#define set_C2L_C3L              SFRS = 1; C2L |= 0x08 /*!<Set C2L.C3L                    */
#define set_C2L_C4L              SFRS = 1; C2L |= 0x10 /*!<Set C2L.C4L                    */
#define set_C2L_C5L              SFRS = 1; C2L |= 0x20 /*!<Set C2L.C5L                    */
#define set_C2L_C6L              SFRS = 1; C2L |= 0x40 /*!<Set C2L.C6L                    */
#define set_C2L_C7L              SFRS = 1; C2L |= 0x80 /*!<Set C2L.C7L                    */

#define clr_C2L_C0L              SFRS = 1; C2L &=~0x01 /*!<Clear C2L.C0L                  */
#define clr_C2L_C1L              SFRS = 1; C2L &=~0x02 /*!<Clear C2L.C1L                  */
#define clr_C2L_C2L              SFRS = 1; C2L &=~0x04 /*!<Clear C2L.C2L                  */
#define clr_C2L_C3L              SFRS = 1; C2L &=~0x08 /*!<Clear C2L.C3L                  */
#define clr_C2L_C4L              SFRS = 1; C2L &=~0x10 /*!<Clear C2L.C4L                  */
#define clr_C2L_C5L              SFRS = 1; C2L &=~0x20 /*!<Clear C2L.C5L                  */
#define clr_C2L_C6L              SFRS = 1; C2L &=~0x40 /*!<Clear C2L.C6L                  */
#define clr_C2L_C7L              SFRS = 1; C2L &=~0x80 /*!<Clear C2L.C7L                  */

/**@} end of SFR_PAGE1_C2L_MACRO group */
/**@} end of SFR_PAGE1_C2L group */

/**
   @addtogroup SFR_PAGE1_C2H C2H
   Special Function Register C2H
   @{ */

/**
@var C2H
Address: EEH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
*/
__sfr __no_init volatile unsigned char C2H @ 0xEE;

/**
@addtogroup SFR_PAGE1_C2H_MACRO Bit Macro Functions
Bit Macro Functions of C2H
@{ */

#define set_C2H_C0H              SFRS = 1; C2H |= 0x01 /*!<Set C2H.C0H                    */
#define set_C2H_C1H              SFRS = 1; C2H |= 0x02 /*!<Set C2H.C1H                    */
#define set_C2H_C2H              SFRS = 1; C2H |= 0x04 /*!<Set C2H.C2H                    */
#define set_C2H_C3H              SFRS = 1; C2H |= 0x08 /*!<Set C2H.C3H                    */
#define set_C2H_C4H              SFRS = 1; C2H |= 0x10 /*!<Set C2H.C4H                    */
#define set_C2H_C5H              SFRS = 1; C2H |= 0x20 /*!<Set C2H.C5H                    */
#define set_C2H_C6H              SFRS = 1; C2H |= 0x40 /*!<Set C2H.C6H                    */
#define set_C2H_C7H              SFRS = 1; C2H |= 0x80 /*!<Set C2H.C7H                    */

#define clr_C2H_C0H              SFRS = 1; C2H &=~0x01 /*!<Clear C2H.C0H                  */
#define clr_C2H_C1H              SFRS = 1; C2H &=~0x02 /*!<Clear C2H.C1H                  */
#define clr_C2H_C2H              SFRS = 1; C2H &=~0x04 /*!<Clear C2H.C2H                  */
#define clr_C2H_C3H              SFRS = 1; C2H &=~0x08 /*!<Clear C2H.C3H                  */
#define clr_C2H_C4H              SFRS = 1; C2H &=~0x10 /*!<Clear C2H.C4H                  */
#define clr_C2H_C5H              SFRS = 1; C2H &=~0x20 /*!<Clear C2H.C5H                  */
#define clr_C2H_C6H              SFRS = 1; C2H &=~0x40 /*!<Clear C2H.C6H                  */
#define clr_C2H_C7H              SFRS = 1; C2H &=~0x80 /*!<Clear C2H.C7H                  */

/**@} end of SFR_PAGE1_C2H_MACRO group */
/**@} end of SFR_PAGE1_C2H group */

/**
   @addtogroup SFR_PAGE1_SPI0CR1 SPI0CR1
   Special Function Register SPI0CR1
   @{ */

/**
@var SPI0CR1
Address: F3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |SPIS0     |SPI Interval Time Selection Between Adjacent Bytes
|        |          |SPIS[1:0] and CPHA select eight grades of SPI interval time selection
|        |          |between adjacent bytes. As see Table 6.113 SPI Clock Suspend Interval
|        |          |Select
|        |          |SPIS[1:0] are valid only under Master mode (MSTR = 1).
|[1]     |SPIS1     |SPI Interval Time Selection Between Adjacent Bytes
|        |          |SPIS[1:0] and CPHA select eight grades of SPI interval time selection
|        |          |between adjacent bytes. As see Table 6.113 SPI Clock Suspend Interval
|        |          |Select
|        |          |SPIS[1:0] are valid only under Master mode (MSTR = 1).
|[2]     |RXDMAEN   |SPI RX DMA Enable
|        |          |This bit enables the SPI RX operating by through PDMA transfer, RX
|        |          |data are saved in XRAM after SPI RX operation.
|        |          |0 = SPI RX DMA Disabled
|        |          |1 = SPI RX DMA Enabled
|[3]     |TXDMAEN   |SPI TX DMA Enable
|        |          |This bit enables the SPI TX operating by through PDMA transfer, TX
|        |          |data needs to be ready in XRAM before SPI TX starting.
|        |          |0 = SPI TX DMA Disabled
|        |          |1 = SPI TX DMA Enabled
|[4]     |SPR2      |SPI Clock Rate Select
|        |          |These two bits select grades of SPI clock divider. The clock rates
|        |          |below are illustrated under FSYS condition find in Table 6.112 SPI
|        |          |Master Clock Rate Define Table
|        |          |SPR[3:0] are valid only under Master mode (MSTR = 1). If under Slave
|        |          |mode, the clock will automatically synchronize with the external clock
|        |          |on SPICLK pin from Master device up to FSYS/4 communication speed.
|[5]     |SPR3      |SPI Clock Rate Select
|        |          |These two bits select grades of SPI clock divider. The clock rates
|        |          |below are illustrated under FSYS condition find in Table 6.112 SPI
|        |          |Master Clock Rate Define Table
|        |          |SPR[3:0] are valid only under Master mode (MSTR = 1). If under Slave
|        |          |mode, the clock will automatically synchronize with the external clock
|        |          |on SPICLK pin from Master device up to FSYS/4 communication speed.
|[6]     |SPSYNC    |SPI1 Master Clock Sync with SPI0 Master Clock. This bit is only valid in SPI0CR0
|[7]     |Looptest_TAprotect_|internal MISO connect to MOSI
*/
__sfr __no_init volatile unsigned char SPI0CR1 @ 0xF3;

/**
@addtogroup SFR_PAGE1_SPI0CR1_MACRO Bit Macro Functions
Bit Macro Functions of SPI0CR1
@{ */

#define set_SPI0CR1_SPIS0        SFRS = 1; SPI0CR1 |= 0x01 /*!<Set SPI0CR1.SPIS0              */
#define set_SPI0CR1_SPIS1        SFRS = 1; SPI0CR1 |= 0x02 /*!<Set SPI0CR1.SPIS1              */
#define set_SPI0CR1_RXDMAEN      SFRS = 1; SPI0CR1 |= 0x04 /*!<Set SPI0CR1.RXDMAEN            */
#define set_SPI0CR1_TXDMAEN      SFRS = 1; SPI0CR1 |= 0x08 /*!<Set SPI0CR1.TXDMAEN            */
#define set_SPI0CR1_SPR2         SFRS = 1; SPI0CR1 |= 0x10 /*!<Set SPI0CR1.SPR2               */
#define set_SPI0CR1_SPR3         SFRS = 1; SPI0CR1 |= 0x20 /*!<Set SPI0CR1.SPR3               */
#define set_SPI0CR1_SPSYNC       SFRS = 1; SPI0CR1 |= 0x40 /*!<Set SPI0CR1.SPSYNC             */
#define set_SPI0CR1_Looptest_TAprotect_ SFRS = 1; SPI0CR1 |= 0x80 /*!<Set SPI0CR1.Looptest_TAprotect_ */

#define clr_SPI0CR1_SPIS0        SFRS = 1; SPI0CR1 &=~0x01 /*!<Clear SPI0CR1.SPIS0            */
#define clr_SPI0CR1_SPIS1        SFRS = 1; SPI0CR1 &=~0x02 /*!<Clear SPI0CR1.SPIS1            */
#define clr_SPI0CR1_RXDMAEN      SFRS = 1; SPI0CR1 &=~0x04 /*!<Clear SPI0CR1.RXDMAEN          */
#define clr_SPI0CR1_TXDMAEN      SFRS = 1; SPI0CR1 &=~0x08 /*!<Clear SPI0CR1.TXDMAEN          */
#define clr_SPI0CR1_SPR2         SFRS = 1; SPI0CR1 &=~0x10 /*!<Clear SPI0CR1.SPR2             */
#define clr_SPI0CR1_SPR3         SFRS = 1; SPI0CR1 &=~0x20 /*!<Clear SPI0CR1.SPR3             */
#define clr_SPI0CR1_SPSYNC       SFRS = 1; SPI0CR1 &=~0x40 /*!<Clear SPI0CR1.SPSYNC           */
#define clr_SPI0CR1_Looptest_TAprotect_ SFRS = 1; SPI0CR1 &=~0x80 /*!<Clear SPI0CR1.Looptest_TAprotect_ */

/**@} end of SFR_PAGE1_SPI0CR1_MACRO group */
/**@} end of SFR_PAGE1_SPI0CR1 group */

/**
   @addtogroup SFR_PAGE1_S1CON S1CON
   Special Function Register @ref S1CON
   @{ */
/**@} end of SFR_PAGE1_S1CON group */

/**
   @addtogroup SFR_PAGE1_PWM0DTEN PWM0DTEN
   Special Function Register PWM0DTEN
   @{ */

/**
@var PWM0DTEN
Address: F9H, SFR Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PDT01EN   |PWM0/1 Pair Dead-Time Insertion Enable
|        |          |This bit is valid only when PWM0/1 is under complementary mode.
|        |          |0 = No delay on GP0/GP1 pair signals.
|        |          |1 = Insert dead-time delay on the rising edge of GP0/GP1 pair signals.
|[1]     |PDT23EN   |PWM2/3 Pair Dead-Time Insertion Enable
|        |          |This bit is valid only when PWM2/3 is under complementary mode.
|        |          |0 = No delay on GP2/GP3 pair signals.
|        |          |1 = Insert dead-time delay on the rising edge of GP2/GP3 pair signals.
|[2]     |PDT45EN   |PWM4/5 Pair Dead-Time Insertion Enable
|        |          |This bit is valid only when PWM4/5 is under complementary mode.
|        |          |0 = No delay on GP4/GP5 pair signals.
|        |          |1 = Insert dead-time delay on the rising edge of GP4/GP5 pair signals.
|[3]     |0         |Reserved
|[4]     |PWMnDTCNT_8|PWM Dead-Time Counter Bit 8
|        |          |See PWMnDTCNT register.
|[7:5]   |0         |Reserved
*/
__sfr __no_init volatile unsigned char PWM0DTEN @ 0xF9;

/**
@addtogroup SFR_PAGE1_PWM0DTEN_MACRO Bit Macro Functions
Bit Macro Functions of PWM0DTEN
@{ */

#define set_PWM0DTEN_PDT01EN     SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN |= 0x01; EA = BIT_TMP /*!<Set PWM0DTEN.PDT01EN           */
#define set_PWM0DTEN_PDT23EN     SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN |= 0x02; EA = BIT_TMP /*!<Set PWM0DTEN.PDT23EN           */
#define set_PWM0DTEN_PDT45EN     SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN |= 0x04; EA = BIT_TMP /*!<Set PWM0DTEN.PDT45EN           */
#define set_PWM0DTEN_0           SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN |= 0x08; EA = BIT_TMP /*!<Set PWM0DTEN.0                 */
#define set_PWM0DTEN_PWMnDTCNT_8 SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN |= 0x10; EA = BIT_TMP /*!<Set PWM0DTEN.PWMnDTCNT_8       */


#define clr_PWM0DTEN_PDT01EN     SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN &=~0x01; EA = BIT_TMP /*!<Clear PWM0DTEN.PDT01EN         */
#define clr_PWM0DTEN_PDT23EN     SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN &=~0x02; EA = BIT_TMP /*!<Clear PWM0DTEN.PDT23EN         */
#define clr_PWM0DTEN_PDT45EN     SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN &=~0x04; EA = BIT_TMP /*!<Clear PWM0DTEN.PDT45EN         */
#define clr_PWM0DTEN_0           SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN &=~0x08; EA = BIT_TMP /*!<Clear PWM0DTEN.0               */
#define clr_PWM0DTEN_PWMnDTCNT_8 SFRS = 0; BIT_TMP = EA; EA = 0; TA = 0xAA; TA = 0x55; PWM0DTEN &=~0x10; EA = BIT_TMP /*!<Clear PWM0DTEN.PWMnDTCNT_8     */


/**@} end of SFR_PAGE1_PWM0DTEN_MACRO group */
/**@} end of SFR_PAGE1_PWM0DTEN group */

/**
   @addtogroup SFR_PAGE1_PWM0DTCNT PWM0DTCNT
   Special Function Register PWM0DTCNT
   @{ */

/**
@var PWM0DTCNT
Address: FAH, SFR Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |PWM0DTCNT[7:0]|PWM Dead-Time Counter Low Byte
|        |          |This 8-bit field combined with PWMnDTEN .4 forms a 9-bit PWM dead-time
|        |          |counter PWM0DTCNT. This counter is valid only when PWM is under
|        |          |complementary mode and the correspond PWMnDTEN bit for PWM pair is
|        |          |set.
|        |          |PWM dead-time = .
|        |          |Note that user should not modify PWM0DTCNT during PWM run time.
*/
__sfr __no_init volatile unsigned char PWM0DTCNT @ 0xFA;

/**@} end of SFR_PAGE1_PWM0DTCNT group */

/**
   @addtogroup SFR_PAGE1_PWM0MEN PWM0MEN
   Special Function Register PWM0MEN
   @{ */

/**
@var PWM0MEN
Address: FBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[5:0]   |PMENn     |PWMnCx Mask Enable
|        |          |0 = PWMnCx signal outputs from its PWM generator.
|        |          |1 = PWMnCx signal is masked by PMDx.
|        |          |Note: PMEN2~5 are only for PWM0.
*/
__sfr __no_init volatile unsigned char PWM0MEN @ 0xFB;

/**@} end of SFR_PAGE1_PWM0MEN group */

/**
   @addtogroup SFR_PAGE1_PWM0MD PWM0MD
   Special Function Register PWM0MD
   @{ */

/**
@var PWM0MD
Address: FCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PMD0      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[1]     |PMD1      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[2]     |PMD2      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[3]     |PMD3      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[4]     |PMD4      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[5]     |PMD5      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[7:6]   |0         |Reserved
|        |          |The bits are always read as 0.
*/
__sfr __no_init volatile unsigned char PWM0MD @ 0xFC;

/**
@addtogroup SFR_PAGE1_PWM0MD_MACRO Bit Macro Functions
Bit Macro Functions of PWM0MD
@{ */

#define set_PWM0MD_PMD0          SFRS = 1; PWM0MD |= 0x01 /*!<Set PWM0MD.PMD0                */
#define set_PWM0MD_PMD1          SFRS = 1; PWM0MD |= 0x02 /*!<Set PWM0MD.PMD1                */
#define set_PWM0MD_PMD2          SFRS = 1; PWM0MD |= 0x04 /*!<Set PWM0MD.PMD2                */
#define set_PWM0MD_PMD3          SFRS = 1; PWM0MD |= 0x08 /*!<Set PWM0MD.PMD3                */
#define set_PWM0MD_PMD4          SFRS = 1; PWM0MD |= 0x10 /*!<Set PWM0MD.PMD4                */
#define set_PWM0MD_PMD5          SFRS = 1; PWM0MD |= 0x20 /*!<Set PWM0MD.PMD5                */


#define clr_PWM0MD_PMD0          SFRS = 1; PWM0MD &=~0x01 /*!<Clear PWM0MD.PMD0              */
#define clr_PWM0MD_PMD1          SFRS = 1; PWM0MD &=~0x02 /*!<Clear PWM0MD.PMD1              */
#define clr_PWM0MD_PMD2          SFRS = 1; PWM0MD &=~0x04 /*!<Clear PWM0MD.PMD2              */
#define clr_PWM0MD_PMD3          SFRS = 1; PWM0MD &=~0x08 /*!<Clear PWM0MD.PMD3              */
#define clr_PWM0MD_PMD4          SFRS = 1; PWM0MD &=~0x10 /*!<Clear PWM0MD.PMD4              */
#define clr_PWM0MD_PMD5          SFRS = 1; PWM0MD &=~0x20 /*!<Clear PWM0MD.PMD5              */


/**@} end of SFR_PAGE1_PWM0MD_MACRO group */
/**@} end of SFR_PAGE1_PWM0MD group */

/**
   @addtogroup SFR_PAGE1_LVRDIS LVRDIS
   Special Function Register LVRDIS
   @{ */

/**
@var LVRDIS
Address: FFH, Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |LVRDIS[7:0]|LVR Disable
|        |          |To first writing 5AH to the LVRDIS and immediately followed by a
|        |          |writing of A5H will disable LVR.
*/
__sfr __no_init volatile unsigned char LVRDIS @ 0xFF;

/**@} end of SFR_PAGE1_LVRDIS group */

/**@} end of SFR_PAGE1 group */


/**
 @addtogroup SFR_PAGE2 SFR Page 2
 @{ */

/**
   @addtogroup SFR_PAGE2_P0 P0
   Special Function Register @ref P0
   @{ */
/**@} end of SFR_PAGE2_P0 group */

/**
   @addtogroup SFR_PAGE2_DPL DPL
   Special Function Register @ref DPL
   @{ */
/**@} end of SFR_PAGE2_DPL group */

/**
   @addtogroup SFR_PAGE2_DPH DPH
   Special Function Register @ref DPH
   @{ */
/**@} end of SFR_PAGE2_DPH group */

/**
   @addtogroup SFR_PAGE2_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE2_PCON group */

/**
   @addtogroup SFR_PAGE2_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE2_PCON group */

/**
   @addtogroup SFR_PAGE2_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE2_PCON group */

/**
   @addtogroup SFR_PAGE2_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE2_PCON group */

/**
   @addtogroup SFR_PAGE2_TCON TCON
   Special Function Register @ref TCON
   @{ */
/**@} end of SFR_PAGE2_TCON group */

/**
   @addtogroup SFR_PAGE2_TMOD TMOD
   Special Function Register @ref TMOD
   @{ */
/**@} end of SFR_PAGE2_TMOD group */

/**
   @addtogroup SFR_PAGE2_P1 P1
   Special Function Register @ref P1
   @{ */
/**@} end of SFR_PAGE2_P1 group */

/**
   @addtogroup SFR_PAGE2_SFRS SFRS
   Special Function Register @ref SFRS
   @{ */
/**@} end of SFR_PAGE2_SFRS group */

/**
   @addtogroup SFR_PAGE2_P6MF10 P6MF10
   Special Function Register P6MF10
   @{ */

/**
@var P6MF10
Address: 92H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P6MF0_0   |P6.0 multi-function select
|[1]     |P6MF0_1   |P6.0 multi-function select
|[2]     |P6MF0_2   |P6.0 multi-function select
|[3]     |P6MF0_3   |P6.0 multi-function select
|[4]     |P6MF1_0   |P6.1 multi-function select
|[5]     |P6MF1_1   |P6.1 multi-function select
|[6]     |P6MF1_2   |P6.1 multi-function select
|[7]     |P6MF1_3   |P6.1 multi-function select
*/
__sfr __no_init volatile unsigned char P6MF10 @ 0x92;

/**
@addtogroup SFR_PAGE2_P6MF10_MACRO Bit Macro Functions
Bit Macro Functions of P6MF10
@{ */

#define set_P6MF10_P6MF0_0       SFRS = 2; P6MF10 |= 0x01 /*!<Set P6MF10.P6MF0_0             */
#define set_P6MF10_P6MF0_1       SFRS = 2; P6MF10 |= 0x02 /*!<Set P6MF10.P6MF0_1             */
#define set_P6MF10_P6MF0_2       SFRS = 2; P6MF10 |= 0x04 /*!<Set P6MF10.P6MF0_2             */
#define set_P6MF10_P6MF0_3       SFRS = 2; P6MF10 |= 0x08 /*!<Set P6MF10.P6MF0_3             */
#define set_P6MF10_P6MF1_0       SFRS = 2; P6MF10 |= 0x10 /*!<Set P6MF10.P6MF1_0             */
#define set_P6MF10_P6MF1_1       SFRS = 2; P6MF10 |= 0x20 /*!<Set P6MF10.P6MF1_1             */
#define set_P6MF10_P6MF1_2       SFRS = 2; P6MF10 |= 0x40 /*!<Set P6MF10.P6MF1_2             */
#define set_P6MF10_P6MF1_3       SFRS = 2; P6MF10 |= 0x80 /*!<Set P6MF10.P6MF1_3             */

#define clr_P6MF10_P6MF0_0       SFRS = 2; P6MF10 &=~0x01 /*!<Clear P6MF10.P6MF0_0           */
#define clr_P6MF10_P6MF0_1       SFRS = 2; P6MF10 &=~0x02 /*!<Clear P6MF10.P6MF0_1           */
#define clr_P6MF10_P6MF0_2       SFRS = 2; P6MF10 &=~0x04 /*!<Clear P6MF10.P6MF0_2           */
#define clr_P6MF10_P6MF0_3       SFRS = 2; P6MF10 &=~0x08 /*!<Clear P6MF10.P6MF0_3           */
#define clr_P6MF10_P6MF1_0       SFRS = 2; P6MF10 &=~0x10 /*!<Clear P6MF10.P6MF1_0           */
#define clr_P6MF10_P6MF1_1       SFRS = 2; P6MF10 &=~0x20 /*!<Clear P6MF10.P6MF1_1           */
#define clr_P6MF10_P6MF1_2       SFRS = 2; P6MF10 &=~0x40 /*!<Clear P6MF10.P6MF1_2           */
#define clr_P6MF10_P6MF1_3       SFRS = 2; P6MF10 &=~0x80 /*!<Clear P6MF10.P6MF1_3           */

/**@} end of SFR_PAGE2_P6MF10_MACRO group */
/**@} end of SFR_PAGE2_P6MF10 group */

/**
   @addtogroup SFR_PAGE2_P6MF32 P6MF32
   Special Function Register P6MF32
   @{ */

/**
@var P6MF32
Address: 93H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P6MF2_0   |P6.2 multi-function select
|[1]     |P6MF2_1   |P6.2 multi-function select
|[2]     |P6MF2_2   |P6.2 multi-function select
|[3]     |P6MF2_3   |P6.2 multi-function select
|[4]     |P6MF3_0   |P6.3 multi-function select
|[5]     |P6MF3_1   |P6.3 multi-function select
|[6]     |P6MF3_2   |P6.3 multi-function select
|[7]     |P6MF3_3   |P6.3 multi-function select
*/
__sfr __no_init volatile unsigned char P6MF32 @ 0x93;

/**
@addtogroup SFR_PAGE2_P6MF32_MACRO Bit Macro Functions
Bit Macro Functions of P6MF32
@{ */

#define set_P6MF32_P6MF2_0       SFRS = 2; P6MF32 |= 0x01 /*!<Set P6MF32.P6MF2_0             */
#define set_P6MF32_P6MF2_1       SFRS = 2; P6MF32 |= 0x02 /*!<Set P6MF32.P6MF2_1             */
#define set_P6MF32_P6MF2_2       SFRS = 2; P6MF32 |= 0x04 /*!<Set P6MF32.P6MF2_2             */
#define set_P6MF32_P6MF2_3       SFRS = 2; P6MF32 |= 0x08 /*!<Set P6MF32.P6MF2_3             */
#define set_P6MF32_P6MF3_0       SFRS = 2; P6MF32 |= 0x10 /*!<Set P6MF32.P6MF3_0             */
#define set_P6MF32_P6MF3_1       SFRS = 2; P6MF32 |= 0x20 /*!<Set P6MF32.P6MF3_1             */
#define set_P6MF32_P6MF3_2       SFRS = 2; P6MF32 |= 0x40 /*!<Set P6MF32.P6MF3_2             */
#define set_P6MF32_P6MF3_3       SFRS = 2; P6MF32 |= 0x80 /*!<Set P6MF32.P6MF3_3             */

#define clr_P6MF32_P6MF2_0       SFRS = 2; P6MF32 &=~0x01 /*!<Clear P6MF32.P6MF2_0           */
#define clr_P6MF32_P6MF2_1       SFRS = 2; P6MF32 &=~0x02 /*!<Clear P6MF32.P6MF2_1           */
#define clr_P6MF32_P6MF2_2       SFRS = 2; P6MF32 &=~0x04 /*!<Clear P6MF32.P6MF2_2           */
#define clr_P6MF32_P6MF2_3       SFRS = 2; P6MF32 &=~0x08 /*!<Clear P6MF32.P6MF2_3           */
#define clr_P6MF32_P6MF3_0       SFRS = 2; P6MF32 &=~0x10 /*!<Clear P6MF32.P6MF3_0           */
#define clr_P6MF32_P6MF3_1       SFRS = 2; P6MF32 &=~0x20 /*!<Clear P6MF32.P6MF3_1           */
#define clr_P6MF32_P6MF3_2       SFRS = 2; P6MF32 &=~0x40 /*!<Clear P6MF32.P6MF3_2           */
#define clr_P6MF32_P6MF3_3       SFRS = 2; P6MF32 &=~0x80 /*!<Clear P6MF32.P6MF3_3           */

/**@} end of SFR_PAGE2_P6MF32_MACRO group */
/**@} end of SFR_PAGE2_P6MF32 group */

/**
   @addtogroup SFR_PAGE2_P6MF54 P6MF54
   Special Function Register P6MF54
   @{ */

/**
@var P6MF54
Address: 94H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P6MF4_0   |P6.4 multi-function select
|[1]     |P6MF4_1   |P6.4 multi-function select
|[2]     |P6MF4_2   |P6.4 multi-function select
|[3]     |P6MF4_3   |P6.4 multi-function select
|[4]     |P6MF5_0   |P6.5 multi-function select
|[5]     |P6MF5_1   |P6.5 multi-function select
|[6]     |P6MF5_2   |P6.5 multi-function select
|[7]     |P6MF5_3   |P6.5 multi-function select
*/
__sfr __no_init volatile unsigned char P6MF54 @ 0x94;

/**
@addtogroup SFR_PAGE2_P6MF54_MACRO Bit Macro Functions
Bit Macro Functions of P6MF54
@{ */

#define set_P6MF54_P6MF4_0       SFRS = 2; P6MF54 |= 0x01 /*!<Set P6MF54.P6MF4_0             */
#define set_P6MF54_P6MF4_1       SFRS = 2; P6MF54 |= 0x02 /*!<Set P6MF54.P6MF4_1             */
#define set_P6MF54_P6MF4_2       SFRS = 2; P6MF54 |= 0x04 /*!<Set P6MF54.P6MF4_2             */
#define set_P6MF54_P6MF4_3       SFRS = 2; P6MF54 |= 0x08 /*!<Set P6MF54.P6MF4_3             */
#define set_P6MF54_P6MF5_0       SFRS = 2; P6MF54 |= 0x10 /*!<Set P6MF54.P6MF5_0             */
#define set_P6MF54_P6MF5_1       SFRS = 2; P6MF54 |= 0x20 /*!<Set P6MF54.P6MF5_1             */
#define set_P6MF54_P6MF5_2       SFRS = 2; P6MF54 |= 0x40 /*!<Set P6MF54.P6MF5_2             */
#define set_P6MF54_P6MF5_3       SFRS = 2; P6MF54 |= 0x80 /*!<Set P6MF54.P6MF5_3             */

#define clr_P6MF54_P6MF4_0       SFRS = 2; P6MF54 &=~0x01 /*!<Clear P6MF54.P6MF4_0           */
#define clr_P6MF54_P6MF4_1       SFRS = 2; P6MF54 &=~0x02 /*!<Clear P6MF54.P6MF4_1           */
#define clr_P6MF54_P6MF4_2       SFRS = 2; P6MF54 &=~0x04 /*!<Clear P6MF54.P6MF4_2           */
#define clr_P6MF54_P6MF4_3       SFRS = 2; P6MF54 &=~0x08 /*!<Clear P6MF54.P6MF4_3           */
#define clr_P6MF54_P6MF5_0       SFRS = 2; P6MF54 &=~0x10 /*!<Clear P6MF54.P6MF5_0           */
#define clr_P6MF54_P6MF5_1       SFRS = 2; P6MF54 &=~0x20 /*!<Clear P6MF54.P6MF5_1           */
#define clr_P6MF54_P6MF5_2       SFRS = 2; P6MF54 &=~0x40 /*!<Clear P6MF54.P6MF5_2           */
#define clr_P6MF54_P6MF5_3       SFRS = 2; P6MF54 &=~0x80 /*!<Clear P6MF54.P6MF5_3           */

/**@} end of SFR_PAGE2_P6MF54_MACRO group */
/**@} end of SFR_PAGE2_P6MF54 group */

/**
   @addtogroup SFR_PAGE2_P6MF76 P6MF76
   Special Function Register P6MF76
   @{ */

/**
@var P6MF76
Address: 95H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF6_0   |P5.6 multi-function select
|[1]     |P5MF6_1   |P5.6 multi-function select
|[2]     |P5MF6_2   |P5.6 multi-function select
|[3]     |P5MF6_3   |P5.6 multi-function select
|[4]     |P5MF7_0   |P5.7 multi-function select
|[5]     |P5MF7_1   |P5.7 multi-function select
|[6]     |P5MF7_2   |P5.7 multi-function select
|[7]     |P5MF7_3   |P5.7 multi-function select
*/
__sfr __no_init volatile unsigned char P6MF76 @ 0x95;

/**
@addtogroup SFR_PAGE2_P6MF76_MACRO Bit Macro Functions
Bit Macro Functions of P6MF76
@{ */

#define set_P6MF76_P5MF6_0       SFRS = 2; P6MF76 |= 0x01 /*!<Set P6MF76.P5MF6_0             */
#define set_P6MF76_P5MF6_1       SFRS = 2; P6MF76 |= 0x02 /*!<Set P6MF76.P5MF6_1             */
#define set_P6MF76_P5MF6_2       SFRS = 2; P6MF76 |= 0x04 /*!<Set P6MF76.P5MF6_2             */
#define set_P6MF76_P5MF6_3       SFRS = 2; P6MF76 |= 0x08 /*!<Set P6MF76.P5MF6_3             */
#define set_P6MF76_P5MF7_0       SFRS = 2; P6MF76 |= 0x10 /*!<Set P6MF76.P5MF7_0             */
#define set_P6MF76_P5MF7_1       SFRS = 2; P6MF76 |= 0x20 /*!<Set P6MF76.P5MF7_1             */
#define set_P6MF76_P5MF7_2       SFRS = 2; P6MF76 |= 0x40 /*!<Set P6MF76.P5MF7_2             */
#define set_P6MF76_P5MF7_3       SFRS = 2; P6MF76 |= 0x80 /*!<Set P6MF76.P5MF7_3             */

#define clr_P6MF76_P5MF6_0       SFRS = 2; P6MF76 &=~0x01 /*!<Clear P6MF76.P5MF6_0           */
#define clr_P6MF76_P5MF6_1       SFRS = 2; P6MF76 &=~0x02 /*!<Clear P6MF76.P5MF6_1           */
#define clr_P6MF76_P5MF6_2       SFRS = 2; P6MF76 &=~0x04 /*!<Clear P6MF76.P5MF6_2           */
#define clr_P6MF76_P5MF6_3       SFRS = 2; P6MF76 &=~0x08 /*!<Clear P6MF76.P5MF6_3           */
#define clr_P6MF76_P5MF7_0       SFRS = 2; P6MF76 &=~0x10 /*!<Clear P6MF76.P5MF7_0           */
#define clr_P6MF76_P5MF7_1       SFRS = 2; P6MF76 &=~0x20 /*!<Clear P6MF76.P5MF7_1           */
#define clr_P6MF76_P5MF7_2       SFRS = 2; P6MF76 &=~0x40 /*!<Clear P6MF76.P5MF7_2           */
#define clr_P6MF76_P5MF7_3       SFRS = 2; P6MF76 &=~0x80 /*!<Clear P6MF76.P5MF7_3           */

/**@} end of SFR_PAGE2_P6MF76_MACRO group */
/**@} end of SFR_PAGE2_P6MF76 group */

/**
   @addtogroup SFR_PAGE2_SCON SCON
   Special Function Register @ref SCON
   @{ */
/**@} end of SFR_PAGE2_SCON group */

/**
   @addtogroup SFR_PAGE2_P2 P2
   Special Function Register @ref P2
   @{ */
/**@} end of SFR_PAGE2_P2 group */

/**
   @addtogroup SFR_PAGE2_I2C0ADDR1 I2C0ADDR1
   Special Function Register I2C0ADDR1
   @{ */

/**
@var I2C0ADDR1
Address: A1H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C0ADDR1 @ 0xA1;

/**
@addtogroup SFR_PAGE2_I2C0ADDR1_MACRO Bit Macro Functions
Bit Macro Functions of I2C0ADDR1
@{ */

#define set_I2C0ADDR1_GC         SFRS = 2; I2C0ADDR1 |= 0x01 /*!<Set I2C0ADDR1.GC               */


#define clr_I2C0ADDR1_GC         SFRS = 2; I2C0ADDR1 &=~0x01 /*!<Clear I2C0ADDR1.GC             */


/**@} end of SFR_PAGE2_I2C0ADDR1_MACRO group */
/**@} end of SFR_PAGE2_I2C0ADDR1 group */

/**
   @addtogroup SFR_PAGE2_I2C0ADDR2 I2C0ADDR2
   Special Function Register I2C0ADDR2
   @{ */

/**
@var I2C0ADDR2
Address: A2H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C0ADDR2 @ 0xA2;

/**
@addtogroup SFR_PAGE2_I2C0ADDR2_MACRO Bit Macro Functions
Bit Macro Functions of I2C0ADDR2
@{ */

#define set_I2C0ADDR2_GC         SFRS = 2; I2C0ADDR2 |= 0x01 /*!<Set I2C0ADDR2.GC               */


#define clr_I2C0ADDR2_GC         SFRS = 2; I2C0ADDR2 &=~0x01 /*!<Clear I2C0ADDR2.GC             */


/**@} end of SFR_PAGE2_I2C0ADDR2_MACRO group */
/**@} end of SFR_PAGE2_I2C0ADDR2 group */

/**
   @addtogroup SFR_PAGE2_I2C0ADDR3 I2C0ADDR3
   Special Function Register I2C0ADDR3
   @{ */

/**
@var I2C0ADDR3
Address: A3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C0ADDR3 @ 0xA3;

/**
@addtogroup SFR_PAGE2_I2C0ADDR3_MACRO Bit Macro Functions
Bit Macro Functions of I2C0ADDR3
@{ */

#define set_I2C0ADDR3_GC         SFRS = 2; I2C0ADDR3 |= 0x01 /*!<Set I2C0ADDR3.GC               */


#define clr_I2C0ADDR3_GC         SFRS = 2; I2C0ADDR3 &=~0x01 /*!<Clear I2C0ADDR3.GC             */


/**@} end of SFR_PAGE2_I2C0ADDR3_MACRO group */
/**@} end of SFR_PAGE2_I2C0ADDR3 group */

/**
   @addtogroup SFR_PAGE2_I2C1ADDR1 I2C1ADDR1
   Special Function Register I2C1ADDR1
   @{ */

/**
@var I2C1ADDR1
Address: A4H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C1ADDR1 @ 0xA4;

/**
@addtogroup SFR_PAGE2_I2C1ADDR1_MACRO Bit Macro Functions
Bit Macro Functions of I2C1ADDR1
@{ */

#define set_I2C1ADDR1_GC         SFRS = 2; I2C1ADDR1 |= 0x01 /*!<Set I2C1ADDR1.GC               */


#define clr_I2C1ADDR1_GC         SFRS = 2; I2C1ADDR1 &=~0x01 /*!<Clear I2C1ADDR1.GC             */


/**@} end of SFR_PAGE2_I2C1ADDR1_MACRO group */
/**@} end of SFR_PAGE2_I2C1ADDR1 group */

/**
   @addtogroup SFR_PAGE2_I2C1ADDR2 I2C1ADDR2
   Special Function Register I2C1ADDR2
   @{ */

/**
@var I2C1ADDR2
Address: A5H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C1ADDR2 @ 0xA5;

/**
@addtogroup SFR_PAGE2_I2C1ADDR2_MACRO Bit Macro Functions
Bit Macro Functions of I2C1ADDR2
@{ */

#define set_I2C1ADDR2_GC         SFRS = 2; I2C1ADDR2 |= 0x01 /*!<Set I2C1ADDR2.GC               */


#define clr_I2C1ADDR2_GC         SFRS = 2; I2C1ADDR2 &=~0x01 /*!<Clear I2C1ADDR2.GC             */


/**@} end of SFR_PAGE2_I2C1ADDR2_MACRO group */
/**@} end of SFR_PAGE2_I2C1ADDR2 group */

/**
   @addtogroup SFR_PAGE2_I2C1ADDR3 I2C1ADDR3
   Special Function Register I2C1ADDR3
   @{ */

/**
@var I2C1ADDR3
Address: A6H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/
__sfr __no_init volatile unsigned char I2C1ADDR3 @ 0xA6;

/**
@addtogroup SFR_PAGE2_I2C1ADDR3_MACRO Bit Macro Functions
Bit Macro Functions of I2C1ADDR3
@{ */

#define set_I2C1ADDR3_GC         SFRS = 2; I2C1ADDR3 |= 0x01 /*!<Set I2C1ADDR3.GC               */


#define clr_I2C1ADDR3_GC         SFRS = 2; I2C1ADDR3 &=~0x01 /*!<Clear I2C1ADDR3.GC             */


/**@} end of SFR_PAGE2_I2C1ADDR3_MACRO group */
/**@} end of SFR_PAGE2_I2C1ADDR3 group */

/**
   @addtogroup SFR_PAGE2_IE IE
   Special Function Register @ref IE
   @{ */
/**@} end of SFR_PAGE2_IE group */

/**
   @addtogroup SFR_PAGE2_IE IE
   Special Function Register @ref IE
   @{ */
/**@} end of SFR_PAGE2_IE group */

/**
   @addtogroup SFR_PAGE2_DMA3CR0 DMA3CR0
   Special Function Register DMA3CR0
   @{ */

/**
@var DMA3CR0
Address: ABH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/
__sfr __no_init volatile unsigned char DMA3CR0 @ 0xAB;

/**
@addtogroup SFR_PAGE2_DMA3CR0_MACRO Bit Macro Functions
Bit Macro Functions of DMA3CR0
@{ */

#define set_DMA3CR0_EN           SFRS = 2; DMA3CR0 |= 0x01 /*!<Set DMA3CR0.EN                 */
#define set_DMA3CR0_RUN          SFRS = 2; DMA3CR0 |= 0x02 /*!<Set DMA3CR0.RUN                */
#define set_DMA3CR0_FIE          SFRS = 2; DMA3CR0 |= 0x04 /*!<Set DMA3CR0.FIE                */
#define set_DMA3CR0_HIE          SFRS = 2; DMA3CR0 |= 0x08 /*!<Set DMA3CR0.HIE                */


#define clr_DMA3CR0_EN           SFRS = 2; DMA3CR0 &=~0x01 /*!<Clear DMA3CR0.EN               */
#define clr_DMA3CR0_RUN          SFRS = 2; DMA3CR0 &=~0x02 /*!<Clear DMA3CR0.RUN              */
#define clr_DMA3CR0_FIE          SFRS = 2; DMA3CR0 &=~0x04 /*!<Clear DMA3CR0.FIE              */
#define clr_DMA3CR0_HIE          SFRS = 2; DMA3CR0 &=~0x08 /*!<Clear DMA3CR0.HIE              */


/**@} end of SFR_PAGE2_DMA3CR0_MACRO group */
/**@} end of SFR_PAGE2_DMA3CR0 group */

/**
   @addtogroup SFR_PAGE2_P3 P3
   Special Function Register @ref P3
   @{ */
/**@} end of SFR_PAGE2_P3 group */

/**
   @addtogroup SFR_PAGE2_DMA2CR0 DMA2CR0
   Special Function Register DMA2CR0
   @{ */

/**
@var DMA2CR0
Address: B3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/
__sfr __no_init volatile unsigned char DMA2CR0 @ 0xB3;

/**
@addtogroup SFR_PAGE2_DMA2CR0_MACRO Bit Macro Functions
Bit Macro Functions of DMA2CR0
@{ */

#define set_DMA2CR0_EN           SFRS = 2; DMA2CR0 |= 0x01 /*!<Set DMA2CR0.EN                 */
#define set_DMA2CR0_RUN          SFRS = 2; DMA2CR0 |= 0x02 /*!<Set DMA2CR0.RUN                */
#define set_DMA2CR0_FIE          SFRS = 2; DMA2CR0 |= 0x04 /*!<Set DMA2CR0.FIE                */
#define set_DMA2CR0_HIE          SFRS = 2; DMA2CR0 |= 0x08 /*!<Set DMA2CR0.HIE                */


#define clr_DMA2CR0_EN           SFRS = 2; DMA2CR0 &=~0x01 /*!<Clear DMA2CR0.EN               */
#define clr_DMA2CR0_RUN          SFRS = 2; DMA2CR0 &=~0x02 /*!<Clear DMA2CR0.RUN              */
#define clr_DMA2CR0_FIE          SFRS = 2; DMA2CR0 &=~0x04 /*!<Clear DMA2CR0.FIE              */
#define clr_DMA2CR0_HIE          SFRS = 2; DMA2CR0 &=~0x08 /*!<Clear DMA2CR0.HIE              */


/**@} end of SFR_PAGE2_DMA2CR0_MACRO group */
/**@} end of SFR_PAGE2_DMA2CR0 group */

/**
   @addtogroup SFR_PAGE2_IP IP
   Special Function Register @ref IP
   @{ */
/**@} end of SFR_PAGE2_IP group */

/**
   @addtogroup SFR_PAGE2_CWKH CWKH
   Special Function Register CWKH
   @{ */

/**
@var CWKH
Address: BEH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CWK[15:8] |WKT Current Count Value Low Byte High Byte
|        |          |It is store value of WKT current count.
*/
__sfr __no_init volatile unsigned char CWKH @ 0xBE;

/**@} end of SFR_PAGE2_CWKH group */

/**
   @addtogroup SFR_PAGE2_RWKH RWKH
   Special Function Register RWKH
   @{ */

/**
@var RWKH
Address: BFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RWK[15:8] |WKT Reload High Byte
|        |          |It holds the 16-bit reload value of WKT. Note that RWK should not be
|        |          |FFFFH if the pre-scale is 1/1 for implement limitation.
*/
__sfr __no_init volatile unsigned char RWKH @ 0xBF;

/**@} end of SFR_PAGE2_RWKH group */

/**
   @addtogroup SFR_PAGE2_I2C0CON I2C0CON
   Special Function Register @ref I2C0CON
   @{ */
/**@} end of SFR_PAGE2_I2C0CON group */

/**
   @addtogroup SFR_PAGE2_TA TA
   Special Function Register @ref TA
   @{ */
/**@} end of SFR_PAGE2_TA group */

/**
   @addtogroup SFR_PAGE2_T2CON T2CON
   Special Function Register @ref T2CON
   @{ */
/**@} end of SFR_PAGE2_T2CON group */

/**
   @addtogroup SFR_PAGE2_I2C0ADDRM I2C0ADDRM
   Special Function Register I2C0ADDRM
   @{ */

/**
@var I2C0ADDRM
Address: CFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CnADDRM |I2Cn
|        |          |Address Mask
|        |          |Mask with bit
*/
__sfr __no_init volatile unsigned char I2C0ADDRM @ 0xCF;

/**@} end of SFR_PAGE2_I2C0ADDRM group */

/**
   @addtogroup SFR_PAGE2_PSW PSW
   Special Function Register @ref PSW
   @{ */
/**@} end of SFR_PAGE2_PSW group */

/**
   @addtogroup SFR_PAGE2_I2C1ADDRM I2C1ADDRM
   Special Function Register I2C1ADDRM
   @{ */

/**
@var I2C1ADDRM
Address: D7H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CnADDRM |I2Cn
|        |          |Address Mask
|        |          |Mask with bit
*/
__sfr __no_init volatile unsigned char I2C1ADDRM @ 0xD7;

/**@} end of SFR_PAGE2_I2C1ADDRM group */

/**
   @addtogroup SFR_PAGE2_P4 P4
   Special Function Register @ref P4
   @{ */
/**@} end of SFR_PAGE2_P4 group */

/**
   @addtogroup SFR_PAGE2_SC1IE SC1IE
   Special Function Register SC1IE
   @{ */

/**
@var SC1IE
Address: DDH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIEN    |Receive Data Reach Interrupt Enable Bit
|        |          |This field is used to enable received data interrupt.
|        |          |0 = Receive data interrupt Disabled.
|        |          |1 = Receive data interrupt Enabled.
|[1]     |TBEIEN    |Transmit Buffer Empty Interrupt Enable Bit
|        |          |This field is used to enable transmit buffer empty interrupt.
|        |          |0 = Transmit buffer empty interrupt Disabled.
|        |          |1 = Transmit buffer empty interrupt Enabled.
|[2]     |TERRIEN   |Transfer Error Interrupt Enable Bit
|        |          |This field is used to enable transfer error interrupt. The transfer
|        |          |error states is at SC0TSR register which includes receiver break error
|        |          |BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]), receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |0 = Transfer error interrupt Disabled.
|        |          |1 = Transfer error interrupt Enabled.
|[3]     |BGTIEN    |Block Guard Time Interrupt Enable Bit
|        |          |This field is used to enable block guard time interrupt.
|        |          |0 = Block guard time interrupt Disabled.
|        |          |1 = Block guard time interrupt Enabled.
|[4]     |ACERRIEN  |Auto Convention Error Interrupt Enable Bit
|        |          |This field is used to enable auto-convention error interrupt.
|        |          |0 = Auto-convention error interrupt Disabled.
|        |          |1 = Auto-convention error interrupt Enabled.
|[7:5]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char SC1IE @ 0xDD;

/**
@addtogroup SFR_PAGE2_SC1IE_MACRO Bit Macro Functions
Bit Macro Functions of SC1IE
@{ */

#define set_SC1IE_RDAIEN         SFRS = 2; SC1IE |= 0x01 /*!<Set SC1IE.RDAIEN               */
#define set_SC1IE_TBEIEN         SFRS = 2; SC1IE |= 0x02 /*!<Set SC1IE.TBEIEN               */
#define set_SC1IE_TERRIEN        SFRS = 2; SC1IE |= 0x04 /*!<Set SC1IE.TERRIEN              */
#define set_SC1IE_BGTIEN         SFRS = 2; SC1IE |= 0x08 /*!<Set SC1IE.BGTIEN               */
#define set_SC1IE_ACERRIEN       SFRS = 2; SC1IE |= 0x10 /*!<Set SC1IE.ACERRIEN             */

#define clr_SC1IE_RDAIEN         SFRS = 2; SC1IE &=~0x01 /*!<Clear SC1IE.RDAIEN             */
#define clr_SC1IE_TBEIEN         SFRS = 2; SC1IE &=~0x02 /*!<Clear SC1IE.TBEIEN             */
#define clr_SC1IE_TERRIEN        SFRS = 2; SC1IE &=~0x04 /*!<Clear SC1IE.TERRIEN            */
#define clr_SC1IE_BGTIEN         SFRS = 2; SC1IE &=~0x08 /*!<Clear SC1IE.BGTIEN             */
#define clr_SC1IE_ACERRIEN       SFRS = 2; SC1IE &=~0x10 /*!<Clear SC1IE.ACERRIEN           */

/**@} end of SFR_PAGE2_SC1IE_MACRO group */
/**@} end of SFR_PAGE2_SC1IE group */

/**
   @addtogroup SFR_PAGE2_ACC ACC
   Special Function Register @ref ACC
   @{ */
/**@} end of SFR_PAGE2_ACC group */

/**
   @addtogroup SFR_PAGE2_P5MF32 P5MF32
   Special Function Register P5MF32
   @{ */

/**
@var P5MF32
Address: E1H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF2_0   |P5.2 multi-function select
|[1]     |P5MF2_1   |P5.2 multi-function select
|[2]     |P5MF2_2   |P5.2 multi-function select
|[3]     |P5MF2_3   |P5.2 multi-function select
|[4]     |P5MF3_0   |P5.3 multi-function select
|[5]     |P5MF3_1   |P5.3 multi-function select
|[6]     |P5MF3_2   |P5.3 multi-function select
|[7]     |P5MF3_3   |P5.3 multi-function select
*/
__sfr __no_init volatile unsigned char P5MF32 @ 0xE1;

/**
@addtogroup SFR_PAGE2_P5MF32_MACRO Bit Macro Functions
Bit Macro Functions of P5MF32
@{ */

#define set_P5MF32_P5MF2_0       SFRS = 2; P5MF32 |= 0x01 /*!<Set P5MF32.P5MF2_0             */
#define set_P5MF32_P5MF2_1       SFRS = 2; P5MF32 |= 0x02 /*!<Set P5MF32.P5MF2_1             */
#define set_P5MF32_P5MF2_2       SFRS = 2; P5MF32 |= 0x04 /*!<Set P5MF32.P5MF2_2             */
#define set_P5MF32_P5MF2_3       SFRS = 2; P5MF32 |= 0x08 /*!<Set P5MF32.P5MF2_3             */
#define set_P5MF32_P5MF3_0       SFRS = 2; P5MF32 |= 0x10 /*!<Set P5MF32.P5MF3_0             */
#define set_P5MF32_P5MF3_1       SFRS = 2; P5MF32 |= 0x20 /*!<Set P5MF32.P5MF3_1             */
#define set_P5MF32_P5MF3_2       SFRS = 2; P5MF32 |= 0x40 /*!<Set P5MF32.P5MF3_2             */
#define set_P5MF32_P5MF3_3       SFRS = 2; P5MF32 |= 0x80 /*!<Set P5MF32.P5MF3_3             */

#define clr_P5MF32_P5MF2_0       SFRS = 2; P5MF32 &=~0x01 /*!<Clear P5MF32.P5MF2_0           */
#define clr_P5MF32_P5MF2_1       SFRS = 2; P5MF32 &=~0x02 /*!<Clear P5MF32.P5MF2_1           */
#define clr_P5MF32_P5MF2_2       SFRS = 2; P5MF32 &=~0x04 /*!<Clear P5MF32.P5MF2_2           */
#define clr_P5MF32_P5MF2_3       SFRS = 2; P5MF32 &=~0x08 /*!<Clear P5MF32.P5MF2_3           */
#define clr_P5MF32_P5MF3_0       SFRS = 2; P5MF32 &=~0x10 /*!<Clear P5MF32.P5MF3_0           */
#define clr_P5MF32_P5MF3_1       SFRS = 2; P5MF32 &=~0x20 /*!<Clear P5MF32.P5MF3_1           */
#define clr_P5MF32_P5MF3_2       SFRS = 2; P5MF32 &=~0x40 /*!<Clear P5MF32.P5MF3_2           */
#define clr_P5MF32_P5MF3_3       SFRS = 2; P5MF32 &=~0x80 /*!<Clear P5MF32.P5MF3_3           */

/**@} end of SFR_PAGE2_P5MF32_MACRO group */
/**@} end of SFR_PAGE2_P5MF32 group */

/**
   @addtogroup SFR_PAGE2_P5MF54 P5MF54
   Special Function Register P5MF54
   @{ */

/**
@var P5MF54
Address: E2H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF4_0   |P5.4 multi-function select
|[1]     |P5MF4_1   |P5.4 multi-function select
|[2]     |P5MF4_2   |P5.4 multi-function select
|[3]     |P5MF4_3   |P5.4 multi-function select
|[4]     |P5MF5_0   |P5.5 multi-function select
|[5]     |P5MF5_1   |P5.5 multi-function select
|[6]     |P5MF5_2   |P5.5 multi-function select
|[7]     |P5MF5_3   |P5.5 multi-function select
*/
__sfr __no_init volatile unsigned char P5MF54 @ 0xE2;

/**
@addtogroup SFR_PAGE2_P5MF54_MACRO Bit Macro Functions
Bit Macro Functions of P5MF54
@{ */

#define set_P5MF54_P5MF4_0       SFRS = 2; P5MF54 |= 0x01 /*!<Set P5MF54.P5MF4_0             */
#define set_P5MF54_P5MF4_1       SFRS = 2; P5MF54 |= 0x02 /*!<Set P5MF54.P5MF4_1             */
#define set_P5MF54_P5MF4_2       SFRS = 2; P5MF54 |= 0x04 /*!<Set P5MF54.P5MF4_2             */
#define set_P5MF54_P5MF4_3       SFRS = 2; P5MF54 |= 0x08 /*!<Set P5MF54.P5MF4_3             */
#define set_P5MF54_P5MF5_0       SFRS = 2; P5MF54 |= 0x10 /*!<Set P5MF54.P5MF5_0             */
#define set_P5MF54_P5MF5_1       SFRS = 2; P5MF54 |= 0x20 /*!<Set P5MF54.P5MF5_1             */
#define set_P5MF54_P5MF5_2       SFRS = 2; P5MF54 |= 0x40 /*!<Set P5MF54.P5MF5_2             */
#define set_P5MF54_P5MF5_3       SFRS = 2; P5MF54 |= 0x80 /*!<Set P5MF54.P5MF5_3             */

#define clr_P5MF54_P5MF4_0       SFRS = 2; P5MF54 &=~0x01 /*!<Clear P5MF54.P5MF4_0           */
#define clr_P5MF54_P5MF4_1       SFRS = 2; P5MF54 &=~0x02 /*!<Clear P5MF54.P5MF4_1           */
#define clr_P5MF54_P5MF4_2       SFRS = 2; P5MF54 &=~0x04 /*!<Clear P5MF54.P5MF4_2           */
#define clr_P5MF54_P5MF4_3       SFRS = 2; P5MF54 &=~0x08 /*!<Clear P5MF54.P5MF4_3           */
#define clr_P5MF54_P5MF5_0       SFRS = 2; P5MF54 &=~0x10 /*!<Clear P5MF54.P5MF5_0           */
#define clr_P5MF54_P5MF5_1       SFRS = 2; P5MF54 &=~0x20 /*!<Clear P5MF54.P5MF5_1           */
#define clr_P5MF54_P5MF5_2       SFRS = 2; P5MF54 &=~0x40 /*!<Clear P5MF54.P5MF5_2           */
#define clr_P5MF54_P5MF5_3       SFRS = 2; P5MF54 &=~0x80 /*!<Clear P5MF54.P5MF5_3           */

/**@} end of SFR_PAGE2_P5MF54_MACRO group */
/**@} end of SFR_PAGE2_P5MF54 group */

/**
   @addtogroup SFR_PAGE2_P5MF76 P5MF76
   Special Function Register P5MF76
   @{ */

/**
@var P5MF76
Address: E3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF6_0   |P5.6 multi-function select
|[1]     |P5MF6_1   |P5.6 multi-function select
|[2]     |P5MF6_2   |P5.6 multi-function select
|[3]     |P5MF6_3   |P5.6 multi-function select
|[4]     |P5MF7_0   |P5.7 multi-function select
|[5]     |P5MF7_1   |P5.7 multi-function select
|[6]     |P5MF7_2   |P5.7 multi-function select
|[7]     |P5MF7_3   |P5.7 multi-function select
*/
__sfr __no_init volatile unsigned char P5MF76 @ 0xE3;

/**
@addtogroup SFR_PAGE2_P5MF76_MACRO Bit Macro Functions
Bit Macro Functions of P5MF76
@{ */

#define set_P5MF76_P5MF6_0       SFRS = 2; P5MF76 |= 0x01 /*!<Set P5MF76.P5MF6_0             */
#define set_P5MF76_P5MF6_1       SFRS = 2; P5MF76 |= 0x02 /*!<Set P5MF76.P5MF6_1             */
#define set_P5MF76_P5MF6_2       SFRS = 2; P5MF76 |= 0x04 /*!<Set P5MF76.P5MF6_2             */
#define set_P5MF76_P5MF6_3       SFRS = 2; P5MF76 |= 0x08 /*!<Set P5MF76.P5MF6_3             */
#define set_P5MF76_P5MF7_0       SFRS = 2; P5MF76 |= 0x10 /*!<Set P5MF76.P5MF7_0             */
#define set_P5MF76_P5MF7_1       SFRS = 2; P5MF76 |= 0x20 /*!<Set P5MF76.P5MF7_1             */
#define set_P5MF76_P5MF7_2       SFRS = 2; P5MF76 |= 0x40 /*!<Set P5MF76.P5MF7_2             */
#define set_P5MF76_P5MF7_3       SFRS = 2; P5MF76 |= 0x80 /*!<Set P5MF76.P5MF7_3             */

#define clr_P5MF76_P5MF6_0       SFRS = 2; P5MF76 &=~0x01 /*!<Clear P5MF76.P5MF6_0           */
#define clr_P5MF76_P5MF6_1       SFRS = 2; P5MF76 &=~0x02 /*!<Clear P5MF76.P5MF6_1           */
#define clr_P5MF76_P5MF6_2       SFRS = 2; P5MF76 &=~0x04 /*!<Clear P5MF76.P5MF6_2           */
#define clr_P5MF76_P5MF6_3       SFRS = 2; P5MF76 &=~0x08 /*!<Clear P5MF76.P5MF6_3           */
#define clr_P5MF76_P5MF7_0       SFRS = 2; P5MF76 &=~0x10 /*!<Clear P5MF76.P5MF7_0           */
#define clr_P5MF76_P5MF7_1       SFRS = 2; P5MF76 &=~0x20 /*!<Clear P5MF76.P5MF7_1           */
#define clr_P5MF76_P5MF7_2       SFRS = 2; P5MF76 &=~0x40 /*!<Clear P5MF76.P5MF7_2           */
#define clr_P5MF76_P5MF7_3       SFRS = 2; P5MF76 &=~0x80 /*!<Clear P5MF76.P5MF7_3           */

/**@} end of SFR_PAGE2_P5MF76_MACRO group */
/**@} end of SFR_PAGE2_P5MF76 group */

/**
   @addtogroup SFR_PAGE2_I2C1CON I2C1CON
   Special Function Register @ref I2C1CON
   @{ */
/**@} end of SFR_PAGE2_I2C1CON group */

/**
   @addtogroup SFR_PAGE2_P3MF54 P3MF54
   Special Function Register P3MF54
   @{ */

/**
@var P3MF54
Address: E9H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF4_0   |P3.4 multi-function select
|[1]     |P3MF4_1   |P3.4 multi-function select
|[2]     |P3MF4_2   |P3.4 multi-function select
|[3]     |P3MF4_3   |P3.4 multi-function select
|[4]     |P3MF5_0   |P3.5 multi-function select
|[5]     |P3MF5_1   |P3.5 multi-function select
|[6]     |P3MF5_2   |P3.5 multi-function select
|[7]     |P3MF5_3   |P3.5 multi-function select
*/
__sfr __no_init volatile unsigned char P3MF54 @ 0xE9;

/**
@addtogroup SFR_PAGE2_P3MF54_MACRO Bit Macro Functions
Bit Macro Functions of P3MF54
@{ */

#define set_P3MF54_P3MF4_0       SFRS = 2; P3MF54 |= 0x01 /*!<Set P3MF54.P3MF4_0             */
#define set_P3MF54_P3MF4_1       SFRS = 2; P3MF54 |= 0x02 /*!<Set P3MF54.P3MF4_1             */
#define set_P3MF54_P3MF4_2       SFRS = 2; P3MF54 |= 0x04 /*!<Set P3MF54.P3MF4_2             */
#define set_P3MF54_P3MF4_3       SFRS = 2; P3MF54 |= 0x08 /*!<Set P3MF54.P3MF4_3             */
#define set_P3MF54_P3MF5_0       SFRS = 2; P3MF54 |= 0x10 /*!<Set P3MF54.P3MF5_0             */
#define set_P3MF54_P3MF5_1       SFRS = 2; P3MF54 |= 0x20 /*!<Set P3MF54.P3MF5_1             */
#define set_P3MF54_P3MF5_2       SFRS = 2; P3MF54 |= 0x40 /*!<Set P3MF54.P3MF5_2             */
#define set_P3MF54_P3MF5_3       SFRS = 2; P3MF54 |= 0x80 /*!<Set P3MF54.P3MF5_3             */

#define clr_P3MF54_P3MF4_0       SFRS = 2; P3MF54 &=~0x01 /*!<Clear P3MF54.P3MF4_0           */
#define clr_P3MF54_P3MF4_1       SFRS = 2; P3MF54 &=~0x02 /*!<Clear P3MF54.P3MF4_1           */
#define clr_P3MF54_P3MF4_2       SFRS = 2; P3MF54 &=~0x04 /*!<Clear P3MF54.P3MF4_2           */
#define clr_P3MF54_P3MF4_3       SFRS = 2; P3MF54 &=~0x08 /*!<Clear P3MF54.P3MF4_3           */
#define clr_P3MF54_P3MF5_0       SFRS = 2; P3MF54 &=~0x10 /*!<Clear P3MF54.P3MF5_0           */
#define clr_P3MF54_P3MF5_1       SFRS = 2; P3MF54 &=~0x20 /*!<Clear P3MF54.P3MF5_1           */
#define clr_P3MF54_P3MF5_2       SFRS = 2; P3MF54 &=~0x40 /*!<Clear P3MF54.P3MF5_2           */
#define clr_P3MF54_P3MF5_3       SFRS = 2; P3MF54 &=~0x80 /*!<Clear P3MF54.P3MF5_3           */

/**@} end of SFR_PAGE2_P3MF54_MACRO group */
/**@} end of SFR_PAGE2_P3MF54 group */

/**
   @addtogroup SFR_PAGE2_P3MF76 P3MF76
   Special Function Register P3MF76
   @{ */

/**
@var P3MF76
Address: EAH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF6_0   |P3.6 multi-function select
|[1]     |P3MF6_1   |P3.6 multi-function select
|[2]     |P3MF6_2   |P3.6 multi-function select
|[3]     |P3MF6_3   |P3.6 multi-function select
|[4]     |P3MF7_0   |P3.7 multi-function select
|[5]     |P3MF7_1   |P3.7 multi-function select
|[6]     |P3MF7_2   |P3.7 multi-function select
|[7]     |P3MF7_3   |P3.7 multi-function select
*/
__sfr __no_init volatile unsigned char P3MF76 @ 0xEA;

/**
@addtogroup SFR_PAGE2_P3MF76_MACRO Bit Macro Functions
Bit Macro Functions of P3MF76
@{ */

#define set_P3MF76_P3MF6_0       SFRS = 2; P3MF76 |= 0x01 /*!<Set P3MF76.P3MF6_0             */
#define set_P3MF76_P3MF6_1       SFRS = 2; P3MF76 |= 0x02 /*!<Set P3MF76.P3MF6_1             */
#define set_P3MF76_P3MF6_2       SFRS = 2; P3MF76 |= 0x04 /*!<Set P3MF76.P3MF6_2             */
#define set_P3MF76_P3MF6_3       SFRS = 2; P3MF76 |= 0x08 /*!<Set P3MF76.P3MF6_3             */
#define set_P3MF76_P3MF7_0       SFRS = 2; P3MF76 |= 0x10 /*!<Set P3MF76.P3MF7_0             */
#define set_P3MF76_P3MF7_1       SFRS = 2; P3MF76 |= 0x20 /*!<Set P3MF76.P3MF7_1             */
#define set_P3MF76_P3MF7_2       SFRS = 2; P3MF76 |= 0x40 /*!<Set P3MF76.P3MF7_2             */
#define set_P3MF76_P3MF7_3       SFRS = 2; P3MF76 |= 0x80 /*!<Set P3MF76.P3MF7_3             */

#define clr_P3MF76_P3MF6_0       SFRS = 2; P3MF76 &=~0x01 /*!<Clear P3MF76.P3MF6_0           */
#define clr_P3MF76_P3MF6_1       SFRS = 2; P3MF76 &=~0x02 /*!<Clear P3MF76.P3MF6_1           */
#define clr_P3MF76_P3MF6_2       SFRS = 2; P3MF76 &=~0x04 /*!<Clear P3MF76.P3MF6_2           */
#define clr_P3MF76_P3MF6_3       SFRS = 2; P3MF76 &=~0x08 /*!<Clear P3MF76.P3MF6_3           */
#define clr_P3MF76_P3MF7_0       SFRS = 2; P3MF76 &=~0x10 /*!<Clear P3MF76.P3MF7_0           */
#define clr_P3MF76_P3MF7_1       SFRS = 2; P3MF76 &=~0x20 /*!<Clear P3MF76.P3MF7_1           */
#define clr_P3MF76_P3MF7_2       SFRS = 2; P3MF76 &=~0x40 /*!<Clear P3MF76.P3MF7_2           */
#define clr_P3MF76_P3MF7_3       SFRS = 2; P3MF76 &=~0x80 /*!<Clear P3MF76.P3MF7_3           */

/**@} end of SFR_PAGE2_P3MF76_MACRO group */
/**@} end of SFR_PAGE2_P3MF76 group */

/**
   @addtogroup SFR_PAGE2_P4MF10 P4MF10
   Special Function Register P4MF10
   @{ */

/**
@var P4MF10
Address: EBH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF0_0   |P4.0 multi-function select
|[1]     |P4MF0_1   |P4.0 multi-function select
|[2]     |P4MF0_2   |P4.0 multi-function select
|[3]     |P4MF0_3   |P4.0 multi-function select
|[4]     |P4MF1_0   |P4.1 multi-function select
|[5]     |P4MF1_1   |P4.1 multi-function select
|[6]     |P4MF1_2   |P4.1 multi-function select
|[7]     |P4MF1_3   |P4.1 multi-function select
*/
__sfr __no_init volatile unsigned char P4MF10 @ 0xEB;

/**
@addtogroup SFR_PAGE2_P4MF10_MACRO Bit Macro Functions
Bit Macro Functions of P4MF10
@{ */

#define set_P4MF10_P4MF0_0       SFRS = 2; P4MF10 |= 0x01 /*!<Set P4MF10.P4MF0_0             */
#define set_P4MF10_P4MF0_1       SFRS = 2; P4MF10 |= 0x02 /*!<Set P4MF10.P4MF0_1             */
#define set_P4MF10_P4MF0_2       SFRS = 2; P4MF10 |= 0x04 /*!<Set P4MF10.P4MF0_2             */
#define set_P4MF10_P4MF0_3       SFRS = 2; P4MF10 |= 0x08 /*!<Set P4MF10.P4MF0_3             */
#define set_P4MF10_P4MF1_0       SFRS = 2; P4MF10 |= 0x10 /*!<Set P4MF10.P4MF1_0             */
#define set_P4MF10_P4MF1_1       SFRS = 2; P4MF10 |= 0x20 /*!<Set P4MF10.P4MF1_1             */
#define set_P4MF10_P4MF1_2       SFRS = 2; P4MF10 |= 0x40 /*!<Set P4MF10.P4MF1_2             */
#define set_P4MF10_P4MF1_3       SFRS = 2; P4MF10 |= 0x80 /*!<Set P4MF10.P4MF1_3             */

#define clr_P4MF10_P4MF0_0       SFRS = 2; P4MF10 &=~0x01 /*!<Clear P4MF10.P4MF0_0           */
#define clr_P4MF10_P4MF0_1       SFRS = 2; P4MF10 &=~0x02 /*!<Clear P4MF10.P4MF0_1           */
#define clr_P4MF10_P4MF0_2       SFRS = 2; P4MF10 &=~0x04 /*!<Clear P4MF10.P4MF0_2           */
#define clr_P4MF10_P4MF0_3       SFRS = 2; P4MF10 &=~0x08 /*!<Clear P4MF10.P4MF0_3           */
#define clr_P4MF10_P4MF1_0       SFRS = 2; P4MF10 &=~0x10 /*!<Clear P4MF10.P4MF1_0           */
#define clr_P4MF10_P4MF1_1       SFRS = 2; P4MF10 &=~0x20 /*!<Clear P4MF10.P4MF1_1           */
#define clr_P4MF10_P4MF1_2       SFRS = 2; P4MF10 &=~0x40 /*!<Clear P4MF10.P4MF1_2           */
#define clr_P4MF10_P4MF1_3       SFRS = 2; P4MF10 &=~0x80 /*!<Clear P4MF10.P4MF1_3           */

/**@} end of SFR_PAGE2_P4MF10_MACRO group */
/**@} end of SFR_PAGE2_P4MF10 group */

/**
   @addtogroup SFR_PAGE2_P4MF32 P4MF32
   Special Function Register P4MF32
   @{ */

/**
@var P4MF32
Address: ECH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF2_0   |P4.2 multi-function select
|[1]     |P4MF2_1   |P4.2 multi-function select
|[2]     |P4MF2_2   |P4.2 multi-function select
|[3]     |P4MF2_3   |P4.2 multi-function select
|[4]     |P4MF3_0   |P4.3 multi-function select
|[5]     |P4MF3_1   |P4.3 multi-function select
|[6]     |P4MF3_2   |P4.3 multi-function select
|[7]     |P4MF3_3   |P4.3 multi-function select
*/
__sfr __no_init volatile unsigned char P4MF32 @ 0xEC;

/**
@addtogroup SFR_PAGE2_P4MF32_MACRO Bit Macro Functions
Bit Macro Functions of P4MF32
@{ */

#define set_P4MF32_P4MF2_0       SFRS = 2; P4MF32 |= 0x01 /*!<Set P4MF32.P4MF2_0             */
#define set_P4MF32_P4MF2_1       SFRS = 2; P4MF32 |= 0x02 /*!<Set P4MF32.P4MF2_1             */
#define set_P4MF32_P4MF2_2       SFRS = 2; P4MF32 |= 0x04 /*!<Set P4MF32.P4MF2_2             */
#define set_P4MF32_P4MF2_3       SFRS = 2; P4MF32 |= 0x08 /*!<Set P4MF32.P4MF2_3             */
#define set_P4MF32_P4MF3_0       SFRS = 2; P4MF32 |= 0x10 /*!<Set P4MF32.P4MF3_0             */
#define set_P4MF32_P4MF3_1       SFRS = 2; P4MF32 |= 0x20 /*!<Set P4MF32.P4MF3_1             */
#define set_P4MF32_P4MF3_2       SFRS = 2; P4MF32 |= 0x40 /*!<Set P4MF32.P4MF3_2             */
#define set_P4MF32_P4MF3_3       SFRS = 2; P4MF32 |= 0x80 /*!<Set P4MF32.P4MF3_3             */

#define clr_P4MF32_P4MF2_0       SFRS = 2; P4MF32 &=~0x01 /*!<Clear P4MF32.P4MF2_0           */
#define clr_P4MF32_P4MF2_1       SFRS = 2; P4MF32 &=~0x02 /*!<Clear P4MF32.P4MF2_1           */
#define clr_P4MF32_P4MF2_2       SFRS = 2; P4MF32 &=~0x04 /*!<Clear P4MF32.P4MF2_2           */
#define clr_P4MF32_P4MF2_3       SFRS = 2; P4MF32 &=~0x08 /*!<Clear P4MF32.P4MF2_3           */
#define clr_P4MF32_P4MF3_0       SFRS = 2; P4MF32 &=~0x10 /*!<Clear P4MF32.P4MF3_0           */
#define clr_P4MF32_P4MF3_1       SFRS = 2; P4MF32 &=~0x20 /*!<Clear P4MF32.P4MF3_1           */
#define clr_P4MF32_P4MF3_2       SFRS = 2; P4MF32 &=~0x40 /*!<Clear P4MF32.P4MF3_2           */
#define clr_P4MF32_P4MF3_3       SFRS = 2; P4MF32 &=~0x80 /*!<Clear P4MF32.P4MF3_3           */

/**@} end of SFR_PAGE2_P4MF32_MACRO group */
/**@} end of SFR_PAGE2_P4MF32 group */

/**
   @addtogroup SFR_PAGE2_P4MF54 P4MF54
   Special Function Register P4MF54
   @{ */

/**
@var P4MF54
Address: EDH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF4_0   |P4.4 multi-function select
|[1]     |P4MF4_1   |P4.4 multi-function select
|[2]     |P4MF4_2   |P4.4 multi-function select
|[3]     |P4MF4_3   |P4.4 multi-function select
|[4]     |P4MF5_0   |P4.5 multi-function select
|[5]     |P4MF5_1   |P4.5 multi-function select
|[6]     |P4MF5_2   |P4.5 multi-function select
|[7]     |P4MF5_3   |P4.5 multi-function select
*/
__sfr __no_init volatile unsigned char P4MF54 @ 0xED;

/**
@addtogroup SFR_PAGE2_P4MF54_MACRO Bit Macro Functions
Bit Macro Functions of P4MF54
@{ */

#define set_P4MF54_P4MF4_0       SFRS = 2; P4MF54 |= 0x01 /*!<Set P4MF54.P4MF4_0             */
#define set_P4MF54_P4MF4_1       SFRS = 2; P4MF54 |= 0x02 /*!<Set P4MF54.P4MF4_1             */
#define set_P4MF54_P4MF4_2       SFRS = 2; P4MF54 |= 0x04 /*!<Set P4MF54.P4MF4_2             */
#define set_P4MF54_P4MF4_3       SFRS = 2; P4MF54 |= 0x08 /*!<Set P4MF54.P4MF4_3             */
#define set_P4MF54_P4MF5_0       SFRS = 2; P4MF54 |= 0x10 /*!<Set P4MF54.P4MF5_0             */
#define set_P4MF54_P4MF5_1       SFRS = 2; P4MF54 |= 0x20 /*!<Set P4MF54.P4MF5_1             */
#define set_P4MF54_P4MF5_2       SFRS = 2; P4MF54 |= 0x40 /*!<Set P4MF54.P4MF5_2             */
#define set_P4MF54_P4MF5_3       SFRS = 2; P4MF54 |= 0x80 /*!<Set P4MF54.P4MF5_3             */

#define clr_P4MF54_P4MF4_0       SFRS = 2; P4MF54 &=~0x01 /*!<Clear P4MF54.P4MF4_0           */
#define clr_P4MF54_P4MF4_1       SFRS = 2; P4MF54 &=~0x02 /*!<Clear P4MF54.P4MF4_1           */
#define clr_P4MF54_P4MF4_2       SFRS = 2; P4MF54 &=~0x04 /*!<Clear P4MF54.P4MF4_2           */
#define clr_P4MF54_P4MF4_3       SFRS = 2; P4MF54 &=~0x08 /*!<Clear P4MF54.P4MF4_3           */
#define clr_P4MF54_P4MF5_0       SFRS = 2; P4MF54 &=~0x10 /*!<Clear P4MF54.P4MF5_0           */
#define clr_P4MF54_P4MF5_1       SFRS = 2; P4MF54 &=~0x20 /*!<Clear P4MF54.P4MF5_1           */
#define clr_P4MF54_P4MF5_2       SFRS = 2; P4MF54 &=~0x40 /*!<Clear P4MF54.P4MF5_2           */
#define clr_P4MF54_P4MF5_3       SFRS = 2; P4MF54 &=~0x80 /*!<Clear P4MF54.P4MF5_3           */

/**@} end of SFR_PAGE2_P4MF54_MACRO group */
/**@} end of SFR_PAGE2_P4MF54 group */

/**
   @addtogroup SFR_PAGE2_P4MF76 P4MF76
   Special Function Register P4MF76
   @{ */

/**
@var P4MF76
Address: EEH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF6_0   |P4.6 multi-function select
|[1]     |P4MF6_1   |P4.6 multi-function select
|[2]     |P4MF6_2   |P4.6 multi-function select
|[3]     |P4MF6_3   |P4.6 multi-function select
|[4]     |P4MF7_0   |P4.7 multi-function select
|[5]     |P4MF7_1   |P4.7 multi-function select
|[6]     |P4MF7_2   |P4.7 multi-function select
|[7]     |P4MF7_3   |P4.7 multi-function select
*/
__sfr __no_init volatile unsigned char P4MF76 @ 0xEE;

/**
@addtogroup SFR_PAGE2_P4MF76_MACRO Bit Macro Functions
Bit Macro Functions of P4MF76
@{ */

#define set_P4MF76_P4MF6_0       SFRS = 2; P4MF76 |= 0x01 /*!<Set P4MF76.P4MF6_0             */
#define set_P4MF76_P4MF6_1       SFRS = 2; P4MF76 |= 0x02 /*!<Set P4MF76.P4MF6_1             */
#define set_P4MF76_P4MF6_2       SFRS = 2; P4MF76 |= 0x04 /*!<Set P4MF76.P4MF6_2             */
#define set_P4MF76_P4MF6_3       SFRS = 2; P4MF76 |= 0x08 /*!<Set P4MF76.P4MF6_3             */
#define set_P4MF76_P4MF7_0       SFRS = 2; P4MF76 |= 0x10 /*!<Set P4MF76.P4MF7_0             */
#define set_P4MF76_P4MF7_1       SFRS = 2; P4MF76 |= 0x20 /*!<Set P4MF76.P4MF7_1             */
#define set_P4MF76_P4MF7_2       SFRS = 2; P4MF76 |= 0x40 /*!<Set P4MF76.P4MF7_2             */
#define set_P4MF76_P4MF7_3       SFRS = 2; P4MF76 |= 0x80 /*!<Set P4MF76.P4MF7_3             */

#define clr_P4MF76_P4MF6_0       SFRS = 2; P4MF76 &=~0x01 /*!<Clear P4MF76.P4MF6_0           */
#define clr_P4MF76_P4MF6_1       SFRS = 2; P4MF76 &=~0x02 /*!<Clear P4MF76.P4MF6_1           */
#define clr_P4MF76_P4MF6_2       SFRS = 2; P4MF76 &=~0x04 /*!<Clear P4MF76.P4MF6_2           */
#define clr_P4MF76_P4MF6_3       SFRS = 2; P4MF76 &=~0x08 /*!<Clear P4MF76.P4MF6_3           */
#define clr_P4MF76_P4MF7_0       SFRS = 2; P4MF76 &=~0x10 /*!<Clear P4MF76.P4MF7_0           */
#define clr_P4MF76_P4MF7_1       SFRS = 2; P4MF76 &=~0x20 /*!<Clear P4MF76.P4MF7_1           */
#define clr_P4MF76_P4MF7_2       SFRS = 2; P4MF76 &=~0x40 /*!<Clear P4MF76.P4MF7_2           */
#define clr_P4MF76_P4MF7_3       SFRS = 2; P4MF76 &=~0x80 /*!<Clear P4MF76.P4MF7_3           */

/**@} end of SFR_PAGE2_P4MF76_MACRO group */
/**@} end of SFR_PAGE2_P4MF76 group */

/**
   @addtogroup SFR_PAGE2_P5MF10 P5MF10
   Special Function Register P5MF10
   @{ */

/**
@var P5MF10
Address: EFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF0_0   |P5.0 multi-function select
|[1]     |P5MF0_1   |P5.0 multi-function select
|[2]     |P5MF0_2   |P5.0 multi-function select
|[3]     |P5MF0_3   |P5.0 multi-function select
|[4]     |P5MF1_0   |P5.1 multi-function select
|[5]     |P5MF1_1   |P5.1 multi-function select
|[6]     |P5MF1_2   |P5.1 multi-function select
|[7]     |P5MF1_3   |P5.1 multi-function select
*/
__sfr __no_init volatile unsigned char P5MF10 @ 0xEF;

/**
@addtogroup SFR_PAGE2_P5MF10_MACRO Bit Macro Functions
Bit Macro Functions of P5MF10
@{ */

#define set_P5MF10_P5MF0_0       SFRS = 2; P5MF10 |= 0x01 /*!<Set P5MF10.P5MF0_0             */
#define set_P5MF10_P5MF0_1       SFRS = 2; P5MF10 |= 0x02 /*!<Set P5MF10.P5MF0_1             */
#define set_P5MF10_P5MF0_2       SFRS = 2; P5MF10 |= 0x04 /*!<Set P5MF10.P5MF0_2             */
#define set_P5MF10_P5MF0_3       SFRS = 2; P5MF10 |= 0x08 /*!<Set P5MF10.P5MF0_3             */
#define set_P5MF10_P5MF1_0       SFRS = 2; P5MF10 |= 0x10 /*!<Set P5MF10.P5MF1_0             */
#define set_P5MF10_P5MF1_1       SFRS = 2; P5MF10 |= 0x20 /*!<Set P5MF10.P5MF1_1             */
#define set_P5MF10_P5MF1_2       SFRS = 2; P5MF10 |= 0x40 /*!<Set P5MF10.P5MF1_2             */
#define set_P5MF10_P5MF1_3       SFRS = 2; P5MF10 |= 0x80 /*!<Set P5MF10.P5MF1_3             */

#define clr_P5MF10_P5MF0_0       SFRS = 2; P5MF10 &=~0x01 /*!<Clear P5MF10.P5MF0_0           */
#define clr_P5MF10_P5MF0_1       SFRS = 2; P5MF10 &=~0x02 /*!<Clear P5MF10.P5MF0_1           */
#define clr_P5MF10_P5MF0_2       SFRS = 2; P5MF10 &=~0x04 /*!<Clear P5MF10.P5MF0_2           */
#define clr_P5MF10_P5MF0_3       SFRS = 2; P5MF10 &=~0x08 /*!<Clear P5MF10.P5MF0_3           */
#define clr_P5MF10_P5MF1_0       SFRS = 2; P5MF10 &=~0x10 /*!<Clear P5MF10.P5MF1_0           */
#define clr_P5MF10_P5MF1_1       SFRS = 2; P5MF10 &=~0x20 /*!<Clear P5MF10.P5MF1_1           */
#define clr_P5MF10_P5MF1_2       SFRS = 2; P5MF10 &=~0x40 /*!<Clear P5MF10.P5MF1_2           */
#define clr_P5MF10_P5MF1_3       SFRS = 2; P5MF10 &=~0x80 /*!<Clear P5MF10.P5MF1_3           */

/**@} end of SFR_PAGE2_P5MF10_MACRO group */
/**@} end of SFR_PAGE2_P5MF10 group */

/**
   @addtogroup SFR_PAGE2_P1MF76 P1MF76
   Special Function Register P1MF76
   @{ */

/**
@var P1MF76
Address: F1H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF6_0   |P1.6 multi-function select
|[1]     |P1MF6_1   |P1.6 multi-function select
|[2]     |P1MF6_2   |P1.6 multi-function select
|[3]     |P1MF6_3   |P1.6 multi-function select
|[4]     |P1MF7_0   |P1.7 multi-function select
|[5]     |P1MF7_1   |P1.7 multi-function select
|[6]     |P1MF7_2   |P1.7 multi-function select
|[7]     |P1MF7_3   |P1.7 multi-function select
*/
__sfr __no_init volatile unsigned char P1MF76 @ 0xF1;

/**
@addtogroup SFR_PAGE2_P1MF76_MACRO Bit Macro Functions
Bit Macro Functions of P1MF76
@{ */

#define set_P1MF76_P1MF6_0       SFRS = 2; P1MF76 |= 0x01 /*!<Set P1MF76.P1MF6_0             */
#define set_P1MF76_P1MF6_1       SFRS = 2; P1MF76 |= 0x02 /*!<Set P1MF76.P1MF6_1             */
#define set_P1MF76_P1MF6_2       SFRS = 2; P1MF76 |= 0x04 /*!<Set P1MF76.P1MF6_2             */
#define set_P1MF76_P1MF6_3       SFRS = 2; P1MF76 |= 0x08 /*!<Set P1MF76.P1MF6_3             */
#define set_P1MF76_P1MF7_0       SFRS = 2; P1MF76 |= 0x10 /*!<Set P1MF76.P1MF7_0             */
#define set_P1MF76_P1MF7_1       SFRS = 2; P1MF76 |= 0x20 /*!<Set P1MF76.P1MF7_1             */
#define set_P1MF76_P1MF7_2       SFRS = 2; P1MF76 |= 0x40 /*!<Set P1MF76.P1MF7_2             */
#define set_P1MF76_P1MF7_3       SFRS = 2; P1MF76 |= 0x80 /*!<Set P1MF76.P1MF7_3             */

#define clr_P1MF76_P1MF6_0       SFRS = 2; P1MF76 &=~0x01 /*!<Clear P1MF76.P1MF6_0           */
#define clr_P1MF76_P1MF6_1       SFRS = 2; P1MF76 &=~0x02 /*!<Clear P1MF76.P1MF6_1           */
#define clr_P1MF76_P1MF6_2       SFRS = 2; P1MF76 &=~0x04 /*!<Clear P1MF76.P1MF6_2           */
#define clr_P1MF76_P1MF6_3       SFRS = 2; P1MF76 &=~0x08 /*!<Clear P1MF76.P1MF6_3           */
#define clr_P1MF76_P1MF7_0       SFRS = 2; P1MF76 &=~0x10 /*!<Clear P1MF76.P1MF7_0           */
#define clr_P1MF76_P1MF7_1       SFRS = 2; P1MF76 &=~0x20 /*!<Clear P1MF76.P1MF7_1           */
#define clr_P1MF76_P1MF7_2       SFRS = 2; P1MF76 &=~0x40 /*!<Clear P1MF76.P1MF7_2           */
#define clr_P1MF76_P1MF7_3       SFRS = 2; P1MF76 &=~0x80 /*!<Clear P1MF76.P1MF7_3           */

/**@} end of SFR_PAGE2_P1MF76_MACRO group */
/**@} end of SFR_PAGE2_P1MF76 group */

/**
   @addtogroup SFR_PAGE2_P2MF10 P2MF10
   Special Function Register P2MF10
   @{ */

/**
@var P2MF10
Address: F2H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF0_0   |P2.0 multi-function select
|[1]     |P2MF0_1   |P2.0 multi-function select
|[2]     |P2MF0_2   |P2.0 multi-function select
|[3]     |P2MF0_3   |P2.0 multi-function select
|[4]     |P2MF1_0   |P2.1 multi-function select
|[5]     |P2MF1_1   |P2.1 multi-function select
|[6]     |P2MF1_2   |P2.1 multi-function select
|[7]     |P2MF1_3   |P2.1 multi-function select
*/
__sfr __no_init volatile unsigned char P2MF10 @ 0xF2;

/**
@addtogroup SFR_PAGE2_P2MF10_MACRO Bit Macro Functions
Bit Macro Functions of P2MF10
@{ */

#define set_P2MF10_P2MF0_0       SFRS = 2; P2MF10 |= 0x01 /*!<Set P2MF10.P2MF0_0             */
#define set_P2MF10_P2MF0_1       SFRS = 2; P2MF10 |= 0x02 /*!<Set P2MF10.P2MF0_1             */
#define set_P2MF10_P2MF0_2       SFRS = 2; P2MF10 |= 0x04 /*!<Set P2MF10.P2MF0_2             */
#define set_P2MF10_P2MF0_3       SFRS = 2; P2MF10 |= 0x08 /*!<Set P2MF10.P2MF0_3             */
#define set_P2MF10_P2MF1_0       SFRS = 2; P2MF10 |= 0x10 /*!<Set P2MF10.P2MF1_0             */
#define set_P2MF10_P2MF1_1       SFRS = 2; P2MF10 |= 0x20 /*!<Set P2MF10.P2MF1_1             */
#define set_P2MF10_P2MF1_2       SFRS = 2; P2MF10 |= 0x40 /*!<Set P2MF10.P2MF1_2             */
#define set_P2MF10_P2MF1_3       SFRS = 2; P2MF10 |= 0x80 /*!<Set P2MF10.P2MF1_3             */

#define clr_P2MF10_P2MF0_0       SFRS = 2; P2MF10 &=~0x01 /*!<Clear P2MF10.P2MF0_0           */
#define clr_P2MF10_P2MF0_1       SFRS = 2; P2MF10 &=~0x02 /*!<Clear P2MF10.P2MF0_1           */
#define clr_P2MF10_P2MF0_2       SFRS = 2; P2MF10 &=~0x04 /*!<Clear P2MF10.P2MF0_2           */
#define clr_P2MF10_P2MF0_3       SFRS = 2; P2MF10 &=~0x08 /*!<Clear P2MF10.P2MF0_3           */
#define clr_P2MF10_P2MF1_0       SFRS = 2; P2MF10 &=~0x10 /*!<Clear P2MF10.P2MF1_0           */
#define clr_P2MF10_P2MF1_1       SFRS = 2; P2MF10 &=~0x20 /*!<Clear P2MF10.P2MF1_1           */
#define clr_P2MF10_P2MF1_2       SFRS = 2; P2MF10 &=~0x40 /*!<Clear P2MF10.P2MF1_2           */
#define clr_P2MF10_P2MF1_3       SFRS = 2; P2MF10 &=~0x80 /*!<Clear P2MF10.P2MF1_3           */

/**@} end of SFR_PAGE2_P2MF10_MACRO group */
/**@} end of SFR_PAGE2_P2MF10 group */

/**
   @addtogroup SFR_PAGE2_P2MF32 P2MF32
   Special Function Register P2MF32
   @{ */

/**
@var P2MF32
Address: F3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF2_0   |P2.2 multi-function select
|[1]     |P2MF2_1   |P2.2 multi-function select
|[2]     |P2MF2_2   |P2.2 multi-function select
|[3]     |P2MF2_3   |P2.2 multi-function select
|[4]     |P2MF3_0   |P2.3 multi-function select
|[5]     |P2MF3_1   |P2.3 multi-function select
|[6]     |P2MF3_2   |P2.3 multi-function select
|[7]     |P2MF3_3   |P2.3 multi-function select
*/
__sfr __no_init volatile unsigned char P2MF32 @ 0xF3;

/**
@addtogroup SFR_PAGE2_P2MF32_MACRO Bit Macro Functions
Bit Macro Functions of P2MF32
@{ */

#define set_P2MF32_P2MF2_0       SFRS = 2; P2MF32 |= 0x01 /*!<Set P2MF32.P2MF2_0             */
#define set_P2MF32_P2MF2_1       SFRS = 2; P2MF32 |= 0x02 /*!<Set P2MF32.P2MF2_1             */
#define set_P2MF32_P2MF2_2       SFRS = 2; P2MF32 |= 0x04 /*!<Set P2MF32.P2MF2_2             */
#define set_P2MF32_P2MF2_3       SFRS = 2; P2MF32 |= 0x08 /*!<Set P2MF32.P2MF2_3             */
#define set_P2MF32_P2MF3_0       SFRS = 2; P2MF32 |= 0x10 /*!<Set P2MF32.P2MF3_0             */
#define set_P2MF32_P2MF3_1       SFRS = 2; P2MF32 |= 0x20 /*!<Set P2MF32.P2MF3_1             */
#define set_P2MF32_P2MF3_2       SFRS = 2; P2MF32 |= 0x40 /*!<Set P2MF32.P2MF3_2             */
#define set_P2MF32_P2MF3_3       SFRS = 2; P2MF32 |= 0x80 /*!<Set P2MF32.P2MF3_3             */

#define clr_P2MF32_P2MF2_0       SFRS = 2; P2MF32 &=~0x01 /*!<Clear P2MF32.P2MF2_0           */
#define clr_P2MF32_P2MF2_1       SFRS = 2; P2MF32 &=~0x02 /*!<Clear P2MF32.P2MF2_1           */
#define clr_P2MF32_P2MF2_2       SFRS = 2; P2MF32 &=~0x04 /*!<Clear P2MF32.P2MF2_2           */
#define clr_P2MF32_P2MF2_3       SFRS = 2; P2MF32 &=~0x08 /*!<Clear P2MF32.P2MF2_3           */
#define clr_P2MF32_P2MF3_0       SFRS = 2; P2MF32 &=~0x10 /*!<Clear P2MF32.P2MF3_0           */
#define clr_P2MF32_P2MF3_1       SFRS = 2; P2MF32 &=~0x20 /*!<Clear P2MF32.P2MF3_1           */
#define clr_P2MF32_P2MF3_2       SFRS = 2; P2MF32 &=~0x40 /*!<Clear P2MF32.P2MF3_2           */
#define clr_P2MF32_P2MF3_3       SFRS = 2; P2MF32 &=~0x80 /*!<Clear P2MF32.P2MF3_3           */

/**@} end of SFR_PAGE2_P2MF32_MACRO group */
/**@} end of SFR_PAGE2_P2MF32 group */

/**
   @addtogroup SFR_PAGE2_P2MF54 P2MF54
   Special Function Register P2MF54
   @{ */

/**
@var P2MF54
Address: F4H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF4_0   |P2.4 multi-function select
|[1]     |P2MF4_1   |P2.4 multi-function select
|[2]     |P2MF4_2   |P2.4 multi-function select
|[3]     |P2MF4_3   |P2.4 multi-function select
|[4]     |P2MF5_0   |P2.5 multi-function select
|[5]     |P2MF5_1   |P2.5 multi-function select
|[6]     |P2MF5_2   |P2.5 multi-function select
|[7]     |P2MF5_3   |P2.5 multi-function select
*/
__sfr __no_init volatile unsigned char P2MF54 @ 0xF4;

/**
@addtogroup SFR_PAGE2_P2MF54_MACRO Bit Macro Functions
Bit Macro Functions of P2MF54
@{ */

#define set_P2MF54_P2MF4_0       SFRS = 2; P2MF54 |= 0x01 /*!<Set P2MF54.P2MF4_0             */
#define set_P2MF54_P2MF4_1       SFRS = 2; P2MF54 |= 0x02 /*!<Set P2MF54.P2MF4_1             */
#define set_P2MF54_P2MF4_2       SFRS = 2; P2MF54 |= 0x04 /*!<Set P2MF54.P2MF4_2             */
#define set_P2MF54_P2MF4_3       SFRS = 2; P2MF54 |= 0x08 /*!<Set P2MF54.P2MF4_3             */
#define set_P2MF54_P2MF5_0       SFRS = 2; P2MF54 |= 0x10 /*!<Set P2MF54.P2MF5_0             */
#define set_P2MF54_P2MF5_1       SFRS = 2; P2MF54 |= 0x20 /*!<Set P2MF54.P2MF5_1             */
#define set_P2MF54_P2MF5_2       SFRS = 2; P2MF54 |= 0x40 /*!<Set P2MF54.P2MF5_2             */
#define set_P2MF54_P2MF5_3       SFRS = 2; P2MF54 |= 0x80 /*!<Set P2MF54.P2MF5_3             */

#define clr_P2MF54_P2MF4_0       SFRS = 2; P2MF54 &=~0x01 /*!<Clear P2MF54.P2MF4_0           */
#define clr_P2MF54_P2MF4_1       SFRS = 2; P2MF54 &=~0x02 /*!<Clear P2MF54.P2MF4_1           */
#define clr_P2MF54_P2MF4_2       SFRS = 2; P2MF54 &=~0x04 /*!<Clear P2MF54.P2MF4_2           */
#define clr_P2MF54_P2MF4_3       SFRS = 2; P2MF54 &=~0x08 /*!<Clear P2MF54.P2MF4_3           */
#define clr_P2MF54_P2MF5_0       SFRS = 2; P2MF54 &=~0x10 /*!<Clear P2MF54.P2MF5_0           */
#define clr_P2MF54_P2MF5_1       SFRS = 2; P2MF54 &=~0x20 /*!<Clear P2MF54.P2MF5_1           */
#define clr_P2MF54_P2MF5_2       SFRS = 2; P2MF54 &=~0x40 /*!<Clear P2MF54.P2MF5_2           */
#define clr_P2MF54_P2MF5_3       SFRS = 2; P2MF54 &=~0x80 /*!<Clear P2MF54.P2MF5_3           */

/**@} end of SFR_PAGE2_P2MF54_MACRO group */
/**@} end of SFR_PAGE2_P2MF54 group */

/**
   @addtogroup SFR_PAGE2_P2MF76 P2MF76
   Special Function Register P2MF76
   @{ */

/**
@var P2MF76
Address: F5H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF6_0   |P2.6 multi-function select
|[1]     |P2MF6_1   |P2.6 multi-function select
|[2]     |P2MF6_2   |P2.6 multi-function select
|[3]     |P2MF6_3   |P2.6 multi-function select
|[4]     |P2MF7_0   |P2.7 multi-function select
|[5]     |P2MF7_1   |P2.7 multi-function select
|[6]     |P2MF7_2   |P2.7 multi-function select
|[7]     |P2MF7_3   |P2.7 multi-function select
*/
__sfr __no_init volatile unsigned char P2MF76 @ 0xF5;

/**
@addtogroup SFR_PAGE2_P2MF76_MACRO Bit Macro Functions
Bit Macro Functions of P2MF76
@{ */

#define set_P2MF76_P2MF6_0       SFRS = 2; P2MF76 |= 0x01 /*!<Set P2MF76.P2MF6_0             */
#define set_P2MF76_P2MF6_1       SFRS = 2; P2MF76 |= 0x02 /*!<Set P2MF76.P2MF6_1             */
#define set_P2MF76_P2MF6_2       SFRS = 2; P2MF76 |= 0x04 /*!<Set P2MF76.P2MF6_2             */
#define set_P2MF76_P2MF6_3       SFRS = 2; P2MF76 |= 0x08 /*!<Set P2MF76.P2MF6_3             */
#define set_P2MF76_P2MF7_0       SFRS = 2; P2MF76 |= 0x10 /*!<Set P2MF76.P2MF7_0             */
#define set_P2MF76_P2MF7_1       SFRS = 2; P2MF76 |= 0x20 /*!<Set P2MF76.P2MF7_1             */
#define set_P2MF76_P2MF7_2       SFRS = 2; P2MF76 |= 0x40 /*!<Set P2MF76.P2MF7_2             */
#define set_P2MF76_P2MF7_3       SFRS = 2; P2MF76 |= 0x80 /*!<Set P2MF76.P2MF7_3             */

#define clr_P2MF76_P2MF6_0       SFRS = 2; P2MF76 &=~0x01 /*!<Clear P2MF76.P2MF6_0           */
#define clr_P2MF76_P2MF6_1       SFRS = 2; P2MF76 &=~0x02 /*!<Clear P2MF76.P2MF6_1           */
#define clr_P2MF76_P2MF6_2       SFRS = 2; P2MF76 &=~0x04 /*!<Clear P2MF76.P2MF6_2           */
#define clr_P2MF76_P2MF6_3       SFRS = 2; P2MF76 &=~0x08 /*!<Clear P2MF76.P2MF6_3           */
#define clr_P2MF76_P2MF7_0       SFRS = 2; P2MF76 &=~0x10 /*!<Clear P2MF76.P2MF7_0           */
#define clr_P2MF76_P2MF7_1       SFRS = 2; P2MF76 &=~0x20 /*!<Clear P2MF76.P2MF7_1           */
#define clr_P2MF76_P2MF7_2       SFRS = 2; P2MF76 &=~0x40 /*!<Clear P2MF76.P2MF7_2           */
#define clr_P2MF76_P2MF7_3       SFRS = 2; P2MF76 &=~0x80 /*!<Clear P2MF76.P2MF7_3           */

/**@} end of SFR_PAGE2_P2MF76_MACRO group */
/**@} end of SFR_PAGE2_P2MF76 group */

/**
   @addtogroup SFR_PAGE2_P3MF10 P3MF10
   Special Function Register P3MF10
   @{ */

/**
@var P3MF10
Address: F6H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF0_0   |P3.0 multi-function select
|[1]     |P3MF0_1   |P3.0 multi-function select
|[2]     |P3MF0_2   |P3.0 multi-function select
|[3]     |P3MF0_3   |P3.0 multi-function select
|[4]     |P3MF1_0   |P3.1 multi-function select
|[5]     |P3MF1_1   |P3.1 multi-function select
|[6]     |P3MF1_2   |P3.1 multi-function select
|[7]     |P3MF1_3   |P3.1 multi-function select
*/
__sfr __no_init volatile unsigned char P3MF10 @ 0xF6;

/**
@addtogroup SFR_PAGE2_P3MF10_MACRO Bit Macro Functions
Bit Macro Functions of P3MF10
@{ */

#define set_P3MF10_P3MF0_0       SFRS = 2; P3MF10 |= 0x01 /*!<Set P3MF10.P3MF0_0             */
#define set_P3MF10_P3MF0_1       SFRS = 2; P3MF10 |= 0x02 /*!<Set P3MF10.P3MF0_1             */
#define set_P3MF10_P3MF0_2       SFRS = 2; P3MF10 |= 0x04 /*!<Set P3MF10.P3MF0_2             */
#define set_P3MF10_P3MF0_3       SFRS = 2; P3MF10 |= 0x08 /*!<Set P3MF10.P3MF0_3             */
#define set_P3MF10_P3MF1_0       SFRS = 2; P3MF10 |= 0x10 /*!<Set P3MF10.P3MF1_0             */
#define set_P3MF10_P3MF1_1       SFRS = 2; P3MF10 |= 0x20 /*!<Set P3MF10.P3MF1_1             */
#define set_P3MF10_P3MF1_2       SFRS = 2; P3MF10 |= 0x40 /*!<Set P3MF10.P3MF1_2             */
#define set_P3MF10_P3MF1_3       SFRS = 2; P3MF10 |= 0x80 /*!<Set P3MF10.P3MF1_3             */

#define clr_P3MF10_P3MF0_0       SFRS = 2; P3MF10 &=~0x01 /*!<Clear P3MF10.P3MF0_0           */
#define clr_P3MF10_P3MF0_1       SFRS = 2; P3MF10 &=~0x02 /*!<Clear P3MF10.P3MF0_1           */
#define clr_P3MF10_P3MF0_2       SFRS = 2; P3MF10 &=~0x04 /*!<Clear P3MF10.P3MF0_2           */
#define clr_P3MF10_P3MF0_3       SFRS = 2; P3MF10 &=~0x08 /*!<Clear P3MF10.P3MF0_3           */
#define clr_P3MF10_P3MF1_0       SFRS = 2; P3MF10 &=~0x10 /*!<Clear P3MF10.P3MF1_0           */
#define clr_P3MF10_P3MF1_1       SFRS = 2; P3MF10 &=~0x20 /*!<Clear P3MF10.P3MF1_1           */
#define clr_P3MF10_P3MF1_2       SFRS = 2; P3MF10 &=~0x40 /*!<Clear P3MF10.P3MF1_2           */
#define clr_P3MF10_P3MF1_3       SFRS = 2; P3MF10 &=~0x80 /*!<Clear P3MF10.P3MF1_3           */

/**@} end of SFR_PAGE2_P3MF10_MACRO group */
/**@} end of SFR_PAGE2_P3MF10 group */

/**
   @addtogroup SFR_PAGE2_P3MF32 P3MF32
   Special Function Register P3MF32
   @{ */

/**
@var P3MF32
Address: F7H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF2_0   |P3.2 multi-function select
|[1]     |P3MF2_1   |P3.2 multi-function select
|[2]     |P3MF2_2   |P3.2 multi-function select
|[3]     |P3MF2_3   |P3.2 multi-function select
|[4]     |P3MF3_0   |P3.3 multi-function select
|[5]     |P3MF3_1   |P3.3 multi-function select
|[6]     |P3MF3_2   |P3.3 multi-function select
|[7]     |P3MF3_3   |P3.3 multi-function select
*/
__sfr __no_init volatile unsigned char P3MF32 @ 0xF7;

/**
@addtogroup SFR_PAGE2_P3MF32_MACRO Bit Macro Functions
Bit Macro Functions of P3MF32
@{ */

#define set_P3MF32_P3MF2_0       SFRS = 2; P3MF32 |= 0x01 /*!<Set P3MF32.P3MF2_0             */
#define set_P3MF32_P3MF2_1       SFRS = 2; P3MF32 |= 0x02 /*!<Set P3MF32.P3MF2_1             */
#define set_P3MF32_P3MF2_2       SFRS = 2; P3MF32 |= 0x04 /*!<Set P3MF32.P3MF2_2             */
#define set_P3MF32_P3MF2_3       SFRS = 2; P3MF32 |= 0x08 /*!<Set P3MF32.P3MF2_3             */
#define set_P3MF32_P3MF3_0       SFRS = 2; P3MF32 |= 0x10 /*!<Set P3MF32.P3MF3_0             */
#define set_P3MF32_P3MF3_1       SFRS = 2; P3MF32 |= 0x20 /*!<Set P3MF32.P3MF3_1             */
#define set_P3MF32_P3MF3_2       SFRS = 2; P3MF32 |= 0x40 /*!<Set P3MF32.P3MF3_2             */
#define set_P3MF32_P3MF3_3       SFRS = 2; P3MF32 |= 0x80 /*!<Set P3MF32.P3MF3_3             */

#define clr_P3MF32_P3MF2_0       SFRS = 2; P3MF32 &=~0x01 /*!<Clear P3MF32.P3MF2_0           */
#define clr_P3MF32_P3MF2_1       SFRS = 2; P3MF32 &=~0x02 /*!<Clear P3MF32.P3MF2_1           */
#define clr_P3MF32_P3MF2_2       SFRS = 2; P3MF32 &=~0x04 /*!<Clear P3MF32.P3MF2_2           */
#define clr_P3MF32_P3MF2_3       SFRS = 2; P3MF32 &=~0x08 /*!<Clear P3MF32.P3MF2_3           */
#define clr_P3MF32_P3MF3_0       SFRS = 2; P3MF32 &=~0x10 /*!<Clear P3MF32.P3MF3_0           */
#define clr_P3MF32_P3MF3_1       SFRS = 2; P3MF32 &=~0x20 /*!<Clear P3MF32.P3MF3_1           */
#define clr_P3MF32_P3MF3_2       SFRS = 2; P3MF32 &=~0x40 /*!<Clear P3MF32.P3MF3_2           */
#define clr_P3MF32_P3MF3_3       SFRS = 2; P3MF32 &=~0x80 /*!<Clear P3MF32.P3MF3_3           */

/**@} end of SFR_PAGE2_P3MF32_MACRO group */
/**@} end of SFR_PAGE2_P3MF32 group */

/**
   @addtogroup SFR_PAGE2_S1CON S1CON
   Special Function Register @ref S1CON
   @{ */
/**@} end of SFR_PAGE2_S1CON group */

/**
   @addtogroup SFR_PAGE2_P0MF10 P0MF10
   Special Function Register P0MF10
   @{ */

/**
@var P0MF10
Address: F9H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF0_0   |P0.0 multi-function select
|[1]     |P0MF0_1   |P0.0 multi-function select
|[2]     |P0MF0_2   |P0.0 multi-function select
|[3]     |P0MF0_3   |P0.0 multi-function select
|[4]     |P0MF1_0   |P0.1 multi-function select
|[5]     |P0MF1_1   |P0.1 multi-function select
|[6]     |P0MF1_2   |P0.1 multi-function select
|[7]     |P0MF1_3   |P0.1 multi-function select
*/
__sfr __no_init volatile unsigned char P0MF10 @ 0xF9;

/**
@addtogroup SFR_PAGE2_P0MF10_MACRO Bit Macro Functions
Bit Macro Functions of P0MF10
@{ */

#define set_P0MF10_P0MF0_0       SFRS = 2; P0MF10 |= 0x01 /*!<Set P0MF10.P0MF0_0             */
#define set_P0MF10_P0MF0_1       SFRS = 2; P0MF10 |= 0x02 /*!<Set P0MF10.P0MF0_1             */
#define set_P0MF10_P0MF0_2       SFRS = 2; P0MF10 |= 0x04 /*!<Set P0MF10.P0MF0_2             */
#define set_P0MF10_P0MF0_3       SFRS = 2; P0MF10 |= 0x08 /*!<Set P0MF10.P0MF0_3             */
#define set_P0MF10_P0MF1_0       SFRS = 2; P0MF10 |= 0x10 /*!<Set P0MF10.P0MF1_0             */
#define set_P0MF10_P0MF1_1       SFRS = 2; P0MF10 |= 0x20 /*!<Set P0MF10.P0MF1_1             */
#define set_P0MF10_P0MF1_2       SFRS = 2; P0MF10 |= 0x40 /*!<Set P0MF10.P0MF1_2             */
#define set_P0MF10_P0MF1_3       SFRS = 2; P0MF10 |= 0x80 /*!<Set P0MF10.P0MF1_3             */

#define clr_P0MF10_P0MF0_0       SFRS = 2; P0MF10 &=~0x01 /*!<Clear P0MF10.P0MF0_0           */
#define clr_P0MF10_P0MF0_1       SFRS = 2; P0MF10 &=~0x02 /*!<Clear P0MF10.P0MF0_1           */
#define clr_P0MF10_P0MF0_2       SFRS = 2; P0MF10 &=~0x04 /*!<Clear P0MF10.P0MF0_2           */
#define clr_P0MF10_P0MF0_3       SFRS = 2; P0MF10 &=~0x08 /*!<Clear P0MF10.P0MF0_3           */
#define clr_P0MF10_P0MF1_0       SFRS = 2; P0MF10 &=~0x10 /*!<Clear P0MF10.P0MF1_0           */
#define clr_P0MF10_P0MF1_1       SFRS = 2; P0MF10 &=~0x20 /*!<Clear P0MF10.P0MF1_1           */
#define clr_P0MF10_P0MF1_2       SFRS = 2; P0MF10 &=~0x40 /*!<Clear P0MF10.P0MF1_2           */
#define clr_P0MF10_P0MF1_3       SFRS = 2; P0MF10 &=~0x80 /*!<Clear P0MF10.P0MF1_3           */

/**@} end of SFR_PAGE2_P0MF10_MACRO group */
/**@} end of SFR_PAGE2_P0MF10 group */

/**
   @addtogroup SFR_PAGE2_P0MF32 P0MF32
   Special Function Register P0MF32
   @{ */

/**
@var P0MF32
Address: FAH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF2_0   |P0.2 multi-function select
|[1]     |P0MF2_1   |P0.2 multi-function select
|[2]     |P0MF2_2   |P0.2 multi-function select
|[3]     |P0MF2_3   |P0.2 multi-function select
|[4]     |P0MF3_0   |P0.3 multi-function select
|[5]     |P0MF3_1   |P0.3 multi-function select
|[6]     |P0MF3_2   |P0.3 multi-function select
|[7]     |P0MF3_3   |P0.3 multi-function select
*/
__sfr __no_init volatile unsigned char P0MF32 @ 0xFA;

/**
@addtogroup SFR_PAGE2_P0MF32_MACRO Bit Macro Functions
Bit Macro Functions of P0MF32
@{ */

#define set_P0MF32_P0MF2_0       SFRS = 2; P0MF32 |= 0x01 /*!<Set P0MF32.P0MF2_0             */
#define set_P0MF32_P0MF2_1       SFRS = 2; P0MF32 |= 0x02 /*!<Set P0MF32.P0MF2_1             */
#define set_P0MF32_P0MF2_2       SFRS = 2; P0MF32 |= 0x04 /*!<Set P0MF32.P0MF2_2             */
#define set_P0MF32_P0MF2_3       SFRS = 2; P0MF32 |= 0x08 /*!<Set P0MF32.P0MF2_3             */
#define set_P0MF32_P0MF3_0       SFRS = 2; P0MF32 |= 0x10 /*!<Set P0MF32.P0MF3_0             */
#define set_P0MF32_P0MF3_1       SFRS = 2; P0MF32 |= 0x20 /*!<Set P0MF32.P0MF3_1             */
#define set_P0MF32_P0MF3_2       SFRS = 2; P0MF32 |= 0x40 /*!<Set P0MF32.P0MF3_2             */
#define set_P0MF32_P0MF3_3       SFRS = 2; P0MF32 |= 0x80 /*!<Set P0MF32.P0MF3_3             */

#define clr_P0MF32_P0MF2_0       SFRS = 2; P0MF32 &=~0x01 /*!<Clear P0MF32.P0MF2_0           */
#define clr_P0MF32_P0MF2_1       SFRS = 2; P0MF32 &=~0x02 /*!<Clear P0MF32.P0MF2_1           */
#define clr_P0MF32_P0MF2_2       SFRS = 2; P0MF32 &=~0x04 /*!<Clear P0MF32.P0MF2_2           */
#define clr_P0MF32_P0MF2_3       SFRS = 2; P0MF32 &=~0x08 /*!<Clear P0MF32.P0MF2_3           */
#define clr_P0MF32_P0MF3_0       SFRS = 2; P0MF32 &=~0x10 /*!<Clear P0MF32.P0MF3_0           */
#define clr_P0MF32_P0MF3_1       SFRS = 2; P0MF32 &=~0x20 /*!<Clear P0MF32.P0MF3_1           */
#define clr_P0MF32_P0MF3_2       SFRS = 2; P0MF32 &=~0x40 /*!<Clear P0MF32.P0MF3_2           */
#define clr_P0MF32_P0MF3_3       SFRS = 2; P0MF32 &=~0x80 /*!<Clear P0MF32.P0MF3_3           */

/**@} end of SFR_PAGE2_P0MF32_MACRO group */
/**@} end of SFR_PAGE2_P0MF32 group */

/**
   @addtogroup SFR_PAGE2_P0MF54 P0MF54
   Special Function Register P0MF54
   @{ */

/**
@var P0MF54
Address: FBH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF4_0   |P0.4 multi-function select
|[1]     |P0MF4_1   |P0.4 multi-function select
|[2]     |P0MF4_2   |P0.4 multi-function select
|[3]     |P0MF4_3   |P0.4 multi-function select
|[4]     |P0MF5_0   |P0.5 multi-function select
|[5]     |P0MF5_1   |P0.5 multi-function select
|[6]     |P0MF5_2   |P0.5 multi-function select
|[7]     |P0MF5_3   |P0.5 multi-function select
*/
__sfr __no_init volatile unsigned char P0MF54 @ 0xFB;

/**
@addtogroup SFR_PAGE2_P0MF54_MACRO Bit Macro Functions
Bit Macro Functions of P0MF54
@{ */

#define set_P0MF54_P0MF4_0       SFRS = 2; P0MF54 |= 0x01 /*!<Set P0MF54.P0MF4_0             */
#define set_P0MF54_P0MF4_1       SFRS = 2; P0MF54 |= 0x02 /*!<Set P0MF54.P0MF4_1             */
#define set_P0MF54_P0MF4_2       SFRS = 2; P0MF54 |= 0x04 /*!<Set P0MF54.P0MF4_2             */
#define set_P0MF54_P0MF4_3       SFRS = 2; P0MF54 |= 0x08 /*!<Set P0MF54.P0MF4_3             */
#define set_P0MF54_P0MF5_0       SFRS = 2; P0MF54 |= 0x10 /*!<Set P0MF54.P0MF5_0             */
#define set_P0MF54_P0MF5_1       SFRS = 2; P0MF54 |= 0x20 /*!<Set P0MF54.P0MF5_1             */
#define set_P0MF54_P0MF5_2       SFRS = 2; P0MF54 |= 0x40 /*!<Set P0MF54.P0MF5_2             */
#define set_P0MF54_P0MF5_3       SFRS = 2; P0MF54 |= 0x80 /*!<Set P0MF54.P0MF5_3             */

#define clr_P0MF54_P0MF4_0       SFRS = 2; P0MF54 &=~0x01 /*!<Clear P0MF54.P0MF4_0           */
#define clr_P0MF54_P0MF4_1       SFRS = 2; P0MF54 &=~0x02 /*!<Clear P0MF54.P0MF4_1           */
#define clr_P0MF54_P0MF4_2       SFRS = 2; P0MF54 &=~0x04 /*!<Clear P0MF54.P0MF4_2           */
#define clr_P0MF54_P0MF4_3       SFRS = 2; P0MF54 &=~0x08 /*!<Clear P0MF54.P0MF4_3           */
#define clr_P0MF54_P0MF5_0       SFRS = 2; P0MF54 &=~0x10 /*!<Clear P0MF54.P0MF5_0           */
#define clr_P0MF54_P0MF5_1       SFRS = 2; P0MF54 &=~0x20 /*!<Clear P0MF54.P0MF5_1           */
#define clr_P0MF54_P0MF5_2       SFRS = 2; P0MF54 &=~0x40 /*!<Clear P0MF54.P0MF5_2           */
#define clr_P0MF54_P0MF5_3       SFRS = 2; P0MF54 &=~0x80 /*!<Clear P0MF54.P0MF5_3           */

/**@} end of SFR_PAGE2_P0MF54_MACRO group */
/**@} end of SFR_PAGE2_P0MF54 group */

/**
   @addtogroup SFR_PAGE2_P0MF76 P0MF76
   Special Function Register P0MF76
   @{ */

/**
@var P0MF76
Address: FCH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF6_0   |P0.6 multi-function select
|[1]     |P0MF6_1   |P0.6 multi-function select
|[2]     |P0MF6_2   |P0.6 multi-function select
|[3]     |P0MF6_3   |P0.6 multi-function select
|[4]     |P0MF7_0   |P0.7 multi-function select
|[5]     |P0MF7_1   |P0.7 multi-function select
|[6]     |P0MF7_2   |P0.7 multi-function select
|[7]     |P0MF7_3   |P0.7 multi-function select
*/
__sfr __no_init volatile unsigned char P0MF76 @ 0xFC;

/**
@addtogroup SFR_PAGE2_P0MF76_MACRO Bit Macro Functions
Bit Macro Functions of P0MF76
@{ */

#define set_P0MF76_P0MF6_0       SFRS = 2; P0MF76 |= 0x01 /*!<Set P0MF76.P0MF6_0             */
#define set_P0MF76_P0MF6_1       SFRS = 2; P0MF76 |= 0x02 /*!<Set P0MF76.P0MF6_1             */
#define set_P0MF76_P0MF6_2       SFRS = 2; P0MF76 |= 0x04 /*!<Set P0MF76.P0MF6_2             */
#define set_P0MF76_P0MF6_3       SFRS = 2; P0MF76 |= 0x08 /*!<Set P0MF76.P0MF6_3             */
#define set_P0MF76_P0MF7_0       SFRS = 2; P0MF76 |= 0x10 /*!<Set P0MF76.P0MF7_0             */
#define set_P0MF76_P0MF7_1       SFRS = 2; P0MF76 |= 0x20 /*!<Set P0MF76.P0MF7_1             */
#define set_P0MF76_P0MF7_2       SFRS = 2; P0MF76 |= 0x40 /*!<Set P0MF76.P0MF7_2             */
#define set_P0MF76_P0MF7_3       SFRS = 2; P0MF76 |= 0x80 /*!<Set P0MF76.P0MF7_3             */

#define clr_P0MF76_P0MF6_0       SFRS = 2; P0MF76 &=~0x01 /*!<Clear P0MF76.P0MF6_0           */
#define clr_P0MF76_P0MF6_1       SFRS = 2; P0MF76 &=~0x02 /*!<Clear P0MF76.P0MF6_1           */
#define clr_P0MF76_P0MF6_2       SFRS = 2; P0MF76 &=~0x04 /*!<Clear P0MF76.P0MF6_2           */
#define clr_P0MF76_P0MF6_3       SFRS = 2; P0MF76 &=~0x08 /*!<Clear P0MF76.P0MF6_3           */
#define clr_P0MF76_P0MF7_0       SFRS = 2; P0MF76 &=~0x10 /*!<Clear P0MF76.P0MF7_0           */
#define clr_P0MF76_P0MF7_1       SFRS = 2; P0MF76 &=~0x20 /*!<Clear P0MF76.P0MF7_1           */
#define clr_P0MF76_P0MF7_2       SFRS = 2; P0MF76 &=~0x40 /*!<Clear P0MF76.P0MF7_2           */
#define clr_P0MF76_P0MF7_3       SFRS = 2; P0MF76 &=~0x80 /*!<Clear P0MF76.P0MF7_3           */

/**@} end of SFR_PAGE2_P0MF76_MACRO group */
/**@} end of SFR_PAGE2_P0MF76 group */

/**
   @addtogroup SFR_PAGE2_P1MF10 P1MF10
   Special Function Register P1MF10
   @{ */

/**
@var P1MF10
Address: FDH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF0_0   |P1.0 multi-function select
|[1]     |P1MF0_1   |P1.0 multi-function select
|[2]     |P1MF0_2   |P1.0 multi-function select
|[3]     |P1MF0_3   |P1.0 multi-function select
|[4]     |P1MF1_0   |P1.1 multi-function select
|[5]     |P1MF1_1   |P1.1 multi-function select
|[6]     |P1MF1_2   |P1.1 multi-function select
|[7]     |P1MF1_3   |P1.1 multi-function select
*/
__sfr __no_init volatile unsigned char P1MF10 @ 0xFD;

/**
@addtogroup SFR_PAGE2_P1MF10_MACRO Bit Macro Functions
Bit Macro Functions of P1MF10
@{ */

#define set_P1MF10_P1MF0_0       SFRS = 2; P1MF10 |= 0x01 /*!<Set P1MF10.P1MF0_0             */
#define set_P1MF10_P1MF0_1       SFRS = 2; P1MF10 |= 0x02 /*!<Set P1MF10.P1MF0_1             */
#define set_P1MF10_P1MF0_2       SFRS = 2; P1MF10 |= 0x04 /*!<Set P1MF10.P1MF0_2             */
#define set_P1MF10_P1MF0_3       SFRS = 2; P1MF10 |= 0x08 /*!<Set P1MF10.P1MF0_3             */
#define set_P1MF10_P1MF1_0       SFRS = 2; P1MF10 |= 0x10 /*!<Set P1MF10.P1MF1_0             */
#define set_P1MF10_P1MF1_1       SFRS = 2; P1MF10 |= 0x20 /*!<Set P1MF10.P1MF1_1             */
#define set_P1MF10_P1MF1_2       SFRS = 2; P1MF10 |= 0x40 /*!<Set P1MF10.P1MF1_2             */
#define set_P1MF10_P1MF1_3       SFRS = 2; P1MF10 |= 0x80 /*!<Set P1MF10.P1MF1_3             */

#define clr_P1MF10_P1MF0_0       SFRS = 2; P1MF10 &=~0x01 /*!<Clear P1MF10.P1MF0_0           */
#define clr_P1MF10_P1MF0_1       SFRS = 2; P1MF10 &=~0x02 /*!<Clear P1MF10.P1MF0_1           */
#define clr_P1MF10_P1MF0_2       SFRS = 2; P1MF10 &=~0x04 /*!<Clear P1MF10.P1MF0_2           */
#define clr_P1MF10_P1MF0_3       SFRS = 2; P1MF10 &=~0x08 /*!<Clear P1MF10.P1MF0_3           */
#define clr_P1MF10_P1MF1_0       SFRS = 2; P1MF10 &=~0x10 /*!<Clear P1MF10.P1MF1_0           */
#define clr_P1MF10_P1MF1_1       SFRS = 2; P1MF10 &=~0x20 /*!<Clear P1MF10.P1MF1_1           */
#define clr_P1MF10_P1MF1_2       SFRS = 2; P1MF10 &=~0x40 /*!<Clear P1MF10.P1MF1_2           */
#define clr_P1MF10_P1MF1_3       SFRS = 2; P1MF10 &=~0x80 /*!<Clear P1MF10.P1MF1_3           */

/**@} end of SFR_PAGE2_P1MF10_MACRO group */
/**@} end of SFR_PAGE2_P1MF10 group */

/**
   @addtogroup SFR_PAGE2_P1MF32 P1MF32
   Special Function Register P1MF32
   @{ */

/**
@var P1MF32
Address: FEH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF2_0   |P1.2 multi-function select
|[1]     |P1MF2_1   |P1.2 multi-function select
|[2]     |P1MF2_2   |P1.2 multi-function select
|[3]     |P1MF2_3   |P1.2 multi-function select
|[4]     |P1MF3_0   |P1.3 multi-function select
|[5]     |P1MF3_1   |P1.3 multi-function select
|[6]     |P1MF3_2   |P1.3 multi-function select
|[7]     |P1MF3_3   |P1.3 multi-function select
*/
__sfr __no_init volatile unsigned char P1MF32 @ 0xFE;

/**
@addtogroup SFR_PAGE2_P1MF32_MACRO Bit Macro Functions
Bit Macro Functions of P1MF32
@{ */

#define set_P1MF32_P1MF2_0       SFRS = 2; P1MF32 |= 0x01 /*!<Set P1MF32.P1MF2_0             */
#define set_P1MF32_P1MF2_1       SFRS = 2; P1MF32 |= 0x02 /*!<Set P1MF32.P1MF2_1             */
#define set_P1MF32_P1MF2_2       SFRS = 2; P1MF32 |= 0x04 /*!<Set P1MF32.P1MF2_2             */
#define set_P1MF32_P1MF2_3       SFRS = 2; P1MF32 |= 0x08 /*!<Set P1MF32.P1MF2_3             */
#define set_P1MF32_P1MF3_0       SFRS = 2; P1MF32 |= 0x10 /*!<Set P1MF32.P1MF3_0             */
#define set_P1MF32_P1MF3_1       SFRS = 2; P1MF32 |= 0x20 /*!<Set P1MF32.P1MF3_1             */
#define set_P1MF32_P1MF3_2       SFRS = 2; P1MF32 |= 0x40 /*!<Set P1MF32.P1MF3_2             */
#define set_P1MF32_P1MF3_3       SFRS = 2; P1MF32 |= 0x80 /*!<Set P1MF32.P1MF3_3             */

#define clr_P1MF32_P1MF2_0       SFRS = 2; P1MF32 &=~0x01 /*!<Clear P1MF32.P1MF2_0           */
#define clr_P1MF32_P1MF2_1       SFRS = 2; P1MF32 &=~0x02 /*!<Clear P1MF32.P1MF2_1           */
#define clr_P1MF32_P1MF2_2       SFRS = 2; P1MF32 &=~0x04 /*!<Clear P1MF32.P1MF2_2           */
#define clr_P1MF32_P1MF2_3       SFRS = 2; P1MF32 &=~0x08 /*!<Clear P1MF32.P1MF2_3           */
#define clr_P1MF32_P1MF3_0       SFRS = 2; P1MF32 &=~0x10 /*!<Clear P1MF32.P1MF3_0           */
#define clr_P1MF32_P1MF3_1       SFRS = 2; P1MF32 &=~0x20 /*!<Clear P1MF32.P1MF3_1           */
#define clr_P1MF32_P1MF3_2       SFRS = 2; P1MF32 &=~0x40 /*!<Clear P1MF32.P1MF3_2           */
#define clr_P1MF32_P1MF3_3       SFRS = 2; P1MF32 &=~0x80 /*!<Clear P1MF32.P1MF3_3           */

/**@} end of SFR_PAGE2_P1MF32_MACRO group */
/**@} end of SFR_PAGE2_P1MF32 group */

/**
   @addtogroup SFR_PAGE2_P1MF54 P1MF54
   Special Function Register P1MF54
   @{ */

/**
@var P1MF54
Address: FFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF4_0   |P1.4 multi-function select
|[1]     |P1MF4_1   |P1.4 multi-function select
|[2]     |P1MF4_2   |P1.4 multi-function select
|[3]     |P1MF4_3   |P1.4 multi-function select
|[4]     |P1MF5_0   |P1.5 multi-function select
|[5]     |P1MF5_1   |P1.5 multi-function select
|[6]     |P1MF5_2   |P1.5 multi-function select
|[7]     |P1MF5_3   |P1.5 multi-function select
*/
__sfr __no_init volatile unsigned char P1MF54 @ 0xFF;

/**
@addtogroup SFR_PAGE2_P1MF54_MACRO Bit Macro Functions
Bit Macro Functions of P1MF54
@{ */

#define set_P1MF54_P1MF4_0       SFRS = 2; P1MF54 |= 0x01 /*!<Set P1MF54.P1MF4_0             */
#define set_P1MF54_P1MF4_1       SFRS = 2; P1MF54 |= 0x02 /*!<Set P1MF54.P1MF4_1             */
#define set_P1MF54_P1MF4_2       SFRS = 2; P1MF54 |= 0x04 /*!<Set P1MF54.P1MF4_2             */
#define set_P1MF54_P1MF4_3       SFRS = 2; P1MF54 |= 0x08 /*!<Set P1MF54.P1MF4_3             */
#define set_P1MF54_P1MF5_0       SFRS = 2; P1MF54 |= 0x10 /*!<Set P1MF54.P1MF5_0             */
#define set_P1MF54_P1MF5_1       SFRS = 2; P1MF54 |= 0x20 /*!<Set P1MF54.P1MF5_1             */
#define set_P1MF54_P1MF5_2       SFRS = 2; P1MF54 |= 0x40 /*!<Set P1MF54.P1MF5_2             */
#define set_P1MF54_P1MF5_3       SFRS = 2; P1MF54 |= 0x80 /*!<Set P1MF54.P1MF5_3             */

#define clr_P1MF54_P1MF4_0       SFRS = 2; P1MF54 &=~0x01 /*!<Clear P1MF54.P1MF4_0           */
#define clr_P1MF54_P1MF4_1       SFRS = 2; P1MF54 &=~0x02 /*!<Clear P1MF54.P1MF4_1           */
#define clr_P1MF54_P1MF4_2       SFRS = 2; P1MF54 &=~0x04 /*!<Clear P1MF54.P1MF4_2           */
#define clr_P1MF54_P1MF4_3       SFRS = 2; P1MF54 &=~0x08 /*!<Clear P1MF54.P1MF4_3           */
#define clr_P1MF54_P1MF5_0       SFRS = 2; P1MF54 &=~0x10 /*!<Clear P1MF54.P1MF5_0           */
#define clr_P1MF54_P1MF5_1       SFRS = 2; P1MF54 &=~0x20 /*!<Clear P1MF54.P1MF5_1           */
#define clr_P1MF54_P1MF5_2       SFRS = 2; P1MF54 &=~0x40 /*!<Clear P1MF54.P1MF5_2           */
#define clr_P1MF54_P1MF5_3       SFRS = 2; P1MF54 &=~0x80 /*!<Clear P1MF54.P1MF5_3           */

/**@} end of SFR_PAGE2_P1MF54_MACRO group */
/**@} end of SFR_PAGE2_P1MF54 group */

/**@} end of SFR_PAGE2 group */


/**
 @addtogroup SFR_PAGE3 SFR Page 3
 @{ */

/**
   @addtogroup SFR_PAGE3_P0 P0
   Special Function Register @ref P0
   @{ */
/**@} end of SFR_PAGE3_P0 group */

/**
   @addtogroup SFR_PAGE3_DPL DPL
   Special Function Register @ref DPL
   @{ */
/**@} end of SFR_PAGE3_DPL group */

/**
   @addtogroup SFR_PAGE3_DPH DPH
   Special Function Register @ref DPH
   @{ */
/**@} end of SFR_PAGE3_DPH group */

/**
   @addtogroup SFR_PAGE3_MIRCTRIM MIRCTRIM
   Special Function Register MIRCTRIM
   @{ */

/**
@var MIRCTRIM
Address: 84H, SFR Page 3, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[9:3]   |MIRCTRIM[9:2]|Median Speed Internal Oscillator Trim Value High Byte
*/
__sfr __no_init volatile unsigned char MIRCTRIM @ 0x84;

/**@} end of SFR_PAGE3_MIRCTRIM group */

/**
   @addtogroup SFR_PAGE3_MIRCTRIM1 MIRCTRIM1
   Special Function Register MIRCTRIM1
   @{ */

/**
@var MIRCTRIM1
Address: 85H, SFR Page 3, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |MIRCTRIM[1:0]|Median Speed Internal Oscillator Trim Value Low Byte
*/
__sfr __no_init volatile unsigned char MIRCTRIM1 @ 0x85;

/**@} end of SFR_PAGE3_MIRCTRIM1 group */

/**
   @addtogroup SFR_PAGE3_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE3_PCON group */

/**
   @addtogroup SFR_PAGE3_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE3_PCON group */

/**
   @addtogroup SFR_PAGE3_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE3_PCON group */

/**
   @addtogroup SFR_PAGE3_PCON PCON
   Special Function Register @ref PCON
   @{ */
/**@} end of SFR_PAGE3_PCON group */

/**
   @addtogroup SFR_PAGE3_TCON TCON
   Special Function Register @ref TCON
   @{ */
/**@} end of SFR_PAGE3_TCON group */

/**
   @addtogroup SFR_PAGE3_TMOD TMOD
   Special Function Register @ref TMOD
   @{ */
/**@} end of SFR_PAGE3_TMOD group */

/**
   @addtogroup SFR_PAGE3_DMA0CR1 DMA0CR1
   Special Function Register DMA0CR1
   @{ */

/**
@var DMA0CR1
Address: 8AH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CRCEN     |PDMA CRC Checksum Enable Bit
|        |          |0 = CRC checksum Disabled when PDMA is running, DMAnCRC[7:0] is set to
|        |          |0x00
|        |          |1 = CRC checksum Enabled when PDMA is running.
|[1]     |REFIN     |PDMA CRC IN Reflect Enable Bit
|        |          |0 = CRC IN reflect Disabled when PDMA is running.
|        |          |1 = CRC IN reflect Enabled when PDMA is running, the input data will
|        |          |be bit order revised
|[2]     |REFOUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT reflect Disabled when PDMA is running.
|        |          |1 = CRC OUT reflect Enabled when PDMA is running, the output data will
|        |          |be bit order revised
|[3]     |XOROUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT exclusive-ored Disabled when PDMA is running.
|        |          |1 = CRC OUT exclusive-ored Enabled when PDMA is running, the final
|        |          |value is exclusive-ored with 0x55
|[7:4]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char DMA0CR1 @ 0x8A;

/**
@addtogroup SFR_PAGE3_DMA0CR1_MACRO Bit Macro Functions
Bit Macro Functions of DMA0CR1
@{ */

#define set_DMA0CR1_CRCEN        SFRS = 3; DMA0CR1 |= 0x01 /*!<Set DMA0CR1.CRCEN              */
#define set_DMA0CR1_REFIN        SFRS = 3; DMA0CR1 |= 0x02 /*!<Set DMA0CR1.REFIN              */
#define set_DMA0CR1_REFOUT       SFRS = 3; DMA0CR1 |= 0x04 /*!<Set DMA0CR1.REFOUT             */
#define set_DMA0CR1_XOROUT       SFRS = 3; DMA0CR1 |= 0x08 /*!<Set DMA0CR1.XOROUT             */

#define clr_DMA0CR1_CRCEN        SFRS = 3; DMA0CR1 &=~0x01 /*!<Clear DMA0CR1.CRCEN            */
#define clr_DMA0CR1_REFIN        SFRS = 3; DMA0CR1 &=~0x02 /*!<Clear DMA0CR1.REFIN            */
#define clr_DMA0CR1_REFOUT       SFRS = 3; DMA0CR1 &=~0x04 /*!<Clear DMA0CR1.REFOUT           */
#define clr_DMA0CR1_XOROUT       SFRS = 3; DMA0CR1 &=~0x08 /*!<Clear DMA0CR1.XOROUT           */

/**@} end of SFR_PAGE3_DMA0CR1_MACRO group */
/**@} end of SFR_PAGE3_DMA0CR1 group */

/**
   @addtogroup SFR_PAGE3_DMA1CR1 DMA1CR1
   Special Function Register DMA1CR1
   @{ */

/**
@var DMA1CR1
Address: 8BH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CRCEN     |PDMA CRC Checksum Enable Bit
|        |          |0 = CRC checksum Disabled when PDMA is running, DMAnCRC[7:0] is set to
|        |          |0x00
|        |          |1 = CRC checksum Enabled when PDMA is running.
|[1]     |REFIN     |PDMA CRC IN Reflect Enable Bit
|        |          |0 = CRC IN reflect Disabled when PDMA is running.
|        |          |1 = CRC IN reflect Enabled when PDMA is running, the input data will
|        |          |be bit order revised
|[2]     |REFOUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT reflect Disabled when PDMA is running.
|        |          |1 = CRC OUT reflect Enabled when PDMA is running, the output data will
|        |          |be bit order revised
|[3]     |XOROUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT exclusive-ored Disabled when PDMA is running.
|        |          |1 = CRC OUT exclusive-ored Enabled when PDMA is running, the final
|        |          |value is exclusive-ored with 0x55
|[7:4]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char DMA1CR1 @ 0x8B;

/**
@addtogroup SFR_PAGE3_DMA1CR1_MACRO Bit Macro Functions
Bit Macro Functions of DMA1CR1
@{ */

#define set_DMA1CR1_CRCEN        SFRS = 3; DMA1CR1 |= 0x01 /*!<Set DMA1CR1.CRCEN              */
#define set_DMA1CR1_REFIN        SFRS = 3; DMA1CR1 |= 0x02 /*!<Set DMA1CR1.REFIN              */
#define set_DMA1CR1_REFOUT       SFRS = 3; DMA1CR1 |= 0x04 /*!<Set DMA1CR1.REFOUT             */
#define set_DMA1CR1_XOROUT       SFRS = 3; DMA1CR1 |= 0x08 /*!<Set DMA1CR1.XOROUT             */

#define clr_DMA1CR1_CRCEN        SFRS = 3; DMA1CR1 &=~0x01 /*!<Clear DMA1CR1.CRCEN            */
#define clr_DMA1CR1_REFIN        SFRS = 3; DMA1CR1 &=~0x02 /*!<Clear DMA1CR1.REFIN            */
#define clr_DMA1CR1_REFOUT       SFRS = 3; DMA1CR1 &=~0x04 /*!<Clear DMA1CR1.REFOUT           */
#define clr_DMA1CR1_XOROUT       SFRS = 3; DMA1CR1 &=~0x08 /*!<Clear DMA1CR1.XOROUT           */

/**@} end of SFR_PAGE3_DMA1CR1_MACRO group */
/**@} end of SFR_PAGE3_DMA1CR1 group */

/**
   @addtogroup SFR_PAGE3_T2ACMP T2ACMP
   Special Function Register T2ACMP
   @{ */

/**
@var T2ACMP
Address: 8EH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:8]   |IC0S[1:0] |Input Capture 0 Source Select
|        |          |00 = IC0
|        |          |01 = ACMP0_O
|        |          |10 = ACMP1_O
|        |          |11 = IC0
|[3:8]   |IC1S[1:0] |Input Capture 1 Source Select
|        |          |00 = external IC1 source connects to internal IC1
|        |          |01 = ACMP0_O
|        |          |10 = ACMP1_O
|        |          |11 = external IC1 source connects to internal IC1
|[5:8]   |IC2S[1:0] |Input Capture 2 Source Select
|        |          |00 = IC2
|        |          |01 = ACMP_O
|        |          |10 = ACMP1_O
|        |          |11 = Reserved
|[7:8]   |T2CKS[1:0]|Timer2 Clock Source Select
|        |          |00 = Timer 2 Clock source from FSYS.
|        |          |01 = Timer 2 Clock source from external P4.0
|        |          |10 = Timer 2 Clock source from external pin P5.4
|        |          |11 = Timer 2 Clock source from external pin P3.2
*/
__sfr __no_init volatile unsigned char T2ACMP @ 0x8E;

/**@} end of SFR_PAGE3_T2ACMP group */

/**
   @addtogroup SFR_PAGE3_P1 P1
   Special Function Register @ref P1
   @{ */
/**@} end of SFR_PAGE3_P1 group */

/**
   @addtogroup SFR_PAGE3_SFRS SFRS
   Special Function Register @ref SFRS
   @{ */
/**@} end of SFR_PAGE3_SFRS group */

/**
   @addtogroup SFR_PAGE3_DMA0CRC DMA0CRC
   Special Function Register DMA0CRC
   @{ */

/**
@var DMA0CRC
Address: 92H, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CRC[7:0]  |PDMA CRC Checksum
|        |          |The checksum of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8 + X2 + X + 1
*/
__sfr __no_init volatile unsigned char DMA0CRC @ 0x92;

/**@} end of SFR_PAGE3_DMA0CRC group */

/**
   @addtogroup SFR_PAGE3_DMA1CRC DMA1CRC
   Special Function Register DMA1CRC
   @{ */

/**
@var DMA1CRC
Address: 93H, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CRC[7:0]  |PDMA CRC Checksum
|        |          |The checksum of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8 + X2 + X + 1
*/
__sfr __no_init volatile unsigned char DMA1CRC @ 0x93;

/**@} end of SFR_PAGE3_DMA1CRC group */

/**
   @addtogroup SFR_PAGE3_PDL PDL
   Special Function Register PDL
   @{ */

/**
@var PDL
Address: 8FH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |PDLS[1:0] |Power Down Level Select
|        |          |00 = Power Down Level 0 (defaut)
|        |          |01 = Power Down Level 1
|        |          |10 = Power Down Level 2
|        |          |Others = Reserved.
*/
__sfr __no_init volatile unsigned char PDL @ 0x8F;

/**@} end of SFR_PAGE3_PDL group */

/**
   @addtogroup SFR_PAGE3_SCON SCON
   Special Function Register @ref SCON
   @{ */
/**@} end of SFR_PAGE3_SCON group */

/**
   @addtogroup SFR_PAGE3_DMA0SEED DMA0SEED
   Special Function Register DMA0SEED
   @{ */

/**
@var DMA0SEED
Address: 9AH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SEED[7:0] |PDMA CRC SEED
|        |          |The seed of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8
|        |          |+ X2 + X + 1
*/
__sfr __no_init volatile unsigned char DMA0SEED @ 0x9A;

/**@} end of SFR_PAGE3_DMA0SEED group */

/**
   @addtogroup SFR_PAGE3_DMA1SEED DMA1SEED
   Special Function Register DMA1SEED
   @{ */

/**
@var DMA1SEED
Address: 9BH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SEED[7:0] |PDMA CRC SEED
|        |          |The seed of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8
|        |          |+ X2 + X + 1
*/
__sfr __no_init volatile unsigned char DMA1SEED @ 0x9B;

/**@} end of SFR_PAGE3_DMA1SEED group */

/**
   @addtogroup SFR_PAGE3_P2 P2
   Special Function Register @ref P2
   @{ */
/**@} end of SFR_PAGE3_P2 group */

/**
   @addtogroup SFR_PAGE3_IE IE
   Special Function Register @ref IE
   @{ */
/**@} end of SFR_PAGE3_IE group */

/**
   @addtogroup SFR_PAGE3_IE IE
   Special Function Register @ref IE
   @{ */
/**@} end of SFR_PAGE3_IE group */

/**
   @addtogroup SFR_PAGE3_P3 P3
   Special Function Register @ref P3
   @{ */
/**@} end of SFR_PAGE3_P3 group */

/**
   @addtogroup SFR_PAGE3_IP IP
   Special Function Register @ref IP
   @{ */
/**@} end of SFR_PAGE3_IP group */

/**
   @addtogroup SFR_PAGE3_I2C0CON I2C0CON
   Special Function Register @ref I2C0CON
   @{ */
/**@} end of SFR_PAGE3_I2C0CON group */

/**
   @addtogroup SFR_PAGE3_TA TA
   Special Function Register @ref TA
   @{ */
/**@} end of SFR_PAGE3_TA group */

/**
   @addtogroup SFR_PAGE3_T2CON T2CON
   Special Function Register @ref T2CON
   @{ */
/**@} end of SFR_PAGE3_T2CON group */

/**
   @addtogroup SFR_PAGE3_PRTHCON0 PRTHCON0
   Special Function Register PRTHCON0
   @{ */

/**
@var PRTHCON0
Address: C9H, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:6]   |P20RTH[1:0]|P2.0 Low Level To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
|[3:6]   |P21RTH[1:0]|P2.1 Low Level To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
|[5:6]   |P30RTH[1:0]|P3.0 Low Level To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
|[7:6]   |P40RTH[1:0]|P4.0 Low Level Auto Return To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
*/
__sfr __no_init volatile unsigned char PRTHCON0 @ 0xC9;

/**@} end of SFR_PAGE3_PRTHCON0 group */

/**
   @addtogroup SFR_PAGE3_AUXR3 AUXR3
   Special Function Register AUXR3
   @{ */

/**
@var AUXR3
Address: CFH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |UART0DG   |UART0 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[1]     |UART1DG   |UART1 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[2]     |UART2DG   |UART2 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[3]     |UART3DG   |UART3 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[7:4]   |Reserved  |Reserved
*/
__sfr __no_init volatile unsigned char AUXR3 @ 0xCF;

/**
@addtogroup SFR_PAGE3_AUXR3_MACRO Bit Macro Functions
Bit Macro Functions of AUXR3
@{ */

#define set_AUXR3_UART0DG        SFRS = 3; AUXR3 |= 0x01 /*!<Set AUXR3.UART0DG              */
#define set_AUXR3_UART1DG        SFRS = 3; AUXR3 |= 0x02 /*!<Set AUXR3.UART1DG              */
#define set_AUXR3_UART2DG        SFRS = 3; AUXR3 |= 0x04 /*!<Set AUXR3.UART2DG              */
#define set_AUXR3_UART3DG        SFRS = 3; AUXR3 |= 0x08 /*!<Set AUXR3.UART3DG              */

#define clr_AUXR3_UART0DG        SFRS = 3; AUXR3 &=~0x01 /*!<Clear AUXR3.UART0DG            */
#define clr_AUXR3_UART1DG        SFRS = 3; AUXR3 &=~0x02 /*!<Clear AUXR3.UART1DG            */
#define clr_AUXR3_UART2DG        SFRS = 3; AUXR3 &=~0x04 /*!<Clear AUXR3.UART2DG            */
#define clr_AUXR3_UART3DG        SFRS = 3; AUXR3 &=~0x08 /*!<Clear AUXR3.UART3DG            */

/**@} end of SFR_PAGE3_AUXR3_MACRO group */
/**@} end of SFR_PAGE3_AUXR3 group */

/**
   @addtogroup SFR_PAGE3_PSW PSW
   Special Function Register @ref PSW
   @{ */
/**@} end of SFR_PAGE3_PSW group */

/**
   @addtogroup SFR_PAGE3_P4 P4
   Special Function Register @ref P4
   @{ */
/**@} end of SFR_PAGE3_P4 group */

/**
   @addtogroup SFR_PAGE3_ACC ACC
   Special Function Register @ref ACC
   @{ */
/**@} end of SFR_PAGE3_ACC group */

/**
   @addtogroup SFR_PAGE3_I2C1CON I2C1CON
   Special Function Register @ref I2C1CON
   @{ */
/**@} end of SFR_PAGE3_I2C1CON group */

/**
   @addtogroup SFR_PAGE3_S1CON S1CON
   Special Function Register @ref S1CON
   @{ */
/**@} end of SFR_PAGE3_S1CON group */

/**@} end of SFR_PAGE3 group */


/**@} end of SFR_REG group */

/*========================================================================================*/

/**
  @addtogroup PERIPHERAL Peripheral Control Register
  @{ */

/**
  @addtogroup IP_SFR SFR Control Register
  @{ */

/**
@addtogroup IP_SFR_SFRS SFRS
Special Function Register @ref SFRS 
Address: 91H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |SFRPAGE[1:0]|SFR Page Select
|        |          |00 = Instructions access SFR Page 0.
|        |          |01 = Instructions access SFR Page 1.
|        |          |10 = Instructions access SFR page 2.
|        |          |11 = Instructions access SFR page 3.
*/

/**
@addtogroup IP_SFR_TA TA
Special Function Register @ref TA 
Address: C7H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TA[7:0]   |Timed Access
|        |          |The timed access register controls the access to protected SFR. To
|        |          |access protected bits, user should first write AAH to the TA and
|        |          |immediately followed by a write of 55H to TA. After these two steps, a
|        |          |writing permission window is opened for 4 clock cycles during this
|        |          |period that user may write to protected SFR.
*/

/**
@addtogroup IP_SFR_DPL DPL
Special Function Register @ref DPL 
Address: 82H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |DPTR[7:0] |Data Pointer Low Byte
|        |          |This is the low byte of 16-bit data pointer. DPL combined with DPH
|        |          |serve as a 16-bit data pointer DPTR to access indirect addressed RAM
|        |          |or Program Memory. DPS (AUXR0.0) bit decides which data pointer, DPTR
|        |          |or DPTR1, is activated.
*/

/**
@addtogroup IP_SFR_DPH DPH
Special Function Register @ref DPH 
Address: 83H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |DPTR[15:8]|Data Pointer High Byte
|        |          |This is the high byte of 16-bit data pointer. DPH combined with DPL
|        |          |serve as a 16-bit data pointer DPTR to access indirect addressed RAM
|        |          |or Program Memory. DPS (AUXR0.0) bit decides which data pointer, DPTR
|        |          |or DPTR1, is activated.
*/

/**
@addtogroup IP_SFR_PSW PSW
Special Function Register @ref PSW 
Address: D0H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P         |Parity Flag
|        |          |Set to 1 to indicate an odd number of ones in the accumulator. Cleared
|        |          |for an even number of ones. It performs even parity check.
|[1]     |F1        |User Flag 1
|        |          |The general purpose flag that can be set or cleared by user via
|        |          |software.
|[2]     |OV        |Overflow Flag
|        |          |OV is used for a signed character operands. For a ADD or ADDC
|        |          |instruction, OV will be set if there is a carry out of bit 6 but not
|        |          |out of bit 7, or a carry out of bit 7 but not bit 6. Otherwise, OV is
|        |          |cleared. OV indicates a negative number produced as the sum of two
|        |          |positive operands or a positive sum from two negative operands. For a
|        |          |SUBB, OV is set if a borrow is needed into bit6 but not into bit 7, or
|        |          |into bit7 but not bit 6. Otherwise, OV is cleared. OV indicates a
|        |          |negative number produced when a negative value is subtracted from a
|        |          |positive value, or a positive result when a positive number is
|        |          |subtracted from a negative number.
|        |          |For a MUL, if the product is greater than 255 (00FFH), OV will be set.
|        |          |Otherwise, it is cleared.
|        |          |For a DIV, it is normally 0. However, if B had originally contained
|        |          |00H, the values returned in A and B will be undefined. Meanwhile, the
|        |          |OV will be set.
|[3]     |RS0       |Check with bit 4 description.
|[4]     |RS1       |Register Bank Selection Bits
|        |          |These two bits select one of four banks in which R0 to R7 locate.
|        |          |RS1
|        |          |RS0
|        |          |Register Bank
|        |          |RAM Address
|        |          |0
|        |          |0
|        |          |0
|        |          |00H to 07H
|        |          |0
|        |          |1
|        |          |1
|        |          |08H to 0FH
|        |          |1
|        |          |0
|        |          |2
|        |          |10H to 17H
|        |          |1
|        |          |1
|        |          |3
|        |          |18H to 1FH
|[5]     |F0        |User Flag 0
|        |          |The general purpose flag that can be set or cleared by user.
|[6]     |AC        |Auxiliary Carry
|        |          |Set when the previous operation resulted in a carry-out from or a
|        |          |borrow-in to the 4th bit of the low order nibble, otherwise cleared.
|[7]     |CY        |Carry Flag
|        |          |For a adding or subtracting operation, CY will be set when the
|        |          |previous operation resulted in a carry-out from or a borrow-in to the
|        |          |Most Significant bit, otherwise cleared.
|        |          |If the previous operation is MUL or DIV, CY is always 0.
|        |          |CY is affected by DA A instruction, which indicates that if the
|        |          |original BCD sum is greater than 100.
|        |          |For a CJNE branch, CY will be set if the first unsigned integer value
|        |          |is less than the second one. Otherwise, CY will be cleared.
*/

/**@} end of SFR group */

/**
  @addtogroup IP_SYSTEM System Control Register
  @{ */

/**
@addtogroup IP_System_ACC ACC
Special Function Register @ref ACC 
Address: E0H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |ACC[7:0]  |Accumulator
|        |          |The A or ACC register is the standard 80C51 accumulator for arithmetic
|        |          |operation.
*/

/**
@addtogroup IP_System_CHPCON CHPCON
Special Function Register @ref CHPCON 
Address: 9FH, Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IAPEN     |IAP Enable
|        |          |0 = IAP function Disabled.
|        |          |1 = IAP function Enabled.
|        |          |Once enabling IAP function, the MIRC will be turned on for timing
|        |          |control. To clear IAPEN should always be the last instruction after
|        |          |IAP operation to stop internal oscillator if reducing power
|        |          |consumption is concerned.
|[1]     |BS        |Boot Select
|        |          |This bit defines from which block that MCU re-boots after all resets.
|        |          |0 = MCU will re-boot from APROM after all resets.
|        |          |1 = MCU will re-boot from LDROM after all resets.
|[5:2]   |Reserved  |Reserved
|[6]     |IAPFF     |IAP Fault Flag
|        |          |The hardware will set this bit after IAPGO (IAPTRG.0) is set if any of
|        |          |the following condition is met:
|        |          |(1) The accessing address is oversize.
|        |          |(2) IAPCN command is invalid.
|        |          |(3) IAP erases or programs updating un-enabled block.
|        |          |(4) IAP erasing or programming operates under VBOD while BOIAP
|        |          |(CONFIG2.5) remains un-programmed 1 with BODEN (BODCON0.7) as 1 and
|        |          |BORST (BODCON0.2) as 0.
|        |          |This bit should be cleared via software.
|[7]     |SWRST     |Software Reset
|        |          |To set this bit as logic 1 will cause a software reset. It will
|        |          |automatically be cleared via hardware after reset is finished.
*/

/**
@addtogroup IP_System_CKCON CKCON
Special Function Register @ref CKCON 
Address: 8EH, Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |DPIDL     |0 = keep chip internal clock in IDLE mode.
|        |          |1= chip enter IDLE mode, the chip internal clock will stop.
|[1]     |CLOEN     |System Clock Output Enable
|        |          |0 = System clock output Disabled.
|        |          |1 = System clock output Enabled from CLO pin.
|        |          |Once system clock output was enabled, only POR/BOD reset can disable
|        |          |it.
|[2]     |T0OE      |Timer 0 Output Enable
|        |          |0 = Timer 0 output Disabled.
|        |          |1 = Timer 0 output Enabled from T0 pin.
|        |          |Note that Timer 0 output should be enabled only when operating in its
|        |          |Timer mode.
|[3]     |T0M       |Timer 0 Clock Mode Select
|        |          |0 = The clock source of Timer 0 is the system clock divided by 12. It
|        |          |maintains standard 8051 compatibility.
|        |          |1 = The clock source of Timer 0 is direct the system clock.
|[4]     |T1M       |Timer 1 Clock Mode Select
|        |          |0 = The clock source of Timer 1 is the system clock divided by 12. It
|        |          |maintains standard 8051 compatibility.
|        |          |1 = The clock source of Timer 1 is direct the system clock.
|[5]     |T1OE      |Timer 1 Output Enable
|        |          |0 = Timer 1 output Disabled.
|        |          |1 = Timer 1 output Enabled from T1 pin.
|        |          |Note that Timer 1 output should be enabled only when operating in its
|        |          |Timer mode.
|[5]     |PWMCKS    |PWM Clock Source Select
|        |          |0 = The clock source of PWM is the system clock FSYS.
|        |          |1 = The clock source of PWM is the overflow of Timer 1.
|[7]     |FASTWK    |Fast Wakeup Enable
|        |          |0 = Faster Wakeup Disabled, when system wakeup from power down mode,
|        |          |MIRC clock stable time is about 10us.
|        |          |1 = Faster Wakeup Enabled, when system wakeup from power down mode,
|        |          |MIRC clock stable time is about 3us.
*/

/**
@addtogroup IP_System_PCON PCON
Special Function Register @ref PCON 
Address: 87H, All pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IDL       |Idle Mode
|        |          |Setting this bit puts CPU into Idle mode. Under this mode, the CPU
|        |          |clock stops and Program Counter (PC) suspends but all peripherals keep
|        |          |activated. After CPU is woken up from Idle, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the ISR of the very interrupt source that woke the system up before.
|        |          |After return from the ISR, the device continues execution at the
|        |          |instruction which follows the instruction that put the system into
|        |          |Idle mode.
|[1]     |PD        |Power-Down Mode
|        |          |Setting this bit puts CPU
|        |          |into Power-down mode. Under this mode, both CPU and peripheral clocks
|        |          |stop and Program Counter (PC) suspends. It provides the lowest power
|        |          |consumption. After CPU is woken up from Power-down, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the interrupt service routine (ISR) of the very interrupt source that
|        |          |woke the system up before. After return from the ISR, the device
|        |          |continues execution at the instruction, which follows the instruction
|        |          |that put the system into Power-down mode.
|        |          |Note that If IDL bit and PD bit are set simultaneously, CPU
|        |          |will enter Power-down mode. Then it does not go to Idle mode after
|        |          |exiting Power-down.
|[2]     |GF0       |General Purpose Flag 0
|        |          |The general purpose flag that can be set or cleared by user via
|        |          |software.
|[3]     |GF1       |General Purpose Flag 1
|        |          |The general purpose flag that can be set or cleared by user via
|        |          |software.
|[4]     |POF       |Power-on Reset Flag
|        |          |This bit will be set as 1 after a power-on reset. It indicates a cold
|        |          |reset, a power-on reset complete. This bit remains its value after any
|        |          |other resets. This flag is recommended to be cleared via software.
|[5]     |LPR       |Low Power Run Mode
|        |          |0 = disable
|        |          |1 = enable
|        |          |Note: If PD = 1 and LPR = 1 at the same time, LPR is invalid, CPU will
|        |          |enter Power-down mode.
|[6]     |SMOD0     |Serial Port 0 Framing Error Flag Access Enable
|        |          |0 = SCON.7 accesses to SM0 bit.
|        |          |1 = SCON.7 accesses to FE bit.
|[7]     |SMOD      |Serial Port 0 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART0 is in
|        |          |Mode 2 or when Timer 1 overflow is used as the baud rate source of
|        |          |UART0 Mode 1 or 3. See Table 6.91 Serial Port 0 Mode / baud rate
|        |          |Description for details.
*/

/**
@addtogroup IP_System_AUXR0 AUXR0
Special Function Register @ref AUXR0 
Address: A2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |DPS       |Data Pointer Select
|        |          |0 = Data pointer 0 (DPTR) is active by default.
|        |          |1 = Data pointer 1 (DPTR1) is active.
|        |          |After DPS switches the activated data pointer, the previous
|        |          |inactivated data pointer remains its original value unchanged.
|[1]     |0         |Reserved This bit is always read as 0.
|[2]     |LIBRF     |LIBROM Flag
|        |          |The LIBROM flag that can be set or cleared by user. via software.
|[3]     |GF2       |General Purpose Flag 2
|        |          |The general purpose flag that can be set or cleared by the user via
|        |          |software.
|[4]     |HFIF      |Hard Fault Interrupt Flag
|        |          |Once CPU fetches instruction address over Flash size while EHFI
|        |          |(EIE1.4)=1. MCU will be interrupt and this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
|[5]     |HFRF      |Hard Fault Reset Flag
|        |          |Once CPU fetches instruction address over Flash size while EHFI
|        |          |(EIE1.4)=0, MCU will reset and this bit will be set via hardware. It
|        |          |is recommended that the flag be cleared via software.
|        |          |Note: If MCU run in OCD debug mode and OCDEN = 0, Hard fault reset
|        |          |will disable. Only HFRF flag be asserted.
|[6]     |RSTPINF   |External Reset Flag
|        |          |When the MCU is reset by the external reset, this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
|[7]     |SWRF      |Software Reset Flag
|        |          |When the MCU is reset via software reset, this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
*/

/**
@addtogroup IP_System_PORDIS PORDIS
Special Function Register @ref PORDIS 
Address: C6H, SFR Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |PORDIS[7:0]|POR Disable
|        |          |To first writing 5AH to the PORDIS and immediately followed by a
|        |          |writing of A5H will disable all of PORs (POR50 and POR15).
*/

/**
@addtogroup IP_System_LVRDIS LVRDIS
Special Function Register @ref LVRDIS 
Address: FFH, Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |LVRDIS[7:0]|LVR Disable
|        |          |To first writing 5AH to the LVRDIS and immediately followed by a
|        |          |writing of A5H will disable LVR.
*/

/**
@addtogroup IP_System_MIRCTRIM MIRCTRIM
Special Function Register @ref MIRCTRIM 
Address: 84H, SFR Page 3, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[9:3]   |MIRCTRIM[9:2]|Median Speed Internal Oscillator Trim Value High Byte
*/

/**
@addtogroup IP_System_MIRCTRIM1 MIRCTRIM1
Special Function Register @ref MIRCTRIM1 
Address: 85H, SFR Page 3, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |MIRCTRIM[1:0]|Median Speed Internal Oscillator Trim Value Low Byte
*/

/**
@addtogroup IP_System_LIRCTRIM LIRCTRIM
Special Function Register @ref LIRCTRIM 
Address: 84H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |LIRCTRIM[7:0]|Low Speed Internal Oscillator Trim Value
*/

/**
@addtogroup IP_System_CKSWT CKSWT
Special Function Register @ref CKSWT 
Address: 96H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |OSC[2:0]  |Oscillator Selection Bits
|        |          |This field selects the system clock source.
|        |          |000 = Internal 8 MHz oscillator. Defaul value accoding to
|        |          |MIRCEN(CKEN.1) enabled
|        |          |001 = Internal 24 MHz oscillator accoding to HIRCEN(CKEN.5) enabled
|        |          |01x = External oscillator clock source accoding to ECLKEN(CKEN.3)
|        |          |enabled.
|        |          |10x = Internal 38.4 kHz oscillator according to LIRCEN(CKEN.4)
|        |          |enabled.
|        |          |110 = External High speed crystal/resonator clock source (4 MHz ~ 24
|        |          |MHz) accoding to EHXTEN(CKEN.7) enabled.
|        |          |111 = External Low speed crystal/resonator clock source (32.768 kHz)
|        |          |accoding to ELXTEN(CKEN.6) enabled.
|        |          |Others = Reseved.
|        |          |Note that this field is write only. The read back value of this field
|        |          |may not correspond to the present system clock source.
|[3]     |ECLKSTMIRCST|External Clock Input Status
|        |          |0 = External clock input is not stable or disabled.
|        |          |1 = External clock input is enabled and stable.
|        |          |Mid-Speed Internal Oscillator Status
|        |          |0 = Internal median speed oscillator
|        |          |is not stable or disabled.
|        |          |1 = Internal median speed internal oscillator is enabled and stable.
|[4]     |LIRCST    |Low Speed Internal Oscillator 38.4 kHz Status
|        |          |0 = Low speed internal oscillator is not stable or is disabled.
|        |          |1 = Low speed internal oscillator is enabled and stable.
|[5]     |HIRCST    |High-Speed Internal Oscillator 24 MHz Status
|        |          |0 = High-speed internal oscillator is not stable or disabled.
|        |          |1 = High-speed internal oscillator is enabled and stable.
|[6]     |LXTST     |Low Speed External Crystal/Resonator 32.768 kHz Status
|        |          |0 = Low speed external crystal/resonator is not stable or is disabled.
|        |          |1 = Low speed external crystal/resonator is enabled and stable.
|[7]     |HXTST     |High Speed External Crystal/Resonator 4 MHz to 24 MHz Status
|        |          |0 = High speed external crystal/resonator is not stable or is
|        |          |disabled.
|        |          |1 = High speed external crystal/resonator is enabled and stable.
*/

/**
@addtogroup IP_System_CKEN CKEN
Special Function Register @ref CKEN 
Address: 97H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CKSWTF    |Clock Switch Fault Flag
|        |          |0 = The previous system clock source switch was successful.
|        |          |1 = User tried to switch to an instable or disabled clock source at
|        |          |the previous system clock source switch. If switching to an instable
|        |          |clock source, this bit remains 1 until the clock source is stable and
|        |          |switching is successful.
|[1]     |MIRCEN    |Median Speed Internal Oscillator Enable
|        |          |0 = The median
|        |          |speed internal oscillator Disabled.
|        |          |1 = The median speed internal oscillator Enabled.
|        |          |Note that once IAP is enabled by setting IAPEN (CHPCON.0), the median
|        |          |speed internal oscillator will be enabled automatically. The hardware
|        |          |will also set MIRCEN and MIRCST bits. After IAPEN is cleared, MIRCEN
|        |          |and MIRCST resume the original values.
|[2]     |BIRCEN    |Bias Internal Oscillator 3.3 kHz Enable
|        |          |0 = The bias internal oscillator Disabled.
|        |          |1 = The bias internal oscillator Enabled.
|        |          |Note that when BIRCEN is disabled, the bias refresh clock is changed
|        |          |from 3.3 kHz to ~10 kHz ( LIRC 38.4 kHz /4)
|        |          |應該always keep at 1, 否則 會影響LIRC 無法受user control OFF.
|[3]     |ECLKEN    |External Clock Input Enable
|        |          |1 = External clock input (Xin , P5.3) Enabled.
|        |          |0 = External clock input (Xin, P5.3) Disabled, P5.2 and P5.3 work as
|        |          |general purpose I/O or other functions if EHXTEN set to 0.
|[4]     |LIRCEN    |Low Speed Internal Oscillator 38.4 kHz Enable
|        |          |0 = The low speed internal oscillator Disabled.
|        |          |1 = The low speed internal oscillator
|        |          |Enabled.
|        |          |Note that when (1)WDT is enabled, (2)WKT is running by the clock
|        |          |source of the internal 38.4 kHz oscillator ,(3) BOD is enabled, or
|        |          |(4)LVR filter is enabled, a write 0 to LIRCEN will be ignored. LIRCEN
|        |          |is always 1 and the internal 38.4 kHz oscillator is always enabled.
|[5]     |HIRCEN    |High-Speed Internal Oscillator 24 MHz Enable
|        |          |0 =
|        |          |The high-speed internal oscillator Disabled.
|        |          |1 =
|        |          |The high-speed internal oscillator Enabled.
|        |          |Note that once IAP is enabled by setting IAPEN (CHPCON.0), the high-
|        |          |speed internal 24 MHz oscillator will be enabled automatically. The
|        |          |hardware will also set HIRCEN and HIRCST bits. After IAPEN is cleared,
|        |          |HIRCEN and EHRCST resume the original values.
|[6]     |ELXTEN    |External Low-Speed Crystal/Resonator Enable
|        |          |1 = Low-speed external crystal/resonator 32.768 kHz Enabled.
|        |          |0 = Low-speed external crystal/resonator 32.768 kHz Disabled, P5.4 and
|        |          |P5.5 work as general purpose I/O or other functions.
|[7]     |EHXTEN    |External High-Speed Crystal/Resonator Enable
|        |          |1 = High-speed external crystal/resonator 4 MHz to 24 MHz Enabled.
|        |          |0 = High-speed external crystal/resonator 4 MHz to 24 MHz Disabled,
|        |          |P5.2 and P5.3 work as general purpose I/O or other functions if ECLKEN
|        |          |set to 0.
*/

/**
@addtogroup IP_System_CKDIV CKDIV
Special Function Register @ref CKDIV 
Address: C1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CKDIV[7:0]|Clock Divider
|        |          |The system clock frequency FSYS follows the equation below according
|        |          |to CKDIV value.
|        |          |FSYS = FOSC, while CKDIV = 00H
|        |          |, while CKDIV = 01H to FFH.
|        |          |CKDIV register will be reload and setting by CONFIG3[1:0] after reset
*/

/**
@addtogroup IP_System_PCON PCON
Special Function Register @ref PCON 
Address: 87H, All pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IDL       |Idle Mode
|        |          |Setting this bit puts CPU into Idle mode. Under this mode, the CPU
|        |          |clock stops and Program Counter (PC) suspends but all peripherals keep
|        |          |activated. After CPU is woken up from Idle, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the ISR of the very interrupt source that woke the system up before.
|        |          |After return from the ISR, the device continues execution at the
|        |          |instruction which follows the instruction that put the system into
|        |          |Idle mode.
*/

/**
@addtogroup IP_System_PDL PDL
Special Function Register @ref PDL 
Address: 97H, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |PDLS[1:0] |Power Down Level Select
|        |          |00 = Power Down Level 0 (defaut)
|        |          |01 = Power Down Level 1
|        |          |10 = Power Down Level 2
|        |          |Others = Reserved.
*/

/**
@addtogroup IP_System_PCON PCON
Special Function Register @ref PCON 
Address: 87H, All pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |PD        |Power-Down Mode
|        |          |Setting this bit puts CPU
|        |          |into Power-down mode. Under this mode, both CPU and peripheral clocks
|        |          |stop and Program Counter (PC) suspends. It provides the lowest power
|        |          |consumption. After CPU is woken up from Power-down, this bit will be
|        |          |automatically cleared via hardware and the program continue executing
|        |          |the interrupt service routine (ISR) of the very interrupt source that
|        |          |woke the system up before. After return from the ISR, the device
|        |          |continues execution at the instruction, which follows the instruction
|        |          |that put the system into Power-down mode.
|        |          |Note that If IDL bit and PD bit are set simultaneously, CPU
|        |          |will enter Power-down mode. Then it does not go to Idle mode after
|        |          |exiting Power-down.
*/

/**
@addtogroup IP_System_BODCON0 BODCON0
Special Function Register @ref BODCON0 
Address: A3H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |BOS       |Brown-Out Status
|        |          |This bit indicates the VDD voltage level comparing with VBOD while BOD
|        |          |circuit is enabled. It keeps 0 if BOD is not enabled.
|        |          |0 = VDD voltage level is higher than VBOD or BOD is disabled.
|        |          |1 = VDD voltage level is lower than VBOD.
|        |          |Note that this bit is read-only.
|[1]     |BORF      |Brown-Out Reset Flag
|        |          |When the MCU is reset by brown-out event, this bit will be set via
|        |          |hardware. This flag is recommended to be cleared via software.
|[2]     |BORST     |Brown-Out Reset Enable
|        |          |This bit decides whether a brown-out reset is caused by a power drop
|        |          |below VBOD.
|        |          |0 = Brown-out reset when VDD drops below VBOD Disabled.
|        |          |1 = Brown-out reset when VDD drops below VBOD Enabled.
|[3]     |BOF       |Brown-Out Interrupt Flag
|        |          |This flag will be set as logic 1 via hardware after a VDD
|        |          |dropping below or rising above VBOD event occurs. If both EBOD (I.E.5)
|        |          |and EA (I.E.7) are set, a brown-out interrupt requirement will be
|        |          |generated. This bit should be cleared via software.
|[6:4]   |BOV[2:0]  |CONFIG Brown-Out Voltage Select
|        |          |111 = VBOD is 1.8V.
|        |          |110 = VBOD is 1.8V.
|        |          |101 = VBOD is 2.0V.
|        |          |100 = VBOD is 2.4V.
|        |          |011 = VBOD is 2.7V.
|        |          |010 = VBOD is 3.0V.
|        |          |001 = VBOD is 3.7V.
|        |          |000 = VBOD is 4.4V.
|[7]     |BODEN     |Brown-Out Detection Enable
|        |          |0 = Brown-out detection circuit ON.
|        |          |1 = Brown-out detection circuit OFF.
|        |          |Note that BOD output is not available until 2~3 LIRC clocks after
|        |          |enabling.
*/

/**
@addtogroup IP_System_BODCON1 BODCON1
Special Function Register @ref BODCON1 
Address: ABH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |BODFLT    |BOD Filter Control
|        |          |BOD has a filter which counts 32 clocks of FSYS to filter the power
|        |          |noise when MCU runs with MIRC as the system clock and BOD does not
|        |          |operates in its low power mode (LPBOD[1:0] = [0, 0]). In other
|        |          |conditions, the filter counts 2 clocks of LIRC.
|        |          |Note that when CPU is halted in Power-down mode. The BOD output is
|        |          |permanently filtered by 2 clocks of LIRC.
|        |          |The BOD filter avoids the power noise to trigger BOD event. This bit
|        |          |controls BOD filter enabled or disabled.
|        |          |0 = BOD filter Disabled.
|        |          |1 = BOD filter Enabled. (Power-on reset default value.)
|[2:1]   |LPBOD[1:0]|Low Power BOD Enable
|        |          |00 = BOD normal mode. BOD circuit is always enabled.
|        |          |01 = BOD low power mode 1 by turning on BOD circuit every 1.6 ms
|        |          |periodically.
|        |          |10 = BOD low power mode 2 by turning on BOD circuit every 6.4 ms
|        |          |periodically.
|        |          |11 = BOD low power mode 3 by turning on BOD circuit every 25.6 ms
|        |          |periodically.
|[7:3]   |Reserved  |Reserved
*/

/**
@addtogroup IP_System_WDCON WDCON
Special Function Register @ref WDCON 
Address: AAH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3]     |WDTRF     |WDT Reset Flag
|        |          |When the CPU is reset by WDT time-out event, this bit will be set via
|        |          |hardware. This flag is recommended to be cleared via software after
|        |          |reset.
*/

/**
@addtogroup IP_System_CHPCON CHPCON
Special Function Register @ref CHPCON 
Address: 9FH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7]     |SWRST     |Software Reset
|        |          |To set this bit as logic 1 will cause a software reset. It will
|        |          |automatically be cleared via hardware after reset is finished.
*/

/**
@addtogroup IP_System_AUXR0 AUXR0
Special Function Register @ref AUXR0 
Address: A2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7]     |SWRF      |Software Reset Flag
|        |          |When the MCU is reset via software reset, this bit will be set via
|        |          |hardware. It is recommended that the flag be cleared via software.
*/

/**
@addtogroup IP_System_IE IE
Special Function Register @ref IE 
Address: A8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EX0       |Enable External Interrupt 0
|        |          |0 = External interrupt 0 Disabled.
|        |          |1 = External interrupt 0 interrupt Enable. When interrupt generated
|        |          |INT0 pin set 1.
|[1]     |ET0       |Enable Timer 0 Interrupt
|        |          |0 = Timer 0 interrupt Disabled.
|        |          |1 = Timer 0 interrupt Enable. When interrupt generated TF0 (TCON.5)
|        |          |set 1.
|[2]     |EX1       |Enable External Interrupt 1
|        |          |0 = External interrupt 1 Disabled.
|        |          |1 = External interrupt 1 interrupt Enable. When interrupt generated
|        |          |INT1 pin set 1.
|[3]     |ET1       |Enable Timer 1 Interrupt
|        |          |0 = Timer 1 interrupt Disabled.
|        |          |1 = Timer 1 interrupt Enable. When interrupt generated TF1 (TCON.7)
|        |          |set 1.
|[4]     |ES        |Enable Serial Port 0 Interrupt
|        |          |0 = Serial port 0 interrupt Disabled.
|        |          |1 = Serial port 0 interrupt Enable. When interrupt generated TI
|        |          |(SCON.1) or RI (SCON.0) set 1.
|[5]     |EBOD      |Enable Brown-Out Interrupt
|        |          |0 = Brown-out detection interrupt Disabled.
|        |          |1 = Brown-out detection interrupt Enable. When interrupt generated BOF
|        |          |(BODCON0.3) set 1.
|[6]     |EADC      |Enable ADC Interrupt
|        |          |0 = ADC interrupt Disabled.
|        |          |1 = ADC interrupt Enable. When interrupt generated ADCF (ADCCON0.7)
|        |          |set 1.
|[7]     |EA        |Enable All Interrupt
|        |          |This bit globally enables/disables all interrupts that are
|        |          |individually enabled.
|        |          |0 = All interrupt sources Disabled.
|        |          |1 = Each interrupt Enabled depending on its individual mask setting.
|        |          |Individual interrupts will occur if enabled.
*/

/**
@addtogroup IP_System_EIE0 EIE0
Special Function Register @ref EIE0 
Address: 9BH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EI2C0     |Enable I2C0 Interrupt
|        |          |0 = I2C interrupt Disabled.
|        |          |1 = I2C interrupt Enable. When interrupt generated SI (I2C0CON.3) or
|        |          |I2TOF (I2C0TOC.0) set 1.
|[1]     |EPI       |Enable Pin Interrupt
|        |          |0 = Pin interrupt Disabled.
|        |          |1 = Pin interrupt Enable. When interrupt generated PIF related bit set
|        |          |1.
|[2]     |ECAP      |Enable Input Capture Interrupt
|        |          |0 = Input capture interrupt Disabled.
|        |          |1 = Input capture interrupt Enable. When interrupt generated CAPF[2:0]
|        |          |(CAPCON0[2:0]) set 1.
|[3]     |EPWM0     |Enable PWM0 Interrupt
|        |          |0 = PWM interrupt Disabled.
|        |          |1 = PWM interrupt Enable. When interrupt generated PWMF (PWMnCON0.5)
|        |          |set 1.
|[4]     |EWDT      |Enable WDT Interrupt
|        |          |0 = WDT interrupt Disabled.
|        |          |1 = WDT interrupt Enable. When interrupt generated WDTF (WDCON.5) set
|        |          |1.
|[5]     |EFB0      |Enable Fault Brake Interrupt
|        |          |0 = Fault Brake interrupt Disabled.
|        |          |1 = Fault Brake interrupt Enable. When interrupt generated FBF
|        |          |(PWM0FBD.7) set 1.
|[6]     |ESPI0     |Enable SPI Interrupt
|        |          |0 = SPI interrupt Disabled.
|        |          |1 = SPI interrupt Enable. When interrupt generated SPIF (SPInSR.7),
|        |          |SPIOVF (SPInSR.5), or MODF (SPInSR.4) set 1 .
|[7]     |ET2       |Enable Timer 2 Interrupt
|        |          |0 = Timer 2 interrupt Disabled.
|        |          |1 = Timer 2 interrupt Enable. When interrupt generated, TF2 (T2CON.7)
|        |          |set 1
*/

/**
@addtogroup IP_System_EIE1 EIE1
Special Function Register @ref EIE1 
Address: 9CH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ES1       |Enable Serial Port 1 Interrupt
|        |          |0 = Serial port 1 interrupt Disabled.
|        |          |1 = Serial port 1 interrupt Enable. When interrupt generated TI_1
|        |          |(S1CON.1) or RI_1 (S1CON.0) set 1.
|[1]     |ET3       |Enable Timer 3 Interrupt
|        |          |0 = Timer 3 interrupt Disabled.
|        |          |1 = Timer 3interrupt Enable. When interrupt generated TF3 (T3CON.4)
|        |          |set 1.
|[2]     |EWKT      |Enable WKT Interrupt
|        |          |0 = WKT interrupt Disabled.
|        |          |1 = WKT interrupt Enable. When interrupt generated WKTF (WKCON.4) set
|        |          |1.
|[3]     |EHFI      |Enable Hard Fault Interrupt
|        |          |0 = hard fault interrupt Disabled and hard fault reset is Enabled
|        |          |1 = hard fault interrupt Enable. When interrupt generated HFIF
|        |          |(AUXR0.4) set 1.
|[4]     |ESPI1     |Enable SPI1 Interrupt
|        |          |0 = SPI1 interrupt Disabled.
|        |          |1 = SPI1 interrupt Enable. When interrupt generated SPIF (SP2SR.7),
|        |          |MODF (SP2SR.4) or SPIOVF (SP2SR.5) set 1
|[5]     |EI2C1     |Enable I2C1 Interrupt
|        |          |0 = I2C1 interrupt Disabled.
|        |          |1 = I2C1 interrupt Enable. When interrupt generated SI (I2C1CON.3) or
|        |          |I2TOF (I2C1TOC.0) set 1.
|[6]     |EPWM123   |Enable PWM123 Interrupt
|        |          |0 = PWM1/2/3 interrupt Disabled.
|        |          |1 = PWM1/2/3 interrupt Enable. When interrupt generated PWMF
|        |          |(PWM1CON0.5) set 1.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_System_SC0IE SC0IE
Special Function Register @ref SC0IE 
Address: DDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIEN    |Receive Data Reach Interrupt Enable Bit
|        |          |This field is used to enable received data interrupt.
|        |          |0 = Receive data interrupt Disabled.
|        |          |1 = Receive data interrupt Enabled.
|[1]     |TBEIEN    |Transmit Buffer Empty Interrupt Enable Bit
|        |          |This field is used to enable transmit buffer empty interrupt.
|        |          |0 = Transmit buffer empty interrupt Disabled.
|        |          |1 = Transmit buffer empty interrupt Enabled.
|[2]     |TERRIEN   |Transfer Error Interrupt Enable Bit
|        |          |This field is used to enable transfer error interrupt. The transfer
|        |          |error states is at SC0TSR register which includes receiver break error
|        |          |BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]), receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |0 = Transfer error interrupt Disabled.
|        |          |1 = Transfer error interrupt Enabled.
|[3]     |BGTIEN    |Block Guard Time Interrupt Enable Bit
|        |          |This field is used to enable block guard time interrupt.
|        |          |0 = Block guard time interrupt Disabled.
|        |          |1 = Block guard time interrupt Enabled.
|[4]     |ACERRIEN  |Auto Convention Error Interrupt Enable Bit
|        |          |This field is used to enable auto-convention error interrupt.
|        |          |0 = Auto-convention error interrupt Disabled.
|        |          |1 = Auto-convention error interrupt Enabled.
|[7:5]   |Reserved  |Reserved
*/

/**
@addtogroup IP_System_SC1IE SC1IE
Special Function Register @ref SC1IE 
Address: DDH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIEN    |Receive Data Reach Interrupt Enable Bit
|        |          |This field is used to enable received data interrupt.
|        |          |0 = Receive data interrupt Disabled.
|        |          |1 = Receive data interrupt Enabled.
|[1]     |TBEIEN    |Transmit Buffer Empty Interrupt Enable Bit
|        |          |This field is used to enable transmit buffer empty interrupt.
|        |          |0 = Transmit buffer empty interrupt Disabled.
|        |          |1 = Transmit buffer empty interrupt Enabled.
|[2]     |TERRIEN   |Transfer Error Interrupt Enable Bit
|        |          |This field is used to enable transfer error interrupt. The transfer
|        |          |error states is at SC0TSR register which includes receiver break error
|        |          |BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]), receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |0 = Transfer error interrupt Disabled.
|        |          |1 = Transfer error interrupt Enabled.
|[3]     |BGTIEN    |Block Guard Time Interrupt Enable Bit
|        |          |This field is used to enable block guard time interrupt.
|        |          |0 = Block guard time interrupt Disabled.
|        |          |1 = Block guard time interrupt Enabled.
|[4]     |ACERRIEN  |Auto Convention Error Interrupt Enable Bit
|        |          |This field is used to enable auto-convention error interrupt.
|        |          |0 = Auto-convention error interrupt Disabled.
|        |          |1 = Auto-convention error interrupt Enabled.
|[7:5]   |Reserved  |Reserved
*/

/**
@addtogroup IP_System_DMA0CR0 DMA0CR0
Special Function Register @ref DMA0CR0 
Address: 92H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup IP_System_DMA1CR0 DMA1CR0
Special Function Register @ref DMA1CR0 
Address: EBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup IP_System_DMA2CR0 DMA2CR0
Special Function Register @ref DMA2CR0 
Address: B3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup IP_System_DMA3CR0 DMA3CR0
Special Function Register @ref DMA3CR0 
Address: ABH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |The others are reserved, no periperal source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup IP_System_IP IP
Special Function Register @ref IP 
Address: B8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PX0       |External interrupt 0 priority low bit
|[1]     |PT0       |Timer 0 interrupt priority low bit
|[2]     |PX1       |External interrupt 1 priority low bit
|[3]     |PT1       |Timer 1 interrupt priority low bit
|[4]     |PS        |Serial port 0 interrupt priority low bit
|[5]     |PBOD      |Brown-out detection interrupt priority low bit
|[6]     |PADC      |ADC interrupt priority low bit
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_System_IPH IPH
Special Function Register @ref IPH 
Address: B7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PX0H      |External interrupt 0 priority high bit
|[1]     |PT0H      |Timer 0 interrupt priority high bit
|[2]     |PX1H      |External interrupt 1 priority high bit
|[3]     |PT1H      |Timer 1 interrupt priority high bit
|[4]     |PSH       |Serial port 0 interrupt priority high bit
|[5]     |PBODH     |Brown-out detection interrupt priority high bit
|[6]     |PADCH     |ADC interrupt priority high bit
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_System_EIP0 EIP0
Special Function Register @ref EIP0 
Address: EFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PI2C0     |I2C interrupt priority low bit
|[1]     |PPI       |Pin interrupt priority low bit
|[2]     |PCAP      |Input capture interrupt priority low bit
|[3]     |PPWM0     |PWM interrupt priority low bit
|[4]     |PWDT      |WDT interrupt priority low bit
|[5]     |PFB       |Fault Brake interrupt priority low bit
|[6]     |PSPI0     |SPI0 interrupt priority low bit
|[7]     |PT2       |Timer 2 interrupt priority low bit
*/

/**
@addtogroup IP_System_EIPH0 EIPH0
Special Function Register @ref EIPH0 
Address: F7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PI2C0H    |I2C interrupt priority high bit
|[1]     |PPIH      |Pin interrupt priority high bit
|[2]     |PCAPH     |Input capture interrupt priority high bit
|[3]     |PPWM0H    |PWM0 interrupt priority high bit
|[4]     |PWDTH     |WDT interrupt priority high bit
|[5]     |PFBH      |Fault Brake interrupt priority high bit
|[6]     |PSPI0H    |SPI0 interrupt priority high bit
|[7]     |PT2H      |Timer 2 interrupt priority high bit
*/

/**
@addtogroup IP_System_EIP1 EIP1
Special Function Register @ref EIP1 
Address: FEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PS1       |Serial port 1 interrupt priority low bit
|[1]     |PT3       |Timer 3 interrupt priority low bit
|[2]     |PWKT      |WKT interrupt priority low bit
|[3]     |PHF       |Hard fault interrupt priority low bit
|[4]     |PSMC      |SMC interrupt priority low bit
|[5]     |PDMA0     |PDMA0 interrupt priority low bit
|[6]     |PDMA1     |PDMA1 interrupt priority low bit
|[7]     |PSPI1     |SPI1 interrupt priority low bit
*/

/**
@addtogroup IP_System_EIPH1 EIPH1
Special Function Register @ref EIPH1 
Address: FFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PS1H      |Serial port 1 interrupt priority high bit
|[1]     |PT3H      |Timer 3 interrupt priority high bit
|[2]     |PWKTH     |WKT interrupt priority high bit
|[3]     |PHFH      |Hard fault interrupt priority high bit
|[4]     |PSMCH     |SMC interrupt priority high bit
|[5]     |PDMA0H    |PDMA0 interrupt priority high bit
|[6]     |PDMA1H    |PDMA1 interrupt priority high bit
|[7]     |PSPI1H    |SPI1 interrupt priority high bit
*/

/**
@addtogroup IP_System_EIP2 EIP2
Special Function Register @ref EIP2 
Address: ACH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PACMP     |ACMP interrupt priority low bit
|[1]     |PI2C1     |I2C interrupt priority low bit
|[2]     |PPWM1     |PPWM1 interrupt priority low bit
|[3]     |TK        |Touch Key interrupt priority low bit
|[4]     |SMC1      |SMC1 interrupt priority low bit
|[5]     |PDMA2     |PDMA2 interrupt priority low bit
|[6]     |PDMA3     |PDMA3 interrupt priority low bit
|[7]     |RTC       |RTC interrupt priority low bit
*/

/**
@addtogroup IP_System_EIPH2 EIPH2
Special Function Register @ref EIPH2 
Address: ADH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PACMPH    |ACMP interrupt priority high bit
|[1]     |PI2C1H    |I2C interrupt priority high bit
|[2]     |PPWM1H    |PPWM1H interrupt priority high bit
|[3]     |TKH       |Touch Key interrupt priority high bit
|[4]     |SMC1H     |SMC1H interrupt priority high bit
|[5]     |PDMA2H    |PDMA2H interrupt priority high bit
|[6]     |PDMA3H    |PDMA3H interrupt priority high bit
|[7]     |RTCH      |RTCH interrupt priority high bit
*/

/**@} end of SYSTEM group */

/**
  @addtogroup IP_FMC FMC Control Register
  @{ */

/**
@addtogroup IP_FMC_IAPUEN IAPUEN
Special Function Register @ref IAPUEN 
Address: A5H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |APUEN     |APROM Updated Enable
|        |          |0 = Inhibit erasing or programming APROM by IAP.
|        |          |1 = Allow erasing or programming APROM by IAP.
|[1]     |LDUEN     |LDROM Updated Enable
|        |          |0 = Inhibit erasing or programming LDROM by IAP.
|        |          |1 = Allow erasing or programming LDROM by IAP.
|[2]     |CFUEN     |CONFIG Bytes Updated Enable
|        |          |0 = Inhibit erasing or programming CONFIG bytes by IAP.
|        |          |1 = Allow erasing or programming CONFIG bytes by IAP.
|[3]     |SPUEN     |SPROM Memory Space Updated Enable(TA Protected)
|        |          |0 = Inhibit erasing or programming SPRO Mbytes by IAP
|        |          |1 = Allow erasing or programming SPRO Mbytes by IAP.
|[4]     |SPMEN     |SPROM Memory Space Mapping Enable
|        |          |0 = CPU memory address 0xff80~0xffff is mapping to APROM memory
|        |          |1 = CPU memory address 0xff80~0xffff is mapping to SPROM memory
|[7:5]   |Reserved  |Reserved
*/

/**
@addtogroup IP_FMC_IAPCN IAPCN
Special Function Register @ref IAPCN 
Address: AFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |FCTRL[3:0]|This Byte is Used for IAP Command. For details, see Figure 6.31 IAP Modes and Command Codes.
|[4]     |FCEN      |This Byte is Used for IAP Command. For details, see Figure 6.31 IAP Modes and Command Codes.
|[5]     |FOEN      |This Byte is Used for IAP Command. For details, see Figure 6.31 IAP Modes and Command Codes.
|[7:6]   |IAPB[1:0] |IAP Control
|        |          |This byte is used for IAP command. For details, see Figure 6.31 IAP
|        |          |Modes and Command Codes.
*/

/**
@addtogroup IP_FMC_IAPAH IAPAH
Special Function Register @ref IAPAH 
Address: A7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |IAPA[15:8]|IAP Address High Byte
|        |          |IAPAH contains address IAPA[15:8] for IAP operations.
*/

/**
@addtogroup IP_FMC_IAPAL IAPAL
Special Function Register @ref IAPAL 
Address: A6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |IAPA[7:0] |IAP Address Low Byte
|        |          |IAPAL contains address IAPA[7:0] for IAP operations.
*/

/**
@addtogroup IP_FMC_IAPFD IAPFD
Special Function Register @ref IAPFD 
Address: AEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |IAPFD[7:0]|IAP Flash Data
|        |          |This byte contains Flash data, which is read from or is going to be
|        |          |written to the Flash Memory. User should write data into IAPFD for
|        |          |program mode before triggering IAP processing and read data from IAPFD
|        |          |for read/verify mode after IAP processing is finished.
*/

/**
@addtogroup IP_FMC_IAPTRG IAPTRG
Special Function Register @ref IAPTRG 
Address: A4H, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IAPGO     |IAP Go
|        |          |IAP begins by setting this bit as logic 1. After this instruction, the
|        |          |CPU holds the Program Counter (PC) and the IAP hardware automation
|        |          |takes over to control the progress. After IAP action completed, the
|        |          |Program Counter continues to run the following instruction. The IAPGO
|        |          |bit will be automatically cleared and always read as logic 0.
|        |          |Before triggering an IAP action, interrupts (if enabled) should be
|        |          |temporary disabled for hardware limitation.
|        |          |The program process should follows below.
|        |          |CLR EA
|        |          |MOV TA,#0AAH
|        |          |MOV TA,#55H
|        |          |ORL IAPTRG,#01H
|        |          |(SETB EA)
|[7:1]   |Reserved  |Reserved
*/

/**@} end of FMC group */

/**
  @addtogroup IP_GPIO GPIO Control Register
  @{ */

/**
@addtogroup IP_GPIO_P0 P0
Special Function Register @ref P0 
Address: 80H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[1]     |1         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[2]     |2         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[3]     |3         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[4]     |4         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[5]     |5         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[6]     |6         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
|[7]     |7         |Port 0
|        |          |Port 0 is an maximum 8-bit general purpose I/O port.
*/

/**
@addtogroup IP_GPIO_P1 P1
Special Function Register @ref P1 
Address: 90H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[1]     |1         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[2]     |2         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[3]     |3         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[4]     |4         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[5]     |5         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[6]     |6         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
|[7]     |7         |Port 1
|        |          |Port 1 is an maximum 8-bit general purpose I/O port.
*/

/**
@addtogroup IP_GPIO_P2 P2
Special Function Register @ref P2 
Address: A0H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[1]     |1         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[2]     |2         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[3]     |3         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[4]     |4         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
|[5]     |5         |Port 2
|        |          |Port 2 is an maximum 6-bit general purpose I/O port.
*/

/**
@addtogroup IP_GPIO_P3 P3
Special Function Register @ref P3 
Address: B0H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
|[1]     |1         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
|[2]     |2         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
|[3]     |3         |Port 3
|        |          |Port 3 is an maximum 4-bit general purpose I/O port.
*/

/**
@addtogroup IP_GPIO_P4 P4
Special Function Register @ref P4 
Address: D8H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[1]     |1         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[2]     |2         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[3]     |3         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[4]     |4         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[5]     |5         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[6]     |6         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
|[7]     |7         |Port 4
|        |          |Port 4 is an maximum 8-bit general purpose I/O port.
*/

/**
@addtogroup IP_GPIO_P5 P5
Special Function Register @ref P5 
Address: B1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[1]     |1         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[2]     |2         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[3]     |3         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[4]     |4         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
|[5]     |5         |Port 5
|        |          |Port 5 is an maximum 6-bit general purpose I/O port.
*/

/**
@addtogroup IP_GPIO_P0M1 P0M1
Special Function Register @ref P0M1 
Address: B1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[1]     |1         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[2]     |2         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[3]     |3         |Port 0 mode select 1
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
*/

/**
@addtogroup IP_GPIO_P1M1 P1M1
Special Function Register @ref P1M1 
Address: B3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |Port 1 mode select 1
|[7]     |7         |Port 1 mode select 1
*/

/**
@addtogroup IP_GPIO_P2M1 P2M1
Special Function Register @ref P2M1 
Address: B5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 2 mode select 1
|[1]     |1         |Port 2 mode select 1
|[2]     |2         |Port 2 mode select 1
|[3]     |3         |Port 2 mode select 1
|[4]     |4         |Port 2 mode select 1
|[5]     |5         |Port 2 mode select 1
*/

/**
@addtogroup IP_GPIO_P3M1 P3M1
Special Function Register @ref P3M1 
Address: C2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 3 mode select 1
|[1]     |1         |Port 3 mode select 1
|[2]     |2         |Port 3 mode select 1
|[3]     |3         |Port 3 mode select 1
|[4]     |4         |Port 3 mode select 1
*/

/**
@addtogroup IP_GPIO_P4M1 P4M1
Special Function Register @ref P4M1 
Address: B9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 4 mode select 1
|[1]     |1         |Port 4 mode select 1
*/

/**
@addtogroup IP_GPIO_P5M1 P5M1
Special Function Register @ref P5M1 
Address: BDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 5 mode select 1
|[1]     |1         |Port 5 mode select 1
|[2]     |2         |Port 5 mode select 1
|[3]     |3         |Port 5 mode select 1
|[4]     |4         |Port 5 mode select 1
|[5]     |5         |Port 5 mode select 1
*/

/**
@addtogroup IP_GPIO_P0M2 P0M2
Special Function Register @ref P0M2 
Address: B2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[1]     |1         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[2]     |2         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
|[3]     |3         |Port 0 Mode Select 2
|        |          |Note: PxM1 and PxM2 are used in combination to determine the I/O mode
|        |          |of each pin of Port. See Table 6.41 Configuration for Different I/O
|        |          |Modes.
*/

/**
@addtogroup IP_GPIO_P1M2 P1M2
Special Function Register @ref P1M2 
Address: B4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |Port 1 Mode Select 2
|[7]     |7         |Port 1 Mode Select 2
*/

/**
@addtogroup IP_GPIO_P2M2 P2M2
Special Function Register @ref P2M2 
Address: B6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 2 Mode Select 2
|[1]     |1         |Port 2 Mode Select 2
|[2]     |2         |Port 2 Mode Select 2
|[3]     |3         |Port 2 Mode Select 2
|[4]     |4         |Port 2 Mode Select 2
|[5]     |5         |Port 2 Mode Select 2
*/

/**
@addtogroup IP_GPIO_P3M2 P3M2
Special Function Register @ref P3M2 
Address: C3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 3 Mode Select 2
|[1]     |1         |Port 3 Mode Select 2
|[2]     |2         |Port 3 Mode Select 2
|[3]     |3         |Port 3 Mode Select 2
*/

/**
@addtogroup IP_GPIO_P4M2 P4M2
Special Function Register @ref P4M2 
Address: BAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 4 Mode Select 2
|[1]     |1         |Port 4 Mode Select 2
*/

/**
@addtogroup IP_GPIO_P5M2 P5M2
Special Function Register @ref P5M2 
Address: BEH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |Port 5 Mode Select 2
|[1]     |1         |Port 5 Mode Select 2
|[2]     |2         |Port 5 Mode Select 2
|[3]     |3         |Port 5 Mode Select 2
|[4]     |4         |Port 5 Mode Select 2
|[5]     |5         |Port 5 Mode Select 2
*/

/**
@addtogroup IP_GPIO_P0MF10 P0MF10
Special Function Register @ref P0MF10 
Address: F9H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF0_0   |P0.0 multi-function select
|[1]     |P0MF0_1   |P0.0 multi-function select
|[2]     |P0MF0_2   |P0.0 multi-function select
|[3]     |P0MF0_3   |P0.0 multi-function select
|[4]     |P0MF1_0   |P0.1 multi-function select
|[5]     |P0MF1_1   |P0.1 multi-function select
|[6]     |P0MF1_2   |P0.1 multi-function select
|[7]     |P0MF1_3   |P0.1 multi-function select
*/

/**
@addtogroup IP_GPIO_P1MF10 P1MF10
Special Function Register @ref P1MF10 
Address: FDH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF0_0   |P1.0 multi-function select
|[1]     |P1MF0_1   |P1.0 multi-function select
|[2]     |P1MF0_2   |P1.0 multi-function select
|[3]     |P1MF0_3   |P1.0 multi-function select
|[4]     |P1MF1_0   |P1.1 multi-function select
|[5]     |P1MF1_1   |P1.1 multi-function select
|[6]     |P1MF1_2   |P1.1 multi-function select
|[7]     |P1MF1_3   |P1.1 multi-function select
*/

/**
@addtogroup IP_GPIO_P2MF10 P2MF10
Special Function Register @ref P2MF10 
Address: F2H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF0_0   |P2.0 multi-function select
|[1]     |P2MF0_1   |P2.0 multi-function select
|[2]     |P2MF0_2   |P2.0 multi-function select
|[3]     |P2MF0_3   |P2.0 multi-function select
|[4]     |P2MF1_0   |P2.1 multi-function select
|[5]     |P2MF1_1   |P2.1 multi-function select
|[6]     |P2MF1_2   |P2.1 multi-function select
|[7]     |P2MF1_3   |P2.1 multi-function select
*/

/**
@addtogroup IP_GPIO_P3MF10 P3MF10
Special Function Register @ref P3MF10 
Address: F6H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF0_0   |P3.0 multi-function select
|[1]     |P3MF0_1   |P3.0 multi-function select
|[2]     |P3MF0_2   |P3.0 multi-function select
|[3]     |P3MF0_3   |P3.0 multi-function select
|[4]     |P3MF1_0   |P3.1 multi-function select
|[5]     |P3MF1_1   |P3.1 multi-function select
|[6]     |P3MF1_2   |P3.1 multi-function select
|[7]     |P3MF1_3   |P3.1 multi-function select
*/

/**
@addtogroup IP_GPIO_P4MF10 P4MF10
Special Function Register @ref P4MF10 
Address: EBH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF0_0   |P4.0 multi-function select
|[1]     |P4MF0_1   |P4.0 multi-function select
|[2]     |P4MF0_2   |P4.0 multi-function select
|[3]     |P4MF0_3   |P4.0 multi-function select
|[4]     |P4MF1_0   |P4.1 multi-function select
|[5]     |P4MF1_1   |P4.1 multi-function select
|[6]     |P4MF1_2   |P4.1 multi-function select
|[7]     |P4MF1_3   |P4.1 multi-function select
*/

/**
@addtogroup IP_GPIO_P5MF10 P5MF10
Special Function Register @ref P5MF10 
Address: EFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF0_0   |P5.0 multi-function select
|[1]     |P5MF0_1   |P5.0 multi-function select
|[2]     |P5MF0_2   |P5.0 multi-function select
|[3]     |P5MF0_3   |P5.0 multi-function select
|[4]     |P5MF1_0   |P5.1 multi-function select
|[5]     |P5MF1_1   |P5.1 multi-function select
|[6]     |P5MF1_2   |P5.1 multi-function select
|[7]     |P5MF1_3   |P5.1 multi-function select
*/

/**
@addtogroup IP_GPIO_P6MF10 P6MF10
Special Function Register @ref P6MF10 
Address: 92H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P6MF0_0   |P6.0 multi-function select
|[1]     |P6MF0_1   |P6.0 multi-function select
|[2]     |P6MF0_2   |P6.0 multi-function select
|[3]     |P6MF0_3   |P6.0 multi-function select
|[4]     |P6MF1_0   |P6.1 multi-function select
|[5]     |P6MF1_1   |P6.1 multi-function select
|[6]     |P6MF1_2   |P6.1 multi-function select
|[7]     |P6MF1_3   |P6.1 multi-function select
*/

/**
@addtogroup IP_GPIO_P0MF32 P0MF32
Special Function Register @ref P0MF32 
Address: FAH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF2_0   |P0.2 multi-function select
|[1]     |P0MF2_1   |P0.2 multi-function select
|[2]     |P0MF2_2   |P0.2 multi-function select
|[3]     |P0MF2_3   |P0.2 multi-function select
|[4]     |P0MF3_0   |P0.3 multi-function select
|[5]     |P0MF3_1   |P0.3 multi-function select
|[6]     |P0MF3_2   |P0.3 multi-function select
|[7]     |P0MF3_3   |P0.3 multi-function select
*/

/**
@addtogroup IP_GPIO_P1MF32 P1MF32
Special Function Register @ref P1MF32 
Address: FEH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF2_0   |P1.2 multi-function select
|[1]     |P1MF2_1   |P1.2 multi-function select
|[2]     |P1MF2_2   |P1.2 multi-function select
|[3]     |P1MF2_3   |P1.2 multi-function select
|[4]     |P1MF3_0   |P1.3 multi-function select
|[5]     |P1MF3_1   |P1.3 multi-function select
|[6]     |P1MF3_2   |P1.3 multi-function select
|[7]     |P1MF3_3   |P1.3 multi-function select
*/

/**
@addtogroup IP_GPIO_P2MF32 P2MF32
Special Function Register @ref P2MF32 
Address: F3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF2_0   |P2.2 multi-function select
|[1]     |P2MF2_1   |P2.2 multi-function select
|[2]     |P2MF2_2   |P2.2 multi-function select
|[3]     |P2MF2_3   |P2.2 multi-function select
|[4]     |P2MF3_0   |P2.3 multi-function select
|[5]     |P2MF3_1   |P2.3 multi-function select
|[6]     |P2MF3_2   |P2.3 multi-function select
|[7]     |P2MF3_3   |P2.3 multi-function select
*/

/**
@addtogroup IP_GPIO_P3MF32 P3MF32
Special Function Register @ref P3MF32 
Address: F7H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF2_0   |P3.2 multi-function select
|[1]     |P3MF2_1   |P3.2 multi-function select
|[2]     |P3MF2_2   |P3.2 multi-function select
|[3]     |P3MF2_3   |P3.2 multi-function select
|[4]     |P3MF3_0   |P3.3 multi-function select
|[5]     |P3MF3_1   |P3.3 multi-function select
|[6]     |P3MF3_2   |P3.3 multi-function select
|[7]     |P3MF3_3   |P3.3 multi-function select
*/

/**
@addtogroup IP_GPIO_P4MF32 P4MF32
Special Function Register @ref P4MF32 
Address: ECH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF2_0   |P4.2 multi-function select
|[1]     |P4MF2_1   |P4.2 multi-function select
|[2]     |P4MF2_2   |P4.2 multi-function select
|[3]     |P4MF2_3   |P4.2 multi-function select
|[4]     |P4MF3_0   |P4.3 multi-function select
|[5]     |P4MF3_1   |P4.3 multi-function select
|[6]     |P4MF3_2   |P4.3 multi-function select
|[7]     |P4MF3_3   |P4.3 multi-function select
*/

/**
@addtogroup IP_GPIO_P5MF32 P5MF32
Special Function Register @ref P5MF32 
Address: E1H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF2_0   |P5.2 multi-function select
|[1]     |P5MF2_1   |P5.2 multi-function select
|[2]     |P5MF2_2   |P5.2 multi-function select
|[3]     |P5MF2_3   |P5.2 multi-function select
|[4]     |P5MF3_0   |P5.3 multi-function select
|[5]     |P5MF3_1   |P5.3 multi-function select
|[6]     |P5MF3_2   |P5.3 multi-function select
|[7]     |P5MF3_3   |P5.3 multi-function select
*/

/**
@addtogroup IP_GPIO_P6MF32 P6MF32
Special Function Register @ref P6MF32 
Address: 93H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P6MF2_0   |P6.2 multi-function select
|[1]     |P6MF2_1   |P6.2 multi-function select
|[2]     |P6MF2_2   |P6.2 multi-function select
|[3]     |P6MF2_3   |P6.2 multi-function select
|[4]     |P6MF3_0   |P6.3 multi-function select
|[5]     |P6MF3_1   |P6.3 multi-function select
|[6]     |P6MF3_2   |P6.3 multi-function select
|[7]     |P6MF3_3   |P6.3 multi-function select
*/

/**
@addtogroup IP_GPIO_P0MF54 P0MF54
Special Function Register @ref P0MF54 
Address: FBH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF4_0   |P0.4 multi-function select
|[1]     |P0MF4_1   |P0.4 multi-function select
|[2]     |P0MF4_2   |P0.4 multi-function select
|[3]     |P0MF4_3   |P0.4 multi-function select
|[4]     |P0MF5_0   |P0.5 multi-function select
|[5]     |P0MF5_1   |P0.5 multi-function select
|[6]     |P0MF5_2   |P0.5 multi-function select
|[7]     |P0MF5_3   |P0.5 multi-function select
*/

/**
@addtogroup IP_GPIO_P1MF54 P1MF54
Special Function Register @ref P1MF54 
Address: FFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF4_0   |P1.4 multi-function select
|[1]     |P1MF4_1   |P1.4 multi-function select
|[2]     |P1MF4_2   |P1.4 multi-function select
|[3]     |P1MF4_3   |P1.4 multi-function select
|[4]     |P1MF5_0   |P1.5 multi-function select
|[5]     |P1MF5_1   |P1.5 multi-function select
|[6]     |P1MF5_2   |P1.5 multi-function select
|[7]     |P1MF5_3   |P1.5 multi-function select
*/

/**
@addtogroup IP_GPIO_P2MF54 P2MF54
Special Function Register @ref P2MF54 
Address: F4H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF4_0   |P2.4 multi-function select
|[1]     |P2MF4_1   |P2.4 multi-function select
|[2]     |P2MF4_2   |P2.4 multi-function select
|[3]     |P2MF4_3   |P2.4 multi-function select
|[4]     |P2MF5_0   |P2.5 multi-function select
|[5]     |P2MF5_1   |P2.5 multi-function select
|[6]     |P2MF5_2   |P2.5 multi-function select
|[7]     |P2MF5_3   |P2.5 multi-function select
*/

/**
@addtogroup IP_GPIO_P3MF54 P3MF54
Special Function Register @ref P3MF54 
Address: E9H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF4_0   |P3.4 multi-function select
|[1]     |P3MF4_1   |P3.4 multi-function select
|[2]     |P3MF4_2   |P3.4 multi-function select
|[3]     |P3MF4_3   |P3.4 multi-function select
|[4]     |P3MF5_0   |P3.5 multi-function select
|[5]     |P3MF5_1   |P3.5 multi-function select
|[6]     |P3MF5_2   |P3.5 multi-function select
|[7]     |P3MF5_3   |P3.5 multi-function select
*/

/**
@addtogroup IP_GPIO_P4MF54 P4MF54
Special Function Register @ref P4MF54 
Address: EDH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF4_0   |P4.4 multi-function select
|[1]     |P4MF4_1   |P4.4 multi-function select
|[2]     |P4MF4_2   |P4.4 multi-function select
|[3]     |P4MF4_3   |P4.4 multi-function select
|[4]     |P4MF5_0   |P4.5 multi-function select
|[5]     |P4MF5_1   |P4.5 multi-function select
|[6]     |P4MF5_2   |P4.5 multi-function select
|[7]     |P4MF5_3   |P4.5 multi-function select
*/

/**
@addtogroup IP_GPIO_P5MF54 P5MF54
Special Function Register @ref P5MF54 
Address: E2H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF4_0   |P5.4 multi-function select
|[1]     |P5MF4_1   |P5.4 multi-function select
|[2]     |P5MF4_2   |P5.4 multi-function select
|[3]     |P5MF4_3   |P5.4 multi-function select
|[4]     |P5MF5_0   |P5.5 multi-function select
|[5]     |P5MF5_1   |P5.5 multi-function select
|[6]     |P5MF5_2   |P5.5 multi-function select
|[7]     |P5MF5_3   |P5.5 multi-function select
*/

/**
@addtogroup IP_GPIO_P6MF54 P6MF54
Special Function Register @ref P6MF54 
Address: 94H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P6MF4_0   |P6.4 multi-function select
|[1]     |P6MF4_1   |P6.4 multi-function select
|[2]     |P6MF4_2   |P6.4 multi-function select
|[3]     |P6MF4_3   |P6.4 multi-function select
|[4]     |P6MF5_0   |P6.5 multi-function select
|[5]     |P6MF5_1   |P6.5 multi-function select
|[6]     |P6MF5_2   |P6.5 multi-function select
|[7]     |P6MF5_3   |P6.5 multi-function select
*/

/**
@addtogroup IP_GPIO_P0MF76 P0MF76
Special Function Register @ref P0MF76 
Address: FCH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P0MF6_0   |P0.6 multi-function select
|[1]     |P0MF6_1   |P0.6 multi-function select
|[2]     |P0MF6_2   |P0.6 multi-function select
|[3]     |P0MF6_3   |P0.6 multi-function select
|[4]     |P0MF7_0   |P0.7 multi-function select
|[5]     |P0MF7_1   |P0.7 multi-function select
|[6]     |P0MF7_2   |P0.7 multi-function select
|[7]     |P0MF7_3   |P0.7 multi-function select
*/

/**
@addtogroup IP_GPIO_P1MF76 P1MF76
Special Function Register @ref P1MF76 
Address: F1H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P1MF6_0   |P1.6 multi-function select
|[1]     |P1MF6_1   |P1.6 multi-function select
|[2]     |P1MF6_2   |P1.6 multi-function select
|[3]     |P1MF6_3   |P1.6 multi-function select
|[4]     |P1MF7_0   |P1.7 multi-function select
|[5]     |P1MF7_1   |P1.7 multi-function select
|[6]     |P1MF7_2   |P1.7 multi-function select
|[7]     |P1MF7_3   |P1.7 multi-function select
*/

/**
@addtogroup IP_GPIO_P2MF76 P2MF76
Special Function Register @ref P2MF76 
Address: F5H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P2MF6_0   |P2.6 multi-function select
|[1]     |P2MF6_1   |P2.6 multi-function select
|[2]     |P2MF6_2   |P2.6 multi-function select
|[3]     |P2MF6_3   |P2.6 multi-function select
|[4]     |P2MF7_0   |P2.7 multi-function select
|[5]     |P2MF7_1   |P2.7 multi-function select
|[6]     |P2MF7_2   |P2.7 multi-function select
|[7]     |P2MF7_3   |P2.7 multi-function select
*/

/**
@addtogroup IP_GPIO_P3MF76 P3MF76
Special Function Register @ref P3MF76 
Address: EAH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P3MF6_0   |P3.6 multi-function select
|[1]     |P3MF6_1   |P3.6 multi-function select
|[2]     |P3MF6_2   |P3.6 multi-function select
|[3]     |P3MF6_3   |P3.6 multi-function select
|[4]     |P3MF7_0   |P3.7 multi-function select
|[5]     |P3MF7_1   |P3.7 multi-function select
|[6]     |P3MF7_2   |P3.7 multi-function select
|[7]     |P3MF7_3   |P3.7 multi-function select
*/

/**
@addtogroup IP_GPIO_P4MF76 P4MF76
Special Function Register @ref P4MF76 
Address: EEH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P4MF6_0   |P4.6 multi-function select
|[1]     |P4MF6_1   |P4.6 multi-function select
|[2]     |P4MF6_2   |P4.6 multi-function select
|[3]     |P4MF6_3   |P4.6 multi-function select
|[4]     |P4MF7_0   |P4.7 multi-function select
|[5]     |P4MF7_1   |P4.7 multi-function select
|[6]     |P4MF7_2   |P4.7 multi-function select
|[7]     |P4MF7_3   |P4.7 multi-function select
*/

/**
@addtogroup IP_GPIO_P5MF76 P5MF76
Special Function Register @ref P5MF76 
Address: E3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF6_0   |P5.6 multi-function select
|[1]     |P5MF6_1   |P5.6 multi-function select
|[2]     |P5MF6_2   |P5.6 multi-function select
|[3]     |P5MF6_3   |P5.6 multi-function select
|[4]     |P5MF7_0   |P5.7 multi-function select
|[5]     |P5MF7_1   |P5.7 multi-function select
|[6]     |P5MF7_2   |P5.7 multi-function select
|[7]     |P5MF7_3   |P5.7 multi-function select
*/

/**
@addtogroup IP_GPIO_P6MF76 P6MF76
Special Function Register @ref P6MF76 
Address: 95H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |P5MF6_0   |P5.6 multi-function select
|[1]     |P5MF6_1   |P5.6 multi-function select
|[2]     |P5MF6_2   |P5.6 multi-function select
|[3]     |P5MF6_3   |P5.6 multi-function select
|[4]     |P5MF7_0   |P5.7 multi-function select
|[5]     |P5MF7_1   |P5.7 multi-function select
|[6]     |P5MF7_2   |P5.7 multi-function select
|[7]     |P5MF7_3   |P5.7 multi-function select
*/

/**
@addtogroup IP_GPIO_P0S P0S
Special Function Register @ref P0S 
Address: 99H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P0 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/

/**
@addtogroup IP_GPIO_P1S P1S
Special Function Register @ref P1S 
Address: 9BH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[7]     |7         |P1 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/

/**
@addtogroup IP_GPIO_P2S P2S
Special Function Register @ref P2S 
Address: 9DH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[4]     |4         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[5]     |5         |P2 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/

/**
@addtogroup IP_GPIO_P3S P3S
Special Function Register @ref P3S 
Address: ACH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P3 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/

/**
@addtogroup IP_GPIO_P4S P4S
Special Function Register @ref P4S 
Address: BBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P4 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/

/**
@addtogroup IP_GPIO_P5S P5S
Special Function Register @ref P5S 
Address: BFH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[1]     |1         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[2]     |2         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[3]     |3         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[4]     |4         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
|[5]     |5         |P5 Schmitt Triggered Input
|        |          |0 = TTL level input of Pn.x.
|        |          |1 = Schmitt triggered input of Pn.x.
*/

/**
@addtogroup IP_GPIO_P0SR P0SR
Special Function Register @ref P0SR 
Address: 9AH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P0 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/

/**
@addtogroup IP_GPIO_P1SR P1SR
Special Function Register @ref P1SR 
Address: 9CH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[7]     |7         |P1 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/

/**
@addtogroup IP_GPIO_P2SR P2SR
Special Function Register @ref P2SR 
Address: 9EH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[4]     |4         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[5]     |5         |P2 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/

/**
@addtogroup IP_GPIO_P3SR P3SR
Special Function Register @ref P3SR 
Address: ADH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P3 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/

/**
@addtogroup IP_GPIO_P4SR P4SR
Special Function Register @ref P4SR 
Address: BCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P4 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/

/**
@addtogroup IP_GPIO_P5SR P5SR
Special Function Register @ref P5SR 
Address: AEH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[1]     |1         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[2]     |2         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[3]     |3         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[4]     |4         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
|[5]     |5         |P5 Slew Rate
|        |          |0 = Pn.x normal output slew rate.
|        |          |1 = Pn.x high-speed output slew rate.
*/

/**
@addtogroup IP_GPIO_P0UP P0UP
Special Function Register @ref P0UP 
Address: 92H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
|[1]     |1         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
|[2]     |2         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
|[3]     |3         |P0 Pull-Up Enable
|        |          |0 = P0.n pull-up Disabled.
|        |          |1 = P0.n pull-up Enabled.
*/

/**
@addtogroup IP_GPIO_P1UP P1UP
Special Function Register @ref P1UP 
Address: 93H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Pull-Up Enable
|        |          |0 = P1.n pull-up Disabled.
|        |          |1 = P1.n pull-up Enabled.
|[7]     |7         |P1 Pull-Up Enable
|        |          |0 = P1.n pull-up Disabled.
|        |          |1 = P1.n pull-up Enabled.
*/

/**
@addtogroup IP_GPIO_P2UP P2UP
Special Function Register @ref P2UP 
Address: 94H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[1]     |1         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[2]     |2         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[3]     |3         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[4]     |4         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
|[5]     |5         |P2 Pull-Up Enable
|        |          |0 = P2.n pull-up Disabled.
|        |          |1 = P2.n pull-up Enabled.
*/

/**
@addtogroup IP_GPIO_P3UP P3UP
Special Function Register @ref P3UP 
Address: 95H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
|[1]     |1         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
|[2]     |2         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
|[3]     |3         |P3 Pull-Up Enable
|        |          |0 = P3.n pull-up Disabled.
|        |          |1 = P3.n pull-up Enabled.
*/

/**
@addtogroup IP_GPIO_P4UP P4UP
Special Function Register @ref P4UP 
Address: 96H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Pull-Up Enable
|        |          |0 = P4.n pull-up Disabled.
|        |          |1 = P4.n pull-up Enabled.
|[1]     |1         |P4 Pull-Up Enable
|        |          |0 = P4.n pull-up Disabled.
|        |          |1 = P4.n pull-up Enabled.
*/

/**
@addtogroup IP_GPIO_P5UP P5UP
Special Function Register @ref P5UP 
Address: 97H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[1]     |1         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[2]     |2         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[3]     |3         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[4]     |4         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
|[5]     |5         |P5.n Pull-Up Enable
|        |          |0 = P5.n pull-up Disabled.
|        |          |1 = P5.n pull-up Enabled.
*/

/**
@addtogroup IP_GPIO_P0DW P0DW
Special Function Register @ref P0DW 
Address: 8AH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
|[1]     |1         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
|[2]     |2         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
|[3]     |3         |P0 Pull-Down Enable
|        |          |0 = P0.n pull-down Disabled.
|        |          |1 = P0.n pull-down Enabled.
*/

/**
@addtogroup IP_GPIO_P1DW P1DW
Special Function Register @ref P1DW 
Address: 8BH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |6         |P1 Pull-Down Enable
|        |          |0 = P1.n pull-down Disabled.
|        |          |1 = P1.n pull-down Enabled.
|[7]     |7         |P1 Pull-Down Enable
|        |          |0 = P1.n pull-down Disabled.
|        |          |1 = P1.n pull-down Enabled.
*/

/**
@addtogroup IP_GPIO_P2DW P2DW
Special Function Register @ref P2DW 
Address: 8CH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[1]     |1         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[2]     |2         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[3]     |3         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[4]     |4         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
|[5]     |5         |P2 Pull-Down Enable
|        |          |0 = P2.n pull-down Disabled.
|        |          |1 = P2.n pull-down Enabled.
*/

/**
@addtogroup IP_GPIO_P3DW P3DW
Special Function Register @ref P3DW 
Address: 8DH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
|[1]     |1         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
|[2]     |2         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
|[3]     |3         |P3 Pull-Down Enable
|        |          |0 = P3.n pull-down Disabled.
|        |          |1 = P3.n pull-down Enabled.
*/

/**
@addtogroup IP_GPIO_P4DW P4DW
Special Function Register @ref P4DW 
Address: 8EH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P4 Pull-Down Enable
|        |          |0 = P4.n pull-down Disabled.
|        |          |1 = P4.n pull-down Enabled.
|[1]     |1         |P4 Pull-Down Enable
|        |          |0 = P4.n pull-down Disabled.
|        |          |1 = P4.n pull-down Enabled.
*/

/**
@addtogroup IP_GPIO_P5DW P5DW
Special Function Register @ref P5DW 
Address: 8FH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |0         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[1]     |1         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[2]     |2         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[3]     |3         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[4]     |4         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
|[5]     |5         |P5 Pull-Down Enable
|        |          |0 = P5.n pull-down Disabled.
|        |          |1 = P5.n pull-down Enabled.
*/

/**
@addtogroup IP_GPIO_PRTHCON0 PRTHCON0
Special Function Register @ref PRTHCON0 
Address: C9H, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:6]   |P20RTH[1:0]|P2.0 Low Level To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
|[3:6]   |P21RTH[1:0]|P2.1 Low Level To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
|[5:6]   |P30RTH[1:0]|P3.0 Low Level To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
|[7:6]   |P40RTH[1:0]|P4.0 Low Level Auto Return To High Delay Timing
|        |          |00 = Auto return to high function is disabled
|        |          |01 = 1 LIRC clock < auto return delay timing < 2 LIRC clock
|        |          |10 = 2 LIRC clock < auto return delay timing < 3 LIRC clock
|        |          |11 = 3 LIRC clock < auto return delay timing < 4 LIRC clock
*/

/** 
@addtogroup IP_GPIO_PICON PICON
Special Function Register @ref PICON 
Address: E9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7]     |PIT0      |Pin Interrupt Channel nType Select
|        |          |This bit selects which type that pin interrupt channel 7 is triggered.
|        |          |0 = Level triggered.
|        |          |1 = Edge triggered.
*/

/**  
@addtogroup IP_GPIO_PINEN PINEN
Special Function Register @ref PINEN 
Address: EAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PINEN0    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[1]     |PINEN1    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[2]     |PINEN2    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[3]     |PINEN3    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[4]     |PINEN4    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[5]     |PINEN5    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[6]     |PINEN6    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
|[7]     |PINEN7    |Pin Interrupt Channel n Negative Polarity Enable
|        |          |This bit enables low-level/falling edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = Low-level/falling edge detect Disabled.
|        |          |1 = Low-level/falling edge detect Enabled.
*/

/** 
@addtogroup IP_GPIO_PIPEN PIPEN
Special Function Register @ref PIPEN 
Address: EBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PIPEN0    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[1]     |PIPEN1    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[2]     |PIPEN2    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[3]     |PIPEN3    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[4]     |PIPEN4    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[5]     |PIPEN5    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[6]     |PIPEN6    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
|[7]     |PIPEN7    |Pin Interrupt Channel n Positive Polarity Enable
|        |          |This bit enables high-level/rising edge triggering pin interrupt
|        |          |channel n. The level or edge triggered selection depends on each
|        |          |control bit PITn in PICON.
|        |          |0 = High-level/rising edge detect Disabled.
|        |          |1 = High-level/rising edge detect Enabled.
*/

/**
@addtogroup IP_GPIO_PIF PIF
Special Function Register @ref PIF 
Address: CAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PIF0      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[1]     |PIF1      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[2]     |PIF2      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[3]     |PIF3      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[4]     |PIF4      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[5]     |PIF5      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[6]     |PIF6      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
|[7]     |PIF7      |Pin Interrupt Channel n Flag
|        |          |If the edge trigger is selected, this flag will be set by hardware if
|        |          |the channel n of pin interrupt detects an enabled edge trigger. This
|        |          |flag should be cleared by software.
|        |          |If the level trigger is selected, this flag follows the inverse of the
|        |          |input signal’s logic level on the channel n of pin interrupt. Software
|        |          |cannot control it.
*/

/**
@addtogroup IP_GPIO_PIPS0 PIPS0
Special Function Register @ref PIPS0 
Address: A1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_GPIO_PIPS1 PIPS1
Special Function Register @ref PIPS1 
Address: A2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_GPIO_PIPS2 PIPS2
Special Function Register @ref PIPS2 
Address: A3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_GPIO_PIPS3 PIPS3
Special Function Register @ref PIPS3 
Address: A4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_GPIO_PIPS4 PIPS4
Special Function Register @ref PIPS4 
Address: A5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_GPIO_PIPS5 PIPS5
Special Function Register @ref PIPS5 
Address: A6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_GPIO_PIPS6 PIPS6
Special Function Register @ref PIPS6 
Address: A7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_GPIO_PIPS7 PIPS7
Special Function Register @ref PIPS7 
Address: AFH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |BSEL[2:0] |Pin Interrupt Channel Bit Select
|        |          |000 = Pn.0.
|        |          |001 = Pn.1
|        |          |010 =.Pn.2
|        |          |011 = Pn.3.
|        |          |100 = Pn.4.
|        |          |101 = Pn.5.
|        |          |110 = Pn.6.
|        |          |111 = Pn.7.
|        |          |n is the PORT number, which is selected by PSEL[2:0].
|[3]     |Reserved  |Reserved
|[6:4]   |PSEL[2:0] |Pin Interrupt Channel Port Select
|        |          |000 = P0 PORT.
|        |          |001 = P1 PORT.
|        |          |010 = P2 PORT.
|        |          |011 = P3 PORT.
|        |          |100 = P4 PORT.
|        |          |101 = P5 PORT.
|        |          |Others = Reserved.
|[7]     |Reserved  |Reserved
*/

/**@} end of GPIO group */

/**
  @addtogroup IP_TIMER01 Timer01 Control Register
  @{ */

/**
@addtogroup IP_Timer01_TMOD TMOD
Special Function Register @ref TMOD 
Address: 89H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |M0_T0     |Check with bit 1 description
|[1]     |M1_T0     |Timer 0 Mode Select
|        |          |M1
|        |          |M0
|        |          |Timer 0 Mode
|        |          |0
|        |          |0
|        |          |Mode 0: 13-bit   Timer/Counter
|        |          |0
|        |          |1
|        |          |Mode 1: 16-bit   Timer/Counter
|        |          |1
|        |          |0
|        |          |Mode 2: 8-bit   Timer/Counter with auto-reload from TH0
|        |          |1
|        |          |1
|        |          |Mode 3: TL0 as a   8-bit Timer/Counter and TH0 as a 8-bit Timer
|[2]     |CT_T0     |Timer 0 Counter/Timer Select
|        |          |0 = Timer 0 is incremented by internal system clock.
|        |          |1 = Timer 0 is incremented by the falling edge of the external pin T0.
|[3]     |GATE_T0   |Timer 0 Gate Control
|        |          |0 = Timer 0 will clock when TR0 is 1 regardless of INT0 logic level.
|        |          |1 = Timer 0 will clock only when TR0 is 1 and INT0 is logic 1.
|[4]     |M0_T1     |Check with bit 5 description.
|[5]     |M1_T1     |Timer 1 Mode Select
|        |          |M1
|        |          |M0
|        |          |Timer 1 Mode
|        |          |0
|        |          |0
|        |          |Mode 0: 13-bit   Timer/Counter
|        |          |0
|        |          |1
|        |          |Mode 1: 16-bit   Timer/Counter
|        |          |1
|        |          |0
|        |          |Mode 2: 8-bit   Timer/Counter with auto-reload from TH1
|        |          |1
|        |          |1
|        |          |Mode 3: Timer 1   halted
|[6]     |CT_T1     |Timer 1 Counter/Timer Select
|        |          |0 = Timer 1 is incremented by internal system clock.
|        |          |1 = Timer 1 is incremented by the falling edge of the external pin T1.
|[7]     |GATE_T1   |Timer 1 Gate Control
|        |          |0 = Timer 1 will clock when TR1 is 1 regardless of INT1 logic level.
|        |          |1 = Timer 1 will clock only when TR1 is 1 and INT1 is logic 1.
*/

/**
@addtogroup IP_Timer01_TCON TCON
Special Function Register @ref TCON 
Address: 88H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |IT0       |External Interrupt 0 Type Select
|        |          |This bit selects by which type that INT0 is triggered.
|        |          |0 = INT0 is low level triggered.
|        |          |1 = INT0 is falling edge triggered.
|[1]     |IE0       |External Interrupt 0 Edge Flag
|        |          |If IT0 = 1 (falling edge trigger), this flag will be set by hardware
|        |          |when a falling edge is detected. It remain set until cleared via
|        |          |software or cleared by hardware in the beginning of its interrupt
|        |          |service routine.
|        |          |If IT0 = 0 (low level trigger), this flag follows the inverse of the
|        |          |INT0 input signal’s logic level. Software cannot control it.
|[2]     |IT1       |External Interrupt 1 Type Select
|        |          |This bit selects by which type that INT1 is triggered.
|        |          |0 = INT1 is low level triggered.
|        |          |1 = INT1 is fallinVg edge triggered.
|[3]     |IE1       |External Interrupt 1 Edge Flag
|        |          |If IT1 = 1 (falling edge trigger), this flag will be set by hardware
|        |          |when a falling edge is detected. It remain set until cleared via
|        |          |software or cleared by hardware in the beginning of its interrupt
|        |          |service routine.
|        |          |If IT1 = 0 (low level trigger), this flag follows the inverse of the
|        |          |INT1 input signal’s logic level. Software cannot control it.
|[4]     |TR0       |Timer 0 Run Control
|        |          |0 = Timer 0 Disabled. Clearing this bit will halt Timer 0 and the
|        |          |current count will be preserved in TH0 and TL0.
|        |          |1 = Timer 0 Enabled.
|[5]     |TF0       |Timer 0 Overflow Flag
|        |          |This bit is set when Timer 0 overflows. It is automatically cleared
|        |          |via hardware when the program executes the Timer 0 interrupt service
|        |          |routine. This bit can be set or cleared by software.
|[6]     |TR1       |Timer 1 Run Control
|        |          |0 = Timer 1 Disabled. Clearing this bit will halt Timer 1 and the
|        |          |current count will be preserved in TH1 and TL1.
|        |          |1 = Timer 1 Enabled.
|[7]     |TF1       |Timer 1 Overflow Flag
|        |          |This bit is set when Timer 1 overflows. It is automatically cleared by
|        |          |hardware when the program executes the Timer 1 interrupt service
|        |          |routine. This bit can be set or cleared by software.
*/

/**
@addtogroup IP_Timer01_TL0 TL0
Special Function Register @ref TL0 
Address: 8AH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TL0[7:0]  |Timer 0 Low Byte
|        |          |The TL0 register is the low byte of the 16-bit counting register of
|        |          |Timer 0.
*/

/**
@addtogroup IP_Timer01_TH0 TH0
Special Function Register @ref TH0 
Address: 8CH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TH0[7:0]  |Timer 0 High Byte
|        |          |The TH0 register is the high byte of the 16-bit counting register of
|        |          |Timer 0.
*/

/**
@addtogroup IP_Timer01_TL1 TL1
Special Function Register @ref TL1 
Address: 8BH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TL1[7:0]  |Timer 1 Low Byte
|        |          |The TL1 register is the low byte of the 16-bit counting register of
|        |          |Timer 1.
*/

/**
@addtogroup IP_Timer01_TH1 TH1
Special Function Register @ref TH1 
Address: 8DH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |TH1[7:0]  |Timer 1 High Byte
|        |          |The TH1 register is the high byte of the 16-bit counting register of
|        |          |Timer 1.
*/

/**@} end of TIMER01 group */

/**
  @addtogroup IP_TIMER2 Timer2 Control Register
  @{ */

/**
@addtogroup IP_Timer2_T2CON T2CON
Special Function Register @ref T2CON 
Address: C8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CM_RL2    |Timer 2 Compare or Auto-Reload Mode Select
|        |          |This bit selects Timer 2 functioning mode.
|        |          |0 = Auto-reload mode.
|        |          |1 = Compare mode.
|[1]     |Reserved  |Reserved
|[2]     |TR2       |Timer 2 Run Control
|        |          |0 = Timer 2 Disabled. Clearing this bit will halt Timer 2 and the
|        |          |current count will be preserved in TH2 and TL2.
|        |          |1 = Timer 2 Enabled.
|[3]     |TL2RF     |TL2 Reading Status Flag
|        |          |When TL2 is written, software should check this bit first.
|        |          |0 = TL2 reading is available.
|        |          |1 = TL2 reading is not available.
|[4]     |TH2RF     |TH2 Reading Status Flag
|        |          |When TH2 is written, software should check this bit first.
|        |          |0 = TH2 reading is available
|        |          |1 = TH2 reading is not available.
|[6:5]   |Reserved  |Reserved
|[7]     |TF2       |Timer 2 Overflow Flag
|        |          |This bit is set when Timer 2 overflows or a compare match occurs. If
|        |          |the Timer 2 interrupt and the global interrupt are enable, setting
|        |          |this bit will make CPU execute Timer 2 interrupt service routine. This
|        |          |bit is not automatically cleared via hardware and should be cleared
|        |          |via software.
*/

/**
@addtogroup IP_Timer2_T2MOD T2MOD
Special Function Register @ref T2MOD 
Address: C9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |LDTS[1:0] |Auto-Reload Trigger Select
|        |          |These bits select the reload trigger event.
|        |          |00 = Reload when Timer 2 overflows.
|        |          |01 = Reload when input capture 0 event occurs.
|        |          |10 = Reload when input capture 1 event occurs.
|        |          |11 = Reload when input capture 2 event occurs.
|[2]     |CMPCR     |Compare Match Auto-Clear
|        |          |This bit is valid only under Timer 2 compare mode. It enables hardware
|        |          |auto-clearing TH2 and TL2 counter registers after a compare match
|        |          |occurs.
|        |          |0 = Timer 2 continues counting when a compare match occurs.
|        |          |1 = Timer 2 value is auto-cleared as 0000H when a compare match
|        |          |occurs.
|[3]     |CAPCR     |Capture Auto-Clear
|        |          |This bit is valid only under Timer 2 auto-reload mode. It enables
|        |          |hardware auto-clearing TH2 and TL2 counter registers after they have
|        |          |been transferred in to RCMP2H and RCMP2L while a capture event occurs.
|        |          |0 = Timer 2 continues counting when a capture event occurs.
|        |          |1 = Timer 2 value is auto-cleared as 0000H when a capture event
|        |          |occurs.
|[6:4]   |T2DIV[2:0]|Timer 2 Clock Divider
|        |          |000 = Timer 2 clock divider is 1/1.
|        |          |001 = Timer 2 clock divider is 1/4.
|        |          |010 = Timer 2 clock divider is 1/16.
|        |          |011 = Timer 2 clock divider is 1/32.
|        |          |100 = Timer 2 clock divider is 1/64.
|        |          |101 = Timer 2 clock divider is 1/128.
|        |          |110 = Timer 2 clock divider is 1/256.
|        |          |111 = Timer 2 clock divider is 1/512.
|[7]     |LDEN      |Enable Auto-Reload
|        |          |0 = Reloading RCMP2H and RCMP2L to TH2 and TL2
|        |          |Disabled.
|        |          |1 = Reloading RCMP2H and RCMP2L to TH2 and TL2 Enabled.
*/

/**
@addtogroup IP_Timer2_TH2 TH2
Special Function Register @ref TH2 
Address: CDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |T2[15:8]  |Timer 2 High Byte
|        |          |The TH2 register is the high byte of the 16-bit counting register of
|        |          |Timer 2.
*/

/**
@addtogroup IP_Timer2_TL2 TL2
Special Function Register @ref TL2 
Address: CCH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |T2[7:0]   |Timer 2 Low Byte
|        |          |The TL2 register is the low byte of the 16-bit counting register of
|        |          |Timer 2.
*/

/**
@addtogroup IP_Timer2_RCMP2H RCMP2H
Special Function Register @ref RCMP2H 
Address: CBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RCMP2[15:8]|Timer 2 Reload/Compare High Byte
|        |          |This register stores the high byte of compare value when Timer 2 is
|        |          |configured in compare mode. Also it holds the high byte of the reload
|        |          |value in auto-reload mode.
*/

/**
@addtogroup IP_Timer2_RCMP2L RCMP2L
Special Function Register @ref RCMP2L 
Address: CAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RCMP2[7:0]|Timer 2 Reload/Compare Low Byte
|        |          |This register stores the low byte of compare value when Timer 2 is
|        |          |configured in compare mode. Also it holds the low byte of the reload
|        |          |value in auto-reload mode.
*/

/**
@addtogroup IP_Timer2_CAPCON0 CAPCON0
Special Function Register @ref CAPCON0 
Address: E1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CAPF0     |Input Capture 0 Flag
|        |          |This bit is set by hardware if the determined edge of input capture 0
|        |          |occurs. This bit should cleared by software.
|[1]     |CAPF1     |Input Capture 1 Flag
|        |          |This bit is set by hardware if the determined edge of input capture 1
|        |          |occurs. This bit should cleared by software.
|[2]     |CAPF2     |Input Capture 2 Flag
|        |          |This bit is set by hardware if the determined edge of input capture 2
|        |          |occurs. This bit should cleared by software.
|[3]     |Reserved  |Reserved
|[4]     |CAPEN0    |Input Capture 0 Enable
|        |          |0 = Input capture channel 0 Disabled.
|        |          |1 = Input capture channel 0 Enabled.
|[5]     |CAPEN1    |Input Capture 1 Enable
|        |          |0 = Input capture channel 1 Disabled.
|        |          |1 = Input capture channel 1 Enabled.
|[6]     |CAPEN2    |Input Capture 2 Enable
|        |          |0 = Input capture channel 2 Disabled.
|        |          |1 = Input capture channel 2 Enabled.
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_Timer2_CAPCON1 CAPCON1
Special Function Register @ref CAPCON1 
Address: E2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |CAP0LS[1:0]|Input Capture 0 Level Select
|        |          |00 = Falling edge.
|        |          |01 = Rising edge.
|        |          |10 = Either rising or falling edge.
|        |          |11 = Reserved.
|[3:2]   |CAP1LS[1:0]|Input Capture 1 Level Select
|        |          |00 = Falling edge.
|        |          |01 = Rising edge.
|        |          |10 = Either rising or falling edge.
|        |          |11 = Reserved.
|[5:4]   |CAP2LS[1:0]|Input Capture 2 Level Select
|        |          |00 = Falling edge.
|        |          |01 = Rising edge.
|        |          |10 = Either rising or falling edge.
|        |          |11 = Reserved.
|[7:6]   |Reserved  |Reserved
*/

/**
@addtogroup IP_Timer2_CAPCON2 CAPCON2
Special Function Register @ref CAPCON2 
Address: E3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[4]     |ENF0      |Enable Noise Filer on Input Capture 0
|        |          |0 = Noise filter on input capture channel 0 Disabled.
|        |          |1 = Noise filter on input capture channel 0 Enabled.
|[5]     |ENF1      |Enable Noise Filer on Input Capture 1
|        |          |0 = Noise filter on input capture channel 1 Disabled.
|        |          |1 = Noise filter on input capture channel 1 Enabled.
|[6]     |ENF2      |Enable Noise Filer on Input Capture 2
|        |          |0 = Noise filter on input capture channel 2 Disabled.
|        |          |1 = Noise filter on input capture channel 2 Enabled.
*/

/**
@addtogroup IP_Timer2_C0L C0L
Special Function Register @ref C0L 
Address: E4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
*/

/**
@addtogroup IP_Timer2_C1L C1L
Special Function Register @ref C1L 
Address: E6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
*/

/**
@addtogroup IP_Timer2_C2L C2L
Special Function Register @ref C2L 
Address: EDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7L       |Input Capture n Result Low Byte
|        |          |The CnL register is the low byte of the 16-bit result captured by
|        |          |input capture n.
*/

/**
@addtogroup IP_Timer2_C0H C0H
Special Function Register @ref C0H 
Address: E5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
*/

/**
@addtogroup IP_Timer2_C1H C1H
Special Function Register @ref C1H 
Address: E7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
*/

/**
@addtogroup IP_Timer2_C2H C2H
Special Function Register @ref C2H 
Address: EEH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |C0H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[1]     |C1H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[2]     |C2H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[3]     |C3H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[4]     |C4H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[5]     |C5H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[6]     |C6H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
|[7]     |C7H       |Input Capture n Result High Byte
|        |          |The CnH register is the high byte of the 16-bit result captured by
|        |          |input capture n.
*/

/**
@addtogroup IP_Timer2_T2ACMP T2ACMP
Special Function Register @ref T2ACMP 
Address: 8EH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:8]   |IC0S[1:0] |Input Capture 0 Source Select
|        |          |00 = IC0
|        |          |01 = ACMP0_O
|        |          |10 = ACMP1_O
|        |          |11 = IC0
|[3:8]   |IC1S[1:0] |Input Capture 1 Source Select
|        |          |00 = external IC1 source connects to internal IC1
|        |          |01 = ACMP0_O
|        |          |10 = ACMP1_O
|        |          |11 = external IC1 source connects to internal IC1
|[5:8]   |IC2S[1:0] |Input Capture 2 Source Select
|        |          |00 = IC2
|        |          |01 = ACMP_O
|        |          |10 = ACMP1_O
|        |          |11 = Reserved
|[7:8]   |T2CKS[1:0]|Timer2 Clock Source Select
|        |          |00 = Timer 2 Clock source from FSYS.
|        |          |01 = Timer 2 Clock source from external P4.0
|        |          |10 = Timer 2 Clock source from external pin P5.4
|        |          |11 = Timer 2 Clock source from external pin P3.2
*/

/**@} end of TIMER2 group */

/**
  @addtogroup IP_TIMER3 Timer3 Control Register
  @{ */

/**
@addtogroup IP_Timer3_T3CON T3CON
Special Function Register @ref T3CON 
Address: C4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |T3PS[2:0] |Timer 3 Pre-Scalar
|        |          |These bits determine the scale of the clock divider for Timer 3.
|        |          |000 = 1/1.
|        |          |001 = 1/2.
|        |          |010 = 1/4.
|        |          |011 = 1/8.
|        |          |100 = 1/16.
|        |          |101 = 1/32.
|        |          |110 = 1/64.
|        |          |111 = 1/128.
|[3]     |TR3       |Timer 3 Run Control
|        |          |0 = Timer 3 is halted.
|        |          |1 = Timer 3 starts running.
|        |          |Note that the reload registers RH3 and RL3 can only be written when
|        |          |Timer 3 is halted (TR3 bit is 0). If any of RH3 or RL3 is written if
|        |          |TR3 is 1, result is unpredictable.
|[4]     |TF3       |Timer 3 Overflow Flag
|        |          |This bit is set when Timer 3 overflows. It is automatically cleared by
|        |          |hardware when the program executes the Timer 3 interrupt service
|        |          |routine. This bit can be set or cleared by software.
|[5]     |BRCK      |Serial Port 0 Baud Rate Clock Source
|        |          |This bit selects which Timer is used as the baud rate clock source
|        |          |when serial port 0 is in Mode 1 or 3.
|        |          |0 = Timer 1.
|        |          |1 = Timer 3.
|[6]     |SMOD0_1   |Serial Port 1 Framing Error Access Enable
|        |          |0 = S1CON.7 accesses to SM0_1 bit.
|        |          |1 = S1CON.7 accesses to FE_1 bit.
|[7]     |SMOD_1    |Serial Port 1 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART1 is in
|        |          |Mode 2.see Table 6.92 Serial Port 1 Mode / baud rate Description for
|        |          |details.
*/

/**
@addtogroup IP_Timer3_RL3 RL3
Special Function Register @ref RL3 
Address: C5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RL3[7:0]  |Timer 3 Reload Low Byte
|        |          |It holds the low byte of the reload value of Timer 3.
*/

/**
@addtogroup IP_Timer3_RH3 RH3
Special Function Register @ref RH3 
Address: C6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RH3[7:0]  |Timer 3 Reload High Byte
|        |          |It holds the high byte of the reload value of Time 3.
*/

/**@} end of TIMER3 group */

/**
  @addtogroup IP_WDT WDT Control Register
  @{ */

/**
@addtogroup IP_WDT_WDCON WDCON
Special Function Register @ref WDCON 
Address: AAH, SFR Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |WDPS[2:0] |WDT Clock Pre-Scalar Select
|        |          |These bits determine the pre-scale of WDT clock from 1/1 through
|        |          |1/256. SeeTable 6.61 Watchdog Timer-out Interval Under Different Pre-
|        |          |scalars. The default is the maximum pre-scale value.
|[3]     |WDTRF     |WDT Reset Flag
|        |          |When the CPU is reset by WDT time-out event, this bit will be set via
|        |          |hardware. This flag is recommended to be cleared via software after
|        |          |reset.
|[4]     |WIDPD     |WDT Running in Idle or Power-Down Mode
|        |          |This bit is valid only when control bits in WDTEN[3:0] (CONFIG4[7:4])
|        |          |are all 1. It decides whether WDT runs in Idle or Power-down mode when
|        |          |WDT works as a general purpose timer.
|        |          |0 = WDT stops running during Idle or Power-down mode.
|        |          |1 = WDT keeps running during Idle or Power-down mode.
|[5]     |WDTF      |WDT Time-Out Flag
|        |          |This bit indicates an overflow of WDT counter. This flag should be
|        |          |cleared by software.
|[6]     |WDCLR     |WDT Clear
|        |          |Setting this bit will reset the WDT count to 00H. It puts the counter
|        |          |in a known state and prohibit the system from unpredictable reset. The
|        |          |meaning of writing and reading WDCLR bit is different.
|        |          |Writing:
|        |          |0 = No effect.
|        |          |1 = Clearing WDT counter.
|        |          |Reading:
|        |          |0 = WDT counter is completely cleared.
|        |          |1 = WDT counter is not yet cleared.
|[7]     |WDTR      |WDT Run
|        |          |This bit is valid only when control bits in WDTEN[3:0] (CONFIG4[7:4])
|        |          |are all 1. At this time, WDT works as a general purpose timer.
|        |          |0 = WDT Disabled.
|        |          |1 = WDT Enabled. The WDT counter starts running.
*/

/**
@addtogroup IP_WDT_WDCON WDCON
Special Function Register @ref WDCON 
Address: AAH, Page 0, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |WDPS[3]   |WDT Clock Pre-Scalar Select
|        |          |These bits determine the pre-scale of WDT clock from 1/1 through
|        |          |1/2048. SeeError! Reference source not found.
|        |          |The default is the maximum pre-scale value.
|[7:1]   |Reserved  |Reserved
*/

/**@} end of WDT group */

/**
  @addtogroup IP_WKT WKT Control Register
  @{ */

/**
@addtogroup IP_WKT_WKCON WKCON
Special Function Register @ref WKCON 
Address: 8FH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |WKPS[2:0] |WKT Pre-Scalar
|        |          |These bits determine the pre-scale of WKT clock.
|        |          |000 = 1/1.
|        |          |001 = 1/4.
|        |          |010 = 1/16.
|        |          |011 = 1/64.
|        |          |100 = 1/256.
|        |          |101 = 1/512.
|        |          |110 = 1/1024.
|        |          |111 = 1/2048.
|[3]     |WKTR      |WKT Run Control
|        |          |0 = WKT is halted.
|        |          |1 = WKT starts running.
|        |          |Note that the reload register RWK can only be written when WKT is
|        |          |halted (WKTR bit is 0). If WKT is written while WKTR is 1, result is
|        |          |unpredictable.
|[4]     |WKTF      |WKT Overflow Flag
|        |          |This bit is set when WKT overflows. If the WKT interrupt and the
|        |          |global interrupt are enabled, setting this bit will make CPU execute
|        |          |WKT interrupt service routine. This bit is not automatically cleared
|        |          |via hardware and should be cleared via software.
|[5]     |WKTCK     |WKT Clock Source
|        |          |This bit is set WKT clock source select bit.
|        |          |0 = LIRC
|        |          |1 = LXT
|[7:6]   |Reserved  |Reserved
*/

/**
@addtogroup IP_WKT_RWKH RWKH
Special Function Register @ref RWKH 
Address: BFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RWK[15:8] |WKT Reload High Byte
|        |          |It holds the 16-bit reload value of WKT. Note that RWK should not be
|        |          |FFFFH if the pre-scale is 1/1 for implement limitation.
*/

/**
@addtogroup IP_WKT_RWKL RWKL
Special Function Register @ref RWKL 
Address: 86H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |RWK[7:0]  |WKT Reload Low Byte
|        |          |It holds the 16-bit reload value of WKT. Note that RWK should not be
|        |          |FFFFH if the pre-scale is 1/1 for implement limitation.
*/

/**
@addtogroup IP_WKT_CWKH CWKH
Special Function Register @ref CWKH 
Address: BEH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CWK[15:8] |WKT Current Count Value Low Byte High Byte
|        |          |It is store value of WKT current count.
*/

/**
@addtogroup IP_WKT_CWKL CWKL
Special Function Register @ref CWKL 
Address: 86H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CWK[7:0]  |WKT Current Count Value Low Byte Low Byte
|        |          |It is store value of WKT current count.
*/

/**@} end of WKT group */

/**
  @addtogroup IP_PWM PWM Control Register
  @{ */

/**
@addtogroup IP_PWM_PWM0CON0 PWM0CON0
Special Function Register @ref PWM0CON0 
Address: D1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |Reserved  |Reserved
|[4]     |CLRPWM    |Clear PWM Counter
|        |          |Setting this bit clears the value of PWM 16-bit counter for resetting
|        |          |to 0000H. After the counter value is cleared, CLRPWM will be
|        |          |automatically cleared via hardware. The meaning of writing and reading
|        |          |CLRPWM bit is different.
|        |          |Writing:
|        |          |0 = No effect.
|        |          |1 = Clearing PWM 16-bit counter.
|        |          |Reading:
|        |          |0 = PWM 16-bit counter is completely cleared.
|        |          |1 = PWM 16-bit counter is not yet cleared.
|[5]     |PWMF      |PWM Flag
|        |          |This flag is set according to definitions of INTSEL[2:0] and
|        |          |INTTYP[1:0] in PWMnINTC. This bit is cleared by software.
|[6]     |LOAD      |PWM New Period and Duty Load
|        |          |This bit is used to load period and duty Register Description in their
|        |          |buffer if new period or duty value needs to be updated. The loading
|        |          |will act while a PWM period is completed. The new period and duty
|        |          |affected on the next PWM cycle. After the loading is complete, LOAD
|        |          |will be automatically cleared via hardware. The meaning of writing and
|        |          |reading LOAD bit is different.
|        |          |Writing:
|        |          |0 = No effect.
|        |          |1 = Load new period and duty in their buffers while a PWM period is
|        |          |completed.
|        |          |Reading:
|        |          |0 = A loading of new period and duty is finished.
|        |          |1 = A loading of new period and duty is not yet finished.
|[7]     |PWM0RUN   |PWM0 Run Enable
|        |          |0 = PWM0 stays in idle.
|        |          |1 = PWM0 starts running.
*/

/**
@addtogroup IP_PWM_PWM0CON1 PWM0CON1
Special Function Register @ref PWM0CON1 
Address: DFH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |PWMDIV[2:0]|PWM Clock Divider
|        |          |This field decides the pre-scale of PWM clock source.
|        |          |000 = 1/1.
|        |          |001 = 1/2
|        |          |010 = 1/4.
|        |          |011 = 1/8.
|        |          |100 = 1/16.
|        |          |101 = 1/32.
|        |          |110 = 1/64.
|        |          |111 = 1/128.
|[3]     |FBINEN    |FB Pin Input Enable
|        |          |0 = PWM0 output Fault Braked by FB pin input Disabled.
|        |          |1 = PWM0 output Fault Braked by FB pin input Enabled. Once an edge,
|        |          |which matches FBINLS (PWM0FBD.6) selection, occurs on FB pin,
|        |          |PWM0CH0~5 output Fault Brake data in PWMnFBD register. PWMRUN
|        |          |(PWM0CON0.7) will also be automatically cleared by hardware. The PWM
|        |          |output resumes when PWM0RUN is set again.
|        |          |Note: This bit is only vaild in PWM0
|[4]     |PWMTYP    |PWM Type Select
|        |          |0 = Edge-aligned PWM.
|        |          |1 = Center-aligned PWM.
|[5]     |GP        |Group Mode Enable
|        |          |This bit enables the group mode. If enabled, the duty of first three
|        |          |pairs of PWM are decided by PWM01H and PWM01L rather than their
|        |          |original duty Register Description.
|        |          |0 = Group mode Disabled.
|        |          |1 = Group mode Enabled.
|[7:6]   |PWMMOD[1:0]|PWM Mode Select
|        |          |00 = Independent mode.
|        |          |01 = Complementary mode.
|        |          |10 = Synchronized mode.
|        |          |11 = Reserved.
*/

/**
@addtogroup IP_PWM_PWM0PL PWM0PL
Special Function Register @ref PWM0PL 
Address: D9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[1]     |PWM1P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[2]     |PWM2P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[3]     |PWM3P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[4]     |PWM4P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[5]     |PWM5P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[6]     |PWM6P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
|[7]     |PWM7P     |PWMn Period Low Byte
|        |          |This byte with PWMnPH controls the period of the PWM generator signal.
*/

/**
@addtogroup IP_PWM_PWM0PH PWM0PH
Special Function Register @ref PWM0PH 
Address: D1H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8P     |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[1]     |PWM9P     |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[2]     |PWM10P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[3]     |PWM11P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[4]     |PWM12P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[5]     |PWM13P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[6]     |PWM14P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
|[7]     |PWM15P    |PWM Period High Byte
|        |          |This byte with PWMnPL controls the period of the PWM generator signal.
*/

/**
@addtogroup IP_PWM_PWM0C0H PWM0C0H
Special Function Register @ref PWM0C0H 
Address: D2H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C1H PWM0C1H
Special Function Register @ref PWM0C1H 
Address: D3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C2H PWM0C2H
Special Function Register @ref PWM0C2H 
Address: D4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C3H PWM0C3H
Special Function Register @ref PWM0C3H 
Address: D5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C4H PWM0C4H
Special Function Register @ref PWM0C4H 
Address: C4H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C5H PWM0C5H
Special Function Register @ref PWM0C5H 
Address: C5H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM8Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM9Cx    |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM10Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM11Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM12Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM13Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM14Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM15Cx   |PWMnCx Duty High Byte
|        |          |This byte with PWMnCxL controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C0L PWM0C0L
Special Function Register @ref PWM0C0L 
Address: DAH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C1L PWM0C1L
Special Function Register @ref PWM0C1L 
Address: DBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C2L PWM0C2L
Special Function Register @ref PWM0C2L 
Address: DCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C3L PWM0C3L
Special Function Register @ref PWM0C3L 
Address: DDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C4L PWM0C4L
Special Function Register @ref PWM0C4L 
Address: CCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0C5L PWM0C5L
Special Function Register @ref PWM0C5L 
Address: CDH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PWM0Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[1]     |PWM1Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[2]     |PWM2Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[3]     |PWM3Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[4]     |PWM4Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[5]     |PWM5Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[6]     |PWM6Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
|[7]     |PWM7Cx    |PWMnCx Duty Low Byte
|        |          |This byte with PWMnCxH controls the duty of the output signal PGx from
|        |          |PWM generator.
*/

/**
@addtogroup IP_PWM_PWM0DTEN PWM0DTEN
Special Function Register @ref PWM0DTEN 
Address: F9H, SFR Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PDT01EN   |PWM0/1 Pair Dead-Time Insertion Enable
|        |          |This bit is valid only when PWM0/1 is under complementary mode.
|        |          |0 = No delay on GP0/GP1 pair signals.
|        |          |1 = Insert dead-time delay on the rising edge of GP0/GP1 pair signals.
|[1]     |PDT23EN   |PWM2/3 Pair Dead-Time Insertion Enable
|        |          |This bit is valid only when PWM2/3 is under complementary mode.
|        |          |0 = No delay on GP2/GP3 pair signals.
|        |          |1 = Insert dead-time delay on the rising edge of GP2/GP3 pair signals.
|[2]     |PDT45EN   |PWM4/5 Pair Dead-Time Insertion Enable
|        |          |This bit is valid only when PWM4/5 is under complementary mode.
|        |          |0 = No delay on GP4/GP5 pair signals.
|        |          |1 = Insert dead-time delay on the rising edge of GP4/GP5 pair signals.
|[3]     |0         |Reserved
|[4]     |PWMnDTCNT_8|PWM Dead-Time Counter Bit 8
|        |          |See PWMnDTCNT register.
|[7:5]   |0         |Reserved
*/

/**
@addtogroup IP_PWM_PWM0DTCNT PWM0DTCNT
Special Function Register @ref PWM0DTCNT 
Address: FAH, SFR Page 1, TA protected
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |PWM0DTCNT[7:0]|PWM Dead-Time Counter Low Byte
|        |          |This 8-bit field combined with PWMnDTEN .4 forms a 9-bit PWM dead-time
|        |          |counter PWM0DTCNT. This counter is valid only when PWM is under
|        |          |complementary mode and the correspond PWMnDTEN bit for PWM pair is
|        |          |set.
|        |          |PWM dead-time = .
|        |          |Note that user should not modify PWM0DTCNT during PWM run time.
*/

/**
@addtogroup IP_PWM_PWM0MEN PWM0MEN
Special Function Register @ref PWM0MEN 
Address: FBH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[5:0]   |PMENn     |PWMnCx Mask Enable
|        |          |0 = PWMnCx signal outputs from its PWM generator.
|        |          |1 = PWMnCx signal is masked by PMDx.
|        |          |Note: PMEN2~5 are only for PWM0.
*/

/**
@addtogroup IP_PWM_PWM0MD PWM0MD
Special Function Register @ref PWM0MD 
Address: FCH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PMD0      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[1]     |PMD1      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[2]     |PMD2      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[3]     |PMD3      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[4]     |PMD4      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[5]     |PMD5      |PWMnCx Mask Data
|        |          |The PWMnCx signal outputs mask data once its corresponding PMENx is
|        |          |set.
|        |          |0 = PWMnCx signal is masked by 0.
|        |          |1 = PWMnCx signal is masked by 1.
|        |          |Note: PMD2~5 are only for PWM0.
|[7:6]   |0         |Reserved
|        |          |The bits are always read as 0.
*/

/**
@addtogroup IP_PWM_PWM0FBD PWM0FBD
Special Function Register @ref PWM0FBD 
Address: D7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[5:0]   |FBDn      |PWMn Fault Brake Data
|        |          |0 = PWMn signal is overwritten by 0 once Fault Brake asserted.
|        |          |1 = PWMn signal is overwritten by 1 once Fault Brake asserted.
|[6]     |FBINLS    |PWM_BRAKE Pin Input Level Selection
|        |          |0 = Falling edge.
|        |          |1 = Rising edge.
|[7]     |FBF       |Fault Brake Flag
|        |          |This flag is set when FBINEN is set as 1 and FB pin detects an edge,
|        |          |which matches FBINLS (PWM0FBD.6) selection. This bit is cleared by
|        |          |software. After FBF is cleared, Fault Brake data output will not be
|        |          |released until PWM0RUN (PWM0CON0.7) is set.
*/

/**
@addtogroup IP_PWM_PWM0NP PWM0NP
Special Function Register @ref PWM0NP 
Address: D6H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |PNP0      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[1]     |PNP1      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[2]     |PNP2      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[3]     |PNP3      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[4]     |PNP4      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
|[5]     |PNP5      |PWMn Negative Polarity Output Enable
|        |          |0 = PWMn signal outputs directly on PWMn pin.
|        |          |1 = PWMn signal outputs inversely on PWMn pin.
*/

/**
@addtogroup IP_PWM_PWM0INTC PWM0INTC
Special Function Register @ref PWM0INTC 
Address: B7H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |INTSEL0   |PWM Interrupt Pair Select
|        |          |These bits select which PWM channel asserts PWM interrupt when PWM
|        |          |interrupt type is selected as falling or rising edge on PWM0/1/2/3/4/5
|        |          |pin..
|        |          |000 = PWMn_CH0.
|        |          |001 = PWMn_CH1.
|        |          |010 = PWMn_CH2.
|        |          |011 = PWMn_CH3.
|        |          |100 = PWMn_CH4.
|        |          |101 = PWMn_CH5.
|        |          |Others = PWMn_CH0.
|[1]     |INTSEL1   |PWM Interrupt Pair Select
|        |          |These bits select which PWM channel asserts PWM interrupt when PWM
|        |          |interrupt type is selected as falling or rising edge on PWM0/1/2/3/4/5
|        |          |pin..
|        |          |000 = PWMn_CH0.
|        |          |001 = PWMn_CH1.
|        |          |010 = PWMn_CH2.
|        |          |011 = PWMn_CH3.
|        |          |100 = PWMn_CH4.
|        |          |101 = PWMn_CH5.
|        |          |Others = PWMn_CH0.
|[2]     |INTSEL2   |PWM Interrupt Pair Select
|        |          |These bits select which PWM channel asserts PWM interrupt when PWM
|        |          |interrupt type is selected as falling or rising edge on PWM0/1/2/3/4/5
|        |          |pin..
|        |          |000 = PWMn_CH0.
|        |          |001 = PWMn_CH1.
|        |          |010 = PWMn_CH2.
|        |          |011 = PWMn_CH3.
|        |          |100 = PWMn_CH4.
|        |          |101 = PWMn_CH5.
|        |          |Others = PWMn_CH0.
|[3]     |Reserved  |Reserved
|[4]     |INTTYP0   |PWM Interrupt Type Select
|        |          |These bit select PWM interrupt type.
|        |          |00 = Falling edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |01 = Rising edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |10 = Central point of a PWM period.
|        |          |11 = End point of a PWM period.
|        |          |Note that the central point interrupt or the end point interrupt is
|        |          |only available while PWM operates in center-aligned type.
|[5]     |INTTYP1   |PWM Interrupt Type Select
|        |          |These bit select PWM interrupt type.
|        |          |00 = Falling edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |01 = Rising edge on PWMn_CH0/1/2/3/4/5 pin.
|        |          |10 = Central point of a PWM period.
|        |          |11 = End point of a PWM period.
|        |          |Note that the central point interrupt or the end point interrupt is
|        |          |only available while PWM operates in center-aligned type.
|[7:6]   |Reserved  |Reserved
*/

/**@} end of PWM group */

/**
  @addtogroup IP_UART01 UART01 Control Register
  @{ */

/**
@addtogroup IP_UART01_SCON SCON
Special Function Register @ref SCON 
Address: 98H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RI        |Receiving Interrupt Flag
|        |          |This flag is set via hardware when a data frame has been received by
|        |          |the serial port 0 after the 8th bit in Mode 0 or after sampling the
|        |          |stop bit in Mode 1, 2, or 3. SM2 bit as logic 1 has restriction for
|        |          |exception. When the serial port 0 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute to the serial port 0 interrupt service
|        |          |routine. This bit should be cleared manually via software.
|[1]     |TI        |Transmission Interrupt Flag
|        |          |This flag is set by hardware when a data frame has been transmitted by
|        |          |the serial port 0 after the 8th bit in Mode 0 or the last data bit in
|        |          |other modes. When the serial port 0 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute the serial port 0 interrupt service
|        |          |routine. This bit should be cleared manually via software.
|[2]     |RB8       |9th Received Bit
|        |          |The bit identifies the logic level of the 9th received bit in serial
|        |          |port 0 Mode 2 or 3. In Mode 1, RB8 is the logic level of the received
|        |          |stop bit. SM2 bit as logic 1 has restriction for exception. RB8 is not
|        |          |used in Mode 0.
|[3]     |TB8       |9th Transmitted Bit
|        |          |This bit defines the state of the 9th transmission bit in serial port
|        |          |0 Mode 2 or 3. It is not used in Mode 0 or 1.
|[4]     |REN       |Receiving Enable
|        |          |0 = Serial port 0 reception Disabled.
|        |          |1 = Serial port 0 reception Enabled in Mode 1,2, or 3. In Mode 0,
|        |          |reception is initiated by the condition REN = 1 and RI = 0.
|[5]     |SM2       |Multiprocessor Communication Mode Enable
|        |          |The function of this bit is dependent on the serial port 0 mode.
|        |          |Mode 0:
|        |          |This bit select the baud rate between FSYS/12 and FSYS/2.
|        |          |0 = The clock runs at FSYS/12 baud rate. It maintains standard
|        |          |8051compatibility.
|        |          |1 = The clock runs at FSYS/2 baud rate for faster serial
|        |          |communication.
|        |          |Mode 1:
|        |          |This bit checks valid stop bit.
|        |          |0 = Reception is always valid no matter the logic level of stop bit.
|        |          |1 = Reception is valid only when the received stop bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|        |          |Mode 2 or 3:
|        |          |For multiprocessor communication.
|        |          |0 = Reception is always valid no matter the logic level of the 9th
|        |          |bit.
|        |          |1 = Reception is valid only when the received 9th bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|[6]     |SM1       |Check with bit 7 description.
|[7]     |SM0_FE    |Serial Port Mode Select
|        |          |SMOD0 (PCON.6) = 0:
|        |          |See Table 6.91 Serial Port 0 Mode / baud rate
|        |          |Description for details.
|        |          |SMOD0 (PCON.6) = 1:
|        |          |SM0/FE bit is used as frame error (FE) status flag. It is cleared by
|        |          |software.
|        |          |0 = Frame error (FE) did not occur.
|        |          |1 = Frame error (FE) occurred and detected.
*/

/**
@addtogroup IP_UART01_S1CON S1CON
Special Function Register @ref S1CON 
Address: F8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RI_1      |Receiving Interrupt Flag
|        |          |This flag is set via hardware when a data frame has been received by
|        |          |the serial port 1 after the 8th bit in Mode 0 or after sampling the
|        |          |stop bit in Mode 1, 2, or 3. SM2_1 bit as logic 1 has restriction for
|        |          |exception. When the serial port 1 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute to the serial port 1 interrupt service
|        |          |routine. This bit must be cleared manually via software.
|[1]     |TI_1      |Transmission Interrupt Flag
|        |          |This flag is set by hardware when a data frame has been transmitted by
|        |          |the serial port 1 after the 8th bit in Mode 0 or the last data bit in
|        |          |other modes. When the serial port 1 interrupt is enabled, setting this
|        |          |bit causes the CPU to execute the serial port 1 interrupt service
|        |          |routine. This bit must be cleared manually via software.
|[2]     |RB8_1     |9th Received Bit
|        |          |The bit identifies the logic level of the 9th received bit in serial
|        |          |port 1 Mode 2 or 3. In Mode 1, RB8_1 is the logic level of the
|        |          |received stop bit. SM2_1 bit as logic 1 has restriction for exception.
|        |          |RB8_1 is not used in Mode 0.
|[3]     |TB8_1     |9th Transmitted Bit
|        |          |This bit defines the state of the 9th transmission bit in serial port
|        |          |1 Mode 2 or 3. It is not used in Mode 0 or 1.
|[4]     |REN_1     |Receiving Enable
|        |          |0 = Serial port 1 reception Disabled.
|        |          |1 = Serial port 1 reception Enabled in Mode 1,2, or 3. In Mode 0,
|        |          |reception is initiated by the condition REN_1 = 1 and RI_1 = 0.
|[5]     |SM2_1     |Multiprocessor Communication Mode Enable
|        |          |The function of this bit is dependent on the serial port 1 mode.
|        |          |Mode 0:
|        |          |No effect.
|        |          |Mode 1:
|        |          |This bit checks valid stop bit.
|        |          |0 = Reception is always valid no matter the logic level of stop bit.
|        |          |1 = Reception is valid only when the received stop bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|        |          |Mode 2 or 3:
|        |          |For multiprocessor communication.
|        |          |0 = Reception is always valid no matter the logic level of the 9th
|        |          |bit.
|        |          |1 = Reception is valid only when the received 9th bit is logic 1 and
|        |          |the received data matches Given or Broadcast address.
|[6]     |SM1_1     |Check with bit 7 description.
|[7]     |SM0_1_FE_1|Serial Port 1 Mode Select
|        |          |SMOD0_1 (T3CON.6) = 0:
|        |          |See Table 6.92 Serial Port 1 Mode / baud rate Description
|        |          |for details.
|        |          |SMOD0_1 (T3CON.6) = 1:
|        |          |SM0_1/FE_1 bit is used as frame error (FE) status flag. It is cleared
|        |          |by software.
|        |          |0 = Frame error (FE) did not occur.
|        |          |1 = Frame error (FE) occurred and detected.
*/

/**
@addtogroup IP_UART01_PCON PCON
Special Function Register @ref PCON 
Address: 87H, All SFR Pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |SMOD0     |Serial Port 0 Framing Error Flag Access Enable
|        |          |0 = SCON.7 accesses to SM0 bit.
|        |          |1 = SCON.7 accesses to FE bit.
|[7]     |SMOD      |Serial Port 0 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART0 is in
|        |          |Mode 2 or when Timer 1 overflow is used as the baud rate source of
|        |          |UART0 Mode 1 or 3. See Table 6.91 Serial Port 0 Mode / baud rate
|        |          |Description for details.
*/

/**
@addtogroup IP_UART01_T3CON T3CON
Special Function Register @ref T3CON 
Address: C4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[6]     |SMOD0_1   |Serial Port 1 Framing Error Access Enable
|        |          |0 = S1CON.7 accesses to SM0_1 bit.
|        |          |1 = S1CON.7 accesses to FE_1 bit.
|[7]     |SMOD_1    |Serial Port 1 Double Baud Rate Enable
|        |          |Setting this bit doubles the serial port baud rate when UART1 is in
|        |          |Mode 2. See Table 6.92 Serial Port 1 Mode / baud rate Description
|        |          |for details.
*/

/**
@addtogroup IP_UART01_SBUF SBUF
Special Function Register @ref SBUF 
Address: 99H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SBUF[7:0] |Serial Port 0 Data Buffer
|        |          |This byte actually consists two separate registers. One is the
|        |          |receiving resister, and the other is the transmitting buffer. When
|        |          |data is moved to SBUF, it goes to the transmitting buffer and is
|        |          |shifted for serial transmission. When data is moved from SBUF, it
|        |          |comes from the receiving register.
|        |          |The transmission is initiated through giving data to SBUF.
*/

/**
@addtogroup IP_UART01_SBUF1 SBUF1
Special Function Register @ref SBUF1 
Address: 9AH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SBUF1[7:0]|Serial Port 1 Data Buffer
|        |          |This byte actually consists two separate registers. One is the
|        |          |receiving resister, and the other is the transmitting buffer. When
|        |          |data is moved to SBUF1, it goes to the transmitting buffer and is
|        |          |shifted for serial transmission. When data is moved from SBUF1, it
|        |          |comes from the receiving register.
|        |          |The transmission is initiated through giving data to SBUF1.
*/

/**
@addtogroup IP_UART01_IE IE
Special Function Register @ref IE 
Address: A8H, All SFR Pages, Bit addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[4]     |ES        |Enable Serial Port 0 Interrupt
|        |          |0 = Serial port 0 interrupt Disabled.
|        |          |1 = Interrupt generated by TI (SCON.1) or RI (SCON.0) Enabled.
*/

/**
@addtogroup IP_UART01_EIE1 EIE1
Special Function Register @ref EIE1 
Address: 9CH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ES1       |Enable Serial Port 1 Interrupt
|        |          |0 = Serial port 1 interrupt Disabled.
|        |          |1 = Serial port 1Interrupt Enable. When interrupt generated TI_1
|        |          |(S1CON.1) or RI_1 (S1CON.0) set 1.
*/

/**
@addtogroup IP_UART01_SADDR0 SADDR0
Special Function Register @ref SADDR0 
Address: A9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADDR0[7:0]|Slave 0 Address
|        |          |This byte specifies the microcontroller’s own slave address for UATR0
|        |          |multi-processor communication.
*/

/**
@addtogroup IP_UART01_SADEN0 SADEN0
Special Function Register @ref SADEN0 
Address: B9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADEN0[7:0]|Slave 0 Address Mask
|        |          |This byte is a mask byte of UART0 that contains don’t-care bits
|        |          |(defined by zeros) to form the device’s Given address. The don’t-care
|        |          |bits provide the flexibility to address one or more slaves at a time.
*/

/**
@addtogroup IP_UART01_SADDR1 SADDR1
Special Function Register @ref SADDR1 
Address: BBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADDR1[7:0]|Slave 1 Address
|        |          |This byte specifies the microcontroller’s own slave address for UART1
|        |          |multi-processor communication.
*/

/**
@addtogroup IP_UART01_SADEN1 SADEN1
Special Function Register @ref SADEN1 
Address: BAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SADEN1[7:0]|Slave 1 Address Mask
|        |          |This byte is a mask byte of UART1 that contains don’t-care bits
|        |          |(defined by zeros) to form the device’s Given address. The don’t-care
|        |          |bits provide the flexibility to address one or more slaves at a time.
*/

/**
@addtogroup IP_UART01_AUXR1 AUXR1
Special Function Register @ref AUXR1 
Address: C9H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |UART0PX   |Serial Port 0 RX/TX Pin Exchange
|        |          |0 = Assign UART0 RXD to multiple I/O pin RXD
|        |          |UART0 TXD to multiple I/O pin TXD
|        |          |1 = Assign UART0 RXD to multiple I/O pin TXD
|        |          |UART0 TXD to multiple I/O pin RXD
|        |          |Note:
|        |          |that Pin direction is controlled by I/O type of relative pin.
|        |          |RXD/TXD will exchange immediately once setting or clearing this bit.
|        |          |User should take care of not exchanging pins during transmission or
|        |          |receiving. Or it may cause unpredictable situation and no warning
|        |          |alarms.
|[1]     |UART1PX   |Serial Port 1 RX/TX Pin Exchange
|        |          |0 = Assign UART1 RXD to multiple I/O pin RXD
|        |          |UART1 TXD to multiple I/O pin TXD
|        |          |1 = Assign UART1 RXD to multiple I/O pin TXD
|        |          |UART1 TXD to multiple I/O pin RXD
|        |          |Note:
|        |          |that Pin direction is controlled by I/O type of relative pin.
|        |          |RXD/TXD will exchange immediately once setting or clearing this bit.
|        |          |User should take care of not exchanging pins during transmission or
|        |          |receiving. Or it may cause unpredictable situation and no warning
|        |          |alarms.
|[2]     |UART2PX   |Serial Port 2 RX (SMC0 DATA) /TX (SMC0 CLK) Pin Exchange
|        |          |0 = Assign UART2 RXD (SMC0 DATA) to multiple I/O pin RXD
|        |          |UART2 TXD (SMC CLK) to multiple I/O pin TXD
|        |          |1 = Assign UART2 RXD (SMC0 DATA) to multiple I/O pin TXD
|        |          |UART2 TXD (SMC CLK) to multiple I/O pin RXD
|        |          |Note : that Pin direction is controlled by I/O type of relative pin.
|        |          |RXD/TXD will exchange immediately once setting or clearing this bit.
|        |          |User should take care of not exchanging pins during transmission or
|        |          |receiving. Or it may cause unpredictable situation and no warning
|        |          |alarms.
|[7:3]   |Reserved  |Reserved
*/

/**
@addtogroup IP_UART01_AUXR3 AUXR3
Special Function Register @ref AUXR3 
Address: CFH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |UART0DG   |UART0 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[1]     |UART1DG   |UART1 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[2]     |UART2DG   |UART2 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[3]     |UART3DG   |UART3 RX Deglitch Control
|        |          |1: Deglitch is Enabled
|        |          |0: Deglitch is Disabled
|[7:4]   |Reserved  |Reserved
*/

/**@} end of UART01 group */

/**
  @addtogroup IP_SC SC Control Register
  @{ */

/**
@addtogroup IP_SC_SC0CR0 SC0CR0
Special Function Register @ref SC0CR0 
Address: D6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |SCEN      |SC Engine Enable Bit
|        |          |Set this bit to 1 to enable SC operation. If this bit is cleared, SC
|        |          |will force all transition to IDLE state
|        |          |Note: SCEN must be set to 1 before filling in other registers, or
|        |          |smart card will not work properly.
|[1]     |RXOFF     |RX Transition Disable Bit
|        |          |0 = The receiver Enabled.
|        |          |1 = The receiver Disabled.
|        |          |Note: If AUTOCEN (SCnCR0[3])is enabled, these fields must be ignored.
|[2]     |TXOFF     |TX Transition Disable Bit
|        |          |0 = The transceiver Enabled.
|        |          |1 = The transceiver Disabled.
|[3]     |AUTOCEN   |Auto Convention Enable Bit
|        |          |0 = Auto-convention Disabled.
|        |          |1 = Auto-convention Enabled. When hardware receives TS in answer to
|        |          |reset state and the TS is direct convention, CONSEL(SCnCR0[4]) will be
|        |          |set to 0 automatically, otherwise if the TS is inverse convention, and
|        |          |CONSEL (SCnCR0[4]) will be set to 1.
|        |          |Note: If software enables auto convention function, the setting step
|        |          |must be done before Answer to Reset state and the first data must be
|        |          |0x3B or 0x3F. After hardware received first data and stored it at
|        |          |buffer, hardware will decided the convention and change the CONSEL
|        |          |(SCnCR0[4]) bits automatically.
|[4]     |CONSEL    |Convention Selection
|        |          |0 = Direct convention.
|        |          |1 = Inverse convention.
|        |          |Note 1: This bit is auto clear to 0, if AUTOCEN(SCnCR0[3]) is writing
|        |          |1
|        |          |Note 2: If AUTOCEN(SCnCR0[3]) is enabled, hardware will decide the
|        |          |convention and change the CONSEL (SCnCR0[4]) bits automatically after
|        |          |SCEN (SCnCR0[0]) =1.
|[5]     |RXBGTEN   |Receiver Block Guard Time Function Enable Bit
|        |          |0 = Receiver block guard time function Disabled.
|        |          |1 = Receiver block guard time function Enabled.
|[6]     |T         |T Mode
|        |          |0 = T0 (ISO7816-3 T = 0 mode).
|        |          |1 = T1 (ISO7816-3 T = 1 mode).
|        |          |The T mode controls the BGT (Block Guard Time). Block guard time means
|        |          |the minimum bit length between the leading edges of two consecutive
|        |          |characters between different transfer directions. This field indicates
|        |          |the counter for the bit length of block guard time. According to
|        |          |ISO7816-3, in T = 0 mode, the software must clear T bit to 0 for real
|        |          |block guard time = 16.5. In T = 1 mode, the software must set T bit to
|        |          |1 for real block guard time = 22.5.
|        |          |Note: In T = 0 mode, the receiver will generate the parity flag on
|        |          |PEF(SC0TSR[4]), if parity error is detected and also drive the parity
|        |          |error signal to transceiver. In T = 1 mode, the receiver will generate
|        |          |the parity flag on PEF(SC0TSR[4]), if parity error detected, but
|        |          |doesn’t drive the parity error signal to transceiver.
|        |          |Note: The description please see section 6.10.6.2Error Signal and
|        |          |Character Repetition
|[7]     |NSB       |Stop Bit Length
|        |          |This field indicates the length of stop bit.
|        |          |0 = The stop bit length is 2 ETU.
|        |          |1= The stop bit length is 1 ETU.
|        |          |Note: The default stop bit length is 2. SC and UART adopt NSB to
|        |          |program the stop bit length.
*/

/**
@addtogroup IP_SC_SC0CR1 SC0CR1
Special Function Register @ref SC0CR1 
Address: D7H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |UARTEN    |UART Mode Enable Bit
|        |          |0 = Smart Card mode.
|        |          |1 = UART mode.
|        |          |Note 1:When operating in UART mode, user must set CONSEL (SCnCR0[4]) =
|        |          |0 and AUTOCEN(SCnCR0[3]) = 0.
|        |          |Note 2:When operating in Smart Card mode, user must set UARTEN(SCnCR1
|        |          |[0]) = 0.
|        |          |Note 3:When UART is enabled, hardware will generate a reset to reset
|        |          |FIFO and internal state machine.
|[1]     |CLKKEEP   |SC Clock Enable Bit
|        |          |0 = SC clock generation Disabled.
|        |          |1 = SC clock always keeps free running.
|[2]     |RXDMAEN   |SC/UART RX DMA Enable
|        |          |This bit enables the SC/UART RX operating by through PDMA transfer, RX
|        |          |data are saved in XRAM after SC/UART RX operation.
|        |          |0 = SC/UART RX DMA Disabled
|        |          |1 = SC/UART RX DMA Enabled
|[3]     |TXDMAEN   |SC/UART TX DMA Enable
|        |          |This bit enables the SC/UART TX operating by through PDMA transfer, TX
|        |          |data needs to be ready in XRAM before SC/UART TX starting.
|        |          |0 = SPI TX DMA Disabled
|        |          |1 = SPI TX DMA Enabled
|[5:4]   |WLS[1:0]  |Word Length Selection
|        |          |00 = Word length is 8 bits.
|        |          |01 = Word length is 7 bits.
|        |          |10 = Word length is 6 bits.
|        |          |11 = Word length is 5 bits.
|        |          |Note: In smart card mode, this WLS must be ‘00’
|[6]     |PBOFF     |Parity Bit Disable Control
|        |          |0 = Parity bit is generated or checked between the last data word bit
|        |          |and stop bit of the serial data.
|        |          |1 = Parity bit is not generated (transmitting data) or checked
|        |          |(receiving data) during transfer.
|        |          |Note: In smart card mode, this field must be ‘0’ (default setting is
|        |          |with parity bit)
|[7]     |OPE       |Odd Parity Enable Bit
|        |          |0 = Even number of logic 1’s are transmitted or check the data word
|        |          |and parity bits in receiving mode.
|        |          |1 = Odd number of logic 1’s are transmitted or check the data word and
|        |          |parity bits in receiving mode.
|        |          |Note: This bit has effect only when PBOFF bit is ‘0’.
*/

/**
@addtogroup IP_SC_SC0DR SC0DR
Special Function Register @ref SC0DR 
Address: D9H, Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SCDR[7:0] |SC / UART Buffer Data
|        |          |This byte is used for transmitting or receiving data on SC / UART bus.
|        |          |A write of this byte is a write to the shift register. A read of this
|        |          |byte is actually a read of the read data buffer.
|        |          |Note: If SCEN(SCnCR0[0]) is not enabled, SCnDR cannot be programmed.
*/

/**
@addtogroup IP_SC_SC0EGT SC0EGT
Special Function Register @ref SC0EGT 
Address: DAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SCEGT[7:0]|SC Extra Guard Time
|        |          |This field indicates the extra guard timer value.
|        |          |Note:
|        |          |The counter is ETU base .
*/

/**
@addtogroup IP_SC_SC0ETURD0 SC0ETURD0
Special Function Register @ref SC0ETURD0 
Address: DBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |ETURDIV[7:0]|LSB Bits of ETU Rate Divider
|        |          |The field indicates the LSB of clock rate divider.
|        |          |The real ETU is ETURDIV[11:0] + 1.
|        |          |Note 1:
|        |          |ETURDIV[11:0] must be greater than 0x004.
|        |          |Note 2:
|        |          |SCnETURD0 has to program first, then SCnETUDR2.
*/

/**
@addtogroup IP_SC_SC0ETURD1 SC0ETURD1
Special Function Register @ref SC0ETURD1 
Address: DCH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |ETURDIV[11:8]|MSB Bits of ETU Rate Divider
|        |          |The field indicates the MSB of clock rate divider.
|        |          |The real ETU is ETURDIV[11:0] + 1.
|        |          |Note 1:
|        |          |ETURDIV[11:0] must be greater than 0x004.
|        |          |Note 2:
|        |          |SCnETURD0 has to program first, then SCnETUDR1 .
|[6:4]   |SCDIV[2:0]|SC Clock Divider
|        |          |000 = FSC is FSYS/1.
|        |          |001 = FSC is FSYS/2.
|        |          |010 = FSC is FSYS/4.
|        |          |011 = FSC is FSYS/8. (By default.)
|        |          |100 = FSC is FSYS/16.
|        |          |101 = FSC is FSYS/16.
|        |          |110 = FSC is FSYS/16.
|        |          |111 = FSC is FSYS/16.
|        |          |Note: that the FSC clock should be 1Mhz ~ 5Mhz for ISO/IEC 7816-3
|        |          |standard
|[7]     |Reserved  |Reserved
*/

/**
@addtogroup IP_SC_SC0IE SC0IE
Special Function Register @ref SC0IE 
Address: DDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIEN    |Receive Data Reach Interrupt Enable Bit
|        |          |This field is used to enable received data interrupt.
|        |          |0 = Receive data interrupt Disabled.
|        |          |1 = Receive data interrupt Enabled.
|[1]     |TBEIEN    |Transmit Buffer Empty Interrupt Enable Bit
|        |          |This field is used to enable transmit buffer empty interrupt.
|        |          |0 = Transmit buffer empty interrupt Disabled.
|        |          |1 = Transmit buffer empty interrupt Enabled.
|[2]     |TERRIEN   |Transfer Error Interrupt Enable Bit
|        |          |This field is used to enable transfer error interrupt. The transfer
|        |          |error states is at SC0TSR register which includes receiver break error
|        |          |BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]), receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |0 = Transfer error interrupt Disabled.
|        |          |1 = Transfer error interrupt Enabled.
|[3]     |BGTIEN    |Block Guard Time Interrupt Enable Bit
|        |          |This field is used to enable block guard time interrupt.
|        |          |0 = Block guard time interrupt Disabled.
|        |          |1 = Block guard time interrupt Enabled.
|[4]     |ACERRIEN  |Auto Convention Error Interrupt Enable Bit
|        |          |This field is used to enable auto-convention error interrupt.
|        |          |0 = Auto-convention error interrupt Disabled.
|        |          |1 = Auto-convention error interrupt Enabled.
|[7:5]   |Reserved  |Reserved
*/

/**
@addtogroup IP_SC_SC0IS SC0IS
Special Function Register @ref SC0IS 
Address: DEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RDAIF     |Receive Data Reach Interrupt Status Flag (Read Only)
|        |          |This field is used for received data interrupt status flag.
|        |          |Note: This field is the status flag of received data. If software
|        |          |reads data from SC_DAT pin, this bit will be cleared automatically.
|[1]     |TBEIF     |Transmit Buffer Empty Interrupt Status Flag (Read Only)
|        |          |This field is used for transmit buffer empty interrupt status flag.
|        |          |Note: This field is the status flag of transmit buffer empty state. If
|        |          |software wants to clear this bit, software must write data to
|        |          |DAT(SCnDR[7:0]) buffer and then this bit will be cleared
|        |          |automatically.
|[2]     |TERRIF    |Transfer Error Interrupt Status Flag (Read Only)
|        |          |This field is used for transfer error interrupt status flag. The
|        |          |transfer error states is at SC0TSR register which includes receiver
|        |          |break error BEF(SC0TSR[6]), frame error FEF(SC0TSR[5]), parity error
|        |          |PEF(SC0TSR[4]) and receiver buffer overflow error RXOV(SC0TSR[0]) and
|        |          |transmit buffer overflow error TXOV(SC0TSR[2]).
|        |          |Note: This field is the status flag of BEF(SC0TSR[6]), FEF(SC0TSR[5]),
|        |          |PEF(SC0TSR[4]), RXOV(SC0TSR[0]) and TXOV(SC0TSR[2]). So, if software
|        |          |wants to clear this bit, software must write 0 to each field.
|[3]     |BGTIF     |Block Guard Time Interrupt Status Flag (Read Only)
|        |          |This field is used for block guard time interrupt status flag.
|        |          |Note 1: This bit is valid when RXBGTEN (SCnCR0[5]) is enabled.
|        |          |Note 2: This bit is read only, but it can be cleared by writing 0 to
|        |          |it.
|[4]     |ACERRIF   |Auto Convention Error Interrupt Status Flag (Read Only)
|        |          |This field indicates auto convention sequence error. If the received
|        |          |TS at ATR state is neither 0x3B nor 0x3F, this bit will be set.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[5]     |Tx_Er     |TX transmit error flag
|[6]     |SIF1      |software interrupt for test
|[7]     |loop_test |loop test interrupt flag for software test
*/

/**
@addtogroup IP_SC_SC0TSR SC0TSR
Special Function Register @ref SC0TSR 
Address: DFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |RXOV      |RX Overflow Error Status Flag (Read Only)
|        |          |This bit is set when RX buffer overflow.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[1]     |RXEMPTY   |Receiver Buffer Empty Status Flag(Read Only)
|        |          |This bit indicates RX buffer empty or not.
|        |          |Note: When Rx buffer has been read by CPU, hardware sets this bit
|        |          |high. It will be cleared when SC receives any new data.
|[2]     |TXOV      |TX Overflow Error Interrupt Status Flag (Read Only)
|        |          |If TX buffer is full, an additional write to DAT(SCnDR[7:0]) will
|        |          |cause this bit be set to 1 by hardware.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[3]     |TXEMPTY   |Transmit Buffer Empty Status Flag (Read Only)
|        |          |This bit indicates TX buffer empty or not.
|        |          |Note: When TX buffer has been transferred to Transmitter Shift
|        |          |Register, hardware sets this bit high. It will be cleared when writing
|        |          |data into DAT(SCnDR[7:0]) (TX buffer not empty).
|[4]     |PEF       |Receiver Parity Error Status Flag (Read Only)
|        |          |This bit is set to logic 1 whenever the received character does not
|        |          |have a valid
|        |          |parity bit.
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[5]     |FEF       |Receiver Frame Error Status Flag (Read Only)
|        |          |This bit is set to logic 1 whenever the received character does not
|        |          |have a valid stop bit (that is, the stop bit following the last data
|        |          |bit or parity bit is detected as logic 0).
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[6]     |BEF       |Receiver Break Error Status Flag (Read Only)
|        |          |This bit is set to logic 1 whenever the received data input (RX) held
|        |          |in the spacing state (logic 0) is longer than a full word transmission
|        |          |time (that is, the total time of start bit + data bits + parity + stop
|        |          |bits). .
|        |          |Note: This bit is read only, but it can be cleared by writing 0 to it.
|[7]     |ACT       |Transmit /Receive in Active Status Flag (Read Only)
|        |          |0 = This bit is cleared automatically when TX/RX transfer is finished
|        |          |1 = This bit is set by hardware when TX/RX transfer is in active.
*/

/**@} end of SC group */

/**
  @addtogroup IP_SPI SPI Control Register
  @{ */

/**
@addtogroup IP_SPI_SPI0CR0 SPI0CR0
Special Function Register @ref SPI0CR0 
Address: F3H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |SPR[1:0]  |SPI Clock Rate Select
|        |          |These four bits select four grades of SPI clock divider. The clock
|        |          |rates below are illustrated under FSYS condition. See Table 6.112 SPI
|        |          |Master Clock Rate Define Table
|        |          |SPR[3:0] are valid only under Master mode (MSTR = 1). If under Slave
|        |          |mode, the clock will automatically synchronize with the external clock
|        |          |on SPICLK pin from Master device up to FSYS/4 communication speed.
|[2]     |CPHA      |SPI Clock Phase Select
|        |          |CPHA bit determines the data sampling edge of the SPI clock. See
|        |          |Figure 6.114 SPI Clock Formats
|        |          |0 = The data is sampled on the first edge of the SPI clock.
|        |          |1 = The data is sampled on the second edge of the SPI clock.
|[3]     |CPOL      |SPI Clock Polarity Select
|        |          |CPOL bit determines the idle state level of the SPI clock. See Figure
|        |          |6.114 SPI Clock Formats
|        |          |0 = The SPI clock is low in idle state.
|        |          |1 = The SPI clock is high in idle state.
|[4]     |MSTR      |Master Mode Enable
|        |          |This bit switches the SPI operating between Master and Slave modes.
|        |          |0 = The SPI is configured as Slave mode.
|        |          |1 = The SPI is configured as Master mode.
|[5]     |LSBFE     |LSB First Enable
|        |          |0 = The SPI data is transferred MSB first.
|        |          |1 = The SPI data is transferred LSB first.
|[6]     |SPIEN     |SPI Enable
|        |          |0 = SPI function Disabled.
|        |          |1 = SPI function Enabled.
|[7]     |SSOE      |Slave Select Output Enable
|        |          |This bit is used in combination with the DISMODF (SPInSR.3) bit to
|        |          |determine the feature of pin as shown inTable 6.114 Slave Select Pin
|        |          |Configurations. This bit takes effect only under MSTR = 1 and DISMODF
|        |          |= 1 condition.
|        |          |0 = functions as a general purpose I/O pin.
|        |          |1 = automatically goes low for each transmission when selecting
|        |          |external Slave device and goes high during each idle state to de-
|        |          |select the Slave device.
*/

/**
@addtogroup IP_SPI_SPI0CR1 SPI0CR1
Special Function Register @ref SPI0CR1 
Address: F3H, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |SPIS0     |SPI Interval Time Selection Between Adjacent Bytes
|        |          |SPIS[1:0] and CPHA select eight grades of SPI interval time selection
|        |          |between adjacent bytes. As see Table 6.113 SPI Clock Suspend Interval
|        |          |Select
|        |          |SPIS[1:0] are valid only under Master mode (MSTR = 1).
|[1]     |SPIS1     |SPI Interval Time Selection Between Adjacent Bytes
|        |          |SPIS[1:0] and CPHA select eight grades of SPI interval time selection
|        |          |between adjacent bytes. As see Table 6.113 SPI Clock Suspend Interval
|        |          |Select
|        |          |SPIS[1:0] are valid only under Master mode (MSTR = 1).
|[2]     |RXDMAEN   |SPI RX DMA Enable
|        |          |This bit enables the SPI RX operating by through PDMA transfer, RX
|        |          |data are saved in XRAM after SPI RX operation.
|        |          |0 = SPI RX DMA Disabled
|        |          |1 = SPI RX DMA Enabled
|[3]     |TXDMAEN   |SPI TX DMA Enable
|        |          |This bit enables the SPI TX operating by through PDMA transfer, TX
|        |          |data needs to be ready in XRAM before SPI TX starting.
|        |          |0 = SPI TX DMA Disabled
|        |          |1 = SPI TX DMA Enabled
|[4]     |SPR2      |SPI Clock Rate Select
|        |          |These two bits select grades of SPI clock divider. The clock rates
|        |          |below are illustrated under FSYS condition find in Table 6.112 SPI
|        |          |Master Clock Rate Define Table
|        |          |SPR[3:0] are valid only under Master mode (MSTR = 1). If under Slave
|        |          |mode, the clock will automatically synchronize with the external clock
|        |          |on SPICLK pin from Master device up to FSYS/4 communication speed.
|[5]     |SPR3      |SPI Clock Rate Select
|        |          |These two bits select grades of SPI clock divider. The clock rates
|        |          |below are illustrated under FSYS condition find in Table 6.112 SPI
|        |          |Master Clock Rate Define Table
|        |          |SPR[3:0] are valid only under Master mode (MSTR = 1). If under Slave
|        |          |mode, the clock will automatically synchronize with the external clock
|        |          |on SPICLK pin from Master device up to FSYS/4 communication speed.
|[6]     |SPSYNC    |SPI1 Master Clock Sync with SPI0 Master Clock. This bit is only valid in SPI0CR0
|[7]     |Looptest_TAprotect_|internal MISO connect to MOSI
*/

/**
@addtogroup IP_SPI_SPI0SR SPI0SR
Special Function Register @ref SPI0SR 
Address: F4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |TXBFF     |SPI TX Buffer Full Flag
|        |          |0 = SPI TX buffer is empty
|        |          |1 = SPI TX buffer is full
|[2]     |DISSPIF   |Disable SPI Complete Interrupt
|        |          |This bit is used to disable SPI complete interrupt while an SPI data
|        |          |transfer is complete or an receiving data has been moved into the SPI
|        |          |read buffer. Especially in SPI PDMA operation.
|        |          |0 = SPI Complete Interrupt Enabled while ESPI and EA are enabled,
|        |          |1 = SPI Complete Interrupt Disabled
|[3]     |DISMODF   |Disable Mode Fault Error Detection
|        |          |This bit is used in combination with the SSOE (SPInCR.7) bit to
|        |          |determine the feature of pin as shown in Table 6.114 Slave Select Pin
|        |          |Configurations. DISMODF is valid only in Master mode (MSTR = 1).
|        |          |0 = Mode Fault detection Enabled. serves as input pin for Mode Fault
|        |          |detection disregard of SSOE.
|        |          |1 = Mode Fault detection Disabled. The feature of follows SSOE bit.
|[4]     |MODF      |Mode Fault Error Flag
|        |          |This bit indicates a Mode Fault error event. If pin is configured as
|        |          |Mode Fault input (MSTR = 1 and DISMODF = 0) and is pulled low by
|        |          |external devices, a Mode Fault error occurs. Instantly MODF will be
|        |          |set as logic 1. If ESPI and EA are enabled, an SPI interrupt will be
|        |          |required. This bit should be cleared via software.
|[5]     |SPIOVF    |SPI Overrun Error Flag
|        |          |This bit indicates an overrun event. Once an overrun event occurs,
|        |          |this bit will be set. If ESPI and EA are enabled, an SPI interrupt
|        |          |will be required. This bit should be cleared via software.
|[6]     |WCOL      |Write Collision Error Flag
|        |          |This bit indicates a write collision event. Once a write collision
|        |          |event occurs, this bit will be set. It should be cleared via software.
|[7]     |SPIF      |SPI Complete Flag
|        |          |This bit is set to logic 1 via hardware while an SPI data transfer is
|        |          |complete or an receiving data has been moved into the SPI read buffer.
|        |          |If ESPI and EA are enabled, an SPI interrupt will be required. This
|        |          |bit should be cleared via software. Attempting to write to SPInDR is
|        |          |inhibited if SPIF is set.
*/

/**
@addtogroup IP_SPI_SPI0DR SPI0DR
Special Function Register @ref SPI0DR 
Address: F5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SPIDR[7:0]|Serial Peripheral Data
|        |          |This byte is used for transmitting or receiving data on SPI bus. A
|        |          |write of this byte is a write to the shift register. A read of this
|        |          |byte is actually a read of the read data buffer. In Master mode, a
|        |          |write to this register initiates transmission and reception of a byte
|        |          |simultaneously.
*/

/**@} end of SPI group */

/**
  @addtogroup IP_I2C I2C Control Register
  @{ */

/**
@addtogroup IP_I2C_I2C0CON I2C0CON
Special Function Register @ref I2C0CON 
Address: C0H, All SFR Pages, Bit-addressable
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |Reserved  |Reserved
|[2]     |AA        |Acknowledge Assert Flag
|        |          |If the AA flag is set, an ACK (low level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave.
|        |          |If the AA flag is cleared, a NACK (high level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave. A device with
|        |          |its own AA flag cleared will ignore its own salve address and the
|        |          |General Call. Consequently, SI will note be asserted and no interrupt
|        |          |is requested.
|        |          |Note that if an addressed slave does not return an ACK under slave
|        |          |receiver mode or not receive an ACK under slave transmitter mode, the
|        |          |slave device will become a not addressed slave. It cannot receive any
|        |          |data until its AA flag is set and a master addresses it again.
|        |          |There is a special case of I2CnSTAT value C8H occurs under slave
|        |          |transmitter mode. Before the slave device transmit the last data byte
|        |          |to the master, AA flag can be cleared as 0. Then after the last data
|        |          |byte transmitted, the slave device will actively switch to not
|        |          |addressed slave mode of disconnecting with the master. The further
|        |          |reading by the master will be all FFH.
|[3]     |SI        |I2Cn Interrupt Flag
|        |          |SI flag is set by hardware when one of 26 possible I2C status (besides
|        |          |F8H status) is entered. After SI is set, the software should read
|        |          |I2CnSTAT register to determine which step has been passed and take
|        |          |actions for next step.
|        |          |SI is cleared by software. Before the SI is cleared, the low period of
|        |          |SCL line is stretched. The transaction is suspended. It is useful for
|        |          |the slave device to deal with previous data bytes until ready for
|        |          |receiving the next byte.
|        |          |The serial transaction is suspended until SI is cleared by software.
|        |          |After SI is cleared, I2C bus will continue to generate START or
|        |          |repeated START condition, STOP condition, 8-bit data, or so on
|        |          |depending on the software configuration of controlling byte or bits.
|        |          |Therefore, user should take care of it by preparing suitable setting
|        |          |of registers before SI is software cleared.
|[4]     |STO       |STOP Flag
|        |          |When STO is set if the I2C is in the master mode, a STOP condition is
|        |          |transmitted to the bus. STO is automatically cleared by hardware once
|        |          |the STOP condition has been detected on the bus.
|        |          |The STO flag setting is also used to recover the I2C device from the
|        |          |bus error state (I2CnSTAT as 00H). In this case, no STOP condition is
|        |          |transmitted to the I2C bus.
|        |          |If the STA and STO bits are both set and the device is original in the
|        |          |master mode, the I2C bus will generate a STOP condition and
|        |          |immediately follow a START condition. If the device is in slave mode,
|        |          |STA and STO simultaneous setting should be avoid from issuing illegal
|        |          |I2C frames.
|[5]     |STA       |START Flag
|        |          |When STA is set, the I2C generates a START condition if the bus is
|        |          |free. If the bus is busy, the I2C waits for a STOP condition and
|        |          |generates a START condition following.
|        |          |If STA is set while the I2C is already in the master mode and one or
|        |          |more bytes have been transmitted or received, the I2C generates a
|        |          |repeated START condition.
|        |          |Note that STA can be set anytime even in a slave mode, but STA is not
|        |          |hardware automatically cleared after START or repeated START condition
|        |          |has been detected. User should take care of it by clearing STA
|        |          |manually.
|[6]     |I2CEN     |I2Cn Bus Enable
|        |          |0 = I2C bus Disabled.
|        |          |1 = I2C bus Enabled.
|        |          |Before enabling the I2C, SCL and SDA port latches should be set to
|        |          |logic 1.
|[7]     |I         |I2Cn Hold Time Extend Enable
|        |          |0 = I2C DATA to SCL hold time extend disabled
|        |          |1 = I2C DATA to SCL hold time extend enabled, extend 8 system clock
*/

/**
@addtogroup IP_I2C_I2C1CON I2C1CON
Special Function Register @ref I2C1CON 
Address: E8H, All SFR pages
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1:0]   |Reserved  |Reserved
|[2]     |AA        |Acknowledge Assert Flag
|        |          |If the AA flag is set, an ACK (low level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave.
|        |          |If the AA flag is cleared, a NACK (high level on SDA) will be returned
|        |          |during the acknowledge clock pulse of the SCL line while the I2C
|        |          |device is a receiver or an own-address-matching slave. A device with
|        |          |its own AA flag cleared will ignore its own salve address and the
|        |          |General Call. Consequently, SI will note be asserted and no interrupt
|        |          |is requested.
|        |          |Note that if an addressed slave does not return an ACK under slave
|        |          |receiver mode or not receive an ACK under slave transmitter mode, the
|        |          |slave device will become a not addressed slave. It cannot receive any
|        |          |data until its AA flag is set and a master addresses it again.
|        |          |There is a special case of I2CnSTAT value C8H occurs under slave
|        |          |transmitter mode. Before the slave device transmit the last data byte
|        |          |to the master, AA flag can be cleared as 0. Then after the last data
|        |          |byte transmitted, the slave device will actively switch to not
|        |          |addressed slave mode of disconnecting with the master. The further
|        |          |reading by the master will be all FFH.
|[3]     |SI        |I2Cn Interrupt Flag
|        |          |SI flag is set by hardware when one of 26 possible I2C status (besides
|        |          |F8H status) is entered. After SI is set, the software should read
|        |          |I2CnSTAT register to determine which step has been passed and take
|        |          |actions for next step.
|        |          |SI is cleared by software. Before the SI is cleared, the low period of
|        |          |SCL line is stretched. The transaction is suspended. It is useful for
|        |          |the slave device to deal with previous data bytes until ready for
|        |          |receiving the next byte.
|        |          |The serial transaction is suspended until SI is cleared by software.
|        |          |After SI is cleared, I2C bus will continue to generate START or
|        |          |repeated START condition, STOP condition, 8-bit data, or so on
|        |          |depending on the software configuration of controlling byte or bits.
|        |          |Therefore, user should take care of it by preparing suitable setting
|        |          |of registers before SI is software cleared.
|[4]     |STO       |STOP Flag
|        |          |When STO is set if the I2C is in the master mode, a STOP condition is
|        |          |transmitted to the bus. STO is automatically cleared by hardware once
|        |          |the STOP condition has been detected on the bus.
|        |          |The STO flag setting is also used to recover the I2C device from the
|        |          |bus error state (I2CnSTAT as 00H). In this case, no STOP condition is
|        |          |transmitted to the I2C bus.
|        |          |If the STA and STO bits are both set and the device is original in the
|        |          |master mode, the I2C bus will generate a STOP condition and
|        |          |immediately follow a START condition. If the device is in slave mode,
|        |          |STA and STO simultaneous setting should be avoid from issuing illegal
|        |          |I2C frames.
|[5]     |STA       |START Flag
|        |          |When STA is set, the I2C generates a START condition if the bus is
|        |          |free. If the bus is busy, the I2C waits for a STOP condition and
|        |          |generates a START condition following.
|        |          |If STA is set while the I2C is already in the master mode and one or
|        |          |more bytes have been transmitted or received, the I2C generates a
|        |          |repeated START condition.
|        |          |Note that STA can be set anytime even in a slave mode, but STA is not
|        |          |hardware automatically cleared after START or repeated START condition
|        |          |has been detected. User should take care of it by clearing STA
|        |          |manually.
|[6]     |I2CEN     |I2Cn Bus Enable
|        |          |0 = I2C bus Disabled.
|        |          |1 = I2C bus Enabled.
|        |          |Before enabling the I2C, SCL and SDA port latches should be set to
|        |          |logic 1.
|[7]     |I         |I2Cn Hold Time Extend Enable
|        |          |0 = I2C DATA to SCL hold time extend disabled
|        |          |1 = I2C DATA to SCL hold time extend enabled, extend 8 system clock
*/

/**
@addtogroup IP_I2C_I2C0STAT I2C0STAT
Special Function Register @ref I2C0STAT 
Address: BDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |0         |Reserved
|        |          |The least significant three bits of I2CnSTAT are always read as 0.
|[7:3]   |I2CSTAT[7:3]|I2Cn Status Code
|        |          |The MSB five bits of I2CnSTAT contains the status code. There are 27
|        |          |possible status codes. When I2CnSTAT is F8H, no relevant state
|        |          |information is available and SI flag keeps 0. All other 26 status
|        |          |codes correspond to the I2C states. When each of these status is
|        |          |entered, SI will be set as logic 1 and a interrupt is requested.
*/

/**
@addtogroup IP_I2C_I2C1STAT I2C1STAT
Special Function Register @ref I2C1STAT 
Address: B4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |0         |Reserved
|        |          |The least significant three bits of I2CnSTAT are always read as 0.
|[7:3]   |I2CSTAT[7:3]|I2Cn Status Code
|        |          |The MSB five bits of I2CnSTAT contains the status code. There are 27
|        |          |possible status codes. When I2CnSTAT is F8H, no relevant state
|        |          |information is available and SI flag keeps 0. All other 26 status
|        |          |codes correspond to the I2C states. When each of these status is
|        |          |entered, SI will be set as logic 1 and a interrupt is requested.
*/

/**
@addtogroup IP_I2C_I2C0DAT I2C0DAT
Special Function Register @ref I2C0DAT 
Address: BCH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CDAT[7:0]|I2Cn Data
|        |          |I2CnDAT contains a byte of the I2C data to be transmitted or a byte,
|        |          |which has just received. Data in I2CnDAT remains as long as SI is
|        |          |logic 1. The result of reading or writing I2CnDAT during I2C
|        |          |transceiver progress is unpredicted.
|        |          |While data in I2CnDAT is shifted out, data on the bus is
|        |          |simultaneously being shifted in to update I2CnDAT. I2CnDAT always
|        |          |shows the last byte that presented on the I2C bus. Thus the event of
|        |          |lost arbitration, the original value of I2CnDAT changes after the
|        |          |transaction.
*/

/**
@addtogroup IP_I2C_I2C1DAT I2C1DAT
Special Function Register @ref I2C1DAT 
Address: B3H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CDAT[7:0]|I2Cn Data
|        |          |I2CnDAT contains a byte of the I2C data to be transmitted or a byte,
|        |          |which has just received. Data in I2CnDAT remains as long as SI is
|        |          |logic 1. The result of reading or writing I2CnDAT during I2C
|        |          |transceiver progress is unpredicted.
|        |          |While data in I2CnDAT is shifted out, data on the bus is
|        |          |simultaneously being shifted in to update I2CnDAT. I2CnDAT always
|        |          |shows the last byte that presented on the I2C bus. Thus the event of
|        |          |lost arbitration, the original value of I2CnDAT changes after the
|        |          |transaction.
*/

/**
@addtogroup IP_I2C_I2C0ADDRM I2C0ADDRM
Special Function Register @ref I2C0ADDRM 
Address: CFH, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CnADDRM |I2Cn
|        |          |Address Mask
|        |          |Mask with bit
*/

/**
@addtogroup IP_I2C_I2C1ADDRM I2C1ADDRM
Special Function Register @ref I2C1ADDRM 
Address: D7H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CnADDRM |I2Cn
|        |          |Address Mask
|        |          |Mask with bit
*/

/**
@addtogroup IP_I2C_I2C0ADDR0 I2C0ADDR0
Special Function Register @ref I2C0ADDR0 
Address: C1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C0ADDR1 I2C0ADDR1
Special Function Register @ref I2C0ADDR1 
Address: A1H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C0ADDR2 I2C0ADDR2
Special Function Register @ref I2C0ADDR2 
Address: A2H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C0ADDR3 I2C0ADDR3
Special Function Register @ref I2C0ADDR3 
Address: A3H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C1ADDR0 I2C1ADDR0
Special Function Register @ref I2C1ADDR0 
Address: B2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C1ADDR1 I2C1ADDR1
Special Function Register @ref I2C1ADDR1 
Address: A4H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C1ADDR2 I2C1ADDR2
Special Function Register @ref I2C1ADDR2 
Address: A5H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C1ADDR3 I2C1ADDR3
Special Function Register @ref I2C1ADDR3 
Address: A6H, SFR Page 2
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |GC        |General Call Bit
|        |          |In master mode:
|        |          |This bit has no effect.
|        |          |In slave mode:
|        |          |0 = The General Call is always ignored.
|        |          |1 = The General Call is recognized if AA flag is 1; otherwise, it is
|        |          |ignored if AA is 0.
|[7:1]   |I2CADDRx[7:1]|I2Cn Device’s Own Slave Address
|        |          |In master mode:
|        |          |These bits have no effect.
|        |          |In slave mode:
|        |          |These 7 bits define the slave address of this I2C device by user. The
|        |          |master should address I2C device by sending the same address in the
|        |          |first byte data after a START or a repeated START condition. If the AA
|        |          |flag is set, this I2C device will acknowledge the master after
|        |          |receiving its own address and become an addressed slave. Otherwise,
|        |          |the addressing from the master will be ignored.
|        |          |Note that I2CnADDRx[7:1] should not remain its default value of all 0,
|        |          |because address 0x00 is reserved for General Call.
*/

/**
@addtogroup IP_I2C_I2C0CLK I2C0CLK
Special Function Register @ref I2C0CLK 
Address: BEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CCLK[7:0]|I2Cn Clock Setting
|        |          |In master mode:
|        |          |This register determines the clock rate of I2C bus when the device is
|        |          |in a master mode. The clock rate follows the equation,
|        |          |.
|        |          |Note that the I2CnCLK value of 00H and 01H are not valid. This is an
|        |          |implement limitation.
|        |          |In slave mode:
|        |          |This byte has no effect. In slave mode, the I2C device will
|        |          |automatically synchronize with any given clock rate up to 400k bps.
*/

/**
@addtogroup IP_I2C_I2C1CLK I2C1CLK
Special Function Register @ref I2C1CLK 
Address: B5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |I2CCLK[7:0]|I2Cn Clock Setting
|        |          |In master mode:
|        |          |This register determines the clock rate of I2C bus when the device is
|        |          |in a master mode. The clock rate follows the equation,
|        |          |.
|        |          |Note that the I2CnCLK value of 00H and 01H are not valid. This is an
|        |          |implement limitation.
|        |          |In slave mode:
|        |          |This byte has no effect. In slave mode, the I2C device will
|        |          |automatically synchronize with any given clock rate up to 400k bps.
*/

/**
@addtogroup IP_I2C_I2C0TOC I2C0TOC
Special Function Register @ref I2C0TOC 
Address: BFH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |DIV       |I2C0 Time-Out Counter Clock Divider
|        |          |0 = The clock of I2C time-out counter is FSYS/1.
|        |          |1 = The clock of I2C time-out counter is FSYS/4.
|[2]     |I2TOCEN   |I2C0 Time-Out Counter Enable
|        |          |0 = I2C time-out counter Disabled.
|        |          |1 = I2C time-out counter Enabled.
|[7:3]   |Reserved  |Reserved
*/

/**
@addtogroup IP_I2C_I2C1TOC I2C1TOC
Special Function Register @ref I2C1TOC 
Address: B6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[1]     |DIV       |I2C0 Time-Out Counter Clock Divider
|        |          |0 = The clock of I2C time-out counter is FSYS/1.
|        |          |1 = The clock of I2C time-out counter is FSYS/4.
|[2]     |I2TOCEN   |I2C0 Time-Out Counter Enable
|        |          |0 = I2C time-out counter Disabled.
|        |          |1 = I2C time-out counter Enabled.
|[7:3]   |Reserved  |Reserved
*/

/**@} end of I2C group */

/**
  @addtogroup IP_ACMP ACMP Control Register
  @{ */

/**
@addtogroup IP_ACMP_ACMPCR0 ACMPCR0
Special Function Register @ref ACMPCR0 
Address: D2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ACMPEN    |Comparator 0 Enable Bit
|        |          |0 = Comparator 0 Disabled.
|        |          |1 = Comparator 0 Enabled.
|[1]     |ACMPIE    |Comparator 0 Interrupt Enable Bit
|        |          |0 = Comparator 0 interrupt Disabled.
|        |          |1 = Comparator 0 interrupt Enabled. If WKEN (ACMPCR1[3]) is set to 1,
|        |          |the wake-up interrupt function will be enabled as well.
|[2]     |HYSEN     |Comparator 0 Hysteresis Enable Bit
|        |          |0 = Comparator 0 hysteresis Disabled.
|        |          |1 = Comparator 0 hysteresis Enabled.
|[3]     |WKEN      |Comparator 0 Power-Down Wake-Up Enable Bit
|        |          |0 = Comparator 0 Wake-up function Disabled.
|        |          |1 = Comparator 0 Wake-up function Enabled.
|[5:4]   |NEGSEL    |Comparator 0 Negative Input Selection
|        |          |00 = ACMP0_N0 (P2.4) pin.
|        |          |01 = Internal comparator reference voltage (CRV).
|        |          |10 = VBG (Band-gap).
|        |          |11 = ACMP0_N1 (P2.0)pin.
|[7:6]   |POSSEL    |Comparator 0 Positive Input Selection
|        |          |00 = ACMP0_P0 (P2.5) pin.
|        |          |01 = ACMP0_P1 (P2.3) pin.
|        |          |10 = ACMP0_P2 (P2.1) pin.
|        |          |11 = ACMP0_P3 (P3.1) pin.
*/

/**
@addtogroup IP_ACMP_ACMPCR1 ACMPCR1
Special Function Register @ref ACMPCR1 
Address: D3H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ACMPEN    |Comparator 1 Enable Bit
|        |          |0 = Comparator 1 Disabled.
|        |          |1 = Comparator 1 Enabled.
|[1]     |ACMPIE    |Comparator 1 Interrupt Enable Bit
|        |          |0 = Comparator 1 interrupt Disabled.
|        |          |1 = Comparator 1 interrupt Enabled. If WKEN (ACMPCR2[3]) is set to 1,
|        |          |the wake-up interrupt function will be enabled as well.
|[2]     |HYSEN     |Comparator 1 Hysteresis Enable Bit
|        |          |0 = Comparator 1 hysteresis Disabled.
|        |          |1 = Comparator 1 hysteresis Enabled.
|[3]     |WKEN      |Comparator 1 Power-Down Wake-Up Enable Bit
|        |          |0 = Comparator 1 Wake-up function Disabled.
|        |          |1 = Comparator 1 Wake-up function Enabled.
|[5:4]   |NEGSEL    |Comparator 1 Negative Input Selection
|        |          |00 = ACMP1_N0 (P2.2) pin.
|        |          |01 = Internal comparator reference voltage (CRV).
|        |          |10 = VBG (Band-gap).
|        |          |11 = ACMP1_N1 (P3.2)pin.
|[7:6]   |POSSEL    |Comparator 1 Positive Input Selection
|        |          |00 = ACMP1_P0 (P2.5) pin.
|        |          |01 = ACMP1_P1 (P2.3) pin.
|        |          |10 = ACMP1_P2 (P2.1) pin.
|        |          |11 = ACMP1_P3 (P3.1) pin.
*/

/**
@addtogroup IP_ACMP_ACMPCR2 ACMPCR2
Special Function Register @ref ACMPCR2 
Address: ABH, SFR Page 1
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CRVEN     |CRV Enable Bit
|        |          |0 = CRV Disabled.
|        |          |1 = CRV Enabled.
|[1]     |CRVSSEL   |CRV Source Voltage Selection
|        |          |0 = VDD is selected as CRV source voltage.
|        |          |1 = The reference voltage (VREF) is selected as CRV source voltage.
|[3:2]   |SPEED0    |Analog Comparator 0 Speed Control
|        |          |00 = slow speed, propagation delay : 4.5us, 1.2uA (typ.)
|        |          |01 = slow+ speed, propagation delay : 2.0us, 3uA (typ.)
|        |          |10 = fast speed, propagation delay : 0.6us, 10uA (typ.)
|        |          |11 = fast+ speed, propagation delay : 0.2us, 75uA (typ.)
|[4]     |POE0      |Analog Comparator 0 Polarity Output Enable
|        |          |0 = ACMP0 outputs directly.
|        |          |1 = ACMP0 outputs inversely.
|[5]     |POE1      |Analog Comparator 1 Polarity Output Enable
|        |          |0 = ACMP1 output directly.
|        |          |1 = ACMP1 output inversely.
|[7:6]   |SPEED1    |Analog Comparator 1 Speed Control
|        |          |00 = slow speed, propagation delay : 4.5us, 1.2uA (typ.)
|        |          |01 = slow+ speed, propagation delay : 2.0us, 3uA (typ.)
|        |          |10 = fast speed, propagation delay : 0.6us, 10uA (typ.)
|        |          |11 = fast+ speed, propagation delay : 0.2us, 75uA (typ.)
*/

/**
@addtogroup IP_ACMP_ACMPSR ACMPSR
Special Function Register @ref ACMPSR 
Address: D4H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |ACMP0IF   |Comparator 0 Interrupt Flag
|        |          |This bit is set by hardware whenever the comparator 0 output changes
|        |          |state. This will generate an interrupt if ACMPIE (ACMPCR0[1]) is set
|        |          |to 1
|        |          |Note: Write 0 to clear this bit to 0.
|[1]     |ACMP0O    |Comparator 0 Output
|        |          |Synchronized to the PCLK to allow reading by software. Cleared when
|        |          |the comparator 0 is disabled, i.e. ACMPEN (ACMPCR0[0]) is cleared to
|        |          |0.
|        |          |Note: This bit is read only.
|[2]     |ACMP1IF   |Comparator 1 Interrupt Flag
|        |          |This bit is set by hardware whenever the comparator 1 output changes
|        |          |state. This will generate an interrupt if ACMPIE (ACMPCR1[1]) is set
|        |          |to 1
|        |          |Note: Write 0 to clear this bit to 0.
|[3]     |ACMP1O    |Comparator 1 Output
|        |          |Synchronized to the PCLK to allow reading by software. Cleared when
|        |          |the comparator 1 is disabled, i.e. ACMPEN (ACMPCR1[0]) is cleared to
|        |          |0.
|        |          |Note: This bit is read only.
|[4]     |INT_Test  |ACMP software test interrupt flag
|[7:5]   |Reserved  |Reserved
*/

/**
@addtogroup IP_ACMP_ACMPVREF ACMPVREF
Special Function Register @ref ACMPVREF 
Address: D5H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[2:0]   |CRV0CTL[2:0]|Comparator 0 Reference Voltage Setting
|        |          |CRV0 = CRV source voltage * (2/12+CRV0CTL/12).
|[3]     |Reserved  |Reserved
|[6:4]   |CRV1CTL[2:0]|Comparator 1 Reference Voltage Setting
|        |          |CRV1 = CRV source voltage * (2/12+CRV1CTL/12).
|[7]     |Reserved  |Reserved
*/

/**@} end of ACMP group */

/**
  @addtogroup IP_PDMA PDMA Control Register
  @{ */

/**
@addtogroup IP_PDMA_DMA0CR0 DMA0CR0
Special Function Register @ref DMA0CR0 
Address: 92H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |Others = Reserved.
|        |          |The others are reserved, no peripheral source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup IP_PDMA_DMA1CR0 DMA1CR0
Special Function Register @ref DMA1CR0 
Address: EBH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |EN        |PDMA Enable Bit
|        |          |Setting this bit to 1 enables PDMA operation. If this bit is cleared,
|        |          |PDMA will ignore all PDMA request and Reset the internal state
|        |          |machine, pointers and internal buffer. The contents of all Register
|        |          |Description will not be cleared.
|[1]     |RUN       |Trigger Enable Bit
|        |          |0 = No effect.
|        |          |1 = PDMA data transfer Enabled.
|        |          |Note 1: When PDMA transfer completed, this bit will be cleared
|        |          |automatically.
|[2]     |FIE       |PDMA Full Transfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA full transfer is done.
|        |          |1 = Interrupt Enabled when PDMA full transfer is done.
|[3]     |HIE       |PDMA HALFTransfer Done Interrupt Enable Bit
|        |          |0 = Interrupt Disabled when PDMA half transfer is done.
|        |          |1 = Interrupt Enabled when PDMA half transfer is done.
|[7:4]   |PSSEL[3:0]|Peripheral Source Select
|        |          |0000 = XRAM to XRAM
|        |          |0001 = SPI0 RX
|        |          |0010 = SMC0/UART2 RX.
|        |          |0011 = SPI1 RX
|        |          |0100 = Reserved, No peripheral source select
|        |          |0101 = SPI0 TX
|        |          |0110 = SMC0/UART2 TX.
|        |          |0111 = SPI1 TX
|        |          |1010 = SMC1/UART3 RX.
|        |          |1110 = SMC1/UART3 TX.
|        |          |Others = Reserved.
|        |          |The others are reserved, no peripheral source selected
|        |          |Note: 0001~0011,1010 : peripheral devices to XRAM memory
|        |          |0101~0111,1110 : XRAM memory to peripheral devices
*/

/**
@addtogroup IP_PDMA_DMA0MAL DMA0MAL
Special Function Register @ref DMA0MAL 
Address: 93H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MAL[7:0]  |PDMA XRAM Base Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the source address.
|        |          |XRAM address = {MAH[3:0],MAL[7:0]}
*/

/**
@addtogroup IP_PDMA_DMA1MAL DMA1MAL
Special Function Register @ref DMA1MAL 
Address: ECH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MAL[7:0]  |PDMA XRAM Base Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the source address.
|        |          |XRAM address = {MAH[3:0],MAL[7:0]}
*/

/**
@addtogroup IP_PDMA_DMA0BAH DMA0BAH
Special Function Register @ref DMA0BAH 
Address: F6H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |MAH[3:0]  |PDMA XRAM Base Address (High Byte)
|        |          |The most significant 4 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the destination address.
|        |          |XRAM address = {MAH[3:0], MAL[7:0]}
|[7:4]   |MDAH[3:0] |Memory to Memory Destination Address (High Byte)
|        |          |The most significant 4 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/

/**
@addtogroup IP_PDMA_DMA1BAH DMA1BAH
Special Function Register @ref DMA1BAH 
Address: FDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[3:0]   |MAH[3:0]  |PDMA XRAM Base Address (High Byte)
|        |          |The most significant 4 bits of XRAM address to store or read for the
|        |          |peripheral source data; in memory to memory transfer, this register is
|        |          |the destination address.
|        |          |XRAM address = {MAH[3:0], MAL[7:0]}
|[7:4]   |MDAH[3:0] |Memory to Memory Destination Address (High Byte)
|        |          |The most significant 4 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/

/**
@addtogroup IP_PDMA_DMA0CNT DMA0CNT
Special Function Register @ref DMA0CNT 
Address: 94H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CNT[7:0]  |PDMA Transfer Count
|        |          |The total transfer count for PDMA request operation.
|        |          |Total transfer count = CNT[7:0] + 1
*/

/**
@addtogroup IP_PDMA_DMA1CNT DMA1CNT
Special Function Register @ref DMA1CNT 
Address: EDH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CNT[7:0]  |PDMA Transfer Count
|        |          |The total transfer count for PDMA request operation.
|        |          |Total transfer count = CNT[7:0] + 1
*/

/**
@addtogroup IP_PDMA_DMA0CCNT DMA0CCNT
Special Function Register @ref DMA0CCNT 
Address: 95H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CCNT[7:0] |PDMA Current Transfer Count
|        |          |The current transfer count for PDMA request operation.
|        |          |Current transfer count = CCNT[7:0]
|        |          |Note: while DMAnCNT=0xFF (total transfer count = 256) and DMAnCCNT =
|        |          |0x00 , If PDMA FDONE flag (DMAnTSR[0])=0, that means, 1’st byte data
|        |          |is not complete.If PDMA FDONE flag (DMAnTSR[0])=1, that means, all of
|        |          |data are transferred..
*/

/**
@addtogroup IP_PDMA_DMA1CCNT DMA1CCNT
Special Function Register @ref DMA1CCNT 
Address: EEH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CCNT[7:0] |PDMA Current Transfer Count
|        |          |The current transfer count for PDMA request operation.
|        |          |Current transfer count = CCNT[7:0]
|        |          |Note: while DMAnCNT=0xFF (total transfer count = 256) and DMAnCCNT =
|        |          |0x00 , If PDMA FDONE flag (DMAnTSR[0])=0, that means, 1’st byte data
|        |          |is not complete.If PDMA FDONE flag (DMAnTSR[0])=1, that means, all of
|        |          |data are transferred..
*/

/**
@addtogroup IP_PDMA_DMA0TSR DMA0TSR
Special Function Register @ref DMA0TSR 
Address: E9H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |FDONE     |PDMA Full Transfer Done Flag
|        |          |This bit is set by hardware when PDMA full transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[1]     |HDONE     |PDMA Half Transfer Done Flag
|        |          |This bit is set by hardware when PDMA half transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[2]     |ACT       |PDMA in Active Status Flag (Read Only)
|        |          |0 = This bit is cleared automatically when PDMA transfer is done or
|        |          |disabled.
|        |          |1 = This bit is set by hardware when PDMA transfer is in active.
|[3]     |INT_Test  |PDMA software interrupt (for software test)
|[7:4]   |Reserved  |Reserved
*/

/**
@addtogroup IP_PDMA_DMA1TSR DMA1TSR
Special Function Register @ref DMA1TSR 
Address: F1H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |FDONE     |PDMA Full Transfer Done Flag
|        |          |This bit is set by hardware when PDMA full transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[1]     |HDONE     |PDMA Half Transfer Done Flag
|        |          |This bit is set by hardware when PDMA half transfer is done.
|        |          |Note: This bit can be cleared by writing 0 to it.
|[2]     |ACT       |PDMA in Active Status Flag (Read Only)
|        |          |0 = This bit is cleared automatically when PDMA transfer is done or
|        |          |disabled.
|        |          |1 = This bit is set by hardware when PDMA transfer is in active.
|[3]     |INT_Test  |PDMA software interrupt (for software test)
|[7:4]   |Reserved  |Reserved
*/

/**
@addtogroup IP_PDMA_MTM0DAL MTM0DAL
Special Function Register @ref MTM0DAL 
Address: EAH, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MDAL[7:0] |Memory to Memory Destination Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/

/**
@addtogroup IP_PDMA_MTM1DAL MTM1DAL
Special Function Register @ref MTM1DAL 
Address: F2H, SFR Page 0
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |MDAL[7:0] |Memory to Memory Destination Address (Low Byte)
|        |          |The least significant 8 bits of XRAM address are used for memory to
|        |          |memory destination address.
|        |          |XRAM destination address = {MDAH[3:0], MDAL[7:0]}
*/

/**
@addtogroup IP_PDMA_DMA0CR1 DMA0CR1
Special Function Register @ref DMA0CR1 
Address: 8AH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CRCEN     |PDMA CRC Checksum Enable Bit
|        |          |0 = CRC checksum Disabled when PDMA is running, DMAnCRC[7:0] is set to
|        |          |0x00
|        |          |1 = CRC checksum Enabled when PDMA is running.
|[1]     |REFIN     |PDMA CRC IN Reflect Enable Bit
|        |          |0 = CRC IN reflect Disabled when PDMA is running.
|        |          |1 = CRC IN reflect Enabled when PDMA is running, the input data will
|        |          |be bit order revised
|[2]     |REFOUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT reflect Disabled when PDMA is running.
|        |          |1 = CRC OUT reflect Enabled when PDMA is running, the output data will
|        |          |be bit order revised
|[3]     |XOROUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT exclusive-ored Disabled when PDMA is running.
|        |          |1 = CRC OUT exclusive-ored Enabled when PDMA is running, the final
|        |          |value is exclusive-ored with 0x55
|[7:4]   |Reserved  |Reserved
*/

/**
@addtogroup IP_PDMA_DMA1CR1 DMA1CR1
Special Function Register @ref DMA1CR1 
Address: 8BH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[0]     |CRCEN     |PDMA CRC Checksum Enable Bit
|        |          |0 = CRC checksum Disabled when PDMA is running, DMAnCRC[7:0] is set to
|        |          |0x00
|        |          |1 = CRC checksum Enabled when PDMA is running.
|[1]     |REFIN     |PDMA CRC IN Reflect Enable Bit
|        |          |0 = CRC IN reflect Disabled when PDMA is running.
|        |          |1 = CRC IN reflect Enabled when PDMA is running, the input data will
|        |          |be bit order revised
|[2]     |REFOUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT reflect Disabled when PDMA is running.
|        |          |1 = CRC OUT reflect Enabled when PDMA is running, the output data will
|        |          |be bit order revised
|[3]     |XOROUT    |PDMA CRC OUT Reflect Enable Bit
|        |          |0 = CRC OUT exclusive-ored Disabled when PDMA is running.
|        |          |1 = CRC OUT exclusive-ored Enabled when PDMA is running, the final
|        |          |value is exclusive-ored with 0x55
|[7:4]   |Reserved  |Reserved
*/

/**
@addtogroup IP_PDMA_DMA0CRC DMA0CRC
Special Function Register @ref DMA0CRC 
Address: 92H, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CRC[7:0]  |PDMA CRC Checksum
|        |          |The checksum of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8 + X2 + X + 1
*/

/**
@addtogroup IP_PDMA_DMA1CRC DMA1CRC
Special Function Register @ref DMA1CRC 
Address: 93H, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |CRC[7:0]  |PDMA CRC Checksum
|        |          |The checksum of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8 + X2 + X + 1
*/

/**
@addtogroup IP_PDMA_DMA0SEED DMA0SEED
Special Function Register @ref DMA0SEED 
Address: 9AH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SEED[7:0] |PDMA CRC SEED
|        |          |The seed of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8
|        |          |+ X2 + X + 1
*/

/**
@addtogroup IP_PDMA_DMA1SEED DMA1SEED
Special Function Register @ref DMA1SEED 
Address: 9BH, SFR Page 3
---------------------------------------------------------------------------------------------------
|Bits    |Name      |Descriptions
| :----: | :----:   | :---- |
|[7:0]   |SEED[7:0] |PDMA CRC SEED
|        |          |The seed of the Cyclic Redundancy Check (CRC-8) calculation
|        |          |The CRC-8 polynomial is below
|        |          |CRC-8: X8
|        |          |+ X2 + X + 1
*/

/**@} end of PDMA group */

/**@} end of PERIPHERAL group */



/*  BIT Registers  */
/*  P0  */
#define P00        P0_bit.BIT0
#define P01        P0_bit.BIT1
#define P02        P0_bit.BIT2
#define P03        P0_bit.BIT3
#define P04        P0_bit.BIT4
#define P05        P0_bit.BIT5
#define P06        P0_bit.BIT6
#define P07        P0_bit.BIT7

///*  TCON  */
#define TF1         TCON_bit.BIT7
#define TR1         TCON_bit.BIT6
#define TF0         TCON_bit.BIT5
#define TR0         TCON_bit.BIT4
#define IE1         TCON_bit.BIT3
#define IT1         TCON_bit.BIT2
#define IE0         TCON_bit.BIT1
#define IT0         TCON_bit.BIT0
//
///*  P1  */
#define P10         P1_bit.BIT0
#define P11         P1_bit.BIT1
#define P12         P1_bit.BIT2
#define P13         P1_bit.BIT3
#define P14         P1_bit.BIT4
#define P15         P1_bit.BIT5
#define P16         P1_bit.BIT6
#define P17         P1_bit.BIT7

/*  SCON  */
#define SM0         SCON_bit.BIT7
#define FE          SCON_bit.BIT7
#define SM1         SCON_bit.BIT6
#define SM2         SCON_bit.BIT5
#define REN         SCON_bit.BIT4
#define TB8         SCON_bit.BIT3
#define RB8         SCON_bit.BIT2
#define TI          SCON_bit.BIT1
#define RI          SCON_bit.BIT0

/*  P2  */
#define P20         P2_bit.BIT0
#define P21         P2_bit.BIT1
#define P22         P2_bit.BIT2
#define P23         P2_bit.BIT3
#define P24         P2_bit.BIT4
#define P25         P2_bit.BIT5
#define P26         P2_bit.BIT6
#define P27         P2_bit.BIT7

/*  IE  */
#define EA          IE_bit.BIT7
#define EADC        IE_bit.BIT6
#define EBOD        IE_bit.BIT5
#define ES          IE_bit.BIT4
#define ET1         IE_bit.BIT3
#define EX1         IE_bit.BIT2
#define ET0         IE_bit.BIT1
#define EX0         IE_bit.BIT0

/*  P3  */
#define P30         P3_bit.BIT0
#define P31         P3_bit.BIT1
#define P32         P3_bit.BIT2
#define P33         P3_bit.BIT3
#define P34         P3_bit.BIT4
#define P35         P3_bit.BIT5
#define P36         P3_bit.BIT6
#define P37         P3_bit.BIT7

/*  IP  */
#define PADC        IP_bit.BIT6
#define PBOD        IP_bit.BIT5
#define PS          IP_bit.BIT4
#define PT1         IP_bit.BIT3
#define PX1         IP_bit.BIT2
#define PT0         IP_bit.BIT1
#define PX0         IP_bit.BIT0

/*  I2C0CON  */
#define I2CEN0      I2C0CON_bit.BIT6
#define STA0        I2C0CON_bit.BIT5
#define STO0        I2C0CON_bit.BIT4
#define SI0         I2C0CON_bit.BIT3
#define AA0         I2C0CON_bit.BIT2
#define I2C0PX      I2C0CON_bit.BIT0

/*  I2C1CON  */
#define I2CEN1       I2C1CON_bit.BIT6
#define STA1         I2C1CON_bit.BIT5
#define STO1         I2C1CON_bit.BIT4
#define SI1          I2C1CON_bit.BIT3
#define AA1          I2C1CON_bit.BIT2
#define I2CPX1       I2C1CON_bit.BIT0

/*  T2CON  */
#define TF2         T2CON_bit.BIT7
#define TR2         T2CON_bit.BIT2
#define CM_RL2      T2CON_bit.BIT0

/*  PSW */
#define CY          PSW_bit.BIT7
#define AC          PSW_bit.BIT6
#define F0          PSW_bit.BIT5
#define RS1         PSW_bit.BIT4
#define RS0         PSW_bit.BIT3
#define OV          PSW_bit.BIT2
#define P           PSW_bit.BIT0

/*  P4  */
#define P40         P4_bit.BIT0
#define P41         P4_bit.BIT1
#define P42         P4_bit.BIT2
#define P43         P4_bit.BIT3
#define P44         P4_bit.BIT4
#define P45         P4_bit.BIT5
#define P46         P4_bit.BIT6
#define P47         P4_bit.BIT7


/*  SCON_1  */
#define SM0_1       S1CON_bit.BIT7
#define FE_1        S1CON_bit.BIT7
#define SM1_1       S1CON_bit.BIT6
#define SM2_1       S1CON_bit.BIT5
#define REN_1       S1CON_bit.BIT4
#define TB8_1       S1CON_bit.BIT3
#define RB8_1       S1CON_bit.BIT2
#define TI_1        S1CON_bit.BIT1
#define RI_1        S1CON_bit.BIT0


// /*  Other Pin Name  */
#define AIN0        P2_bit.BIT5
#define AIN1        P2_bit.BIT4
#define AIN2        P2_bit.BIT3
#define AIN3        P2_bit.BIT2
#define AIN4        P2_bit.BIT1
#define AIN5        P2_bit.BIT0
#define AIN6        P3_bit.BIT1
#define AIN7        P3_bit.BIT2

#endif  /* __MUG51_H__ */
