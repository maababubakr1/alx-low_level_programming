#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
		len++;

	i = len / 2;

	if (len % 2 == 1)
		i++;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
