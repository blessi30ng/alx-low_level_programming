#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 * @head: head of list
 * @index: indexof the node to search for
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tp;

	if (head == NULL)
		return (NULL);
	tp = head;
	while (tp)
	{
		if (index == size)
			return (tp);
		size++;
		tp = tp->next;
	}
	return (NULL);
}
