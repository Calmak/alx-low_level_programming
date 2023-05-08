#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to read
 * @letters:  the number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * 0 if file cannot open, if filename is NULL, if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t txt, txt1, txt2;

	txt = open(filename, O_RDONLY);
	if (txt == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	txt1 = read(txt, file, letters);
	txt2 = write(STDOUT_FILENO, file, txt1);

	free(file);
	close(txt);
	return (txt2);
}
