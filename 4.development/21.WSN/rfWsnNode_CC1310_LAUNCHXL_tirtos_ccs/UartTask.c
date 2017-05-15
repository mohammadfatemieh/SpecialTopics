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

#include <stdlib.h> /* atoi */

/* Driver Header files */
//#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>

/* Example/Board Header files */
#include "Board.h"

/* uart task */

#include "uartTask.h"
#include "microgen.h"

/***** Defines *****/

#define UART_TASK_STACK_SIZE 1024
#define UART_TASK_PRIORITY  3

/***** Variable declarations *****/
static Task_Params uartTaskParams;
static uint8_t uartTaskStack[UART_TASK_STACK_SIZE];
Task_Struct uartTask;     /*not static so you can see in ROV */
Event_Struct uartEvent;  /* not static so you can see in ROV */
static Event_Handle uartEventHandle;


//pv2wifi pv2wifi_;

int pv2wifi_[NUM_OF_COMMANDS];

ugen_comm pv2wifi_commands[NUM_OF_COMMANDS];

char receivedMessage[100];
char receivedNumber[10];
//boolean status_command;
int STATE_cardinal = 0;
int toSendCRC = 0, nbytes = 0, cnt = 0;
//pv2rpi pv2rpi_;


/* Clock for the fast report timeout */
//Clock_Struct fastReportTimeoutClock;     /* not static so you can see in ROV */
//static Clock_Handle fastReportTimeoutClockHandle;
/**
 * COMMON VARIABLES
 */
UART_Handle uart;
UART_Params uartParams;
char        input;
const char  echoPrompt[] = "Echoing characters:\r\n";



/***** Prototypes *****/

int  runProtocol(int count);
int manage_message(void);
static void uartTaskFunction(UArg arg0, UArg arg1);

void UartTask_init(void) {

    System_printf("ENTERING UART INIT");

    /* Create the node task */
       Task_Params_init(&uartTaskParams);
       uartTaskParams.stackSize = UART_TASK_STACK_SIZE;
       uartTaskParams.priority = UART_TASK_PRIORITY;
       uartTaskParams.stack = &uartTaskStack;
       Task_construct(&uartTask, uartTaskFunction, &uartTaskParams, NULL);

}

static void uartTaskFunction(UArg arg0, UArg arg1) {

    char input;
    UART_setup();
    int count;






    while(1) {

        /* We want to sleep for 10000 microseconds */
        UInt32 milis;
        milis = 1000 / Clock_tickPeriod;
        Task_sleep(milis*10000);

        UART_read(uart, &input, 1);

        for(count=0; count < NUM_OF_COMMANDS; count++) {
            UART_write(uart, pv2wifi_commands[count].command, pv2wifi_commands[count].size);

            //clear protocol
            toSendCRC=0;
            nbytes=0;
            receivedMessage[0]='\0';
            STATE_cardinal=0;
            while( runProtocol(count) != 0);
            Task_sleep(milis*5);
        }

    }

}

void UART_setup(void) {

    pv2wifi_commands[0].command="#DCBUS#05#";
    pv2wifi_commands[1].command="#VPV#03#";
    pv2wifi_commands[2].command="#IPV#03#";
    pv2wifi_commands[3].command="#PWR#03#";

    pv2wifi_commands[0].size=10;
    pv2wifi_commands[1].size=8;
    pv2wifi_commands[2].size=8;
    pv2wifi_commands[3].size=8;
    pv2wifi_[0] = 0;
    pv2wifi_[1] = 0;
    pv2wifi_[2] = 0;
    pv2wifi_[3] = 0;


//	UART_Handle uart;
//  UART_Params uartParams;

    /* Call driver init functions */
	UART_init();
	/* Create a UART with data processing off. */
	UART_Params_init(&uartParams);
	uartParams.writeDataMode = UART_DATA_BINARY;
	uartParams.readDataMode = UART_DATA_BINARY;
	//uartParams.readTimeout =
	uartParams.readReturnMode = UART_RETURN_FULL;
	uartParams.readEcho = UART_ECHO_OFF;
	uartParams.baudRate = 115200;

	uart = UART_open(Board_UART0, &uartParams);
	
	if (uart == NULL) {
	    System_abort("Error opening the UART");
	}

	UART_write(uart, echoPrompt, sizeof(echoPrompt));


}

int  runProtocol(int count) {


    //UART_read(uart, &input, 1);
                //receivedMessage[nbytes] = U2RXREG;
      UART_read(uart, &receivedMessage[nbytes], 1);
       //START STATE MACHINE TO PROCESS INCOMING BUFFER

      if(receivedMessage[nbytes]=='#') {
          if(STATE_cardinal==START_MSG)  {       //START MESSAGE
              STATE_cardinal = MSG_DATA;
              receivedMessage[nbytes]='\0';
          }
          else if(STATE_cardinal==MSG_DATA) {      //MESSAGE DATA
              STATE_cardinal = CRC_DATA;
              receivedMessage[nbytes]='\0';
              cnt=10;
          }
          else if(STATE_cardinal==CRC_DATA) {      //CRC DATA
              if(nbytes == toSendCRC) {
                  receivedMessage[nbytes]='\0';
                  //receivedNumber[nbytes-1] = '\0';
                  //setMessage(mensagem);
                  //manageMessage();

                  pv2wifi_[count] = manage_message();
                   return 0;
              }
              else {
                  //strcpy(receivedMessage, CRC_ERROR);
                  //nbytes=strlen(CRC_ERROR);
                  receivedMessage[nbytes]='\0';
                  //microGen_serial.setMessage(mensagem);
                  pv2wifi_[count] = manage_message();
                  return 0;
             }
          }
      }
      else if(STATE_cardinal==MSG_DATA) {
          //check if is a command with value
          //if(receivedMessage[nbytes]=='{') {
              //nop
              // enableCommand();
          //}
          receivedNumber[nbytes]=receivedMessage[nbytes];
          nbytes++;
      }
      else if(STATE_cardinal==CRC_DATA) {
          toSendCRC+=(receivedMessage[nbytes]-48)*cnt;
          cnt/=10;
      }


      return -1;

}

void UART_loop(void) {

   /* if (UARTCharsAvail(Board_UART0) ) {


    }
    */
}


int manage_message(void) {


    UART_write(uart, &receivedNumber, 3);
    return atoi(receivedNumber);//number;
}