/*
 * Application.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hazem
 */

#include "Application.h"


button_t btn_high=
{
	.button_pin.port=PORTB_INDEX,
	.button_pin.pin=PIN0,
	.button_pin.direction=DIRECTION_INPUT,
	.button_pin.logic=GPIO_LOW,
	.button_connection=BUTTON_ACTIVE_HIGH,
	.button_status=BUTTON_RELEASED
};
button_t btn_low=
{
	.button_pin.port=PORTB_INDEX,
	.button_pin.pin=PIN1,
	.button_pin.direction=DIRECTION_INPUT,
	.button_pin.logic=GPIO_HIGH,
	.button_connection=BUTTON_ACTIVE_LOW,
	.button_status=BUTTON_RELEASED
};

led_t led_1={
		.port_name=PORTD_INDEX,
		.pin=PIN0,
		.led_status=GPIO_LOW
};



STD_ReturnStatus ret =E_NOT_OK;
button_status_t btn_high_status = BUTTON_RELEASED;
button_status_t btn_high_valid_status = BUTTON_RELEASED;//current status
button_status_t btn_high_last_valid_status = BUTTON_RELEASED;
led_status led1_status = LED_OFF;


uint32 btn_high_valid=0;


int main()
{

}


void Application_initialize()
{
	led_initialize(&led_1);
	button_initialize(&btn_high);
}

