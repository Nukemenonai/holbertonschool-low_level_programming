#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of double linked list.
 *
 * @head: pointer to the first node
 * @n: data to populate the node
 * Return: the pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new == NULL)
		return NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		last = new;
		return (new);
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		new->prev = last;

		return (new);
	}
}
