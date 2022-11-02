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
	int i;
	int r = 0;

	if (array == NULL || size == '\0' || size <= 0 || cmp == NULL)
	{
		r = -1;
		return (r);
	}
	for (i = 0; i <= size - 1; i++)
		cmp(array[i]);
	return (cmp(array[i]));
}
