################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ControlCedulaC.c 

OBJS += \
./ControlCedulaC.o 

C_DEPS += \
./ControlCedulaC.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -I"C:\Program Files\Java\jdk1.8.0_251\include\win32" -I"C:\cygwin64\bin" -I"C:\Program Files\Java\jdk1.8.0_251\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


