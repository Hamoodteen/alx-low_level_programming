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
	unsigned long int i;
		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		s = (char *)malloc(sizeof(s1) + sizeof(s2) + 2);
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
			s[sizeof(s1) + i] = s2[i];
		}
		return (s);
}
