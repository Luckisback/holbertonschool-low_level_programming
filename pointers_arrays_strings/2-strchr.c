#include "main.h"
#include <stdlib.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string in what, we will search our char
 * @c: the character which will be find
 * Return: the value found in pointer
 **/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
