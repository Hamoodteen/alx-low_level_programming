#include "hash_tables.h"

/**
 * hash_table_delete - f
 * @ht: ht
*/
void hash_table_delete(hash_table_t *ht)
{
	size_t i, j;

	for (i = 0; i < ht->size; i++)
	{
		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]->next);
	}
	for (j = 0; j < i; j++)
		free(ht->array[j]);
	free(ht->array);
	free(ht);
}
