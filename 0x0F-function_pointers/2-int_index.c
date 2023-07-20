#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer funtion to be executed
 * Return: -1 if no element matches or if size less tha 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
