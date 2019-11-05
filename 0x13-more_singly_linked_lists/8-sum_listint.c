#include "lists.h"

/**
 *
 *
 *
 *
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += (head->n);
		head = head->next;
	}
	return (res);

}
