#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that inserts a new node at a given position.
 * @index: the index of the list where the new node should be added
 * Return: the address of the new node
 *
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len;
	dlistint_t **newnode;
	unsigned int i = 0;

	while (h) /*the number of the lists element*/
	{
		(*h) = (*h)->next;
		len++;
	}
	for (i = 0; i >= idx; i++) /*finding the node corresponding to the node index*/

	{
		if (h == NULL)
			return (NULL);
		(*h) = (*h)->next;

		if (idx == 0) /* add to the beginning */
			add_dnodeint(h, n);

		if (idx == len) /* add to the end */
			add_dnodeint_end(h, n);

		/* Case  i = idx */
		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}

		(*newnode)->n = n;
		(*newnode)->next = (*h)->next;
		(*newnode)->prev = *newnode;
	}
	return (*newnode);
}
