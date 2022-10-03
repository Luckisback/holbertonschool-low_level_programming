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

	for (i = 48; i < 58; i++)
		if (i == 57)
		{
			putchar(i);
		}
		else
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
	return (0);
}
