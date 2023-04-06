/*
 * led.c
 *
 * Created: 4/5/2023 6:22:55 PM
 *  Author: Omar Taha
 */ 

#include "led.h"

err_state LED_init(uint8_t ledPin, uint8_t ledPort)
{
	DIO_init(ledPin,ledPort,OUTPUT);
	return SUCCESS;
}

err_state LED_on(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin,ledPort,HIGH);
	return SUCCESS;
}

err_state LED_off(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin,ledPort,LOW);
	return SUCCESS;
}

err_state LED_toggle(uint8_t ledPin, uint8_t ledPort)
{
	DIO_toggle(ledPin,ledPort);
	return SUCCESS;
}