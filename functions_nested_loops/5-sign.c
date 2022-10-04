#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @n: the character that must be tested
 * Return: 0 for success
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
