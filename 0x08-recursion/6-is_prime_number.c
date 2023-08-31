#include "main.h"
int prnum_finder(int num, int prm);

/**
 * is_prime_number - function that returns if an int is a prime number
 * @n: input number
 * Return: 1 if int is prime number and 0 is not
 */
int is_prime_number(int n)
{
	int prm = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (prnum_finder(n, prm));
}

/**
 * prnum_finder - checks if num is prime n.
 * @prm: used to check if num can be divided
 * @num: number to be checked
 * Return: 1 if num is prime num, else 0
 */
int prnum_finder(int num, int prm)
{
	if (num % prm == 0)
		return (0);
	if (prm == num / 2)
		return (1);
	return (prnum_finder(num, prm + 1));
}
