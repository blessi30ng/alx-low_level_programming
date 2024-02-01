#include  "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of array
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int k;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		hash_t->array[k] = NULL;
	return (hash_t);
}
