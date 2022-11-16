#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: the head of the list
 **/
void free_list(list_t *head)
{
	list_t *to_free;

	while (head != NULL)
	{
		to_free = head->next;
		free(head->str);
		free(head);
		head = to_free;
	}
}
