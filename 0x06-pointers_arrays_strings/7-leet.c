#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	char *leet_map = "AEOTLaeot1";
	char *leet_replacements = "4307143071";

	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (leet_map[j] != '\0')
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
			j++;
		}

		i++;
	}

	return (str);
}
