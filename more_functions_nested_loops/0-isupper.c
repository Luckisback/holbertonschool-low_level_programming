#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: argument that brings a number
 * _putchar Function that changes number to chacarter
 * Return: 1 if it's an uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
