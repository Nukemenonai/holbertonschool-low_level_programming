#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at nth index
 *
 * @head: a pointer to a pointer to first node
 * @idx: the index position to insert
 * @n: the number to insert
 * Return: the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int count = 0;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (temp);

		}
	}
	return (NULL);

}
