#include "lists.h"

/**
 * sum_listint - sums all the numbers of member n of a list
 *
 * @head: the pointer to the first element of the list
 * Return: Result
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
