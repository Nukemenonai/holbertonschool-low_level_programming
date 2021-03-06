#include "hash_tables.h"


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
	hash_node_t *slot, *new;

	if (!key || !value || !ht || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	slot = ht->array[idx];
	if (slot)
	{
		for (; slot ; slot = slot->next)
		{
			if (!strcmp(slot->key, key))
			{
				free(slot->value), slot->value = strdup(value);
				return (1);
			}
		}
	}
	if (slot)
	{
		slot->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(new));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key), free(new);
		return (0);
	}
	new->next = ht->array[idx], ht->array[idx] = new;
	return (1);
}
