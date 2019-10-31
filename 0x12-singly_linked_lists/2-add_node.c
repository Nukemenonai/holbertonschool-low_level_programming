#include "lists.h"

/**
 * add_node - adds a new note to a linked list
 *
 * @head: the pointer of the first node
 *
 * @str: the string to pupulate in the new node
 * Return: the pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *s = strdup(str);
	unsigned int mylen;

	if (str == NULL)
		return (NULL);

	for (len = 0; s[len] != '\0'; len++)
	{}

	if (new_node == NULL)
		return (NULL);
	/* creating the node using malloc */


	new_node->len = mylen;
	new_node->str = s;
	if (head != NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}

	/* populating the new node  */

	return (new_node);
}
