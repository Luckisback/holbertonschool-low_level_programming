#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of Int
 * @a: pointeur as argument
 * @n: the number of array's elements
 *
 **/

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
