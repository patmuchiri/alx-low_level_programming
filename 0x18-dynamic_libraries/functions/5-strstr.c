#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: The string in which to search.
 * @needle: The substring to find.
 *
 * Description: The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
