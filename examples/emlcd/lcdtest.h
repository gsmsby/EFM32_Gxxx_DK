/**************************************************************************//**
 * @file
 * @brief LCD demo and test, prototypes and definitions
 * @author Energy Micro AS
 * @version 3.20.0
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2009 Energy Micro AS, http://www.energymicro.com</b>
 ******************************************************************************
 *
 * This source code is the property of Energy Micro AS. The source and compiled
 * code may only be used on Energy Micro "EFM32" microcontrollers.
 *
 * This copyright notice may not be removed from the source code nor changed.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no
 * obligation to support this Software. Energy Micro AS is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Energy Micro AS will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 *****************************************************************************/

#ifndef __LCDTEST_H
#define __LCDTEST_H

#ifdef __cplusplus
extern "C" {
#endif


/* Segment LCD test prototypes */
void ScrollText(char *scrolltext);
void Test(void);
void BlinkTest(void);
void AnimateTest(void);

/* Various test functions */
void GPIO_IRQInit(void);
void RtcTrigger(void);
void EM1Sleep(uint32_t msec);
void EM2Sleep(uint32_t msec);
void EM3Sleep(void);
void EM4Sleep(void);

#ifdef __cplusplus
}
#endif

#endif
