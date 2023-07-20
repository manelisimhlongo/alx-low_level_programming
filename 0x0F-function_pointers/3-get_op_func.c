#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function for selecting correct
 * function to perfom the operator
 * @s: input operator passed as argument
 * Return: A pointer
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t opes[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*(opes[i]).op == *s && *(s + 1) == '\0')
			return (opes[i].f);
		i++;
	}
	return (NULL);
}
