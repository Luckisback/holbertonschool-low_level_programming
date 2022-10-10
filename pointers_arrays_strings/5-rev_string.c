#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: argument (pointer)
 *
 */

void rev_string(char *s)
{
	int i, c;
	char rev;

	i = 0;
	c = 0;

	while (s[i++])
		c++;
	for (i = 0; i <= (c / 2); i++)
	{
		rev = s[i];
		s[i] = s[c - 1];
		s[c - 1] = rev;
		c--;
	}
}
