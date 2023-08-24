#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 *@s1: A string to be compared
 *@s2: A string to be compared
 *Return: 0 if equal,otherwise the difference in s1 -s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
