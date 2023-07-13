#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: argument count
 * @argv: argument string
 * Return: it's name
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
