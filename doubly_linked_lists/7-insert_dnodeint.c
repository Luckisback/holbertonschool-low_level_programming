#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * @h: the header of the list
 * @idx: the index of the list where the new node should be added
 * @n: a element of the list
 * Return: the address of the new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *htmp;
	dlistint_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	htmp = *h;

	if (idx == 0) /* add to the beginning */
		return (add_dnodeint(h, n));

	for (i = 0; i < (idx - 1); i++) /*finding the index node*/
	{
		if (htmp == NULL || htmp->next == NULL)
			return (NULL);
		htmp = htmp->next;
	}

		newnode->next = htmp->next;
		newnode->prev = htmp;
		htmp->next = newnode;

		if (newnode->next != NULL)
		{
			htmp = newnode->next;
			htmp->prev = newnode;
		}
	return (newnode);
}
