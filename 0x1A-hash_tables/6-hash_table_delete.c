#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nd, *tp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nd = ht->array[i];
			while (nd != NULL)
			{
				tp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = tp;
			}
		}
	}
	free(head->array);
	free(head);
}
