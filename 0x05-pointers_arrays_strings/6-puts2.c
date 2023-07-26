#include "main.h"
/**
  * puts2 - f
  * @str: char
  * Return: void
*/
void puts2(char *str)
{
unsigned long int i;
for (i = 0 ; str[i] != '\0' ; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
