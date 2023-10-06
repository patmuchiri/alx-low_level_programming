#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of the file
 * @filename: name of the file
 * @text_content: Null terminated string to add at the end of the file
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	if (text_content != NULL)
	{
		w = write(fd, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
