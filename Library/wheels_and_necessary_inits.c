#include "wheels_and_necessary_inits.h"
#include "Speed_Control.h"
uint8_t car_speed = 60;
void car_move_forward()
{
		car_speed_control(&htim2, TIM_CHANNEL_1, car_speed);
    car_speed_control(&htim2, TIM_CHANNEL_2, 0);

    car_speed_control(&htim2, TIM_CHANNEL_3, car_speed);
    car_speed_control(&htim2, TIM_CHANNEL_4, 0);
}
void car_move_backward()
{
		car_speed_control(&htim2, TIM_CHANNEL_1, 0);
    car_speed_control(&htim2, TIM_CHANNEL_2, car_speed);

    car_speed_control(&htim2, TIM_CHANNEL_3, 0);
    car_speed_control(&htim2, TIM_CHANNEL_4, car_speed);
}
void car_turn_left()
{
		car_speed_control(&htim2, TIM_CHANNEL_1, 0);
    car_speed_control(&htim2, TIM_CHANNEL_2, car_speed);

    car_speed_control(&htim2, TIM_CHANNEL_3, car_speed);
    car_speed_control(&htim2, TIM_CHANNEL_4, 0);
}
void car_turn_right()
{
		car_speed_control(&htim2, TIM_CHANNEL_1, car_speed);
    car_speed_control(&htim2, TIM_CHANNEL_2, 0);

    car_speed_control(&htim2, TIM_CHANNEL_3, 0);
    car_speed_control(&htim2, TIM_CHANNEL_4, car_speed);
}
void car_turn_off()
{
		car_speed_control(&htim2, TIM_CHANNEL_1, 0);
    car_speed_control(&htim2, TIM_CHANNEL_2, 0);

    car_speed_control(&htim2, TIM_CHANNEL_3, 0);
    car_speed_control(&htim2, TIM_CHANNEL_4, 0);
}
void car_init()
{
		HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
		HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
		HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);
		HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_4);

		// Enable cả 2 BTS
		HAL_GPIO_WritePin(GPIO_PORT, RIGHT_ENABLE_PIN_L | LEFT_ENABLE_PIN_L |RIGHT_ENABLE_PIN_R | LEFT_ENABLE_PIN_R,GPIO_PIN_SET);
}