#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *@dest: a memory area
 *@src: a memory area to be copied
 *@n: number of times to copy src
 *Return: to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
