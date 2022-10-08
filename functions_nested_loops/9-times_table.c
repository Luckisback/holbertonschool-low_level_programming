#include "main.h"

/**
 * times_table - a function that prints the 9 times tables
 *
 */

void times_table(void)
{
	int x, c, i;

	for (c = 0; c <= 9; c++)
	{
		for (x = 0; x <= 9; x++)
		{
			i = (x * c);

			if (i > 9)
				_putchar(i / 10 + '0');
			else if (i >= 0 && x != 0)
				_putchar(' ');

			_putchar(i % 10 + '0');

			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
