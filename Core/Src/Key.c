/*
 * Key.c
 *
 *  Created on: 2021年1月27日
 *      Author: Administrator
 */

#include "Key.h"

KEY_State KEY0_get(){
	if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_1) == GPIO_PIN_RESET){
		HAL_Delay(10);
		if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_1) == GPIO_PIN_RESET){
			while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_1) == GPIO_PIN_RESET);
			return KEY0_DOWN;
		}
	}
	return KEY0_UP;
}

KEY_State KEY1_get(){
	if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13) == GPIO_PIN_RESET){
			HAL_Delay(10);
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13) == GPIO_PIN_RESET){
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13) == GPIO_PIN_RESET);
				return KEY1_DOWN;
			}
		}
		return KEY1_UP;
}
