#include "main.h"

/**
 * _isdigit - Is a function that checks for a digit (0 - 9)
 * @c: A argument
 * Return: 1 if c is a digit; 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
