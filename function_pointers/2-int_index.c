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
	int r = 0;

	if (array == NULL || size == '\0' || size <= 0 || cmp == NULL)
	{
		r = -1;
		return (r);
	}
	for (size = 0; size <= 20 - 1; size++)
	{
		if (array[size] > 0)
			cmp(array[size]);
		if (array[size] == 98)
		{
			r = 1;
			return (1);
		}
	}
	return (size);
}
