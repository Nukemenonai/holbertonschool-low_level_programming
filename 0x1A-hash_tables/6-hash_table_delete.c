#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the pointer to the hash table to delete.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *pos, *aux;

	if (!ht)
		return;

	for ( ; idx < ht->size; idx++)
	{
		pos = ht->array[idx];
		while (pos)
		{
			aux = pos->next;
			free(pos->key);
			free(pos->value);
			free(pos);
			pos = aux;
		}
	}
	free(ht->array);
	free(ht);

}
