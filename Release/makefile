################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
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
Pierwszy.lss \

FLASH_IMAGE += \
Pierwszy.hex \

EEPROM_IMAGE += \
Pierwszy.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Pierwszy.elf secondary-outputs

# Tool invocations
Pierwszy.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Pierwszy.map -mmcu=atmega8 -o "Pierwszy.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Pierwszy.lss: Pierwszy.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Pierwszy.elf  >"Pierwszy.lss"
	@echo 'Finished building: $@'
	@echo ' '

Pierwszy.hex: Pierwszy.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex Pierwszy.elf  "Pierwszy.hex"
	@echo 'Finished building: $@'
	@echo ' '

Pierwszy.eep: Pierwszy.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Pierwszy.elf  "Pierwszy.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Pierwszy.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega8 Pierwszy.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Pierwszy.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
