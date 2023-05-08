#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fn);

/**
 * create_buffer - allocates memory to a buffer
 * @file: file name stored in the buffer
 * Return: pointer to the new buffer
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - closes file descriptors
 * @fn: file descriptor to close
 */

void close_file(int fn)
{
	int x;

	x = close(fn);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fn %d\n", fn);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments to the program
 * @argv: array of pointers to the argumnets
 * Return: Success (0)
 * if the number of argument is not the correct one, exit with code 97
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with code 98
 */

int main(int argc, char *argv[])
{
	int to, fro, a, b;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	a = read(fro, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		b = write(to, buf, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		a = read(fro, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);

	free(buf);
	close_file(fro);
	close_file(to);

	return (0);
}
