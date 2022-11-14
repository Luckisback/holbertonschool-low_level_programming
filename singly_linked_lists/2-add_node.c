#include "lists.h"

/**
 * struct print - the structure of printf function
 * Description: associat each data type to the function
 * @data: the type of data
 * @f: the funtion pointer to the printing functions used
 **/

list_t *add_node(list_t **head, const char *str)
{
	/* Création du nouvel élément */
	list_t *NewEl = malloc(sizeof(list_t));

	if (list_t == NULL || NewEl == NULL)
	{
		return (NULL);
	}
	NewEl->str = *str;

	/* Insertion de l'élément au début de la liste */
	NewEl->next = head;
	list_t->str = NewEl;

	return (NewEl);
}
