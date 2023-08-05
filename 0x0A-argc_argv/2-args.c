#include <stdio.h>
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char **argv)
{
(void)argv;
int i;
for (i = 1 ; i <= argc ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
