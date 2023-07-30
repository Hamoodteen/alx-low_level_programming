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
else if ((((int)a[i] > 77) && ((int)a[i] < 91)) || (((int)a[i] > 109) && ((int)a[i] < 123)))
{
a[i] -= 16;
}
}
return (a);
}
