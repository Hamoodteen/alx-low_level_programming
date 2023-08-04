#include "main.h"
/**
 * is_palindrome - f
 * @n: int
 * Return: int
*/
int is_palindrome(char *s)
{
if (*s != '\0')
{
is_palindrome(s + 1);
}
return (1);
}
