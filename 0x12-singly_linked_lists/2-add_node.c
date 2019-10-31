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
	char *s = strdup(str);
	unsigned int mylen;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);


	if (str == NULL)
		return (NULL);
	new_node->str = s;
	for (mylen = 0; s[mylen] != '\0'; mylen++)
	{}

	/* creating the node using malloc */

	new_node->len = mylen;

	if (head != NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}

	/* populating the new node  */
	return (*head);
}
