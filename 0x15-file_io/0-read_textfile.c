#include "main.h"

/**
 *read_textfile - A function that reads a text file and prints it to
 *the POSIX standard output.
 *@filename: A pointer yo the name of the file.
 *@letters: the number of letters it should read and print.
 *Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ope, rea, wri;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	ope = open(filename, O_RDONLY);
	rea = read(ope, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, rea);

	if (ope == -1 || rea == -1 || wri == -1 || wri != rea)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(ope);

	return (wri);
}
