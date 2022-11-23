#include "lists.h"

/**
 * free_dlistint - a function that frees a list.
 * @head: thead of the list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tofree;

	while (head != NULL)
	{
		tofree = head->next;
		free(head);
		head = tofree;
	}
}
