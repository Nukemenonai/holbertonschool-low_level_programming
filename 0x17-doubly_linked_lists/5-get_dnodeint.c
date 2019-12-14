#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the info at n node.
 *
 * @head: the pointer to the first node
 * @index: the position to get to
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	while (index != pos)
	{
		head = head->next;
		pos++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
