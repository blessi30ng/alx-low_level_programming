#include "lists.h"

/**
 * add_nodeint - adds a new node at start of list
 * @head: pointer to the 1st node in list
 * @n: data to insert the new noe
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
