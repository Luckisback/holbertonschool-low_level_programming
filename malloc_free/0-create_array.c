#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: the arrays size
 * @c: argument
 * Return: char
 **/

char *create_array(unsigned int size, char c)
{
	char *Myarray = malloc(sizeof(unsigned int) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			return (NULL);
		}
		else
		{
			Myarray[i] = c;
		}
	}
	for (i = 0; i < size; i++)
	{
		if (Myarray[i] <= 0 || Myarray[i] != c)
			return (NULL);
	}
	return (Myarray);
}
