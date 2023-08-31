#include "main.h"

/**
 ** _strlen_recursion - function that counts a string using recursion
 ** @s: input string
 ** Return: len
 **/
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
