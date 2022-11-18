#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * @h: the head of the list
 * Return: the number of elements
 **/

size_t listint_len(const listint_t *h)
{
		int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
