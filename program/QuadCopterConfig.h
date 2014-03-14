#ifndef __QUADCOPTER_CONFIG_H
#define __QUADCOPTER_CONFIG_H
/*RADIO CONTROL*/
#define USE_FUTABA_CONTROLLER 0
#define USE_WFLY_CONTROLLER 1
/* Hardware environments */
#define configFLIGHT_CONTROL_BOARD	1 	//Choose whether to ignore nRF24L01 or not(0=ignore);
#define configSD_BOARD			0		//Choose whether to ignore SD card or not (0=ignore);

/* Status report functions */
#define configSTATUS_GUI		0
#define configSTATUS_SHELL		1

/* Includes */
//FreeRTOS
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

//System
#include "main.h"
#include "sys_manager.h"
#include "std.h"
#include "QCopterFC_ahrs.h"
#include "QCopterFC_ctrl.h"
#include "sensor_correct.h"

//Algorithm
#include "algorithm_pid.h"
#include "algorithm_moveAve.h"
#include "algorithm_quaternion.h"
#include "algorithm_mathUnit.h"

//Driver
#include "stm32f4_system.h"
#include "stm32f4xx_conf.h"
#include "stm32f4_delay.h"
#include "stm32f4_flash.h"
#include "stm32f4_i2c.h"
#include "stm32f4_spi.h"
#include "sdio.h"

//Module
#include "module_ak8975.h"
#include "module_board.h"
#include "module_motor.h"
#include "module_mpu6050.h"
#include "module_mpu9150.h"
#include "module_ms5611.h"
#include "module_nrf24l01.h"
#include "module_rs232.h"
#include "module_sensor.h"
#include "stm32f4_sdio.h"

//Shell
#include "linenoise.h"
#include "shell.h"
#include "parser.h"

//Unit test
#include "test.h"

#endif
