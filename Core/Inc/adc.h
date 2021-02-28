/*
 * adc.h
 *
 *  Created on: Feb 6, 2021
 *      Author: Administrator
 */

#ifndef ADC_H_
#define ADC_H_

#include "stm32f1xx_hal.h"

#define ADC_CHANNEL_CNT 3

extern uint32_t AD_Buf[ADC_CHANNEL_CNT];
extern uint32_t DMA_CNT;


#endif /* ADC_H_ */
