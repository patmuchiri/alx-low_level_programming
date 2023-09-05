#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * Return: NULL if str = NULL, else return a pointer to duplicated string
 * @str: string to be analyzed
 */

char *_strdup(char *str)
{
	size_t length = strlen(str);

	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);


	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);

	return (duplicate);
}
