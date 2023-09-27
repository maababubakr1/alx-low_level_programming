#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints its own opcode
 *@argc: Number of argumebts
 *@argv: array of arguments
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *str;
	int no, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no = atoi(argv[1]);

	if (no < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;

	for (i = 0; i < no; i++)
	{
		if (i == no - 1)
		{
			printf("%02hhx\n", str[i]);
			break;
		}

		else
			printf("%02hhx ", str[i]);
	}

	return (0);
}
