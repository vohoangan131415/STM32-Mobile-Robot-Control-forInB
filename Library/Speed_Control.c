#include "Speed_Control.h"

void car_speed_control(TIM_HandleTypeDef *htim,uint32_t channel, uint8_t car_speed)
{
	//speed: 1 -> 100
	//  100 (max speed) => 100 (TIM->ARR)
	//	car_speed =>? (TIM=>CCR)
	uint8_t	speed =  car_speed * (TIM2->ARR/99);
	switch(channel)
	{
		case TIM_CHANNEL_1:
			TIM2->CCR1 = speed;
		break;
		case TIM_CHANNEL_2:
			TIM2->CCR2 = speed;
		break;
		case TIM_CHANNEL_3:
			TIM2->CCR3 = speed;
		break;
		case TIM_CHANNEL_4:
			TIM2->CCR4 = speed;
		break;
	}
}