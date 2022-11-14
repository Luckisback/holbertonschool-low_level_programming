#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a structure that brings elements
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	while( h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)";
		else
			printf("[%d] -> %s", h->len, h->str);
		i += 1;
		h = h->next;
	}
	return (i);
}
