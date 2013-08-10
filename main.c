/*
* Author: Karolina
* Year: 2013
*  
*	About project: readme.txt
*	
*/

#include "pirfunctions.h"
#include "ledfunctions.h"
#include "driverlib and include/gpio.h"
#include "driverlib and include/sysctl.h"


int main(){
	
	int i;
	
	// set the clocking to run directly from the crystal
	SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |
                   SYSCTL_XTAL_8MHZ);
  
	// set port and pin for LED
	LEDInit(LED1_portNum, LED1_pinNum);
	
	// set port and pin for PIR
	PIRInit(PIR1_portNum, PIR1_pinNum);
	
	while (1)
		{
			if (PIRStatus(PIR1_portNum, PIR1_pinNum))
				{
					LEDStateChange(LED1_portNum, LED1_pinNum, LED_enable);
					
					for (i = 0; i < 1000; i++); // simple delay
				}	
				
			LEDStateChange(LED1_portNum, LED1_pinNum, LED_disable);		
		}	
	
	
	return 0;
}
