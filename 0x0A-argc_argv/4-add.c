#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char **argv)
{
int i;
int z = 0;
if (argc != 1)
{
for (i = 1 ; i < argc ; i++)
{
if (isdigit(argv[i]) != 0)
{
z += atoi(argv[i]);
}
printf("%d\n", z);
}
}
else if (argc == 1)
{
printf("%d\n", i);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
