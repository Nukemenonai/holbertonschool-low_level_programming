#include "holberton.h"

/**
 * binary_to_uint - converts string to unsigned int
 *
 * @b: the pointer to the binary number in a string
 * Return: unsigned number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	/* int weight = 1; */
	int i, p, len = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	for (i = (len - 1), p = 0 ; i >= 0; i--)
	{
		if (b[i] - '0' != 0 && b[i] - '0' != 1)
			return (0);

		else
		{
			result += (b[i] - '0') << p;
			p++;
		}

	}

	return (result);
}
