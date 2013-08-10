/*
* Author: Karolina 
* Year: 2013
*  
*	About: this has written functions for communication 
*				 with PIR sensor
*	
*/

#include "PIRFunctions.h"

void PIRInit (unsigned int PIR_portNum, unsigned int PIR_pinNum){
	
	SysCtlPeripheralEnable(PIR1_SYSCTL);
	
	GPIOPinTypeGPIOInput(PIR_portNum, (1 << PIR_pinNum));
	
	return;

}


unsigned long  PIRStatus (unsigned int PIR_portNum, unsigned int PIR_pinNum){
	
	unsigned long retVal;
	
	retVal = GPIOPinRead (PIR_portNum, (1 << PIR_pinNum));
	
	return retVal;
	
}

