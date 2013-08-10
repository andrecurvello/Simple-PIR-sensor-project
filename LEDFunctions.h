/*
* Author: Karolina
* Year: 2013
*  
*	About: this has written functions for communication 
*				 with LED
*	
*/

#include "driverlib and include/hw_gpio.h"
#include "driverlib and include/gpio.h"
#include "driverlib and include/hw_memmap.h"
#include "driverlib and include/sysctl.h"

// LED1 From stellaris board is used
#define LED1_SYSCTL SYSCTL_PERIPH_GPIOF
#define LED1_portNum GPIO_PORTF_BASE
#define LED1_pinNum 0

// if you have more LEDs add definitions here 

// LED states
#define LED_enable 1
#define LED_disable 0

/* 
*	Initializes LED (port, pin) as output at: LED_portNum - port where LED is connected
*																						LED_pinNum - pin where LED is connected
*/
void LEDInit (unsigned int LED_portNum, unsigned int LED_pinNum);

/* 
*	Changes LED state at: LED_portNum - port where LED is connected
*												LED_pinNum - pin where LED is connected
*												state - LED_enable (LED is ON), LED_disable (LED is OFF)
*/
void LEDStateChange (unsigned int LED_portNum, unsigned int LED_pinNum, int state);


