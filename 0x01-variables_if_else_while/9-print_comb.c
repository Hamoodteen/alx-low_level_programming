#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = '0' ; ch <= '8' ; ch++)
{
putchar(ch);
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
