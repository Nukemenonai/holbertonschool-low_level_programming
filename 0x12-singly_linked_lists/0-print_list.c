#include "lists.h"


/**
 * print_list - prints all the elements of a linked list
 *
 * @h: the pointer to the next element of the list
 * Return: size;
 */

size_t print_list(const list_t *h)
{
	size_t len;

	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}

		len++;
		h = h->next;
	}

	return(len);
}
