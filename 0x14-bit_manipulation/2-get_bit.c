#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: Integer to check index for
 * @index: position to check for in integer
 * Return: value of bit at index or -1 in case of an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin_max = 1 << index;

	if (bin_max == 0)
		return (-1);
	if ((n & bin_max))
		return (1);
	else
		return (0);
}
