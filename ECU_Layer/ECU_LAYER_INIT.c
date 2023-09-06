/*
  * ECU_LAYER_INIT.c
 *
 *  Created on: Sep 6, 2023
 *      Author: hazem
 */

#include "ECU_LAYER_INIT.h"





led_t led1={
		.port_name=PORTD_INDEX,.pin=PIN0,.led_status=GPIO_LOW
};

keypad_t keypad1={
		.keypad_row_pins[0].port=PORTC_INDEX,
		.keypad_row_pins[0].pin=PIN0,
		.keypad_row_pins[0].direction=DIRECTION_OUTPUT,
		.keypad_row_pins[0].logic=GPIO_LOW,
		.keypad_row_pins[1].port=PORTC_INDEX,
		.keypad_row_pins[1].pin=PIN1,
		.keypad_row_pins[1].direction=DIRECTION_OUTPUT,
		.keypad_row_pins[1].logic=GPIO_LOW,
		.keypad_row_pins[2].port=PORTC_INDEX,
		.keypad_row_pins[2].pin=PIN2,
		.keypad_row_pins[2].direction=DIRECTION_OUTPUT,
		.keypad_row_pins[2].logic=GPIO_LOW,
		.keypad_row_pins[3].port=PORTC_INDEX,
		.keypad_row_pins[3].pin=PIN3,
		.keypad_row_pins[3].direction=DIRECTION_OUTPUT,
		.keypad_row_pins[3].logic=GPIO_LOW,
		.keypad_columns_pins[0].port=PORTC_INDEX,
		.keypad_columns_pins[0].pin=PIN4,
		.keypad_columns_pins[0].direction=DIRECTION_INPUT,
		.keypad_columns_pins[0].logic=GPIO_LOW,
		.keypad_columns_pins[1].port=PORTC_INDEX,
		.keypad_columns_pins[1].pin=PIN5,
		.keypad_columns_pins[1].direction=DIRECTION_INPUT,
		.keypad_columns_pins[1].logic=GPIO_LOW,
		.keypad_columns_pins[2].port=PORTC_INDEX,
		.keypad_columns_pins[2].pin=PIN6,
		.keypad_columns_pins[2].direction=DIRECTION_INPUT,
		.keypad_columns_pins[2].logic=GPIO_LOW,
		.keypad_columns_pins[3].port=PORTC_INDEX,
		.keypad_columns_pins[3].pin=PIN7,
		.keypad_columns_pins[3].direction=DIRECTION_INPUT,
		.keypad_columns_pins[3].logic=GPIO_LOW,
};


void ecu_layer_initialize()
{
	STD_ReturnStatus ret = E_NOT_OK;
	ret = keypad_initialize(&keypad1);
	ret = led_initialize(&led1);
}

