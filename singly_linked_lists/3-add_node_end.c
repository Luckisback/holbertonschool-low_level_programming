#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list
 * @str: data argument
 * @head: head of the list
 * Return: the address of the new last node
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewEl;
	list_t *tmp;
	char *New_str;
	int New_lgr = 0;

	/* allocation de l'espace memoire au nouvel élément */
	NewEl = malloc(sizeof(list_t));

	if (NewEl == NULL)
	{
		free(NewEl);
		return (NULL);
	}

	New_str = strdup(str);

	if (New_str == NULL)
	{
		free(NewEl);
		return (NULL);
	}

	while (str[New_lgr])
		New_lgr++;

	NewEl->str = New_str;
	NewEl->len = New_lgr;
	NewEl->next = NULL;

	if (*head == NULL)
		*head = NewEl;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = NewEl;
	}
	return (*head);
}

