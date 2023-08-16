#include "main.h"

/**
 *_abs - computes the absolute value of an integer.
 *@n : an input integer
 *Return: Always 0
 **/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
