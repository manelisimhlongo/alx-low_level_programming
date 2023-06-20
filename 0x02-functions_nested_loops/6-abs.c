#include "main.h"

/**
 *_abs - check description
 *@r: input value
 *Return: returns r if abs and r*-1 if otherwise
 *Description: Prints absolute value of an integer
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
