#include <stdio.h>

/**
 * main - printing the Alphabet in lowercase with putchar()
 * Return: O for success
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
