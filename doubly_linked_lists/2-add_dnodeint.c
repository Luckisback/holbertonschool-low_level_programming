#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: the head of the list
 * @n: the numbre of nodes elements
 *  Return: the address of the new node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;

	if (head != NULL)
		*head = newnode;

	return (newnode);
}
