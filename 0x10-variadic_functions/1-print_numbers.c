#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 ** print_numbers - A function that print numbers followed by a new line.
 ** @separator: string to be printed in between numbers.
 ** @n: amount of parameters
 ** @...: Other parameters
 ** Return: all parameters
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int numbs;
	va_list list;

	va_start(list, n);
	for (; i < n; i++)
	{
		numbs = va_arg(list, int);
		printf("%d", numbs);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
