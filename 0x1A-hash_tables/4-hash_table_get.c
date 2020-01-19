#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hast table to look into
 * @key: the key to look the value of
 * Return: the value associated with the key or NULL if key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *pos;

	if (!key || !ht)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	pos = ht->array[idx];

	if (!pos)
		return (NULL);
	while (pos && strcmp(pos->key, key) != 0)
		pos = pos->next;

	return (pos->value);
}
