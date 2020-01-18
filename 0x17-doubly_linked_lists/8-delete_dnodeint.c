#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delets node at nth pos of a dllist.
 *
 * @head: the pointer to the first position
 * @index: the osition of the list to get to
 * Return: 1 if successful  -1 if error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *desps, *repl;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
		for (count = 0; count < index; count++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}
		if (temp->next == NULL)
		{
			repl = temp->prev;
			repl->next = NULL;
			free(temp);
			return (1);
		}
		repl = temp->next;
		desps = temp->prev;
		free(temp);
		desps->next = repl;
		repl->prev = desps;
		return (1);
	}
	return (1);
}
