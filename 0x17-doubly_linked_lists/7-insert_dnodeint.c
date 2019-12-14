#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 *
 * @h: the pointer to the first node of the list
 * @idx: the index to get to
 * @n: the data to populate data field
 * Return: The address of the newly created node.
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *new;
	dlistint_t *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		while (pos < (idx - 1))
		{
			tmp = tmp->next;
			if (*h == NULL)
			{
				free(new);
				return (NULL);
			}
			pos++;
		}
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	return (new);
}
