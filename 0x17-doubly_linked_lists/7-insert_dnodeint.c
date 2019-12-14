#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *new;
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
		while (pos < (idx -1))
		{
			*h = (*h)->next;
			if (*h == NULL)
			{
				return (NULL);
			}
			pos++;
		}
		new->next = (*h)->next;
		new->prev = *h;
		(*h)->next = new;
		return (new);
	}
	return (new);
}
