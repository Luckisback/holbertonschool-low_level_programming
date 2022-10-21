#include "main.h"

/**
 * first_int - determination of tne first input
 * @x: first integer
 * @y: second integer
 * Return: Always success (0)
 */

int first_int(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);

	else if (x == y)
		return (1);

	else if (x > y)
		first_int(x, y + 1);
	return (1);
}

/**
 * is_prime_number - a function that returns the first integer
 * it return 0 otherwise
 * @n: argument brougth to be tested
 * Return: the first prime input
 **/

int is_prime_number(int n)
{
	return (first_int(n, 2));
}
