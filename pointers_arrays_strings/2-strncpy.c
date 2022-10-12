#include "main.h"

/**
 * _strncpy - funt that copies a string
 * @dest: destination of the string copied
 * @src: string to be copied
 * @n: the third argument
 * Return: the point containing the value
 **/

char *_strncpy(char *dest, char *src, int n)
{
	char *rt = dest;

	if (*src != '\0')
	{
		while (*src && n--)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	return (rt);
}

