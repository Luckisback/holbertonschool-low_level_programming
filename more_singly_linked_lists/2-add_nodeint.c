#include "lists.h"

/**
 * add_nodeint - 
 * @head: the head of the list
 * @n:the argument  
 * Return: the address of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Newnod;

	Newnod = malloc(sizeof(listint_t));
	if(!Newnod)
	{
		free(Newnod);
		return(NULL);
	}
	Newnod->n = n;
	Newnod->next = *head;
	*head = Newnod;

	return (Newnod);
}

