#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: data to be evaluated in the file
 * Return: actual number of letters it could read and print, else 0, if
 * filename is NULL or if write fails or if file cannot be opened.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	char buffer[1024];

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "r");

	if (file == NULL)
		return (-1);

	if (letters > sizeof(buffer))
	{
		fclose(file);
		return (-1);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead < 0)
	{
		fclose(file);
		return (-1);
	}

	bytesWritten = fwrite(buffer, 1, bytesRead, stdout);

	fclose(file);

	if (bytesWritten != bytesRead)
		return (-1);

	return (bytesWritten);
}