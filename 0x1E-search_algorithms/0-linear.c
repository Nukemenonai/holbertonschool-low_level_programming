#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - this algorthm performas a linear search on an array
 *
 * @array: a pointer to the array to evaluate
 * @size: its the size of the array
 * @value: the value to look at
 * Return: -1 if value is NULL or not present, else value idx
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
