#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 *
 * @head: pointer to a pointer to the forst elem
 * @n: integer to put in the data of the node
 * Return: poiter to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
		*head = new_node;

	else
	{
		while (last->next != 0)
			last = last->next;

		last->next = new_node;
		new_node->next = NULL;
	}
	return (new_node);

}
