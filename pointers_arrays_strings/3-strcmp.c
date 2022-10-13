#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first argument
 * @s2: seconde argument
 * Return: zero for success and 1 for failure
 **/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	if (i == c)
	{
		for (i = 0; i <= c; i++)
		{
			if (s1[i] == s2[i])
				return (0);
			else if (s1[1] != s2[i])
				return (-15);
			else
				return (15);
		}
	}
	else if (i != c)
		return (-15);
	return (15);
}
