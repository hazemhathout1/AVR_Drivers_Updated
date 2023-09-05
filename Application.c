/*
 * Application.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hazem
 */

#include "Application.h"

segment_t seg1={
		.segment_pins[0].port=PORTC_INDEX,
		.segment_pins[0].pin=PIN0,
		.segment_pins[0].logic=GPIO_LOW,
		.segment_pins[0].direction=DIRECTION_OUTPUT,
		.segment_pins[1].port=PORTC_INDEX,
		.segment_pins[1].pin=PIN1,
		.segment_pins[1].logic=GPIO_LOW,
		.segment_pins[1].direction=DIRECTION_OUTPUT,
		.segment_pins[2].port=PORTC_INDEX,
		.segment_pins[2].pin=PIN2,
		.segment_pins[2].logic=GPIO_LOW,
		.segment_pins[2].direction=DIRECTION_OUTPUT,
		.segment_pins[3].port=PORTC_INDEX,
		.segment_pins[3].pin=PIN3,
		.segment_pins[3].logic=GPIO_LOW,
		.segment_pins[3].direction=DIRECTION_OUTPUT,
		.segment_pins[4].port=PORTC_INDEX,
		.segment_pins[4].pin=PIN4,
		.segment_pins[4].logic=GPIO_LOW,
		.segment_pins[4].direction=DIRECTION_OUTPUT,
		.segment_pins[5].port=PORTC_INDEX,
		.segment_pins[5].pin=PIN5,
		.segment_pins[5].logic=GPIO_LOW,
		.segment_pins[5].direction=DIRECTION_OUTPUT,
		.segment_pins[6].port=PORTC_INDEX,
		.segment_pins[6].pin=PIN6,
		.segment_pins[6].logic=GPIO_LOW,
		.segment_pins[6].direction=DIRECTION_OUTPUT,
};




uint8 ones=0;
int main()
{
	Application_initialize();
	while(1)
	{
		for(ones=0;ones<=9;ones++)
			{
				seven_segment_write_number(&seg1,ones);
				_delay_ms(500);
			}

	}

}


void Application_initialize()
{
	seven_segment_initialize(&seg1);
}

