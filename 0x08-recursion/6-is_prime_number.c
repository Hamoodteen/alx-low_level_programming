#include "main.h"
/**
 * is_prime_number - f
 * @n: int
 * Return: int
*/
int is_prime_number(int n)
{
if ((n == 0) || (n == 1) || (n < 0))
{
return (0);
}
int i = 0;
if ((n % i) != ((n / 2) + 1))
{
is_prime_number(n + 1);
}
return (1);
}
