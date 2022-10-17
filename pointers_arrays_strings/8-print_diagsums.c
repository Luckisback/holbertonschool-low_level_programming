#include <stdio.h>

/**
 * print_diagsums - printing two diagonals of a square matrix
 * @a: argument pointer
 * @size: second argument
 */
void	print_diagsums(int *a, int size)
{
	int	i;
	int	x;
	int	y;

	x = 0;
	y = 0;
	for (i = 0; i < size; i++)
	{
		x += a[(size + 1) * i];
		y += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", x, y);
}
