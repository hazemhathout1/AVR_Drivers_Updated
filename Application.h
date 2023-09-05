/*
 * Application.h
 *
 *  Created on: Aug 24, 2023
 *      Author: hazem
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "ECU_Layer/LED/ECU_LED.h"
#include "ECU_Layer/PUSH_BUTTON/ECU_PB.h"
#include "ECU_Layer/RELAY/ECU_RELAY.h"
#include "ECU_Layer/DC_Motor/ECU_DC_Motor.h"
#include "ECU_Layer/ECU_SEVEN_SEG/ECU_SEVEN_SEG.h"
#include <util/delay.h>
void Application_initialize();


#endif /* APPLICATION_H_ */
