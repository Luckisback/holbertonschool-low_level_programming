#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * @action: a pointeur to function that execut the code
 * @array: First argument
 * @size: Second member
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL)
		return;
	for (i = 0; i <= array; i++)
		action(i);
}
