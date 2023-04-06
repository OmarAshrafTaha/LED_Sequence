/*
 * led.c
 *
 * Created: 4/5/2023 6:22:55 PM
 *  Author: Omar Taha
 */ 

#include "led.h"

void LED_init(uint8_t ledPin, uint8_t ledPort)
{
	DIO_init(ledPin,ledPort,OUTPUT);
}
void LED_on(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin,ledPort,HIGH);
}
void LED_off(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin,ledPort,LOW);
}
void LED_toggle(uint8_t ledPin, uint8_t ledPort)
{
	DIO_toggle(ledPin,ledPort);
}