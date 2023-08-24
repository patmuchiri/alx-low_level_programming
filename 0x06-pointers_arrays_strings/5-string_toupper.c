#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: The input string to be modified.
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{

			/* Convert lowercase to uppercase */
			 /* by subtracting the difference in ASCII values */

			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}

	return (str);
}
