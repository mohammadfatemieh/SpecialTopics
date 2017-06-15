

#ifndef TASKS_UARTTASK_H_
#define TASKS_UARTTASK_H_

#include "microgen.h"
#define START_MSG 0   //first  #
#define MSG_DATA  1   //second #
#define CRC_DATA  2   //third  #

#define CRC_ERROR "CRC_ERROR"
#define NOT_DEF   "NOT_DEF"
#define CRC_NUM   "CRC_NUM"
#define TIMEOUT_PROTOCOL   15


/* Initializes the Node Task and creates all TI-RTOS objects */

void UartTask_init(void);

void UART_setup(void);

void UART_loop(void);


/* global vars */
int pv2wifi_[NUM_OF_COMMANDS];

#endif /* TASKS_NODETASK_H_ */
