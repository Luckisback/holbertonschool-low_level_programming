#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase with putchar()
 * Return: O for success
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
		putchar(i);
	for (i = 97; i <= 102; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
