#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 * @argc: argument count
 * @argv: argument values
 * Return: 0 for success
 *
 **/

int main(int argc, char *argv[])
{
	int val, i;

	for (i = 0; i < argc; i++)
	{
		if (argc - 1 <= 0)
			val = 0;
		else
			val += atoi(argv[i]);
	}

	printf("%d\n", val);
	return (0);
}
