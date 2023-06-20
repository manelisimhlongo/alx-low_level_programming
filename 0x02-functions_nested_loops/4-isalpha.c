#include "main.h"

/**
 *_isalpha - check description
 *@c: input character
 *Description: Checks if c is an alphabet
 *Return: returns 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	char low, up;
	int letter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
				letter = 1;
		}
	}
	return (letter);
}
