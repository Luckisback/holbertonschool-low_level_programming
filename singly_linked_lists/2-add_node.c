#include "lists.h"

/**
 * struct print - the structure of printf function
 * Description: associat each data type to the function
 * @data: the type of data
 * @f: the funtion pointer to the printing functions used
 **/

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	int i;

	list_t *NewEl = NULL;

	*NewEl = malloc(sizeof(head));

	while (head != NULL || head[len] != NULL)
	{
		if (head == NULL || head[len] == NULL)
		{
			return( NULL);
			free(NewEl[len]);
			free(NewEl);
		}
		len++;
	}

	NewEl = head;

	for (i = 0; i < len; i++)
	{
		NewEl[i] = malloc(sizeof(list_t));
		NewEl[i]->str = head[i]->str;
	}
	return (head);
}
