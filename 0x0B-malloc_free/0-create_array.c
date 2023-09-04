#include "main.h"

/**
 *create_array - A function that creates an array of chars and initializes it
 *with a specific char.
 *@size: size of array to be made
 *@c: initial character of array
 *Return: pointer to array, NULL if it fails or if size is 08
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
