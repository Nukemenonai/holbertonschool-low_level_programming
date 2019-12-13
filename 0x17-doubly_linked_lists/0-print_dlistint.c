#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list.
 *
 * Return: the number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *mv = h;

	while (mv->next != NULL)
	{
		printf("%d\n", mv->n);
		mv = mv->next;
		size++;
	}
	printf("%d\n", mv->n);
	size++;

	return (size);

}
