#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * _memset - f
 * @ptr: ptr
 * @value: value
 * @num: num
 * Return: ptr
*/
void *_memset(void *ptr, int value, size_t num)
{
	unsigned char *p = (unsigned char *)ptr;
	unsigned char v = (unsigned char)value;
	size_t i;

	for (i = 0; i < num; i++)
		p[i] = v;
	return (ptr);
}

/**
 * _calloc - f
 * @num_elements: n
 * @element_size: n
 * Return: ptr
*/
void *_calloc(size_t num_elements, size_t element_size)
{
	size_t total_size = num_elements * element_size;
	void *ptr = malloc(total_size);

	if (ptr != NULL)
		_memset(ptr, 0, total_size);
	return (ptr);
}

hash_table_t *hash_table_create(unsigned long int size);


#endif
