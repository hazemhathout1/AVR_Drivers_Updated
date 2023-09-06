/*
 * Application.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hazem
 */

#include "Application.h"


uint8 keypad_value=ZERO_INIT;

int main()
{
	Application_initialize();
	while(1)
	{
		keypad_get_value(&keypad1,&keypad_value);
		if(keypad_value=='7')
		{
			led_turn_on(&led1);
		}
		else if(keypad_value=='8')
		{
			led_turn_off(&led1);
		}
	}
}


void Application_initialize()
{
	ecu_layer_initialize();
}

