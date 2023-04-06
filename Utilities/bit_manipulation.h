/*
 * bit_manipulation.h
 *
 * Created: 4/5/2023 11:55:17 PM
 *  Author: Omar Taha
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_
#define Set_Bit(pinNumber,portNumber)		((portNumber) |= (1<<pinNumber))
#define Clear_Bit(pinNumber,portNumber)		((portNumber) &= ~(1<<pinNumber))
#define Read_Bit(pinNumber,portNumber)		(((portNumber) & (1<<pinNumber))>>pinNumber)
#define Toggle_Bit(pinNumber,portNumber)	((portNumber)^=(1<<pinNumber))




#endif /* BIT_MANIPULATION_H_ */