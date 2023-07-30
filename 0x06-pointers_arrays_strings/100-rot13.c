#include "main.h"
/**
 * rot13 - f
 * @a: char
 * Return: char
 */
char *rot13(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
if ((((int)a[i] > 64) && ((int)a[i] < 78)) || (((int)a[i] > 96) && ((int)a[i] < 110)))
{
a[i] += 16;
}
else
{
a[i] -= 16;
}
}
return (a);
}
