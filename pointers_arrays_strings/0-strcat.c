#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the first part of the string
 * @src: the seconde part to be concatenat
 * Return: a pointer to the resulting string dest
 **/
char *_strcat(char *dest, char *src)
{
	char *concat = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (concat);
}
