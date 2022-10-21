#include "main.h"

/**
 * check_my_var - a function that verifies
 * @n: number given
 * @a: the number that will be define or not as a square root
 * Return: tthe function for being checked in recursion function
 **/

int	check_my_var(int n, int a)
{
	if ((a * a) == n)
		return (a);
	if ((a * a) > n)
		return (-1);
	return (check_my_var(n, a + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number
 * Return: return the square root
 **/

int _sqrt_recursion(int n)
{
	return (check_my_var(n, 0));
}
