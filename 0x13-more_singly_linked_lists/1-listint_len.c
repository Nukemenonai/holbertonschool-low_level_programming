#include "lists.h"

/**
 * listint_len - returns the length of a list
 *
 * @h: a pointer to the next element of the list
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
