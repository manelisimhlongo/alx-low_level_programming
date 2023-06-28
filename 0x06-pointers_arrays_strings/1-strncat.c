#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *temp = dest;

	while (*temp != '\0')
		temp++;

	while (src[i] != '\0' && i < n)
	{
		temp[i] = src[i];
		i++;
	}

	temp[i] = '\0';

	return (dest);
}
