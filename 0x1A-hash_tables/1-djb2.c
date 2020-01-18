#include "hash_tables.h"

/**
 * hash_djb2 - implementation if the djb2 has function found in cse Yorku
 *
 * @str: the string to hash
 *
 * Return: an int hashed
 */


unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
