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
	int *new_ptr = 0;
	unsigned int base;
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
			return (new_ptr);
		}
		if (new_size > old_size)
		{
			base = new_size
		}
		else if (new_size < old_size)
		{
			base = old_size
		}
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		free(new_ptr);
		new_ptr = malloc(base);
		new_ptr = memcpy(new_ptr, ptr, base);
		return (new_ptr);
}