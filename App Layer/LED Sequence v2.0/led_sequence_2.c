
/*
 * led_sequence_2.c
 *
 * Created: 4/7/2023 2:18:00 AM
 *  Author: Omar Taha
 */ 
#include "led_sequence_2.h"
uint8_t count = 0;



err_state LED_Sequence_2()
{

	//LED inintilaztion
	LED_init(0,PORT_A);
	LED_init(1,PORT_A);
	LED_init(2,PORT_A);
	LED_init(3,PORT_A);
	
	//Unit Test
	LED_on(0,PORT_A);
	LED_on(1,PORT_A);
	LED_on(2,PORT_A);
	LED_on(3,PORT_A);
	
	LED_off(0,PORT_A);
	LED_off(1,PORT_A);
	LED_off(2,PORT_A);
	LED_off(3,PORT_A);
	
	BUTTON_init(2,PORT_D);//initialize button pin as input
	
	//Interrupt initialization
	SREG  |= (1<<7);		 //enable global interrupt
	MCUCR |= (1<<0) | (1<<1);//setting interrupt 0 sense control to rising edge
	GICR  |= (1<<6);		 //enable external interrupt 0
	
	/* Replace with your application code */
	while (1)
	{
		if(count==1)
		{
			LED_on(0,PORT_A);
		}
		else if(count==5)
		{
			LED_off(0,PORT_A);
		}
		
		if(count==2)
		{
			LED_on(1,PORT_A);
		}
		else if(count==6)
		{
			LED_off(1,PORT_A);
		}
		
		if(count==3)
		{
			LED_on(2,PORT_A);
		}
		else if(count==7)
		{
			LED_off(2,PORT_A);
		}
		
		if(count==4)
		{
			LED_on(3,PORT_A);
		}
		else if(count==8)
		{
			LED_off(3,PORT_A);
		}
		
	}
	return FAIL;
}

ISR(EXT_INT_0)
{
	count++;
	if(count == 9)
	{
		count = 1;
	}
}