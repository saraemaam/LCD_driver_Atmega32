/*
 * application.c
 *
 *  Created on: Apr 28, 2023
 *      Author: Sarah
 */

#include"lcd.h"
#include<util/delay.h>

int main(void)
{
	LCD_init(); /* Initialize the LCD */
	LCD_displayStringRowColumn(0,2,"My LCD Driver");
	LCD_displayStringRowColumn(1,3,"Embedded WS");
	_delay_ms(4000); /* wait four seconds */


	while(1)
	{

	}

}

