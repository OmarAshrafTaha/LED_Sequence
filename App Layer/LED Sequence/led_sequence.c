/*
 * led_sequence.c
 *
 * Created: 4/6/2023 1:20:46 AM
 *  Author: Omar Taha
 */ 

#include "led_sequence.h"

void LED_Sequence()
{	int count = 0;
	pin_state button_1_State=0;
	pin_state old_state = 0;
	
		LED_init(0,PORT_A);
		LED_init(1,PORT_A);
		LED_init(2,PORT_A);
		LED_init(3,PORT_A);
		BUTTON_init(Button_1_Pin,Button_1_Port);
		
	while(1)
		{
			BUTTON_read(Button_1_Pin,Button_1_Port,&button_1_State);
			if(button_1_State != old_state && button_1_State != LOW)
			{
				count++;
			}
			
			if(count==9)
			{
				count=1;
			}
			
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
			
			old_state=button_1_State;
		}
}