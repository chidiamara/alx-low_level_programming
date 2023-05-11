#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: sorted array to search from
 * @size: size of the array
 * @value: the value to search for in the array
 * Return: value's first index or if it doesn't exist
*/
int binary_search(int *array, size_t size, int value)
{
	int down = 0, mid = size / 2, up = size - 1;
	int i;

	if (!array)
		return (-1);

	while (down <= up)
	{
		printf("Searching in array: ");
		for (i = down; i < up; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (down + up) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			up = mid - 1;
		else
			down = mid + 1;
	}
	return (-1);
}
