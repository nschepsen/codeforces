################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CXX_SRCS += \
../src/546/B.cxx 

CPP_SRCS += \
../src/546/A.cpp \
../src/546/C.cpp \
../src/546/D.cpp 

CXX_DEPS += \
./src/546/B.d 

OBJS += \
./src/546/A.o \
./src/546/B.o \
./src/546/C.o \
./src/546/D.o 

CPP_DEPS += \
./src/546/A.d \
./src/546/C.d \
./src/546/D.d 


# Each subdirectory must supply rules for building sources it contributes
src/546/%.o: ../src/546/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/546/%.o: ../src/546/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


