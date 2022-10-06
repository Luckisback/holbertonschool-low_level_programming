#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _
 * _putchar - the function permit to print
 *
 **/

void print_line(int n)
{
	int i;

	i = 0;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
			_putchar(95);
		_putchar('\n');
	}
}

