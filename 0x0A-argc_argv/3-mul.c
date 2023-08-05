#include <stdio.h>
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char **argv)
{
if (argc == 2)
{
printf("%d\n", ((int)argv[1] * (int)argv[2]));
return (0);
}
else
{
return (1);
}
}
