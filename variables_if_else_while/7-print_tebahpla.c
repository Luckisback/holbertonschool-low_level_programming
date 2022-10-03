#include <stdio.h>

/**
 * main - printing the Alphabet in lowercase with putchar(), in reverse
 * Return: O for success
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; --i)
		putchar(i);
	putchar('\n');
	return (0);
}

