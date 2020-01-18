#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the size of a linked list.
 *
 * @h: the pointer to the first node
 * Return: the number of nodes
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *mv = h;

	if (h == NULL)
		return (size);

	while (mv->next != NULL)
	{
		mv = mv->next;
		size++;
	}
	size++;

	return (size);

}
