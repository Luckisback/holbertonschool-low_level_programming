#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a structure that brings elements
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (liste == NULL)
	{
		printf("[0] (nil)";
	}

	list_t *actuel = h;

	while (actuel != NULL)
	{
		printf("[%d] -> %s", actuel->len, actuel->str);
		actuel = actuel->next;
	}
	printf("NULL\n");
}
