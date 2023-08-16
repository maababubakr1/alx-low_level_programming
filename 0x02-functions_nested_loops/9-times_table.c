#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: Always 0
 */

void times_table(void)
{
	int i, multi, prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (multi = 0; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = i * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
