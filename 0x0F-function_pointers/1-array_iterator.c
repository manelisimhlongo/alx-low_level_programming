#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that execytes a function passed as an argument
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer function that executes
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
