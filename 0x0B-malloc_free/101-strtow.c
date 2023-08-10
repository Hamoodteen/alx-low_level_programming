#include "main.h"
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
	if ((str == NULL) || (str[0] == ''))
	{
		return (NULL);
	}
	for(i = 0 ; str[i] != '\0' ; i++)
    {
        if((str[i] == ' ') || (str[i] == '\0'))
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
