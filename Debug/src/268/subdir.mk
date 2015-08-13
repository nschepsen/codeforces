################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/268/A.cpp \
../src/268/B.cpp 

OBJS += \
./src/268/A.o \
./src/268/B.o 

CPP_DEPS += \
./src/268/A.d \
./src/268/B.d 


# Each subdirectory must supply rules for building sources it contributes
src/268/%.o: ../src/268/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


