#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: argument count
 * @argv: argument strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
