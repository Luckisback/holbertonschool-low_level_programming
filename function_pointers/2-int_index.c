#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: first argument
 * @size: seconde argument
 * @cmp: a point to function
 * Return: the value return to the main
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size == '\0' || cmp == NULL)
	{
		return (-1);
	}

	cmp(array[ysize]);

	for (size = 0; size <= 20 - 1; size++)
	{
		if ((array[size]) > 0)
			cmp(array[size]);
		if ((array[size]) != 98 && size == 20)
		{
			return (1);
		}
	}
	return (array[size]);
}
