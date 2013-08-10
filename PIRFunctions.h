/*
* Author: Karolina
* Year: 2013
*  
*	About: this has written functions for communication 
*				 with PIR sensor
*	
*/

#include "driverlib and include/hw_gpio.h"
#include "driverlib and include/gpio.h"
#include "driverlib and include/hw_memmap.h"
#include "driverlib and include/sysctl.h"

#define PIR1_SYSCTL SYSCTL_PERIPH_GPIOA
#define PIR1_portNum GPIO_PORTA_BASE
#define PIR1_pinNum 7

//if you have more sensors add definitions here 

/* 
*	Initializes PIR sensor as input at: PIR_portNum - port where PIR is connected
*																			PIR_pinNum - pin where PIR is connected
*/
void PIRInit (unsigned int PIR_portNum, unsigned int PIR_pinNum);

/* 
*	Reads PIR sensor status at: PIR_portNum - port where PIR is connected
*														  PIR_pinNum - pin where PIR is connected
* returns 0 - no motion
*					1 - motion
*/
unsigned long  PIRStatus (unsigned int PIR_portNum, unsigned int PIR_pinNum);
