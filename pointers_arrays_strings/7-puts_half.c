#include "main.h"

/**
 * puts_half -  a function that prints half of a string
 * @str: argument (pointeur)
 *
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	n = 0;

	while (str[i++])
		n++;
	for (i = (n  / 2); i <= n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
