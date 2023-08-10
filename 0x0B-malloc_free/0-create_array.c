#include "main.h"
/**
 * create_array - f
 * @size: int
 * @c: char
 * Return: s
*/
char *create_array(unsigned int size, char c)
{

	char *s;
	unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(c));
	for (i = 0 ; i <= size ; i++)
	{
		s[i] = c;
	}
	return (s);
}
