#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the end of a list
 * @head: the head of the list
 * @n:the argument
 * Return: the address of the new node
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *Newend;

	Newend = malloc(sizeof(listint_t));
	if (!Newend)
	{
		free(Newend);
		return (NULL);
	}
	Newend->n = n;
	Newend->next = NULL;

	if (*head == NULL)
	{
		*head = Newend;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = Newend;
	}
	return (Newend);
}


