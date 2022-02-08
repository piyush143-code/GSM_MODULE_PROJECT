################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../USB_HOST/Target/usbh_conf.c \
../USB_HOST/Target/usbh_platform.c 

OBJS += \
./USB_HOST/Target/usbh_conf.o \
./USB_HOST/Target/usbh_platform.o 

C_DEPS += \
./USB_HOST/Target/usbh_conf.d \
./USB_HOST/Target/usbh_platform.d 


# Each subdirectory must supply rules for building sources it contributes
USB_HOST/Target/%.o: ../USB_HOST/Target/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DUSE_HAL_DRIVER -DSTM32F407xx -I"C:/workspace/UART2_3_Interface/USB_HOST/App" -I"C:/workspace/UART2_3_Interface/USB_HOST/Target" -I"C:/workspace/UART2_3_Interface/Core/Inc" -I"C:/workspace/UART2_3_Interface/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/workspace/UART2_3_Interface/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"C:/workspace/UART2_3_Interface/Middlewares/ST/STM32_USB_Host_Library/Core/Inc" -I"C:/workspace/UART2_3_Interface/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc" -I"C:/workspace/UART2_3_Interface/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/workspace/UART2_3_Interface/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


