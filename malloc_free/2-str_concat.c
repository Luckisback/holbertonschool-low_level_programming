#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: the result of concatenation
 **/

char *str_concat(char *s1, char *s2)
{
	char *my_ptr;
	int t, c, j;
	int i = 0;

	if (s1 == NULL || s2 == NULL || (s1 == NULL && s2 == NULL))
		return (NULL);

	while (s1[i])
	{
		i++;
	}
	c = i - 1;
	j = 0;

	while (s2[j])
		j++;
	c = c + j;

	my_ptr = malloc(c + 1);

	for (t = 0; t <= i; t++)
	{
		if (my_ptr == NULL)
			return (NULL);
		my_ptr[t] = s1[t];
	}
	for (t = 0; t <= j; t++)
	{
		if (my_ptr == NULL)
			return (NULL);
		my_ptr[i] = s2[t];
		i++;
	}
	return (my_ptr);
}
