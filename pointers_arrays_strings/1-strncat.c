#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the first part of string
 * @src: the seconde part of string
 * @n: the number of letter to be concatenated
 * Return:  a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *rt = dest;

	while (*dest != '\0')
		dest++;
	if (*src != '\0')
	{
	for (i = 0; i <= n - 1; i++)
	{
		*dest = src[i];
		dest++;
	}

	*dest = '\0';
	}
	return (rt);
}
