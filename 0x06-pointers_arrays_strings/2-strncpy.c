#include "main.h"
/**
 * _strncpy - f
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
