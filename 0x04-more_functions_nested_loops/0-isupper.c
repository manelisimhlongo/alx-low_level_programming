#include "main.h"

/**
 * _isupper - check main.h
 * @c: input value
 * Return: Always 0.
 */
int _isupper(int c)
{
	char up;
	int upper = 0;

	for (up = 'A'; up <= 'Z'; up++)
	{
		if (c == up)
			upper = 1;
	}
	return (upper);
}
