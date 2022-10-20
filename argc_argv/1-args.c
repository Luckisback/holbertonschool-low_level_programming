#include <stdio.h>

/**
 * main - the programme the prints the number of argument
 * @argc: argument number
 * @argv: argument values
 * Return: 0 for success
 **/
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
