#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers in order
 * @min: lowest input number of arrays
 * @max: highest input number of arrays
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *new;
	int i, sub;

	if (min > max)
		return (NULL);

	sub = max - min;
	new = malloc(sizeof(int) * (sub + 1));
	if (new == NULL)
		return (NULL);

	for (i = 0; i <= sub; i++)
		new[i] = min++;

	return (new);
	free(new);
}
