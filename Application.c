/*
 * Application.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hazem
 */

#include "Application.h"
STD_ReturnStatus ret;


uint16 adc_res_1=0;
uint16 adc_res_2=0;
volatile uint8 adc_flag;
uint8 adc_req=0;



adc_conf_t adc1={
		.ADC_InterruptHandler=NULL,
		.adc_channel=ADC_CHANNEL_AN0,//default channel, mmkn aghayar 3ady fel code
		.conversion_clock=ADC_CONVERSION_CLOCK_FOSC_DIV_16,
		.result_format=ADC_RIGHT_ADJUST,
		.voltage_reference=ADC_VOLTAGE_REFERENCE_DISABLED
};




int main()
{
	Application_initialize();
	//lcd_4bit_send_string_pos(&lcd1,1,1,"Hello");
	while(1)
	{
		ret = ADC_GetConversion_Blocking(&adc1,ADC_CHANNEL_AN0,&adc_res_1);
		ret = ADC_GetConversion_Blocking(&adc1,ADC_CHANNEL_AN1,&adc_res_2);
		lcd_4bit_send_int_pos(&lcd1,2,1,(uint32)adc_res_2);
		lcd_4bit_send_int_pos(&lcd1,1,1,(uint32)adc_res_1);
	}

}

void Application_initialize()
{

	ecu_layer_initialize();
	ret = ADC_Init(&adc1);
}



