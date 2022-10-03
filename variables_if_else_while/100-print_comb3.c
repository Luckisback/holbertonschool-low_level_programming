#include <stdio.h>

/**
 * main - Printing different combinations of two digits.
 *
 * Return: Alwayse 0 for success
 *
 */

int main(void)
{
	int i, j, t, c;

	i = 9;
	j = 48;
	t = 49;

	while (i != 0)
	{
		for (c = i; c > 0; c--)
		{
			putchar(j);
			putchar(t);
			if (j == 56 && t == 57)
				break;
			putchar(44);
			putchar(32);
		}
		j++;
		t++;
		i--;
	}
	putchar('\n');
	return (0);
}
