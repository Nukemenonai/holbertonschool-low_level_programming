#include "hash_tables.h"

/**
 * populate - populates a hash_table node
 *
 * @node: the node to populate
 * @key: the value to fin in key
 * @value: the value to insert in value
 * Return: 1 if successfull 0 if not
 */

int populate(hash_node_t *node, const char *key, const char *value)
{
	if (!node)
		return (0);
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	if (!node->key || !node->value)
	{
		free(node);
		return (0);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (1);
}


/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the pointer to the hash table
 * @key: the key to index
 * @value: the value to insert.
 * Return: 1 success 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *entry;

	if (!key)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[idx];
	if (entry == NULL)
	{
		entry = malloc(sizeof(entry));
		populate(entry, key, value);
		entry->next = NULL;
		return (1);
	}
	else if (entry != NULL)
	{
		hash_node_t *tmp = malloc(sizeof(tmp));

		populate(tmp, key, value);
		tmp->next = entry;
		entry = tmp;
		return (1);

	}
	return (0);
}
