#include "main.h"

/**
 *print_alphabet_x10 - check description
 *description: prints 10 times the alphabet in lowercase,followed by a new line
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
