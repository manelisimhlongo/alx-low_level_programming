#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 ** print_all - Function that prints anything
 ** @format: A list of types arguments
 ** Return: Nada
 **/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list ab;

	va_start(ab, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ab, int));
				break;
			case 'i':
				printf("%d", va_arg(ab, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ab, double));
				break;
			case 's':
				str = va_arg(ab, char*);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ab);
	printf("\n");
}
