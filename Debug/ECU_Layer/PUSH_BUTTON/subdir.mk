################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECU_Layer/PUSH_BUTTON/ECU_PB.c 

OBJS += \
./ECU_Layer/PUSH_BUTTON/ECU_PB.o 

C_DEPS += \
./ECU_Layer/PUSH_BUTTON/ECU_PB.d 


# Each subdirectory must supply rules for building sources it contributes
ECU_Layer/PUSH_BUTTON/%.o: ../ECU_Layer/PUSH_BUTTON/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


