#include "main.h"
/**
  * puts2 - f
  * @str: char
  * Return: void
*/
void puts2(char *str)
{
unsigned long int i;
unsigned long int j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = 0 ; i < j ; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
