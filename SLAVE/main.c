


////////////code of slave////////////////
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "TWI_int.h"
#include "LCD_interface.h"
#ifndef F_CPU
#define F_CPU 8000000UL
#endif


int main(void)
{
	u8 ch;

	M_TWI_void_Init();
	LCD_voidInit();
	LCD_voidClear();

	while(1)
	{


		for (u8 i = 0; i < 6; i++)
		{

			M_TWI_u8_ReadByte(&ch);

			LCD_voidWriteData(ch);
		}

		 _delay_ms(2000);
		 LCD_voidClear();
	}
}



