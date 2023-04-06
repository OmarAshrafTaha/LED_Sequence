/*
 * dio.c
 *
 * Created: 4/5/2023 3:53:56 PM
 *  Author: Omar Taha
 */ 
#include "dio.h"


void DIO_init(uint8_t pinNumber, uint8_t portNumber, pin_dir direction)  //initialize dio direction
{
	switch(portNumber)
	{
		case PORT_A:
			if(direction == INPUT)
			{
				Clear_Bit(pinNumber,DDRA);
			}
			else if(direction == OUTPUT)
			{
				Set_Bit(pinNumber,DDRA);
			}
			else
			{
				// Error Handling
			}
			break;
			
		case PORT_B:
			if(direction == INPUT)
			{
				Clear_Bit(pinNumber,DDRB);
			}
			else if(direction == OUTPUT)
			{
				Set_Bit(pinNumber,DDRB);			
			}
			else
			{
				// Error Handling
			}
			break;
			
		case PORT_C:
			if(direction == INPUT)
			{
				Clear_Bit(pinNumber,DDRC);				
			}
			else if(direction == OUTPUT)
			{
				Set_Bit(pinNumber,DDRC);
			}
			else
			{
				// Error Handling
			}
			break;
			
		case PORT_D:
			if(direction == INPUT)
			{
				Clear_Bit(pinNumber,DDRD);			
			}
			else if(direction == OUTPUT)
			{
				Set_Bit(pinNumber,DDRD);
			}
			else
			{
				// Error Handling
			}
			break;		
	}
}

void DIO_write(uint8_t pinNumber, uint8_t portNumber, pin_state value)   //write data to dio
{	
	switch(portNumber)
	{
		case PORT_A:
		if(value == LOW)
		{
			Clear_Bit(pinNumber,PORTA);
		}
		else if(value == HIGH)
		{
			Set_Bit(pinNumber,PORTA);
		}
		else
		{
			// Error Handling
		}
		break;
		
		case PORT_B:
		if(value == LOW)
		{
			Clear_Bit(pinNumber,PORTB);
		}
		else if(value == HIGH)
		{
			Set_Bit(pinNumber,PORTB);
		}
		else
		{
			// Error Handling
		}
		break;
		
		case PORT_C:
		if(value == LOW)
		{
			Clear_Bit(pinNumber,PORTC);
		}
		else if(value == HIGH)
		{
			Set_Bit(pinNumber,PORTC);
		}
		else
		{
			// Error Handling
		}
		break;
		
		case PORT_D:
		if(value == LOW)
		{
			Clear_Bit(pinNumber,PORTD);
		}
		else if(value == HIGH)
		{
			Set_Bit(pinNumber,PORTD);
		}
		else
		{
			// Error Handling
		}
		break;
	}
}

void DIO_toggle(uint8_t pinNumber, uint8_t portNumber)					 //toggle dio
{
	switch(portNumber)
	{
		case PORT_A:
			Toggle_Bit(pinNumber,PORTA);
			break;

		case PORT_B:
			Toggle_Bit(pinNumber,PORTB);
			break;
			
		case PORT_C:
			Toggle_Bit(pinNumber,PORTC);
			break;
			
		case PORT_D:
			Toggle_Bit(pinNumber,PORTD);
			break;			
	}
}

void DIO_read(uint8_t pinNumber, uint8_t portNumber, pin_state *value)   //read dio
{
		switch(portNumber)
		{
			case PORT_A:
				*value = Read_Bit(pinNumber,PINA);
				break;

			case PORT_B:
				*value = Read_Bit(pinNumber,PINB);
				break;
			
			case PORT_C:
				*value = Read_Bit(pinNumber,PINC);
				break;
			
			case PORT_D:
				*value = Read_Bit(pinNumber,PIND);			
				break;
			
			default:
				//Error handling
				break;
			
		}
}