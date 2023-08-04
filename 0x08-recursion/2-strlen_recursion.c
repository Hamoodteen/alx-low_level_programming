#include "main.h"
/**
 * _strlen_recursion - f
 * @s: char
 * Return: int
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (sizeof(_strlen_recursion(s + 1)));
}
}
