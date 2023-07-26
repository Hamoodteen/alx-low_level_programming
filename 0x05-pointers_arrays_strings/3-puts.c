#include "main.h"
/**
  * _puts - f
  * @str: char
  * Return: void
*/
void _puts(char *str)
{
unsigned long int i;
for (i = 0 ; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
