#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Argument
 * Return: sending of the pointer
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr_b;

	ptr_b = malloc(b);
		if (ptr_b == NULL)
			exit(98);
	return (ptr_b);

}
