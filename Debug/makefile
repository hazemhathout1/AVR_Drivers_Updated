################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL_Layer/Interrupt/subdir.mk
-include MCAL_Layer/04-ADC/subdir.mk
-include MCAL_Layer/03-EEPROM/subdir.mk
-include MCAL_Layer/01-GPIO/subdir.mk
-include ECU_Layer/RELAY/subdir.mk
-include ECU_Layer/PUSH_BUTTON/subdir.mk
-include ECU_Layer/LED/subdir.mk
-include ECU_Layer/LCD/subdir.mk
-include ECU_Layer/KEYPAD/subdir.mk
-include ECU_Layer/ECU_SEVEN_SEG/subdir.mk
-include ECU_Layer/DC_Motor/subdir.mk
-include ECU_Layer/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Application.lss \

FLASH_IMAGE += \
Application.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Application.elf secondary-outputs

# Tool invocations
Application.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Application.map -mmcu=atmega32 -o "Application.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Application.lss: Application.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Application.elf  >"Application.lss"
	@echo 'Finished building: $@'
	@echo ' '

Application.hex: Application.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Application.elf  "Application.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Application.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Application.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Application.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
