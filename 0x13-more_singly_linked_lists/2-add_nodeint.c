#include "lists.h"

/**
 * add_nodeint - adds a new nodeat the start of alinked list
 * @head: pointer to the 1st node
 * @n: data to insert in that new node
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
