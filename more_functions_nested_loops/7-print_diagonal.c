#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * _putchar - function that threat the dysplay of characters
 * @n: argument
 **/

void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
