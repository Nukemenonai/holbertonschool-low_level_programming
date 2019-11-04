#include "lists.h"

/**
 * pop_listint - 
 *
 * @head:
 *
 *
 */

int pop_listint(listint_t **head)
{
	int result = -1;
	listint_t *next_node = NULL;

	if (*head == NULL) {
		return (-1);
	}

	next_node = (*head)->next;
	result = (*head)->n;
	free(*head);
	*head = next_node;

	return (result);
}
