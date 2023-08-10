#include "main.h"
/**
 * _strdup - f
 * @str: char
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int i;
		if (str == NULL)
		{
			return (NULL);
		}
		s = malloc(sizeof(str) + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
		return (s);
}
