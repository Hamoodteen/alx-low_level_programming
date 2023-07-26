#include "main.h"
/**
  * strlen - f
  * @c: char
  * Return: integer
*/
int _strlen(char *s)
{
int i;
int j = 0;
for (i = 0 ; i < sizeof(s) ; i++)
{
j += i;
j--;
}
return j;
}
