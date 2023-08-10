#include "main.h"
/**
 * str_concat - f
 * @s1: char
 * @s2: char
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
		s = (char *)malloc(sizeof(s1) + sizeof(s2) - 2);
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			s[i + sizeof(s1) + 1] = s2[i];
		}
		return (s);
}
