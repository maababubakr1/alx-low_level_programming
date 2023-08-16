#include "main.h"

/**
 * _islower - check description
 *description:checks for lowercase character.
 *@c: an input character
 *Return: 1 if c is lowercase, otherwise Always 0 (Success)
 */

int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'c')
			return (1);
	}

	return (0);
}
