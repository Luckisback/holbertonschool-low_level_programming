#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 * @lc: lowercase
 * Return: the result
 **/

char *string_toupper(char *lc)
{
	int i = 0;

	while (lc[i])
	{
		if (lc[i] >= 'a' && lc[i] <= 'z')
			lc[i] -= 32;

		i++;
	}

	return (lc);
}
