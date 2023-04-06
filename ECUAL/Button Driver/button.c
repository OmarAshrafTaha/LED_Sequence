/*
 * button.c
 *
 * Created: 4/5/2023 11:11:38 PM
 *  Author: Omar Taha
 */ 
#include "button.h"

err_state BUTTON_init(uint8_t pinNumber, uint8_t portNumber)
{
	DIO_init(pinNumber,portNumber,INPUT);
	return SUCCESS;
}
err_state BUTTON_read(uint8_t pinNumber, uint8_t portNumber, pin_state *value)
{
	DIO_read(pinNumber,portNumber,value);
	return SUCCESS;
}