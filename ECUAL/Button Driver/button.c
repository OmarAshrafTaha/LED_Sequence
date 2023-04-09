/*
 * button.c
 *
 * Created: 4/5/2023 11:11:38 PM
 *  Author: Omar Taha
 */ 
#include "button.h"

/************************************************************************/
/*@Description: Initialize a button as an Input                         */
/*@param pinNumber		=>	pin number									*/
/*@param portNumber		=>  port number									*/
/************************************************************************/
err_state BUTTON_init(uint8_t pinNumber, uint8_t portNumber)
{
	DIO_init(pinNumber,portNumber,INPUT);
	return SUCCESS;
}

/************************************************************************/
/*@Description: Read a button current state                             */
/*@param pinNumber		=>	pin number									*/
/*@param portNumber		=>  port number								    */
/*@param *value			=>  refrence to store the read value in			*/
/************************************************************************/
err_state BUTTON_read(uint8_t pinNumber, uint8_t portNumber, pin_state *value)
{
	DIO_read(pinNumber,portNumber,value);
	return SUCCESS;
}