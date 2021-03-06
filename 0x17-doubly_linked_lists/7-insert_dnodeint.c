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
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp = *h, *repl;

	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	else
	{
		while (pos < (idx - 1))
		{
			repl = tmp, tmp = tmp->next;
			if (tmp == NULL)
			{
				free(new);
				return (NULL);
			}
			pos++;
		}
		if (tmp->next == NULL)
		{
			tmp->next = new, new->prev = tmp;
			new->next = NULL;
			return (new);
		}
		new->next = tmp->next, new->prev = tmp;
		repl = tmp->next;
		tmp->next = new, repl->prev = new;
		return (new);
	}
}
