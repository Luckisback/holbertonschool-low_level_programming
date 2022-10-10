#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: argument (pointer)
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int r = 0;
	char rev;

	while (s[i++])
		r++;
	for (i = r - 1; i >= r / 2; i--)
	{
		rev = s[i];
		s[i] = s[r - i - 1];
		s[r - i - 1] = rev;
	}
}

