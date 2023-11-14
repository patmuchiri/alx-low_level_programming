#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer to the memory arae to be filled.
 * @b: The constant byte value to be filled.
 * @n: Number of bytes to fill.
 *
 * This function fills the first 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'b'. It returns a pointer to the memory area 's'.
 * Return:
 * A pointer to the memory area 's'
 * after it has been filled with the constant byte 'b'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (original_s);
}
