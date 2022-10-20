#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument valueq
 * Return: 0 for success (the end of the programme
 */
int main(int argc, char *argv[])
{
	int res;

	res = 0;

	if (argc < 1 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
