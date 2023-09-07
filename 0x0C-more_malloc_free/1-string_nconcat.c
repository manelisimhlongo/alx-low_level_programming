#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first inputc string
 * @s2: second input string
 * @n: input integer
 * Return: pointer to string or NULL termination
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1 = 0, len2 = 0, i = 0, a;

	if (s1 == NULL)
		s1 = "";

	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	a = len1 + n + 1;
	new = malloc(a);

	if (new == NULL)
		return (NULL);

	for (; i < (len1 + n); i++)
	{
		if (i < len1)
		{
			new[i] = *s1;
			s1++;
		}
		else
		{
			new[i] = *s2;
			s2++;
		}
	}

	new[i] = '\0';
	return (new);
}
