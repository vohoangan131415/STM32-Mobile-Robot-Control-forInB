#ifndef CAR_STATUS_CAR_CONTROL_H
#define CAR_STATUS_CAR_CONTROL_H
#include "stm32f1xx_hal.h"
extern uint8_t current_value;
void Car_identify_status(uint8_t data_receive);
void Car_driven_by_bluetooth(uint8_t value);



#endif