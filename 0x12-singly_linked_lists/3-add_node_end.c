#include "lists.h"

/**
 * add_node_end - adds a node at the enf of a list
 *
 * @head: pointer of the first element of the list
 * @str: the string to include in the node
 *
 * Return: the pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int mylen;
	list_t *new_node;
	list_t *last = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (str == NULL)
		return (NULL);

	for (mylen = 0; str[mylen] != '\0'; mylen++)
	{}
	new_node->len = mylen;

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (last->next != 0)
		{
			last = last->next;
		}
		last->next = new_node;

		new_node->next = NULL;
	}

	return (new_node);


}
