#include "lists.h"

/**
 * free_listint - frees a linked list of an int
 * @head: the pointer to the first element of the list
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}

}
