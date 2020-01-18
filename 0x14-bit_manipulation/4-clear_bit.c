#include "holberton.h"

/**
 * clear_bit - clears the bit at n position
 *
 * @n: number to edit
 * @index: the position to edit at binary level
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		*n = (*n & ~(1 << index));

	}
	return (1);

}
