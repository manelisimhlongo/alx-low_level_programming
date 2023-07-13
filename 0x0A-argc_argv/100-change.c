#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function name
 * @argc: argument count
 * @argv: argument string
 * Return: minimum number of coins to nake a change
 */
int main(int argc, char **argv)
{
	int cents = 0, amount;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (amount % 25 >= 0)
		{
			cents += amount / 25;
			amount = amount % 25;
		}
		if (amount % 10 >= 0)
		{
			cents += amount / 10;
			amount = amount % 10;
		}
		if (amount % 5 >= 0)
		{
			cents += amount / 5;
			amount = amount % 5;
		}
		if (amount % 2 >= 0)
		{
			cents += amount / 2;
			amount = amount % 2;
		}
		if (amount % 1 >= 0)
			cents += amount / 1;
		printf("%d\n", cents);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
