#include "main.h"
#include <string.h>

/**
 * _strcat -function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = strlen(dest);
	int i;


	/* Find the end of the destination string */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}

	dest[dest_length + i] = '\0'; /* Add the terminating null byte */

	return (dest);
}
