#include "3-calc.h"

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int arg1, arg2, answer;
	char f;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	f = *argv[2];
	if ((f == '/' || f == '%') && argv[2] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = func(arg1, arg2);

	printf("%d\n", answer);

	return (0);
}
