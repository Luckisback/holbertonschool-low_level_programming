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

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		return (0);
		else if (s1[i] != s2[i] ||
				(s1[i] == '\0' && s2[i] != '\0') ||
			       (s2[i] == '\0' && s1[i] != '\0') ||
			       (s1[i] == '\0' && s2[i] == '\0'))

			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
