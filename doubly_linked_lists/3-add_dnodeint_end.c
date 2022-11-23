#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a list
 * @head: the head of yhe list
 * @n: the number of nodes
 * Return: the address of new node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *headN = *head;
	dlistint_t *newend;

	newend = malloc(sizeof(dlistint_t));
	if (newend == NULL)
		return (NULL);

	while (headN)
		headN = headN->next;
	newend->n = n;
	newend->next = NULL;
	newend->prev = headN;

	return (newend);
}
