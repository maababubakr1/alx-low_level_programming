#include "main.h"

/**
 *get_endianness - A function that checks the endianness
 *
 *Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int num;

	num = 1;

	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
