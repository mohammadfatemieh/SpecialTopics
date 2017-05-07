/*
 * Copyright (c) 2015-2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== uartecho.c ========
 */
//#include <stdint.h>
//#include <stddef.h>

#include <xdc/std.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Clock.h>

#include <ti/drivers/PIN.h>


/* Driver Header files */
//#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>

/* Example/Board Header files */
#include "Board.h"

//#include "uartTask.h"

/***** Defines *****/

#define UART_TASK_STACK_SIZE 1024
#define UART_TASK_PRIORITY  15

/***** Variable declarations *****/
static Task_Params uartTaskParams;
static uint8_t uartTaskStack[UART_TASK_STACK_SIZE];
Task_Struct uartTask;     /*not static so you can see in ROV */

/**
 * COMMON VARIABLES
 */
UART_Handle uart;
UART_Params uartParams;
char        input;
const char  echoPrompt[] = "Echoing characters:\r\n";



/***** Prototypes *****/
static void uartTaskFunction(UArg arg0, UArg arg1);

/***** Function definitions *****/
void UartTask_init(void)
{




	    /* Create the node task */
	    Task_Params_init(&uartTaskParams);
	    uartTaskParams.stackSize = UART_TASK_STACK_SIZE;
	    uartTaskParams.priority = UART_TASK_PRIORITY;
	    uartTaskParams.stack = &uartTaskStack;
	     Task_construct(&uartTask, uartTaskFunction, &uartTaskParams, NULL);
	 /* */
}


/*
 *  ======== mainThread ========
 */
static void uartTaskFunction(UArg arg0, UArg arg1)
{
	 char        input;
	 const char  echoPrompt[] = "Echoing characters:\r\n";

//	 UART_Handle uart;
//	 UART_Params uartParams;

	 return;
	// while(1);

	 /* Call driver init functions */
//	UART_init();

	/* Create a UART with data processing off.
	UART_Params_init(&uartParams);
	uartParams.writeDataMode = UART_DATA_BINARY;
	uartParams.readDataMode = UART_DATA_BINARY;
	uartParams.readReturnMode = UART_RETURN_FULL;
	uartParams.readEcho = UART_ECHO_OFF;
	uartParams.baudRate = 115200;

	uart = UART_open(Board_UART0, &uartParams);

	if (uart == NULL) {
		 UART_open() failed
		while (1);
	}

	UART_write(uart, echoPrompt, sizeof(echoPrompt));

	/* Loop forever echoing */
//	while (1) {
//		UART_read(uart, &input, 1);
//		UART_write(uart, &input, 1);
//	}

}

void UART_setup(void) {

	

//	UART_Handle uart;
//  UART_Params uartParams;

    /* Call driver init functions */
	UART_init();
	/* Create a UART with data processing off. */
	UART_Params_init(&uartParams);
	uartParams.writeDataMode = UART_DATA_BINARY;
	uartParams.readDataMode = UART_DATA_BINARY;
	uartParams.readReturnMode = UART_RETURN_FULL;
	uartParams.readEcho = UART_ECHO_OFF;
	uartParams.baudRate = 115200;

	uart = UART_open(Board_UART0, &uartParams);
	
	if (uart == NULL) {
	    System_abort("Error opening the UART");
	}

	UART_write(uart, echoPrompt, sizeof(echoPrompt));


}

void UART_loop(void) {

	UART_read(uart, &input, 1);
   // input = "d";
	UART_write(uart, &input, 1);

}