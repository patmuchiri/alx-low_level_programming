#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: data to be evaluated in the file
 * Return: actual number of letters it could read and print, else 0, if
 * filename is NULL or if write fails or if file cannot be opened.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, t;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
