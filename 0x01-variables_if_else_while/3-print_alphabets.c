#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lowercase, then uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);

}
