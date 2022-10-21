#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i1, i2;

	for (i1 = 0; i1 < 10; i1++)
	{
		for (i2 = 0; i2 < 15; i2++)
		{
			if (i2 >= 10)

				_putchar(i2 / 10  +  '0');
			_putchar(i2 % 10  + '0');
		}
			_putchar('\n');

	}
}
