#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first argument
 * @s2: seconde argument
 * Return: zero for success and 1 for failure
 **/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
