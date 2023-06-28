#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: pointer to array
 * @n: Input length of array
 * Return - nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
