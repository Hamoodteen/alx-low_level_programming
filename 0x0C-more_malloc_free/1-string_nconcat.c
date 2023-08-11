#include "main.h"
/**
 * string_nconcat - f
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned long int i;
	int a;
	int b;
		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		for (a = 0 ; s1[a] != '\0' ; a++)
		{
		}
		for (b = 0 ; b <= n ; b++)
		{
		}
		s = (char *)malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			s[i] = s1[i];
		}
		for (i = 0 ; i <= n ; i++)
		{
			s[a + i] = s2[i];
		}
		return (s);
}
