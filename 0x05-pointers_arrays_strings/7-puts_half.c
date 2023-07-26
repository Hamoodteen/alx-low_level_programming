#include "main.h"
/**
  * puts_half - f
  * @str: char
  * Return: int
*/
void puts_half(char *str)
{
unsigned long int i;
unsigned long int j = 0;
unsigned long int n;
for (i = 0 ; str[i] != '\0' ; i++)
{
j = i;
}
if (i != 0)
{
j++;
}
if (j % 2 == 0)
{
j = j / 2;
}
else if (j % 2 != 0)
{
j = ((j - 1) / 2);
}
for (n = j ; str[n] != '\0' ; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
