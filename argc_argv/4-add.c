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
	int val, i, j;

	val = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[1][j]; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
			val += atoi(argv[i]);
	}

	printf("%d\n", val);
	return (0);
}
