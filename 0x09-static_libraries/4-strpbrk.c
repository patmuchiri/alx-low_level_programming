#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * Description:
 * The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 *
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ch = accept;

		while (*ch != '\0')
		{
			if (*s == *ch)
			{
				return (s);
			}
			ch++;
		}
		s++;
	}
	return (NULL);
}
