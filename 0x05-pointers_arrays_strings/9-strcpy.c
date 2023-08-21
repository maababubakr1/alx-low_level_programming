#include "main.h"

/**
 *_strcpy - function that copies string, to buffer .
 *@dest : pointer to destination of a string
 *@src : pointer to source string
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;
	return (tmp);
}
