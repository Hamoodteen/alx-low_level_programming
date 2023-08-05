#include <stdio.h>
#include <stdlib.h>
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int i = 0, j = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
while (i >= 25)
{
i -= 25;
j++;
}
while (i >= 10)
{
i -= 10;
j++;
}
while (i >= 5)
{
i -= 5;
j++;
}
while (i >= 2)
{
i -= 2;
j++;
}
if (i == 1)
j++;
printf("%d\n", j);
return (0);
}
