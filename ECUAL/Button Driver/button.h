/*
 * button.h
 *
 * Created: 4/5/2023 11:11:28 PM
 *  Author: Omar Taha
 */ 
#include "../../MCAL/DIO Driver/dio.h"

#ifndef BUTTON_H_
#define BUTTON_H_

/************************************************************************/
/*@Description: Initialize a button as an Input                         */
/*@param pinNumber		=>	pin number									*/
/*@param portNumber		=>  port number									*/
/************************************************************************/
err_state BUTTON_init(uint8_t pinNumber, uint8_t portNumber);

/************************************************************************/
/*@Description: Read a button current state                             */
/*@param pinNumber		=>	pin number									*/
/*@param portNumber		=>  port number								    */
/*@param *value			=>  refrence to store the read value in			*/
/************************************************************************/
err_state BUTTON_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value);





#endif /* BUTTON_H_ */