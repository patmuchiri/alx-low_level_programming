#include "hash_tables.h"

/**
 * hash_table_print -  a function that prints a hash table.
 * @ht: The hash table to print
 * Return: void, if ht is NULL print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int printed;

	if (ht == NULL)
		return;

	printf("{");

	printed = 0;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
