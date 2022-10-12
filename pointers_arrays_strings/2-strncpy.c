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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

