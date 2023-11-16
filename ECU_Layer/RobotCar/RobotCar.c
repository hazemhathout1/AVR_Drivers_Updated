/*
 * RobotCar.c
 *
 *  Created on: Oct 5, 2023
 *      Author: hazem
 */
#include "RobotCar.h"

STD_ReturnStatus RobotCar_Init(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_initialize(&(_Robot->Robot[0]));
		dc_motor_initialize(&(_Robot->Robot[1]));
	}
	return ret;
}


STD_ReturnStatus RobotCar_move_Forward(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_move_right(&(_Robot->Robot[0]));
		dc_motor_move_right(&(_Robot->Robot[1]));
	}
	return ret;
}
STD_ReturnStatus RobotCar_move_Backward(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_move_left(&(_Robot->Robot[0]));
		dc_motor_move_left(&(_Robot->Robot[1]));
	}
	return ret;
}

STD_ReturnStatus RobotCar_move_Left(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_stop(&(_Robot->Robot[0]));
		dc_motor_move_left(&(_Robot->Robot[1]));
	}
	return ret;
}
STD_ReturnStatus RobotCar_move_Right(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_move_left(&(_Robot->Robot[0]));
		dc_motor_stop(&(_Robot->Robot[1]));
	}
	return ret;
}

STD_ReturnStatus RobotCar_Stop(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_stop(&(_Robot->Robot[0]));
		dc_motor_stop(&(_Robot->Robot[1]));
	}
	return ret;
}


STD_ReturnStatus RobotCar_Move_Backward_left(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_stop(&(_Robot->Robot[0]));
		dc_motor_move_right(&(_Robot->Robot[1]));
	}
	return ret;
}
STD_ReturnStatus RobotCar_Move_Backward_Right(const RobotCar_t *_Robot)
{
	STD_ReturnStatus ret = E_OK;
	if(NULL==_Robot)
	{
		ret = E_NOT_OK;
	}
	else
	{
		dc_motor_move_right(&(_Robot->Robot[0]));
		dc_motor_stop(&(_Robot->Robot[1]));
	}
	return ret;
}
