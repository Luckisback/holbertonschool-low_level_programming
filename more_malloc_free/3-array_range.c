#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer Argument
 * @max: Maximum integer Argument
 * Return: value of the array
 **/
int *array_range(int min, int max)
{
	int *ar1d, i;

	if (min > max)
		return (NULL);

	ar1d = malloc(min * max);
	if (ar1d == NULL)
	{
		return (NULL);
		for (i = min; i <= max; i++)
			ar1d[i] = i;
	}
	return (ar1d);
}
