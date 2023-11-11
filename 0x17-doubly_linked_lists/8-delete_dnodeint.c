#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specific index in a list.
 * @head: pointer to pointer of the head node
 * @index: index of node to be deleted
 * Return: 1 (success), else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; ++i)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
