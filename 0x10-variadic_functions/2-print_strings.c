#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 ** print_strings - A function that print strings followed by a new line.
 ** @separator: Input string to be printed between the strings.
 ** @n: amount of parameters
 ** @...: variable parameters
 ** Return: Nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list list;

	va_start(list, n);
	for (; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
