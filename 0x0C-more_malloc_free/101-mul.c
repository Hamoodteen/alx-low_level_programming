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
	long int num1 = 0;
	long int num2 = 0;
	long int *x = 0;
	long int d = 0;
		free(x);
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
		num1 = (long int)*argv[1];
		num2 = (long int)*argv[2];
		d = (num1 * num2);
		x = malloc(d * sizeof(long int));
		x = &d;
		printf("%ld\n", *x);
		return (0);
}
