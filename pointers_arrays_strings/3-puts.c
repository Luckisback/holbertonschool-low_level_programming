#include "main.h"

/**
 * _puts -  function to print entering char
 * @str - argument (pointer)
 *
 */

void _puts(char *str)
{
	long ph;

	ph = 0;

	while (str[ph] != '\0')
	{
		_putchar(str[ph]);
		ph++;
	}
	_putchar('\n');
}
