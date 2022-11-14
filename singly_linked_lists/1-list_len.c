#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
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
		N_node += 1;
	}
	return (N_nodes);
	
}
