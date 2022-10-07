#include "main.h"

/**
 * times_table - a function that prints the 9 times tables
 *
 */

void times_table(void)
{
	int x, c, y, i;

	y = 0;

	for (c = 0; c <= 9; c++)
	{
		for (x = 0; x <= 9; x++)
		{
			i = (x * y);
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (x < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		y = y + 1;
		_putchar('\n');
	}
}
