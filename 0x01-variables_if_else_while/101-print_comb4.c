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
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = a + 2; c <= '9'; c++)
			{
				if (c != a)
				{
					putchar(',');
					putchar(' ');
				}
				if (a == '7' && c == '9')
					continue;
			}
			if (b != a)
			{
				putchar(',');
				putchar(' ');
			}
				if (a == '7' && b == '8')
					continue;
		}
	}
	return (0);
}