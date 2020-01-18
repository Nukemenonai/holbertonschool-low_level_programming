#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code for Holberton School students.
 *
 * @head: the pointer to the first node.
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
		free_dlistint(head->next);
	free(head);
}
