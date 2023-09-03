#include "main.h"
#include <string.h>

/**
 *  _strcmp -  function that compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * less than, equal to, or greater than s2, respectively.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
