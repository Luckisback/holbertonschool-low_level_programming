#include <stdio.h>

/**
 * main - The function that prints its own name
 * @argc: Arguments acount
 * @argv: Arguments values
 **/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
