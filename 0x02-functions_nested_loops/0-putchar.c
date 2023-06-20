#include<unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int a;

	for (a = 0; a <= 7; a++)
		_putchar(word[a]);

	_putchar('\n');

	return (0);
}
