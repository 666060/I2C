/*
 * main.c
 *
 *  Created on: Jul 25, 2025
 *      Author: lenovo
 */



//
////////code of master/////////
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "TWI_int.h"
#include "TWI_Config.h"
#ifndef F_CPU
#define F_CPU 8000000UL
#endif




int main(void)
{
	u8 i;
	u8 word[] = "ZZZZZ";

	M_TWI_void_Init();

	while(1)
	{
		M_TWI_u8_StartCondition();

		M_TWI_u8_SendSlaveAddressWrite(SLAVE_ADDRESS);

		for (i = 0; word[i] != '\0'; i++)
		{
			M_TWI_u8_SendByte(word[i]);
			_delay_ms(10);
		}

		M_TWI_void_StopCondition();

		_delay_ms(2000);
	}
}



