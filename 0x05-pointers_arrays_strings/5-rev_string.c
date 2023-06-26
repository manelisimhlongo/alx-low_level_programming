#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i = 0, j;
	char aux;

	for (j = len - 1; i < j; i++, j--)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
	}
}
