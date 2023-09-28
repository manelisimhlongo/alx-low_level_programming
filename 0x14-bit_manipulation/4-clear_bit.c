#include "main.h"

/**
 * clear_bit - function thatsets the value of a bit to 0 at any given index
 * @n: number to search in
 * @index: position to replace values with
 * Return: 1 if successful and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin_max = 1;
	unsigned long int bin_xor;

	bin_xor = ~(bin_max << index);

	if (bin_xor == 0)
		return (-1);
	*n &= bin_xor;
	return (1);
}
