#include <stdio.h>

/**
 * main -Printing all possible combinations of single-digit numbers.
 *
 * Return: alwayse 0 for success
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
		if (i != 9)
		{
			putchar(i);
			putchar(44);
			putchar(27);
		}
		else
		{
			putchar(i);
		}
	return (0);
}
