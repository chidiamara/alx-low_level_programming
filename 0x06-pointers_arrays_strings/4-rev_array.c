#include "main.h"

/**
 * reverse_array - reverse a string
 * @a: string to modify
 * @n: length of string
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, store;

	for (i = 0; i < (n / 2); i++)
	{
		store = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = store;
	}
}
