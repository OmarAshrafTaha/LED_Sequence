/*
 * led_sequence.h
 *
 * Created: 4/6/2023 1:20:36 AM
 *  Author: Omar Taha
 */ 


#ifndef LED_SEQUENCE_1_H_
#define LED_SEQUENCE_1_H_
#include "../../MCAL/DIO Driver/dio.h"
#include "../../ECUAL/LED Driver/led.h"
#include "../../ECUAL/Button Driver/button.h"

#define Button_1_Port PORT_D
#define Button_1_Pin  2

err_state LED_Sequence();

#endif /* LED_SEQUENCE_1_H_ */