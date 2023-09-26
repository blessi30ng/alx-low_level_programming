#include "lists.h"

/**
 * sum_listint - caluculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = head;

	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
