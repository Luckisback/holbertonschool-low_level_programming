#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * @width: Argument
 * @height: Argumrnt
 * Return: a point integer
 **/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array2d;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2d = (int **)malloc(height * sizeof(int *));

	if (array2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2d[i] = (int *)malloc(width * sizeof(int));

		if (array2d[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(array2d[j]);
			free(array2d);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array2d[i][j] = 0;
		}
	}
	return (array2d);
}

