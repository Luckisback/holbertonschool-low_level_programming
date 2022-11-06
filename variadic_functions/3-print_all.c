#include "variadic_functions.h"

/**
 * pr_char - imprimer un char
 * @len: argument
*/

void pr_char(va_list len)
{
	char my_var = va_arg(len, int);

		printf("%c", my_var);
}

/**
 * pr_int - imprimer un entier
 * @len: argument
*/
void pr_int(va_list len)
{
	int my_int = va_arg(len, int);

	printf("%d", my_int);
}

/**
 * pr_float - imprimer un float
 * @len: argument
*/
void pr_float(va_list len)
{
	double my_fl = va_arg(len, double);

	printf("%f", my_fl);
}

/**
 * pr_string - imprimer un string
 * @len: argument
 */
void pr_string(va_list len)
{
	char *str;

	str = va_arg(len, char*);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - a function that prints anything.
 * @format: last argument named (equivalent of var's type)
 * @...: argument number
 **/
void print_all(const char * const format, ...)
{
		op ops[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_string},
		{NULL, NULL}
		};

	va_list len;
	int i = 0;
	int j;
	char *space;

	va_start(len, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (ops[j].typeV)
		{
			if (*ops[j].typeV == format[i])
			{
				printf("%s", space);
				ops[j].f(len);
				space = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(len);
}
