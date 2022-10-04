#include "main.h"

/**
 * _islower - A function that ckeck if a character is loweror upercase
 * @c: if that character which will be enter for the checking
 *Return: 1 if c is lowercase, and 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
