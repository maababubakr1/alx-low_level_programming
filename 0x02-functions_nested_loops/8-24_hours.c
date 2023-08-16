#include "main.h"

/**
 *jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 *Return: Always 0.
 */

void jack_bauer(void)
{
	int h, min;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
