#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @i: the char that allows the maths
 * Return: 0 for Success
 **/

int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
