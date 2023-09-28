#include "main.h"

/**
 * set_bit - function sets the value at any given index to 1
 * @n: value to use index on
 * @index: position to replace value
 * Return: 1 if successfull and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin_max = 1 << index;

	if (bin_max == 0)
		return (-1);

	*n |= bin_max;
	return (1);
}
