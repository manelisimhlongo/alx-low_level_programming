#include "main.h"

/**
 * flip_bits - function that returns the number of bits you woulnd need to flip
 * @n: values to find bit to flip
 * @m: integer to replace value with
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int bin_max = 1, bin_xor = (n ^ m);

	for (; bin_max <= bin_xor; bin_max <<= 1)
	{
		if (bin_max & bin_xor)
			num++;
	}

	return (num);
}
