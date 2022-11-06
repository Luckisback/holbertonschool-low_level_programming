#ifndef __VARIADIC_FUNC__
#define __VARIADIC_FUNC__
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - main var for print_all
 * @typeV: member
 * @f: second member function
 **/
typedef struct op
{
	char *typeV;
	void (*f)(va_list len);

} op;
#endif
