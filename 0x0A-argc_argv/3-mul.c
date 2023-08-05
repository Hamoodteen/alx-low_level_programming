#include <stdio.h>
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char **argv)
{
(void)argc;
int i = 1;
if (argc == 2)
{
i = (*argv[1] * *argv[2]);
printf("%d\n", i);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
