#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the head of the list
 **/
void free_listint(listint_t *head)
{
	listint_t *to_free;

	while (head != NULL)
	{
		to_free = head->next;
		free(head);
		head = to_free;
	}
}
