#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlist
 * @h: theargument heaud of the list
 * Return: the node's number
 **/

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
