#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - takes in a function argument that prints its character argument
 * @name: name to be printed
 * @f: pointer function argument that prints name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
