/*
 * LedFunctions.c
 *
 *  Created on: Apr 18, 2026
 *      Author: shahar
 */


/*
 * LedFunctions.c
 *
 *  Created on: Mar 23, 2026
 *      Author: shahar
 */
#include <stdint.h>
#include "LedFunctions.h"

//RCC PERIPHERAL ADRESS----> 0x40023800+0x30
//GPIOD PERIPHERAL ADRESS----->    0x4002 0C00+0x00

#define GREEN_LED_ADRESS

volatile  uint32_t* const RCC_AHB1ENR=(uint32_t*)(0x40023800+0x30);
volatile  uint32_t* const  GPIOD_MODER_FOR_PIN=(uint32_t*)(0x40020C00+0x00);//GPIOD MODER
volatile  uint32_t* const  GPIOx_ODR=(uint32_t*)(0x40020C00+0x14);//GPIOD output

void volatile turnOnBlueLED(){
	//OPEN CLOCK FOR GPIOD
	*RCC_AHB1ENR|=(1<<3);

	//PUT GPIOD pin15 IN OUTPUT MODE
	*GPIOD_MODER_FOR_PIN &= ~(3 << 30);
	*GPIOD_MODER_FOR_PIN |=  (1 << 30);

	//turn on pin15 in GPIOD
	*GPIOx_ODR|=(1<<15);


}


void volatile turnOffBlueLED(){
	//OPEN CLOCK FOR GPIOD
	*RCC_AHB1ENR|=(1<<3);

	//PUT GPIOD pin15 IN OUTPUT MODE
	*GPIOD_MODER_FOR_PIN &= ~(3 << 30);
	*GPIOD_MODER_FOR_PIN |=  (1 << 30);

	//turn on pin15 in GPIOD
	*GPIOx_ODR&=~(1<<15);


}

