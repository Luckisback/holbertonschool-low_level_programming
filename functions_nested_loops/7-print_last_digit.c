#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number.
 * @i: the number to be treated
 * Return: n the number that is computing
 **/

int print_last_digit(int i)
{
	int n;

	if (i < 0)
		n = -1 *  (i % 10);
	else
		n = i % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
