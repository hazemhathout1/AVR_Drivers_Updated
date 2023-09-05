################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECU_Layer/DC_Motor/ECU_DC_Motor.c 

OBJS += \
./ECU_Layer/DC_Motor/ECU_DC_Motor.o 

C_DEPS += \
./ECU_Layer/DC_Motor/ECU_DC_Motor.d 


# Each subdirectory must supply rules for building sources it contributes
ECU_Layer/DC_Motor/%.o: ../ECU_Layer/DC_Motor/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


