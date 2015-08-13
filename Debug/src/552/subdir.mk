################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/552/A.cpp \
../src/552/B.cpp \
../src/552/C.cpp \
../src/552/D.cpp \
../src/552/E.cpp 

OBJS += \
./src/552/A.o \
./src/552/B.o \
./src/552/C.o \
./src/552/D.o \
./src/552/E.o 

CPP_DEPS += \
./src/552/A.d \
./src/552/B.d \
./src/552/C.d \
./src/552/D.d \
./src/552/E.d 


# Each subdirectory must supply rules for building sources it contributes
src/552/%.o: ../src/552/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


