#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - prints an array or subarray
 *
 * @array: pointer to the array
 * @low: the forst item t print
 * @high: the last item to print
 *
 */


void print_array(int *array, int low, int high)
{
	int i;

	for (i = low; i < high; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_search - performs a binary search in an array
 *
 * @array: the pointer to the array
 * @size: the size of the array
 * @value: the value to look for
 * Return: -1 if null or not present, else idx
 */


int binary_search(int *array, size_t size, int value)
{
	size_t low, hi, mid;

	if (!value || !array)
		return (-1);

	low = 0, hi = size - 1;
	while (low <= hi)
	{
		printf("Searching in array: ");
		print_array(array, low, hi);
		mid = (low + hi) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
