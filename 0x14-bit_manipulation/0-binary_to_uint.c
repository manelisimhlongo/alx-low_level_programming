#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number to convert
 * Return: Unsigned int or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0;
	unsigned int integer = 0;
	unsigned int base_num = 1;

	if (b == NULL)
		return (0);

	while (b[length])
		length++;

	for (; length > 0; length--)
	{
		if (b[length - 1] != '0' && b[length - 1] != '1')
			return (0);

		if (b[length - 1] == '1')
			integer += base_num;
		base_num *= 2;
	}
	return (integer);
}
