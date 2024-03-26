#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *@dest: A pointer to destination to be copied
 *@src: A string to be copied.
 *@n: number of characters to be copied from the source
 *Return: pointer of copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
