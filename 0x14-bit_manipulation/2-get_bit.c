#include "holberton.h"

/**
 * get_bit - gets the bit at the nth index of entered int number
 *
 * @n: the number to evaluate
 * @index: the index to look for
 * Return: the 1 or 0 depending of the state of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
