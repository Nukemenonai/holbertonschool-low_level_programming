#include "lists.h"

/**
 * free_listint2 - frees
 *
 * @head : the pointer to the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	temp = *head;

	while (temp != NULL)
	{
		free(temp);
		temp = *head->next;
	}

	*head = NULL;
	/* free(temp); */

}
