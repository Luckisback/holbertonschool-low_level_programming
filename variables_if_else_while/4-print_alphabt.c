#include <stdio.h>

/**
 * main - Alphabet with putchar(), without the letter q and e
 * Return: O for success
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
