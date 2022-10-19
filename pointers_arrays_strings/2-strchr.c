#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string in what, we will search our char
 * @c: the character which will be find
 * Return: the value found in pointer
 **/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	*s = '0';
	return (s);
}
