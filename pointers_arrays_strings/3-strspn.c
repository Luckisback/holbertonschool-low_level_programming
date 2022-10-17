#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: argument pointer
 * @accept: argument pointer
 *
 * Return: the value expected
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l;

	i = l = 0;
	while (s[i] != 0)
	{
		j = 0;
		k = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				j++;
				k++;
				l++;
			}
		}
		if (k == 0)
			return (l);
		i++;
	}
	return (l);
}
