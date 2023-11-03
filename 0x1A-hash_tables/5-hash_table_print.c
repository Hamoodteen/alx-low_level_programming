#include "hash_tables.h"

/**
 * hash_table_print - f
 * @ht: th
*/
void hash_table_print(const hash_table_t *ht)
{
	int i;

	printf("{");
	for (i = 0; i < ht->size - 1; i++)
	{
		if (ht->array[i])
		{
			printf("'%d': '%s', ", i, ht->array[i]->value);
		}
	}
	if (ht->array[i])
		printf("'%d': '%s'}");
}
