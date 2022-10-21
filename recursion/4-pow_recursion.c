#include "main.h"

/**
 * _pow_recursion - A function that return a value of x
 * @x: first number to be raised to the power y
 * @y: the number use for the power
 * Return: the result
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
