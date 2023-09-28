#include <unistd.h>

/**
 * _putchar - writes out characters
 * @a: character to write out
 * Return: 1 on success and -1 otherwise
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
