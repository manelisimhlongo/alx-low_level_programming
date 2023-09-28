#include "main.h"

/**
 * print_binary - function that prints the binary representation of a num
 * @n: integer to convert
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int bin_max = 32768;
	unsigned int a = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; bin_max > 0; bin_max >>= 1)
	{
		if (a == 1 && (n & bin_max) == 0)
			_putchar('0');
		else if ((n & bin_max) != 0)
		{
			_putchar('1');
			a = 1;
		}
	}
}
