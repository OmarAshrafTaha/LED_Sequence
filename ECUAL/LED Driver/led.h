/*
 * led.h
 *
 * Created: 4/5/2023 6:23:05 PM
 *  Author: Omar Taha
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/dio.h"
#include "../../MCAL/Timers Driver/timers.h"

/************************************************************************/
/*Description: Initialize a led as an output                            */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_init(uint8_t ledPin, uint8_t ledPort);

/************************************************************************/
/*Description: Sets a led state as HIGH                                 */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_on(uint8_t ledPin, uint8_t ledPort);

/************************************************************************/
/*Description: Sets a led state as LOW                                  */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_off(uint8_t ledPin, uint8_t ledPort);

/************************************************************************/
/*@Description: Toggles a led state                                     */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_toggle(uint8_t ledPin, uint8_t ledPort);

/************************************************************************/
/*@Description: Blink a led depending on the on and off times           */
/*@param ledPin			=>	pin number									*/
/*@param ledPort		=>  port number									*/
/*@param on_time		=>  led on time									*/
/*@param off_time		=>	led off time								*/
/************************************************************************/
err_state LED_blink(uint8_t ledPin, uint8_t ledPort,float on_time, float off_time);



/******************************************************************************/
/*@Description: Blink an array of leds depending on the on and off times      */
/*@param mask			=>	mask for the array of leds						  */
/*@param ledPort		=>  port number										  */
/*@param on_time		=>  led on time										  */
/*@param off_time		=>	led off time									  */
/******************************************************************************/
err_state LED_array_blink(uint8_t mask, uint8_t ledPort,float on_time, float off_time);

/************************************************************************/
/*@Description: Sets the state of an array of leds to HIGH              */
/*@param mask			=>	mask for the array of leds 					*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_array_on(uint8_t mask, uint8_t ledPort);

/************************************************************************/
/*@Description: Sets the state of an array of leds to LOW               */
/*@param mask			=>	mask for the array of leds 					*/
/*@param ledPort		=>  port number									*/
/************************************************************************/
err_state LED_array_off(uint8_t mask, uint8_t ledPort);




#endif /* LED_H_ */