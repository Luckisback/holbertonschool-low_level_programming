#include "main.h"

/**
 * more_numbers - printing 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int v;
	int i;

	for (v = 1; v <= 10; v++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

