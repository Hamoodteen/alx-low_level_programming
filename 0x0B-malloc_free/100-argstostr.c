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
	int i;
		if ((ac == 0) || (av == NULL))
		{
			return (NULL);
		}
		s = (char *)malloc(4156);
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
