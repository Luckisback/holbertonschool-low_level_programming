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
	char *my_ptr = NULL;
	unsigned int t, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;

	my_ptr = malloc(sizeof(char) * i + 1);

	for (t = 0; t <= i; t++)
	{
		if (my_ptr == NULL)
			return (NULL);
		my_ptr[t] = s1[t];
	}
	for (t = 0; s2[t] && t < n; t++)
	{
		if (my_ptr == NULL)
			return (NULL);
		my_ptr[i++] = s2[t];
	}
	return (my_ptr);
}
