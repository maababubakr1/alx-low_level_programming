#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0.
 *@n : an input integer
 *Return: Always 0
 */

void print_times_table(int n)
{
	int i, multi, prod;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * multi;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod % 100) + 48);
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
		}
		_putchar('\n');
	}
}
