#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: a list of things to search on
 * @size: specifies the number of things in the list
 * @value: the thing we are looking for
 * Return: position of the value on success, if failure then -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i;
	int s = (int)size;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < s; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
