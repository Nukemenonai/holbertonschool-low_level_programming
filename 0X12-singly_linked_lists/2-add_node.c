#include "lists.h"

/**
 *
 *
 *
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *s = strdup(str);
	unsigned int mylen;

	for (len = 0; s[len] != '\0'; len++)
	{}

	if (new_node == NULL)
		return NULL;
	/* creating the node using malloc */


	new_node->len = mylen;
	new_node->str = s;
	new_node->next = *head;
	*head = new_node;

	/* populating the new node  */

	return (new_node);
}
