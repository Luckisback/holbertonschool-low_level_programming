#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at a index
 * @head: the head of the list
 * @index: the gived index
 * Return: 1 for success and -1 for failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h_tmp;
	dlistint_t *h_bis;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	h_tmp = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(h_tmp);
		return (1);
	}

	for (n = 0; n <= index; n++)
	{
		if (h_tmp == NULL || h_tmp->next == NULL)
			return (-1);
		h_tmp = h_tmp->next;
	}

	h_tmp = *head;
	h_tmp = h_tmp->next;
	(*head)->next = h_tmp->next;
	free(h_tmp);

	if (h_tmp->next != NULL)
	{
		h_bis = h_tmp;
		h_bis = h_tmp->next;
		h_bis->prev = h_tmp;
	}
	return (1);
}
