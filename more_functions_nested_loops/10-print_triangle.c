#include "main.h"

/**
 * print_triangle - function that print a triangle
 * _putchar - function that trheat the characters
 * @size:  argument used in the programm
 **/

void print_triangle(int size)
{
	int x = 0;
	int i = 0;
	int z = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (i = 1; i <= (size - x); i++)
			{
				_putchar(32);
			}
			for (z = 1; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
