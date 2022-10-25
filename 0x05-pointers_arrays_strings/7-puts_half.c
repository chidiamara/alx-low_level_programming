#include "main.h"

/**
 * puts_half - prints half of a strinf
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(chat *str)
{
	int lgt, n, i;

	lgt = 0;

	while (str[lgt] != '\0')
	{
		lgt++;
	}

	if (lgt % 2 == 0)
	{
		for (i = lgt / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		else if (lgt % 2)
		{
			for (n = (lgt - 1) / 2; n < lgt - 1; n++)
			{

				_putchar(str[n + 1]);
			}
		}
	}
	_putchar('\n');
}
