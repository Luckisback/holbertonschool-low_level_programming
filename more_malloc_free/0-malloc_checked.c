#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Argument
 * Return: sending of the pointer
 **/

void *malloc_checked(unsigned int b)
{
	char **ptr_b;

	if (b <= 0)
		exit(98);
	else
	{
		ptr_b = malloc(sizeof(char *) * b);
		if (ptr_b == NULL)
			exit(98);
		else if (b >= 1024)
		{
			ptr_b = malloc(sizeof(int *) * b);
		}

	}

	return (ptr_b);

}
