#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * @h: a structure that brings elements
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int N_nodes = 0;

	while (h != NULL)
	{
		if (h != NULL)
			h = h->next;
		N_nodes += 1;
	}
	return (N_nodes);
}
