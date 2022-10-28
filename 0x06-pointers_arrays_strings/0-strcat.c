#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination for resulting string
 * @src: source string to dest
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = src[j];

	return (dest);
}
