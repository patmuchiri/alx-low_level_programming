#include "main.h"

/**
 *  _strlen - returns the length of a string
 * @s: string variable
 * Return: (length) - outputs the result
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
