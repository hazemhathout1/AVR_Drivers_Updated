/*
 * Application.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hazem
 */

#include "Application.h"



dc_motor_t dc_motor_1={
		.dc_motor_pin[0].port=PORTC_INDEX,
		.dc_motor_pin[0].pin=PIN0,
		.dc_motor_pin[0].logic =DC_MOTOR_OFF_STATUS,
		.dc_motor_pin[0].direction=DIRECTION_OUTPUT,
		.dc_motor_pin[1].port=PORTC_INDEX,
		.dc_motor_pin[1].pin=PIN1,
		.dc_motor_pin[1].logic=DC_MOTOR_OFF_STATUS,
		.dc_motor_pin[1].direction=DIRECTION_OUTPUT
};


int main()
{
	Application_initialize();
	while(1)
	{
		dc_motor_move_right(&dc_motor_1);
		_delay_ms(1000);
		dc_motor_move_left(&dc_motor_1);
		_delay_ms(1000);
	}

}


void Application_initialize()
{
	dc_motor_initialize(&dc_motor_1);
}

