#include "lists.h"

/**
 * print_binary - a function that prints the binary representation
 * @n: Argument
 **/

void print_binary(unsigned long int n)
{
	int Bin, x, y;
	int L = 0;

	while (n >= 0)
	{
		if ( n == 0 && (x == 0))
			exit(-1);
		y = n >> 1;
		Bin = n -(y * 2);
		n = y;
		L++;
		printf("%d ", Bin);
	}
}
