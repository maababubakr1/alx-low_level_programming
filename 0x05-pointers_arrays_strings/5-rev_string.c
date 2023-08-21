#include "main.h"

/**
 *rev_string - function that reverses a string.
 *@s: input string to be reversed
 *Return: Nothing
 */

void rev_string(char *s)
{
	int len, e;
	char tmp;

	len = 0;
	e = 0;

	while (s[len] != '\0')
		len++;

	while (e < len--)
	{
		tmp = s[e];
		s[e++] = s[len];
		s[len] = tmp;
	}
}
