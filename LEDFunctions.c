/*
* Author: Karolina
* Year: 2013
*  
*	About: this has written functions for communication 
*				 with LED
*	
*/

#include "LEDFunctions.h"

void LEDInit (unsigned int LED_portNum, unsigned int LED_pinNum){
	
	SysCtlPeripheralEnable(LED1_SYSCTL);
	
	GPIOPinTypeGPIOOutput(LED1_portNum, (1<<LED1_pinNum));
	
	return;
	
}



void LEDStateChange (unsigned int LED_portNum, unsigned int LED_pinNum, int state){
	
	if (state != 0)
		{
			GPIOPinWrite(LED_portNum, (1 << LED_pinNum), 0xFF);
		}
		else
		{
			GPIOPinWrite(LED_portNum, (1 << LED_pinNum), 0);
		}
		
	return;
	
}
