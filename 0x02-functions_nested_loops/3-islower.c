#include "main.h"

/**
 * _islower - check description
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char a;
	int low = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			low = 1;
	}

	return (low);
}
