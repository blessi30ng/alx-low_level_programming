#include "lists.h"

/**
 * listint_len - return the no of elements in a linked list
 * @h: linked list to traverse
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
