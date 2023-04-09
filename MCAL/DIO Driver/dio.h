/*
 * dio.h
 *
 * Created: 4/5/2023 3:53:43 PM
 *  Author: Omar Taha
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/registers.h"
#include "../../Utilities/bit_manipulation.h"


#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

/*******************************************************************************************/
/*@Description: Initialize a pin as output or input depending on the direction passed      */
/*@param pinNumber		=>	pin number													   */
/*@param portNumber		=>  port number													   */
/*@param direction      =>  pin direction										    	   */
/*******************************************************************************************/
err_state DIO_init(uint8_t pinNumber, uint8_t portNumber, pin_dir direction);   //initialize dio direction

/*******************************************************************************************/
/*@Description: Sets a pin as HIGH or LOW depending on the state passed                    */
/*@param pinNumber		=>	pin number													   */
/*@param portNumber		=>  port number													   */
/*@param value	        =>  pin desired state											   */
/*******************************************************************************************/
err_state DIO_write(uint8_t pinNumber, uint8_t portNumber, pin_state value);  //write data to dio 

/*******************************************************************************************/
/*@Description: Toggles a pin state									                       */
/*@param pinNumber		=>	pin number													   */
/*@param portNumber		=>  port number													   */
/*******************************************************************************************/
err_state DIO_toggle(uint8_t pinNumber, uint8_t portNumber); //toggle dio 

/*******************************************************************************************/
/*@Description: Reads a pin state									                       */
/*@param pinNumber		=>	pin number													   */
/*@param portNumber		=>  port number													   */
/*@param *value			=>  refrence to store the read value in							   */
/*******************************************************************************************/
err_state DIO_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value);   //read dio 

/*******************************************************************************************/
/*@Description: Sets an array of pins as HIGH or LOW depending on the state passed         */
/*@param mask			=>	mask														   */
/*@param portNumber		=>  port number													   */
/*@param value	        =>  mask desired state											   */
/*******************************************************************************************/
err_state DIO_array_write(uint8_t mask, uint8_t portNumber, pin_state value);

#endif /* DIO_H_ */