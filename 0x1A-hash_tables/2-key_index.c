#include "hash_tables.h"

/**
 * key_index - this function returns the index where a key should be.
 * based on the djb2 algorithm
 *
 * @key: the key of the entry to look for
 * @size: the size of the array
 * Return: an int that is the index in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx;

	key_idx = hash_djb2(key);

	key_idx %= size;
	return (key_idx);

}
