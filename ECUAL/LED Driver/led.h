/*
 * led.h
 *
 * Created: 4/5/2023 6:23:05 PM
 *  Author: Omar Taha
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/dio.h"

err_state LED_init(uint8_t ledPin, uint8_t ledPort);
err_state LED_on(uint8_t ledPin, uint8_t ledPort);
err_state LED_off(uint8_t ledPin, uint8_t ledPort);
err_state LED_toggle(uint8_t ledPin, uint8_t ledPort);




#endif /* LED_H_ */