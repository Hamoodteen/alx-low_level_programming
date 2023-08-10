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
		s = (char*)malloc(sizeof(str) + 5);
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
