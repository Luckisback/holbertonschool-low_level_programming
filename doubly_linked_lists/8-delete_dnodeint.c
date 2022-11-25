#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at a index
 * @head: the head of the list
 * @index: the gived index
 * Return: 1 for success and -1 for failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0;


	for (n = 0; n <= index; n++)
	{
		if ((*head) == NULL)
			return (-1);
		(*head) = (*head)->next;
		free((*head)->prev);
	}
	free(head);
	return (1);
}
