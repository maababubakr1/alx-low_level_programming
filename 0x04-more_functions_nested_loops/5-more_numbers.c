#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 *@i , @t : input integers
 *Return: Always 0.
 */

void more_numbers(void)
{
	int i, t;

	for (t = 0; t <= 10; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}

	_putchar('\n');
	}
}
