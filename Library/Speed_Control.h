#ifndef SPEED_CONTROL_H
#define SPEED_CONTROL_H
#include "stm32f1xx_HAL.h"
void car_speed_control(TIM_HandleTypeDef *htim,uint32_t channel, uint8_t car_speed);
#endif