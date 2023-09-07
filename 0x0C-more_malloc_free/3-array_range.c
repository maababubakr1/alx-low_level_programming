#include "main.h"

/**
 *array_range - A funcyion that creates array of integers
 *@min: minimum value included
 *@max: maximum value included
 *Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int i, dif;

	if (min > max)
		return (NULL);

	dif = max - min;

	a = malloc(sizeof(int) * (dif + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= dif; i++)
		a[i] = min++;

	return (a);
}

