#include "main.h"
/**
 * argstostr - f
 * @ac: int
 * @av: char
 * Return: c
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int i;
	int j;
	int cnt = 0;
	int k = 0;
		if ((ac == 0) || (av == NULL))
		{
			return (NULL);
		}
		for (i = 0; i < ac; b++)
		{
			for (j = 0; av[i][j] != '\0'; c++)
			{
				cnt++;
			}
			cnt++;
		}
		cnt++;
		c = (char *)malloc(cnt);
		if (c == NULL)
		{
			return (NULL);
		}
		for (i = 0 ; i < ac ; i++)
		{
			for (j = 0 ; av[i][j] != '\0' ; j++)
			{
				c[k++] = av[i][j];
			}
			c[k++] = '\n';
		}
		c[k] = '\0';
		return (c);
}
