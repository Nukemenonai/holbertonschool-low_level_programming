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
	dlistint_t *desps;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
		for (count = 0; count < index - 1 && temp != NULL; count++)
			temp = temp->next;
		/* if (temp->next == NULL) */
		/* { */
		/* 	desps = temp->prev; */
		/* 	desps->next = NULL; */
		/* 	return (1); */
		/* } */
		desps = temp->next->next;
		free(temp->next);
		temp->next = desps;
		desps->prev = temp;
		return (1);
	}
	return (1);
}
