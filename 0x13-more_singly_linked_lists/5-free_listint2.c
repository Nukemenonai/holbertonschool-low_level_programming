#include "lists.h"

/**
 * free_listint2 - frees
 *
 * @head : the pointer to the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	temp = *head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
	/* free(temp); */

}
