#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The input string to be checked.
 * @accept: The string containing acceptable characters.
 *
 * This function calculates the length of the initial segment of
 * the string 's' that consists only of characters from the 'accept'
 * string. It iterates through the 's' string and stops when a character
 * not found in the 'accept' string is encountered or when the end of
 * the 's' string is reached.
 *
 * Return: The number of bytes in the initial segment of 's' which
 * consist only of bytes from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}

	return (length);
}
