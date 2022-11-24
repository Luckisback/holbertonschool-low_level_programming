#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: the head of the list
 * @index: index allowes to locate a node
 * Return: the nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 1;

	for (n = 1; n <= index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
