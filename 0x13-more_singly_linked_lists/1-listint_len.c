#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns  the number of elements
 * in a linked listint_t list
 * @h: pointer to the head of the first node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
