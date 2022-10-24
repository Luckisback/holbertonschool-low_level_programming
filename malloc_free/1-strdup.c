#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * @str: the new string
 * Return: the tointeur to the new string
 *
 **/

char *_strdup(char *str)
{
	char *my_ptr;
	int i = 0;
	int t;

	while (str[i])
		i++;

	my_ptr = malloc(i + 1);

	if (str == NULL)
		return (NULL);

	for (t = 0; t <= i; t++)
	{
		if (my_ptr == NULL)
		{
			return (NULL);
		}
		my_ptr[t] = str[t];
	}
	return (my_ptr);

}
