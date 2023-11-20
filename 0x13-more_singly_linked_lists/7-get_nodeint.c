#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in list
 * @index: index of the node to reeturn
 * @head: first node in the linked list
 * Return: pointer to the node being looked for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}
	return (tmp ? tmp : NULL);
}
