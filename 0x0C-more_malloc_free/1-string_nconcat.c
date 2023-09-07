#include "main.h"

/**
 *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to concatente to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenated
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		s3 = malloc(sizeof(char) * (len1 + n + 1));

	if (s3 == NULL)
		return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s3[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s3[i++] = s2[j++];

	s3[i] = '\0';

	return (s3);
}
