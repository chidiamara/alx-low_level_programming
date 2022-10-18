#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 * follwed ny a new line
 */
void print_alphabet_x10(void)
{
	int i = 0, i2;

	while (i < 10)
	{
		i2 = 97;
		while (i2 <= 122)
		{
			_putchar(i2);
			i2++;
		}
		_putchar('\n');
		i++;
	}
}
