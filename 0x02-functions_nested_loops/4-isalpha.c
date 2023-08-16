#include "main.h"

/**
 *_isalpha - check if character is alphabet
 *@c : an input character
 *Return: 1 if c is a letter, lowercase or uppercase , otherwise 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
