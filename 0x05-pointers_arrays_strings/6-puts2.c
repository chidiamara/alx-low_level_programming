#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followes by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int lgt, i;

	lgt = 0;

	while (str[lgt] != '\0')
	{
		lgt++;
	}

	for (i = 0; i < lgt; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
