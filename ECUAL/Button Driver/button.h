/*
 * button.h
 *
 * Created: 4/5/2023 11:11:28 PM
 *  Author: Omar Taha
 */ 
#include "../../MCAL/DIO Driver/dio.h"

#ifndef BUTTON_H_
#define BUTTON_H_
err_state BUTTON_init(uint8_t pinNumber, uint8_t portNumber);
err_state BUTTON_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value);





#endif /* BUTTON_H_ */