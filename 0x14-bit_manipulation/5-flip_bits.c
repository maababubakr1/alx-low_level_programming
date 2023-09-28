#include "main.h"

/**
 *flip_bits - A function that returns the number of bits you would need to flip
 *to get from one number to another.
 *@n:first number that need to be converted
 *@m: second number
 *Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int counter;

	i = n ^ m;

	counter = 0;

	while (i)
	{
		counter++;
		i &= (i - 1);
	}

	return (counter);
}
