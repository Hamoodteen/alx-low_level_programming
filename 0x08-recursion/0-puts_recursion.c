#include "main.h"
/**
 * _puts_recursion - f
 * @s: char
 * Return: void
*/
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
