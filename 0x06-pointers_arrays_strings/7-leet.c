#include "main.h"
#include <stdbool.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	char leet_map[] = "AEOTL";
	char leet_replacements[] = "43071";

	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		bool is_replacement = false;

		for (j = 0; leet_map[j] != '\0'; j++)
		{
			if (str[i] == leet_map[j] || str[i] == leet_map[j] + 32)
			{
				str[i] = leet_replacements[j];
				is_replacement = true;
				break;
			}
		}

		i += is_replacement ? 1 : 0;

		if (!is_replacement)

		{
			i++;
		}
	}

	return (str);
}
