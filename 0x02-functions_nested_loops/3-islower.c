#include "main.h"

/**
 * _islower - checks if the character is lowercase
 *@c: an input character
 *Return: 1 if c is lowercase, otherwise Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
