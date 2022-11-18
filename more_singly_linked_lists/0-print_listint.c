#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: A argument 
 * Return: the leng of the list
 **/
size_t print_listint(const listint_t *h)
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
