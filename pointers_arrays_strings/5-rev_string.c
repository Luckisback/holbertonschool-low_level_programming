#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: argument (pointer)
 *
 */

void rev_string(char *s)
{
	int i, rev, c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	if (c % 2 == 0)
	{
		for (i = 0; i <= ((c  / 2) + 1); i++)
		{
			rev = s[i];
			s[i] = s[c - 1];
			s[c - 1] = rev;
			c--;
		}
	}
	else
	{
		for (i = 0; i <= (c / 2); i++)
		{
			rev = s[i];
			s[i] = s[c - 1];
			s[c - 1] = rev;
			c--;
		}
	}
}
