#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse with recursion
 * @s: input string
 * Return - Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
