#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- function allocates memory
 * @b: unsigned integer input
 * Return: pointer or termination with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);

	return (new);
}
