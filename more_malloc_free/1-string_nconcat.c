#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: pointer argument
 * @s2: pointer argument
 * @n: Argument
 * Return: type char
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *my_ptr;
	unsigned int i = n;
	unsigned int t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (t = 0; s1[t]; t++)
		i++;

	my_ptr = malloc(sizeof(char) * (i + 1));

	i = 0;

	for (t = 0; s1[t]; t++)
	{
		if (my_ptr == NULL)
			return (NULL);
		my_ptr[i++] = s1[t];
	}
	for (t = 0; s2[t] && t < n; t++)
	{
		if (my_ptr == NULL)
			return (NULL);
		my_ptr[i++] = s2[t];
	}
	my_ptr[i] = '\0';

	return (my_ptr);
}
