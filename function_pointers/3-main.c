#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the main programm that call functions
 * @argc: the number of num
 * @argv: corresponds to each element of the array
 **/
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
		printf("Error\n");
		return (99);

	if (atoi(argv[1]) / 0 || atoi(argv[1] / 0)
		printf("Error\n");
		return (100);

	result = (get_op_func(s)(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
