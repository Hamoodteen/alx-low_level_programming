#include "main.h"
/**
 * is_prime_number - f
 * @n: int
 * Return: i
*/
int is_prime_number(int n)
{
int i = 0;
if ((n == 0) || (n == 1))
{
return (0);
}
if ((n % i) != ((n / 2) + 1))
{
return (is_prime_number(n + 1));
}
}
