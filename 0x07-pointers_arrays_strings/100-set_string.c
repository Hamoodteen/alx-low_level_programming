#include "main.h"
/**
 * set_string - f
 * @s: char
 * @to: char
 * Return: void
 */
void set_string(char **s, char *to)
{
*s = &*to;
}
