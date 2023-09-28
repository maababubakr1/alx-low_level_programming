#include "main.h"

/**
 *clear_bit - A function that sets the value of a bit to 0 at a given index.
 *@n: number to change
 *@index: index, starting from 0 of the bit you want to set
 *Return: 1 if worked, -1 for errors
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int new;

	if (index > 64)
		return (-1);

	new = index;
	for (i = 1; new > 0; i *= 2, new--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
