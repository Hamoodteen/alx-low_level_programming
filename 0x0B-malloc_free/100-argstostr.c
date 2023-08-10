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
	int i, j, k;
		if ((ac == 0) || (av == NULL))
		{
			return (NULL);
		}
		s = (char *)malloc(4156);
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0 ; i < ac ; i++)
		{
			for (j = 0 ; av[i][j] != '\0' ; j++)
			{
				s[k++] = av[i][j];
			}
			s[k++] = '\n';
		}
		s[k] = '\0';
		return (s);
}
