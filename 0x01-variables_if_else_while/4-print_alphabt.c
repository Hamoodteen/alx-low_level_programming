#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
printf("abcd");
for (ch = 'f' ; ch <= 'p' ; ch++)
{
putchar(ch);
}
for (ch = 'r' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
printf("\n");
return (0);
}