#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string, up to n characters.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy.
 * Return: A pointer to the resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest, upto n characters */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Fill any remaining space in dest with null character */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
