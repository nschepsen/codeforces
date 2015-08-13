################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/266/A.cpp \
../src/266/B.cpp 

OBJS += \
./src/266/A.o \
./src/266/B.o 

CPP_DEPS += \
./src/266/A.d \
./src/266/B.d 


# Each subdirectory must supply rules for building sources it contributes
src/266/%.o: ../src/266/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


