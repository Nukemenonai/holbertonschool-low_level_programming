#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given position
 *
 * @head: the pointer to the first position
 * @index: the given position to delete
 * Return: 1 if successfull, -1 if not successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp = *head;
	listint_t *next;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (count = 0; count < index - 1 && temp != NULL; count++)
		temp = temp->next;

	if (temp->next == NULL || temp == NULL)
		return (-1);

	next = temp->next->next;
	free(temp->next);

	temp->next = next;

	return (1);

}
