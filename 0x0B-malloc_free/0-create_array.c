#include "main.h"
/**
 * create_array - f
 * @size: int
 * @c: char
 * Return: s
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *s;
	s = (char *)malloc(size * sizeof(c));
	int i;
	for (i = 0 ; i <= size ; i++)
	{
		s[i] = c;
	}
	return (s);
}
