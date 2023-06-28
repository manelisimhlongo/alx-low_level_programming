#include "main.h"

/**
 * rev_string -reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int b = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (b = 0; b < i; b++, i--)
	{
		temp = *(n + b);
		*(n + b) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 nums togeter
 * @n1: text representation of 1st num to be added
 * @n2: represents 2nd num to be added
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling funcion
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, b = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + b) != '\0')
		b++;
	i--;
	b--;
	if (b >= size_r || i >= size_r)
		return (0);
	while (b >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (b < 0)
			val2 = 0;
		else
			val2 = *(n2 + b) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		b--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
