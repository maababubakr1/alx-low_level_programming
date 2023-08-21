#include "main.h"

/**
 *_strcpy - function that copies string, to buffer .
 *@dest : pointer to destination of a string
 *@src : pointer to source string
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, n;

	len = 0;

	while (src[len] != '\0')
		len++;

	for (n = 0; n < len; n++)
		dest[n] = src[n];

	dest[n] = '\0';

	return (dest);
}
