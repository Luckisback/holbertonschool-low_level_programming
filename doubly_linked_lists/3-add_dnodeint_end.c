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
	{
		free(newend);
		return (NULL);
	}

	newend->n = n;
	newend->next = NULL;

	if (*head == NULL)
	{
		*head = newend;
	}
	else
	{
		while (headN->next != NULL)
			headN = headN->next;
		headN->next = newend;
		newend->prev = headN;
	}

	return (newend);
}
