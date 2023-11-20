#include "lists.h"

/**
 * sum_listint - caluculates sum of all the data in a list
 * @head: 1st node in linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		s += tmp->n;
	       tmp = tmp->next;
	}
	return (s);
}
