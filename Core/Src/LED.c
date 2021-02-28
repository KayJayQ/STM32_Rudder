/*
 * LED.c
 *
 *  Created on: 2021年1月27日
 *      Author: Administrator
 */


#include "LED.h"

void LED_Init(){
	//Initialize LED
	LED0_status = 0;
	LED1_status = 0;
}

void LED0_ON(){
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,GPIO_PIN_RESET);
	LED0_status = 1;
}

void LED1_ON(){
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_RESET);
	LED1_status = 1;
}

void LED0_OFF(){
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,GPIO_PIN_SET);
	LED0_status = 0;
}

void LED1_OFF(){
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_SET);
	LED1_status = 0;
}

void LED0_Reverse(){
	if(LED0_status){
		LED0_OFF();
	}else{
		LED0_ON();
	}
}

void LED1_Reverse(){
	if(LED1_status){
		LED1_OFF();
	}else{
		LED1_ON();
	}
}
