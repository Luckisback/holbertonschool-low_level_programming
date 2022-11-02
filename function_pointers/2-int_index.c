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

	if (array == NULL || size == '\0' || cmp == NULL)
		for (i = 0; i <= size - 1; i++)
			cmp(array[i]);
	return (cmp(array[i]));
}
