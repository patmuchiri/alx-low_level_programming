#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alphabet[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13_alphabet[j];
				break;
			}
			j++;
		}

		i++;
	}

	return (str);
}
