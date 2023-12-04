#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size:the size of the array
 * Return: Pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
