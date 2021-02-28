/*
 * Key.h
 *
 *  Created on: 2021年1月27日
 *      Author: Administrator
 */

#ifndef KEY_H_
#define KEY_H_

#include "stm32f1xx_hal.h"

typedef enum{
	KEY0_UP,
	KEY0_DOWN,
	KEY1_UP,
	KEY1_DOWN
} KEY_State;

KEY_State KEY0_get(void);
KEY_State KEY1_get(void);

#endif /* KEY_H_ */
