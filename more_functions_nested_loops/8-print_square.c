#include "main.h"

/**
 * print_square - function that prints a square
 * @size: argument
 * _putchar - function that prints characters
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 1; x <= size; x++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
}

