#include "lists.h"

/**
 * pop_listint - deletes the first item of a linked list
 *
 * @head: the pointer to the first element of the list
 * Return: result
 */

int pop_listint(listint_t **head)
{
	int result;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	result = (*head)->n;
	free(*head);
	*head = next_node;

	return (result);
}
