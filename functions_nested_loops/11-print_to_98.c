#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: argument
 * Return: provids the result
 **/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n -= 1;
	}
	if (n == 98)
		printf("98");
	printf("\n");
}
