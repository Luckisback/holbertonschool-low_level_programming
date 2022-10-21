#include "main.h"

/**
 * factorial - A function that return a factorial of n
 * @n: The number given
 * Return: send-back the factorial or error otherwise
 **/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if
		(n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
