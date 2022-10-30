#include <stdio.h>

/**
 * main - Printing different combinations of two digits.
 * Return: Alwayse 0 for success
 **/

int main(void)
{
	int i = 48, t = 0, c = 49, k = 9, a = 49, count;

	for (t = 0; t < k; t++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (t = 0; t < k; t++)
			{
				putchar(i);
				putchar(c);
				if (count == 44)
					break;
				putchar(',');
				putchar(' ');
				c++;
				count += 1;
			}
			k = k - 1;
			c = a + 1;
			a = a + 1;
		}
		putchar('\n');
	}
	return (0);
}
