#include "main.h"

/**
 * _strcpy - copy a string into another string
 * @dest: first argument
 * @src: second argument
 * Return: return the expected result
 **/

char *_strcpy(char *dest, char *src)
{
	char *i = dest;
	int z = '\0';

	while (*src)
	{
		*dest++ = *src++;
		*dest = z;
	}
	return (i);
}
