#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** main - function name
 ** @argc: argument count
 ** @argv: argument string
 ** Return: it's name
 **/
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
