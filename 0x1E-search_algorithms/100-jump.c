#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 *@array: array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: the index of the value or -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump, down = 0, up;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	up = jump;
	while (down < size)
	{
		printf("Value checked array[%lu] = [%d]\n", down, array[down]);
		if (up < size)
		{
			if (array[down] <= value && array[up] >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", down, up);
				break;
			}
		}
		else
		{
			if (array[down] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", down, up);
				break;
			}
		}
		down = up;
		up = down + jump;
	}
	while (down <= up)
	{
		if (down == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", down, array[down]);
		if (array[down] == value)
			return (down);
		down++;
	}
	return (-1);
}
