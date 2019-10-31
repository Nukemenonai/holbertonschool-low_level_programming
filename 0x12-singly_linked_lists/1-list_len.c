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
	size_t len;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
