#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: A argument 
 * Return: 
 **/
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		printf("%d ", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
