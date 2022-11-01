#include "main.h"
#include <stdlib.h>

/**
 * _strchr - select part of string after char is found
 * @s: string to check
 * @c: character to look for
 *
 * Return: s at comparison is success, NULL in char not found
 */
char *_strchr(char *s, char c)
{
	int i = 0, l = 0;

	while (s[l])
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}
	return (0);
}
