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
	int *ar1d, i, t;

	if (min > max)
		return (NULL);
	t = (max - min);
	if (t < 0)
		t = t * (-1);

	ar1d = malloc(min * max);
	if (ar1d == NULL)
	{
		return (NULL);
		for (i = 0; i <= t; i++)
		{
			ar1d[i] = min;
			min++;
		}
	}
	return (ar1d);
}
