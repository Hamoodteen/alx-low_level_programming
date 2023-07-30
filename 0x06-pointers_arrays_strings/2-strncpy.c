#include "main.h"
/**
 * _strncpy - f
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
int a, b;
if (sizeof(src) < n)
{
for (a = 0; dest[a] != '\0'; a++)
{
for (b = 0; ((b < n) && (src[b] != '\0')); b++)
{
dest[a + b] = src[b];
}
}
}
return (dest);
}
