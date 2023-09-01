#include "main.h"

/**
 *_atoi - function changes string into integers
 *@s: string to be converted
 *Return: The integer converted
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 *main - multiply two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return:  0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int no1, no2, sum;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);
	sum = no1 * no2;

	printf("%d\n", sum);
	return (0);
}
