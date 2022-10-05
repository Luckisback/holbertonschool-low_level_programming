#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: An argument provided for the operation
 * Retur: 1 if c is uppercase, else return 0 for otherwise
 */

int _isupper(int c)
{
	int n;

	if (c >= 'A' && c <= 'Z')
		n = 1;

	if (c >= 'a' && c <= 'z')
		n = 0;
	return (n);
}
