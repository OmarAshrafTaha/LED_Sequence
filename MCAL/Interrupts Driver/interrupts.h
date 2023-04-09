/*
 * interrupts.h
 *
 * Created: 4/7/2023 12:23:35 AM
 *  Author: Omar Taha
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#include "../../Utilities/registers.h"
#include "../../Utilities/bit_manipulation.h"
/************************************************************************/
/* External Interrupts                                                  */
/************************************************************************/
#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)

/************************************************************************/
/* Timer 0 Interrupts                                                   */
/************************************************************************/
/*#define TIMER0_OVF_INT __vector_12*/



#endif /* INTERRUPTS_H_ */