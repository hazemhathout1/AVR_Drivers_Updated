/*
 * Application.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hazem
 */

#include "Application.h"


relay_t relay1={
		.relay_port=PORTA_INDEX,
		.relay_pin = PIN1,
		.relay_status= RELAY_OFF_STATUS
};



int main()
{
	Application_initialize();
	relay_turn_off(&relay1);

}


void Application_initialize()
{
	relay_initialize(&relay1);
}

