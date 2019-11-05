#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at Nth position
 *
 * @head: the pointer to the first node
 * @index: the node to look for
 * Return: the pointer if index is found or NULL if not
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
