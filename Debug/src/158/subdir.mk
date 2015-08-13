################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/158/A.cpp \
../src/158/B.cpp \
../src/158/D.cpp 

OBJS += \
./src/158/A.o \
./src/158/B.o \
./src/158/D.o 

CPP_DEPS += \
./src/158/A.d \
./src/158/B.d \
./src/158/D.d 


# Each subdirectory must supply rules for building sources it contributes
src/158/%.o: ../src/158/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


