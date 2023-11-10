#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
