#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int x;
		if (argc != 2)
		{
			printf("Error\n");
			exit(98);
		}
		if ((isdigit(*argv[1]) == 0) || (isdigit(*argv[2]) == 0))
		{
			printf("Error\n");
			exit(98);
		}
		num1 = (int)*argv[1];
		num2 = (int)*argv[2];
		x = (num1 * num2);
		printf("%d\n", x);
		return (0);
}
