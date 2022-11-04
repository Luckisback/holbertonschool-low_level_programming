#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: argument pointer
 * @n: argument constant
 *
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, saisie;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		saisie = va_arg(num, int);

		if (separator == NULL || separator == 0)
			continue;
		printf("%d", saisie);

		if (i == n - 1)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
