#include "main.h"
/**
* string_toupper - f
* @a: string
* Return: string
*/
char *string_toupper(char *a)
{
int i;
for (i = 0 ; a[i] != "/0" ; i++)
{
if (a[i] > 96 && a[i] < 123)
{
a[i] -= 32;
}
}
return (a);
}
