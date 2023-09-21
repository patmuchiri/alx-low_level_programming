#include "lists.h"
#include <stdio.h>

/**
 * print_list - a fuction that prints all the elements of a list_t list
 * @h: list to be printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;


	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("[%d], %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
