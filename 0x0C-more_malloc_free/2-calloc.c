#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of array elements
 * @size: inut integer of size of each array
 * Return: pointer to allocated memory or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i = 0, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	new = malloc(total);
	if (new == NULL)
		return (NULL);

	for (; i < total; i++)
		*(new + i) = 0;

	return (new);
}
