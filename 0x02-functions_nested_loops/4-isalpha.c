#include "main.h"
/**
 * _isalpha - 0
 * @c: int
 * Return: 1 if c is lowercase , 0 oherwise.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
