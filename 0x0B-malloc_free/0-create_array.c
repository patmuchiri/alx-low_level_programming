#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * and initializes it with a specific char.
 * @c:A character used to initialize all the elements in the array
 * @size:An unsigned integer represents the number of characters in the array
 * Return: Outputs expected array
 **/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	array[size] = '\0';

	return (array);
}
