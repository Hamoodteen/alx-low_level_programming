#include "main.h"
/**
 * _strdup - f
 * @str: char
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	unsigned long int i;
		if (str == NULL)
		{
			return (NULL);
		}
		s = malloc(sizeof(str));
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= sizeof(s); i++)
		{
			s[i] = str[i];
		}
		return (s);
}
