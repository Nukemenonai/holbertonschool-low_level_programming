#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, setc = 0;
	hash_node_t *pos;

	if (!ht)
		return;

	printf("{");
	while (idx < ht->size)
	{
		pos = ht->array[idx];
		while (pos)
		{
			if (setc)
				printf(", ");
			printf("'%s': '%s'", pos->key, pos->value);
			setc = 1;
			if (pos->next != NULL)
			{
				printf(", ");
				setc = 0;
			}
			pos = pos->next;
		}
		idx++;
	}
	printf("}\n");
}
