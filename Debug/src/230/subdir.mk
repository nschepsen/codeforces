################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/230/A.cpp \
../src/230/B.cpp \
../src/230/C.cpp 

OBJS += \
./src/230/A.o \
./src/230/B.o \
./src/230/C.o 

CPP_DEPS += \
./src/230/A.d \
./src/230/B.d \
./src/230/C.d 


# Each subdirectory must supply rules for building sources it contributes
src/230/%.o: ../src/230/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


