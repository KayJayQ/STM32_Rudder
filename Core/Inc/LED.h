/*
 * LED.h
 *
 *  Created on: 2021年1月27日
 *      Author: Administrator
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "stm32f1xx_hal.h"

//PA8 LED0, PD2 LED1

void LED_Init(void);

void LED0_ON(void);
void LED0_OFF(void);
void LED1_ON(void);
void LED1_OFF(void);

void LED0_Reverse(void);
void LED1_Reverse(void);


int LED0_status;
int LED1_status;


#endif /* INC_LED_H_ */
