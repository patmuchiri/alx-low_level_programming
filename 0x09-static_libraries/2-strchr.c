#include "main.h"
#include <string.h>

/**
 * _strchr -  that locates a character in a string.i
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
