/*
 * led.c
 *
 * Created: 4/5/2023 6:22:55 PM
 *  Author: Omar Taha
 */ 

#include "led.h"



/************************************************************************/
/*Description: Initialize a led as an output                            */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_init(uint8_t ledPin, uint8_t ledPort)
{
	DIO_init(ledPin,ledPort,OUTPUT);
	return SUCCESS;
}

/************************************************************************/
/*Description: Sets a led state as HIGH                                 */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_on(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin,ledPort,HIGH);
	return SUCCESS;
}

/************************************************************************/
/*Description: Sets a led state as LOW                                  */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_off(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin,ledPort,LOW);
	return SUCCESS;
}

/************************************************************************/
/*@Description: Toggles a led state                                     */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_toggle(uint8_t ledPin, uint8_t ledPort)
{
	DIO_toggle(ledPin,ledPort);
	return SUCCESS;
}

/************************************************************************/
/*@Description: Blink a led depending on the on and off times           */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/*@param on_time		=>  led on time									*/
/*@param off_time		=>	led off time								*/
/************************************************************************/
err_state LED_blink(uint8_t ledPin, uint8_t ledPort,float on_time, float off_time)
{
	LED_on(ledPin,ledPort);
	timer_delay(on_time);
	LED_off(ledPin,ledPort);
	timer_delay(off_time);

	
	return SUCCESS;
}


/************************************************************************/
/*@Description: Sets the state of an array of leds to HIGH              */
/*@param mask			=>	mask for the array of leds 					*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_array_on(uint8_t mask, uint8_t ledPort)
{
	DIO_array_write(mask,ledPort,HIGH);
	return SUCCESS;
}

/************************************************************************/
/*@Description: Sets the state of an array of leds to LOW               */
/*@param mask			=>	mask for the array of leds 					*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_array_off(uint8_t mask, uint8_t ledPort)
{
	DIO_array_write(mask,ledPort,LOW);
	return SUCCESS;
}

// err_state LED_array_toggle(uint8_t mask, uint8_t ledPort)
// {
// 	DIO_array_toggle(mask,ledPort);
// 	return SUCCESS;
// }


/******************************************************************************/
/*@Description: Blink an array of leds depending on the on and off times      */
/*@param mask			=>	mask for the array of leds						  */
/*@param ledPort		=>  port number										  */
/*@param on_time		=>  led on time										  */
/*@param off_time		=>	led off time									  */
/******************************************************************************/
err_state LED_array_blink(uint8_t mask, uint8_t ledPort,float on_time, float off_time)
{
		LED_array_on(mask,ledPort);
		timer_delay(on_time);
		LED_array_off(mask,ledPort);
		timer_delay(off_time);
		return SUCCESS;
}