#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a structure that brings elements
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	va_list *encours = h;
	int i = 1;
	int j = 0;

	va_start(encours, h);

	while (encours != NULL)
	{
		printf("[%d] %s\n", i, encours->str);
		printf("->%d\n", i, encours->len);
		i += 1;
		j += va_arg(encours, char*)
	}
	if (encours == NULL)
		printf("[0] (nil)");
	return (j);
}
