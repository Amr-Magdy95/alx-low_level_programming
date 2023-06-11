#include "hash_tables.c"
/**
 * hash_djb2 - implementing djb2 hashing
 * @str: string to be hashed
 * Return: new hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
