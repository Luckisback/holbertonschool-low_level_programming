#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @phr: argument
 * Return: the result
 **/

char *cap_string(char *phr)
{
	int i = 0;

	while (i)
	{
		while (!(phr[i] >= 'a' && phr[i] <= 'z'))
			i++;

		if (phr[i - 1] == ';'
			|| phr[i - 1] == '"'
			|| phr[i - 1] == '('
			|| phr[i - 1] == ')'
			|| phr[i - 1] == '{'
			|| phr[i - 1] == '}'
			|| phr[i - 1] == '\t'
			|| phr[i - 1] == '\n'
			|| phr[i - 1] == '?'
			|| phr[i - 1] == '!'
			|| phr[i - 1] == '.'
			|| phr[i - 1] == ' '
			|| phr[i - 1] == ','
			|| i == 0)
				phr[i] -= 32;
		i++;
	}
	return (phr);
}
