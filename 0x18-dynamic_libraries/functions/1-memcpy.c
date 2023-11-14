#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Description:
 * This function copies 'n' bytes from the memory area pointed to by 'src'
 * to the memory area pointed to by 'dest'. The memory areas must not overlap.
 * Return: returns a pointer to the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (original_dest);
}
