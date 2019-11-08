#include "holberton.h"

/**
 *
 *
 *
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i < index; i++)
	{
	        *n = (*n | 1 << index);

	}
	return (1);

}
