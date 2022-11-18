#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the end of a list
 * @head: the head of the list
 * @n:the argument
 * Return: the address of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t end_node;
	listint_t *Newnode;

	Newnod = malloc(sizeof(listint_t));
	if (!Newnod)
	{
		free(Newnode);
		return (NULL);
	}
	Newnod->n = n;
	Newnode->next = NULL;

	if (*head == NULL)
		*head = Newnode;
	else
		end_node = *head;

	while (end_node->next != NULL)
		end_node = end_node->next;
	end_node = Newnode;

	return (Newnod);
}


