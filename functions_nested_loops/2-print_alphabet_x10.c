#include "main.h"
/**
 * *print_alphabet_x10 - printing 10 time the alphabet
 * Return: Alwayse 0 for success
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 123 ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
