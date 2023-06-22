#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
