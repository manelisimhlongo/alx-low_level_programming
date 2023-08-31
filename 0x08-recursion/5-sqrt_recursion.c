#include "main.h"
int _sqrt_finder(int num, int sqroot);

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: input root number
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_finder(1, n));
}

/**
 * _sqrt_finder - this function looks for the natural number of the root
 * @num: input integer that starts at 1
 * @sqroot: input square root num
 * Return: num if equals to sqroot
 */
int _sqrt_finder(int num, int sqroot)
{
	if (num > sqroot)
		return (-1);
	else if (num * num == sqroot)
		return (num);
	return (_sqrt_finder(num + 1, sqroot));
}
