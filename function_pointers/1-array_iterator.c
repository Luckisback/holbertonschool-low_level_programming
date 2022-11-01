#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * @action: a pointeur to function that execut the code
 * @array: First argument
 * @size: Second member
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == '\0' || action == NULL)
		return;
	for (i = 0; i <= size - 1; i++)
		action(array[i]);
}
