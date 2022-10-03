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
	{
		putchar(i);

		if (i == 57)
			break;

		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
