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

void DIO_init(uint8_t pinNumber, uint8_t portNumber, pin_dir direction);   //initialize dio direction
void DIO_write(uint8_t pinNumber, uint8_t portNumber, pin_state value);  //write data to dio 
void DIO_toggle(uint8_t pinNumber, uint8_t portNumber); //toggle dio 
void DIO_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value);   //read dio 



#endif /* DIO_H_ */