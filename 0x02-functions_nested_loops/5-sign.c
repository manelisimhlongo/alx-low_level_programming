#include "main.h"

/**
 * print_sign - Check description
 * @n: An input character
 * Description: function prints the sign of a letter
 * Return: 1 if n>0, 0 if n==0, -1 if n<0
 * Prints: + if n>0, 0 if n==0, - if n<0
 */
int print_sign(int n)
{
	int value;

	if (n  > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
