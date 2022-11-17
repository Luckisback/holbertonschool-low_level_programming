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
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: argument that brings the binary to be convert
 * Return: the result obtained after convertion
 **/
unsigned int binary_to_uint(const char *b)
{
	int L_bin = 0;
	int position_bit = 0;
	int poids = 0;
	int i, x;
	unsigned int result = 0;

	while (b[L_bin] != '\0')
		L_bin++;
	x = 0;
	L_bin = L_bin - 1;

	for (i = L_bin; i >= 0; i--)
	{
		position_bit = L_bin - (L_bin - x);

		if ((b[i] != '1' && b[i] != '0') || b[i] == '\0')
			return (0);
		else if (b[i] == '1')
		{
			poids = _pow_recursion(2, position_bit);
			result = result + poids;
		}
		x++;
	}
	return (result);
}
