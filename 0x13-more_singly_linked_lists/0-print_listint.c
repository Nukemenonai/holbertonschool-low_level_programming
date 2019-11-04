#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: the pointer to the next element of the list
 * Return: size
 */

size_t print_listint(const listint_t *h)
{
	int len;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;

	}
	return (len);
}
