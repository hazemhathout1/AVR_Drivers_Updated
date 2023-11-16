/*
 * RobotCar.h
 *
 *  Created on: Oct 5, 2023
 *      Author: hazem
 */

#ifndef ECU_LAYER_ROBOTCAR_ROBOTCAR_H_
#define ECU_LAYER_ROBOTCAR_ROBOTCAR_H_
/*---------------------------INCLUDES------------------------*/
#include "../DC_Motor/ECU_DC_Motor.h"
/*------------------------MACRO Declarations----------------*/


/*------------------------MACRO functions Declarations------------------*/


/*-------------------------Data Types Declarations---------------------------*/
typedef struct{
	dc_motor_t Robot[2];
}RobotCar_t;

/*-----------------------------Software Interfaces Declarations-----------------------*/
STD_ReturnStatus RobotCar_Init(const RobotCar_t *_Robot);
STD_ReturnStatus RobotCar_move_Forward(const RobotCar_t *_Robot);
STD_ReturnStatus RobotCar_move_Backward(const RobotCar_t *_Robot);
STD_ReturnStatus RobotCar_move_Left(const RobotCar_t *_Robot);
STD_ReturnStatus RobotCar_move_Right(const RobotCar_t *_Robot);
STD_ReturnStatus RobotCar_Stop(const RobotCar_t *_Robot);
STD_ReturnStatus RobotCar_Move_Backward_left(const RobotCar_t *_Robot);
STD_ReturnStatus RobotCar_Move_Backward_Right(const RobotCar_t *_Robot);

#endif /* ECU_LAYER_ROBOTCAR_ROBOTCAR_H_ */
