#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
char i;
for(i = 'a' ; i <= 'z' ; i++)
{
printf("%c" , i);
}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
printf("\n");
return (0);
}
