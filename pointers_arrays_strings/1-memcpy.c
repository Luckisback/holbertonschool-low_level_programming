#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: argument pointer
 * @dest: argument pointer
 * @n: unsigned int argument
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
