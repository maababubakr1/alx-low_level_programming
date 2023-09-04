#include "main.h"

/**
 *alloc_grid - A function that returns a pointer
 *to a 2 dimensional array of integers.
 *@width: width of 2 dimensions
 *@height: height of 2 dimensions
 *Return: pointer (Success) or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int lw, lh;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (lh = 0; lh < height; lh++)
	{
		arr[lh] = (int *)malloc(sizeof(int) * width);
		if (arr[lh] == NULL)
		{
			free(arr);
			for (lw = 0; lw <= lh; lw++)
				free(arr[lw]);
			return (NULL);
		}

		for (lw = 0; lw < width; lw++)
			arr[lh][lw] = 0;
	}

	return (arr);
}

