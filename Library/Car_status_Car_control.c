#include "Car_status_Car_control.h"
#include "wheels_and_necessary_inits.h"
uint8_t current_value = 0;
void Car_identify_status(uint8_t data_receive)
{
	switch(data_receive)
	{
		case 'F':
			current_value = CAR_MOVE_FORWARD;
			break;
		case 'B':
			current_value = CAR_MOVE_BACKWARD;
			break;
		case 'R':
			current_value = CAR_TURN_RIGHT;
			break;
		case 'L':
			current_value = CAR_TURN_LEFT;
			break;
		case 'S':
			current_value = CAR_TURN_OFF;
			break;
		}
}
void Car_driven_by_bluetooth(uint8_t value)
{
	switch(value)
		{
			case CAR_MOVE_FORWARD:
				car_move_forward();
				break;
			case CAR_MOVE_BACKWARD:
				car_move_backward();
				break;
			case CAR_TURN_LEFT:
				car_turn_left();
				break;
			case CAR_TURN_RIGHT:
				car_turn_right();
				break;
			case CAR_TURN_OFF:
				car_turn_off();
				break;
		}
}