#include "main.h"

/**
 * get_endianness -A function that cheack the endianness
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *p;

	p = (char *)&a;
	if (p)
		return (1);
	return (0);
}
