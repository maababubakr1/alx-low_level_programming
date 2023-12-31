#include "main.h"

/**
 *_strspn -  a function that gets the length of a prefix substring.
 *@s: string to evaluate
 *@accept: string of character to match
 *Return: the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, flag;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				count++;
				break;
			}
		}
		if (flag == 0)
			return (count);
	}
	return (count);
}
