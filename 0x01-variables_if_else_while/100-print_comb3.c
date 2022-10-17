#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i1, i2;

	for (i1 = 0; i1 < 9; i1++)
	{
		for (i2 = i1 + 1; i2 < 10; i2++)
		{

			putchar((i1 % 10) + '0');

			putchar((i2 % 10) + '0');

			if (i1 != 8 && i2 != 9)
			{

			putchar(',');

			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
