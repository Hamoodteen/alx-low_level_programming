#include "main.h"
#include <string.h>
/**
 * strtow - f
 * @str: char
 * Return: char
*/
char **strtow(char *str)
{
int i;
int j = 0;
int k = 0;
char **c;
	if ((str == NULL) || (strcmp(str, "", 1)) || (strcmp(str, " ", 1)))
	{
		return (NULL);
	}
	c = malloc(*str * sizeof(*c));
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		c[i] = malloc(sizeof(**c));
		if ((str[i] == ' ') || (str[i] == '\0'))
		{
			c[k][j] = '\0';
			k++;
			j = 0;
		}
		else
		{
			c[k][j] = str[i];
			j++;
		}
	}
	return (c);
}
