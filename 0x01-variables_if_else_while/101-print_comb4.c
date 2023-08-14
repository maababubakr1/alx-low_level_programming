#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
		for (c = a + 2; c <= '9'; c++)
		{
			for (b = a + 1; b <= '9'; b++)
			{
				if (b != a)
				{
					putchar('a');
					putchar('b');
				}
				if (a == '7' && b == '8')
					continue;
			}
			if (c != a)
			{
				putchar('a');
				putchar('c');
			}
				if (a == '7' && c == '9')
					continue;
		}
	}
	putchar(',');
	putchar(' ');

	return (0);
}
