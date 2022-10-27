#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: Unsigned int argument
 * @size: Unsigned int argument
 * Return: the array pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar1d;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar1d = malloc(size * nmemb);
	if (ar1d == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar1d[i] = 0;
	}
	return (ar1d);
}
