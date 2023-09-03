#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: maximu number of bytes to copy from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_length + i] = src[i];
	}

	dest[dest_length + i] = '\0';

	return (dest);
}
