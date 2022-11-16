#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: the head of the list
 **/
void free_list(list_t *head)
{
	while(head != NULL)
	{
		if (head->next != NULL)
			free(head->str);
		free(head->next);
	}
	free(head);
}
