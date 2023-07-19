#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
for(char i = 'a' ; i <= 'z' ; i++)
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
