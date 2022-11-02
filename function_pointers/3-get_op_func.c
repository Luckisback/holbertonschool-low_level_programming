#include "3-calc.h"

/**
 * get_op_func - a function that point to another
 * @s: is the operator passed as argument to the program
 * @ops[]: a struct of char and int
 * Return: a value return to the main
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i] != NULL)
	{
		if (ops[i] == NULL)
			return (NULL);
			s = ops[i][0];
		i++;
	}
	return (ops[i][1]);
}
