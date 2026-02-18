#ifndef WHEELS_AND_NECESSARY_INITS_H
#define WHEELS_AND_NECESSARY_INITS_H
#include "stm32f1xx_hal.h"
extern TIM_HandleTypeDef htim2;
#define GPIO_PORT GPIOB
#define RIGHT_ENABLE_PIN_R 	GPIO_PIN_14
#define LEFT_ENABLE_PIN_R 	GPIO_PIN_15
#define RIGHT_ENABLE_PIN_L 	GPIO_PIN_12
#define LEFT_ENABLE_PIN_L 	GPIO_PIN_13
typedef enum{
	// 1,2 is for the left, and 3,4 is for the right
	CAR_MOVE_FORWARD = 0,//  (1,3) on
	CAR_MOVE_BACKWARD,   //  (2,4) on
	CAR_TURN_LEFT ,     // (2,3) on
	CAR_TURN_RIGHT,    // (1,4) on
	CAR_TURN_OFF    		// 1,2,3,4 off
}Car_status;
void car_move_forward();
void car_move_backward();
void car_turn_left();
void car_turn_right();
void car_turn_off();
void car_init();
#endif
