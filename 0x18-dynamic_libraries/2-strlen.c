#include "main.h"
/**
  * _strlen - f
  * @s: char
  * Return: int
*/
int _strlen(char *s)
{
unsigned long int i;
int j = 0;
for (i = 0 ; s[i] != '\0' ; i++)
{
j = i;
}
if (i != 0)
{
j++;
}
return (j);
}
