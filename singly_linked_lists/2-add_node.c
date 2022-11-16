#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @str: some value as argument
 * @head: the head of the list
 * Return: The address of the new head
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *NewEl;
	char *New_str;
	int New_lgr = 0;


	/* allocation de l'espace memoire au nouvel élément */
	NewEl = malloc(sizeof(list_t));

	if (!NewEl)
	{
		free(NewEl);
		return (NULL);
	}

	New_str = strdup(str);

	if (!New_str)
	{
		free(New_str);
		return (NULL);
	}

	while (New_str[New_lgr])
		New_lgr++;

	NewEl->str = New_str;
	NewEl->len = New_lgr;
	NewEl->next = *head;

	*head = NewEl;

	return (NewEl);
}
