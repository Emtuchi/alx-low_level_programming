#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	r = read(file, buffer, letters);
	w = write(STDOUT_FILEN0, buffer, r);

	if (file == -1)
	{
		return (0);
	}

	if (r == -1)
	{
		return (0);
	}

	if (w == -1)
	{
		return (0);
	}

	close(file);
	free(buffer);
	return (w);

}
