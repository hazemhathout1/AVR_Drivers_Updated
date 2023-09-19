/*
 * Application.h
 *
 *  Created on: Aug 24, 2023
 *      Author: hazem
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "ECU_Layer/ECU_LAYER_INIT.h"
#include "MCAL_Layer/Interrupt/mcal_external_interrupt.h"


extern keypad_t keypad1;
extern led_t led1;
extern led_t led2;
extern led_t led3;
extern chr_lcd_4bit_t lcd1;
extern chr_lcd_8bit_t lcd2;
void Application_initialize();
void int0_App_ISR(void);
void int1_App_ISR(void);


#endif /* APPLICATION_H_ */
