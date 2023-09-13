#include "function_pointers.h"

/**
 *int_index - A function that searches for an integer
 *@array: an array's pointer
 *@size: number of elements in the array
 *@cmp: a pointer to the function to be used to compare values
 *Return: returns the index of the first element for which the cmp function
 *does not return 0, or -1 if no elements matches or size <= 0.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);


	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (i == size)
		return (-1);

	return (-1);
}
