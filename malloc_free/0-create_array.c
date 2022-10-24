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
	char *Myarray = malloc(sizeof(c) * size);
	unsigned int i;

		if (size <= 0)
		{
			return (NULL);
		}
		else if (Myarray == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
			Myarray[i] = c;
	return (Myarray);
}
