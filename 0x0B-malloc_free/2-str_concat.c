#include "main.h"
#include <stdlib.h>

/**
 * str_concat - fuction that concatenates two strings
 * @s1: first pointer to a strin
 * @s2: second pointer to a string
 * Return: pointer to a newly allocates memory space with
 * s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	char *first, *second, *new;
	int size_one = 0, size_two = 0, i;

	if (s1 == NULL)
		s1 = "";
	first = s1;
	while (*s1)
	{
		size_one++;
		s1++;
	}
	s1 = first;
	if (s2 == NULL)
		s2 = "";
	second = s2;
	while (*s2)
	{
		size_two++;
		s2++;
	}
	s2 = second;
	new = malloc(sizeof(char) * (size_one + size_two + 1));
	first = new;
	if (new == NULL)
		return (NULL);
	for (i = 0; i < (size_one + size_two); i++)
	{
		if (i < size_one)
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
	new[size_one + size_two + 1] = '\0';
	return (first);
}
