#include "main.h"
/**
 * _strlen_recursion - f
 * @s: char
 * Return: j
*/
int _strlen_recursion(char *s)
{
int i = 0;
int j = 0;
if (s[i] != '\0')
{
j = _strlen_recursion(s[i + 1]);
}
return (j);
}
