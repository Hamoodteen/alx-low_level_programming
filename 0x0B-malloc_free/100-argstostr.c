#include "main.h"
/**
 * argstostr - f
 * @ac: int
 * @av: char
 * Return: s
 */
char *argstostr(int ac, char **av)
{
	char *s;
	unsigned long int i;
	int a;
	int b;
		if ((ac == 0) || (av == NULL))
		{
			return (NULL);
		}
		s = (char *)malloc((ac * sizeof(**av)) + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; *av[i] != '\0'; i++)
		{
			s[i] = *av[i];
			s[i + 1] = '\n';
		}
		return (s);
}
