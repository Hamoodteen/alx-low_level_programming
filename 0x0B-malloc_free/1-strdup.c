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
	int a;
		if (str == NULL)
		{
			return (NULL);
		}
		for (a = 0; str[a] != '\0'; a++)
		{
		}
		s = (char *)malloc((a * sizeof(*str)) + 1);
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
