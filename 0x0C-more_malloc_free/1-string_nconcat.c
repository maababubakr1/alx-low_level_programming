#include "main.h"

/**
 *string_nconcat - A function that concatenates two strings
 *@s1: first string to be concatenated
 *@s2: second string to be concatenated
 *@n: number of bytes of s2 to be concatenated.
 *Return: A pointer to new allocated memory (Success), NULL (Error)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 && s1[len1])
		len1++;
	if (s2 && s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	s3 = malloc(sizeof(char) * (len1 + n + 1));

	if (!s3)
		return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}

	while (n >= len2 && i < (len1 + len2))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	while (n < len2 && i < (len1 + n))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	s3[i] = '\0';

	return (s3);
}
