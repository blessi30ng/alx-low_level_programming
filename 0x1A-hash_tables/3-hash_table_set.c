#include "hash_tables.h"

/**
 * hash_table_set - update or add an element in a hash table
 * @ht: pointer to hash table
 * @key: key to add
 * value: associated with key
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *value_c;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_c = strdup(value);
	if (value_c == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_c;
			return (1);
		}
	}

	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(value_c);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = value_c;
	nw->next = ht->array[index];
	ht->array[index] = nw;
	return (1);
}
