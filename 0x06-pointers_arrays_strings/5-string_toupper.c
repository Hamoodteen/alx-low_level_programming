#include "main.h"
/**
* string_toupper - Change all lowercase letters to uppercase
* @c: string
* Return: c
*/
char *string_toupper(char *a)
{
int i;
for (i = 0 ; a[i] != "/0" ; i++)
{
if (((int)a[i] > 96) && ((int)a[i] < 123))
{
a[i] -= 32;
}
}
return (a);
}
