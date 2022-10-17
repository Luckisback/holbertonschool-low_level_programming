# include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the first argument
 * @b: the second argument
 * @n: the third argument
 * Return:  returns a pointer to the memory area
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
