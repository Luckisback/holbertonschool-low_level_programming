#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * @s: argument (pointer)
 */

void print_rev(char *s)
{
	int i;
	int rev;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (rev = i; rev--;)
		_putchar(s[rev]);
	_putchar('\n');
}
