#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that adds integers
 * @a: input integer
 * @b: input integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 ** op_sub - function that subtracts integers
 ** @a: input integer
 ** @b: input integer
 ** Return: subtraction
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 ** op_mul - function that multiplies integers
 ** @a: input integer
 ** @b: input integer
 ** Return: multiple
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 ** op_div - function that divides integers
 ** @a: input integer
 ** @b: input integer
 ** Return: division
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 ** op_mod - function that modulizes integers
 ** @a: input integer
 ** @b: input integer
 ** Return: modula
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Erroe\n");
		exit(100);
	}
	return (a % b);
}
