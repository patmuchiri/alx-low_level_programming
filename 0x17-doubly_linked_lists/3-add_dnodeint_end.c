#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to pointer of head node
 * @n: value to be added to the new node
 * Return:  the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
