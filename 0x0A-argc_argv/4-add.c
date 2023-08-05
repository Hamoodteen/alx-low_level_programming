#include <stdio.h>
#include <stdlib.h>
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
if ((argc % 1 == 0) && (argc != 1))
{
for (i = 1 ; i < argc ; i++)
{
z += atoi(argv[i]);
}
printf("%d\n", z);
return (0);
}
else if (argc == 1)
{
printf("%d\n", i);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
