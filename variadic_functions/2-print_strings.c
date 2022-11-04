#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: argument pointer
 * @n: argument constant
 *
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *str;

	va_start(va, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(va, char*);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
}
