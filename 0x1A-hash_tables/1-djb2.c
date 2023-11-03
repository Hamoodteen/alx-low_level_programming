#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @s: string used to generate hash value
 * Return: hash value
 */
size_t hash_djb2(const unsigned char *s)
{
	unsigned long int hs;
	int i;

	hs = 5381;
	while ((i = *s++))
		hs = ((hs << 5) + hs) + i;
	return (hs);
}
