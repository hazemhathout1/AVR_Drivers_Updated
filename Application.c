/*
 * Application.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hazem
 */

#include "Application.h"

interrupt_INTx_t int0_obj={
		.EXT_INTERRUPTHANDLER=int0_App_ISR,
		.edge=INTERRUPT_RISING_EDGE,
		.source=INTERRUPT_EXTERNAL_INT0,
		.mcu_pin.port=PORTD_INDEX,
		.mcu_pin.pin=PIN2,
		.mcu_pin.direction=DIRECTION_INPUT
};


interrupt_INTx_t int1_obj={
		.EXT_INTERRUPTHANDLER=int1_App_ISR,
		.edge=INTERRUPT_RISING_EDGE,
		.source=INTERRUPT_EXTERNAL_INT1,
		.mcu_pin.port=PORTD_INDEX,
		.mcu_pin.pin=PIN3,
		.mcu_pin.direction=DIRECTION_INPUT
};


int main()
{
	STD_ReturnStatus ret =E_NOT_OK;
	Application_initialize();
	ret = interrupt_INTx_init(&int0_obj);
	ret = interrupt_INTx_init(&int1_obj);

	while(1)
	{
		led_turn_toggle(&led3);
		_delay_ms(200);
		led_turn_toggle(&led3);
		_delay_ms(200);

	}

}

void Application_initialize()
{
	ecu_layer_initialize();
}




void int0_App_ISR(void)
{
	led_turn_toggle(&led1);
}


void int1_App_ISR(void)
{
	led_turn_toggle(&led2);
}



