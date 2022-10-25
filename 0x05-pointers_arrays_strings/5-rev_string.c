#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, lgt, lgt2;

	lgt = 0;
	lgt2 = 0;

	while (s[lgt] != '\0')
	{
		lgt++;
	}

	lgt2 = lgt - 1;

	for (i = 0; i < lgt / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lgt2];

		s[lgt2--] = tmp;
	}
}
