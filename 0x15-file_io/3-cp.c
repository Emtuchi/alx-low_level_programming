#include "main.h"

/**
 * mk_buf - make buffer
 * @f: file buffer is created for
 *
 * Return: pointer to buffer
 */

char *mk_buf(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "ERROR: unable to write to %s\n", f);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - closes file
 * @f: file num
 */

void close_file(int f)
{
	int i;

	i = close(f);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
}

/**
 * main - main code for copying content
 * @argc: argument count
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, read_num, write_num;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "invalid\n");
		exit(97);
	}

	buf = mk_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_num = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY| O_TRUNC, 0664);

	while (read_num > 0)
	{
		if (from == -1)
		{
			dprintf(STDERR_FILENO, "invalid read\n");
			free(buf);
			exit(99);
		}

		write_num = write(to, buf, read_num);
		if (to == -1 || write_num == -1)
		{
			dprintf(STDERR_FILENO, "inalid write\n");
			free(buf);
			exit(99);
		}

		read_num = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
