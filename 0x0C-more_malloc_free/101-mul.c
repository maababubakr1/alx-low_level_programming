#include <stdio.h>
#include "main.h"

/**
 *main - a program that multiplies two positive numbers
 *@argc: number of arguments
 *@argv: arguments
 *Return: nothing
 */

int main(int argc, char **argv)
{
	int num1, num2, multi;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		multi = num1 * num2;
		printf("%d\n", multi);
		return (0);
	}
}
