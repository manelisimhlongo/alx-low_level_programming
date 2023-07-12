#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creates and array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: Charaters to initialize
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = c;
	}
	return (p);
	free(p);
}
