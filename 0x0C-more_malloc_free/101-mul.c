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
	long long int num1;
	long long int num2;
	long long int x;
		if (argc != 3)
		{
			printf("Error\n");
			exit(98);
		}
		if ((isdigit(*argv[1]) == 0) || (isdigit(*argv[2]) == 0))
		{
			printf("Error\n");
			exit(98);
		}
		num1 = (long long int)*argv[1];
		num2 = (long long int)*argv[2];
		x = (num1 * num2);
		printf("%lld\n", x);
		return (0);
}
