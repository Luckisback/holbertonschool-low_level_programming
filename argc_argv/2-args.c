#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument values
 * Return: O for success (the end of the programmme
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
