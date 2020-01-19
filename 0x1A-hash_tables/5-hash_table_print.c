#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *pos;

	if (!ht)
		return;
	printf("{");
	while (idx < ht->size)
	{
		pos = ht->array[idx];
		while (pos)
		{
			printf("'%s'", pos->key);
			printf(":");
			printf("'%s'", pos->value);
			printf(", ");
			pos = pos->next;
		}
		idx++;
	}
	printf("}\n");
}
