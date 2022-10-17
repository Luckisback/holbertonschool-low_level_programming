#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @accept: bites accepted
 * @s:seconde argument
 *
 * Return: Return pointer to the byte in 's'
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *f;

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				f = &s[i];
				return (f);
			}
			j++;
		}
		i++;
	}
	return (0);
}
