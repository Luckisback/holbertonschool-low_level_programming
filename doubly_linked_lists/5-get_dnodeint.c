#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: the head of the list
 * @index: index allowes to locate a node
 * Retrun: the nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head->n = n;
			n++;
			if (n == index)
			{
				return (n);
			}
		}
	}
	return (NULL);
}
