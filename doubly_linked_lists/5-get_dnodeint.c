#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: the head of the list
 * @index: index allowes to locate a node
 * Retrun: the nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t node_i;
	unsigned int n = 0;

	if (head != NULL)
	{
		node_i = head;

		while (head->next != NULL)
		{
			node_i = head->next;
			n++;
			if (n == index)
			{
				return (node_i);
			}
		}
	}
	return (NULL);
}
