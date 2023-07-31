#include "main.h"
/**
 * _strchr - f
 * @s: char
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
int i;
int j;
for (i = 0 ; s[i] != '\0' ; i++)
{
if (s[i] == c)
{
for (j = i ; s[j] != '\0' ; j++)
{
_putchar(s[j]);
}
return (s);
}
}
}
