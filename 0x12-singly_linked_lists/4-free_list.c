#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: The pointer to the first destination
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
