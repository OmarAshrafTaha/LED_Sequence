/*
 * led_sequence_3.c
 *
 * Created: 4/8/2023 3:12:55 AM
 *  Author: Omar Taha
 */ 
#include "led_sequence_3.h"

unsigned int ON_TIME = 100;
unsigned int OFF_TIME = 900;
uint8_t count;
uint8_t Blink_Mode = 0;
err_state LED_Sequence_3(void)
{
	//LED initialization
	LED_init(0,PORT_A);
	LED_init(1,PORT_A);
	LED_init(2,PORT_A);
	LED_init(3,PORT_A);
		
	//Unit Test
// 	LED_on(0,PORT_A);
// 	LED_on(1,PORT_A);
// 	LED_on(2,PORT_A);
// 	LED_on(3,PORT_A);
// 		
// 	LED_off(0,PORT_A);
// 	LED_off(1,PORT_A);
// 	LED_off(2,PORT_A);
// 	LED_off(3,PORT_A);
		
	BUTTON_init(2,PORT_D);//initialize button pin as input
	BUTTON_init(3,PORT_D);//initialize button pin as input
	PORTA &= 0x00; //Initialize port A with zeros
	SREG  |= (1<<7);//enable global interrupt
	MCUCR |= (1<<0) | (1<<1);//setting interrupt 0 sense control to rising edge
	MCUCR |= (1<<3) | (1<<4);//setting interrupt 1 sense control to rising edge
	GICR  |= (1<<6) | (1<<7);//enable external interrupt 0 & External Interrupt 1
	set_timer0_normal_mode();//set timer0 to normal mode
	set_timer0_intitial_value(0x00);//initialize timer0 initial value to 0
	while(1)
		{
			if(count==1)
			{
				LED_array_blink(0x01,PORT_A,ON_TIME,OFF_TIME);// LED 1 : ON | LED 2 : OFF | LED 3 : OFF | LED 4 : OFF
			}
			else if(count==5)
			{
				LED_array_blink(0x0E,PORT_A,ON_TIME,OFF_TIME);// LED 1 : OFF | LED 2 : ON | LED 3 : ON | LED 4 : ON
			}
			
			if(count==2)
			{
				LED_array_blink(0x03,PORT_A,ON_TIME,OFF_TIME);;// LED 1 : ON | LED 2 : ON | LED 3 : OFF | LED 4 : OFF
			}
			else if(count==6)
			{
				LED_array_blink(0x0C,PORT_A,ON_TIME,OFF_TIME);// LED 1 : OFF | LED 2 : OFF | LED 3 : ON | LED 4 : ON
			}
			
			if(count==3)
			{
				LED_array_blink(0x07,PORT_A,ON_TIME,OFF_TIME);// LED 1 : ON | LED 2 : ON | LED 3 : ON | LED 4 : OFF
			}
			else if(count==7)
			{
				LED_array_blink(0x08,PORT_A,ON_TIME,OFF_TIME);// LED 1 : OFF | LED 2 : OFF | LED 3 : OFF | LED 4 : ON
			}
			
			if(count==4)
			{
				LED_array_blink(0x0F,PORT_A,ON_TIME,OFF_TIME);// LED 1 : ON | LED 2 : ON | LED 3 : ON | LED 4 : ON
			}
			else if(count==8)
			{
				LED_array_blink(0x00,PORT_A,ON_TIME,OFF_TIME);// LED 1 : OFF | LED 2 : OFF | LED 3 : OFF | LED 4 : OFF
			}
	

		}
	return FAIL;
}

//ISR for external interrupt 0 on PD2 which alternates between which group of LEDs are ON or OFF
ISR(EXT_INT_0)
{
	count++;
	if(count == 9)
	{
		count = 1;
	}
}

//ISR for external interrupt 1 on PD3 which alternates between blinking modes
ISR(EXT_INT_1)
{
	Blink_Mode++;
	if(Blink_Mode == 5)
	{
		Blink_Mode = 0;
	}
	
	if(Blink_Mode==0)
	{
		ON_TIME	 = 100;
		OFF_TIME = 900;	
	}
	
	else if(Blink_Mode==1)
	{
		ON_TIME	 = 200;
		OFF_TIME = 800;
	}
	
	else if(Blink_Mode==2)
	{
		ON_TIME	 = 300;
		OFF_TIME = 700;
	}

	else if(Blink_Mode==3)
	{
		ON_TIME	 = 500;
		OFF_TIME = 500;
	}
	
	else if(Blink_Mode==4)
	{
		ON_TIME	 = 800;
		OFF_TIME = 200;
	}				
}