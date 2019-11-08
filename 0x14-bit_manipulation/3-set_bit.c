#include "holberton.h"

/**
 * set_bit - sets the bit at n position to 1
 *
 * @n: the number to edit
 * @index: the position in binary to set
 * Return: 1 if operation was successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		*n = (*n | 1 << index);

	}
	return (1);

}
