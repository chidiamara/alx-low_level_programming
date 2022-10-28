#include "main.h"

/**
 * leet - encode a string with numbers
 * @a: array to encode
 *
 * Return: modified string
 */

char *leet(char *a)
{
	int i, j;

	char letter[] = "aeotlAEOTL";
	char num[] = "4307143071";

	for (i = 0; a[i] != '\0'; i++)
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (a[i] == letter[j])
			{
				a[i] = num[j];
			}
			j++;
		}
	}
	return (a);
}
