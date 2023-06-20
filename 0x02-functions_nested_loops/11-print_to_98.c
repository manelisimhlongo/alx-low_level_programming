#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - Check main.h
 * @n: An input value
 * Description: This function prints all natural numbers from n to 98
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
}
