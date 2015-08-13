################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/540/A.cpp \
../src/540/B.cpp 

OBJS += \
./src/540/A.o \
./src/540/B.o 

CPP_DEPS += \
./src/540/A.d \
./src/540/B.d 


# Each subdirectory must supply rules for building sources it contributes
src/540/%.o: ../src/540/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


