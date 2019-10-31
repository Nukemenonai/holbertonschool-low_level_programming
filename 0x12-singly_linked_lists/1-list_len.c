#include "lists.h"

/**
 * list_len - returs the length of a list
 *
 * @h: pointer to the next element
 *
 * Return: len of the list
 *
 */

size_t list_len(const list_t *h)
{
	size_t len = 0; 

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
