#include "ltsts.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a structure that brings elements
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	va_list str*;
	int i, sum;

	va_start(str*, n);

	sum = 0;
	for (i = 0; i < n; i++)
		str[i] = va_arg(arg, char*);
		if (str[i] == NULL)
			printf("[0] (nil)");
		else
			sum += va_arg(arg, char*);
			printf("%s", str[i]);
	va_end(ap);
	return (sum);

}
