#include "lists.h"

/**
 * sum_dlistint - sum of all data
 * @head: head of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}
	return (s);
}
