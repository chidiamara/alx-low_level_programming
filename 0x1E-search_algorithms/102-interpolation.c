#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index of the value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = 0, low = 0, pos = 0;

	if (!array || size == 0)
		return (-1);

	high = size - 1;
	pos = low + (((double)(high - low) /
		     (array[high] - array[low])) * (value - array[low]));
	if (pos > size - 1)
		printf("Value checked array[%lu] is out of range\n", pos);
	while (high >= low && array[high] >= value && array[low] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
		pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));
	}
	return (-1);
}
