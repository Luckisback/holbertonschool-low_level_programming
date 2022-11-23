#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: the head of the list
 * @n: the numbre of nodes elements
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t) * n);
	if (newnode == NULL)
		return (NULL);

	if (head != NULL)
	{
		newnode->n = n;
		newnode->next = (*head)->next;
		newnode->prev = NULL;
		*head = newnode;
	}
	return (newnode);
}
