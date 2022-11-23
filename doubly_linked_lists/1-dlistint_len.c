#include "lists.h"

/**
 * dlistint_len -  a function that returns the number of elements
 * Return: the number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int nbr = 0;

	while (h)
	{
		h = h->next;
		nbr++;
	}
	return ( nbr);
}
