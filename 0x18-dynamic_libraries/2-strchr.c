#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: a string
 *@c:input character
 *Return: pointer to the first occurrence in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
