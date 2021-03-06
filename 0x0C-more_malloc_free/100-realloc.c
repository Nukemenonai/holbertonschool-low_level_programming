#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _memcpy - copies memory area
 *
 * dest: destination buffer
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: number of bytes of memory to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block with malloc & free
 *
 * @ptr: the actual pointer
 * @old_size: the actual size
 * @new_size: the size to be assigned
 * Return: the pointer with the new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (ptr == NULL)
		nptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		_memcpy(nptr, ptr, new_size);
	}

	nptr = malloc(new_size);
	if  (nptr == NULL)
		return (NULL);

	_memcpy(nptr, ptr, old_size);

	free(ptr);
	return (nptr);

}
