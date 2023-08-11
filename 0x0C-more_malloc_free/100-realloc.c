#include "main.h"
/**
 * _realloc - f
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;
		old_size = sizeof(ptr);
		if (new_size == old_size)
		{
			return (ptr);
		}
		if ((new_size == 0) && (ptr != NULL))
		{
			free(ptr);
			return (NULL);
		}
		if (ptr == NULL)
		{
			free(new_ptr);
			new_ptr = malloc(new_size);
		}
		if (new_size > old_size)
		{
			free(new_ptr);
			new_ptr = malloc(new_size);
			memcpy(new_ptr, ptr, new_size);
		}
		if (new_size < old_size)
		{
			free(new_ptr);
			new_ptr = malloc(old_size);
			memcpy(new_ptr, ptr, old_size);
		}
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
}