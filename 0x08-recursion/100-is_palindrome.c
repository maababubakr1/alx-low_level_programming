#include "main.h"

int _length(char *s);
int check(char *s, int i, int len);

/**
 *is_palindrome - Checks if a string is a palindrome
 *@s: string.
 *Return: 1 if it is , 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _length(s)));
}

/**
 *_length - A functuon that returns the length of a string
 *@s: string to be measured
 *Return: length of a string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 *check - check if a function is palindrome or not
 *@s: string to be checked
 *@i: iterator
 *@len: length of the string
 *Return: 1 of it is , 0 if not
 */

int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check(s, i + 1, len - 1));
}
