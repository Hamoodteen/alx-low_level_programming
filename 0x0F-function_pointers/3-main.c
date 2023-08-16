#include "3-get_op_func.c"
#include "3-op_functions.c"
#include "3-calc.h"
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char **argv)
{
	int num1 = 0;
	int num2 = 0;
	char *operator;
		if (argc > 4)
		{
			printf("Error\n");
			exit(98);
		}
		num1 = atoi(argv[1]);
		operator = argv[2];
		if ((operator != "+") || (operator != "-") || (operator != "*") || (operator != "/") || (operator != "%"))
		{
			printf("Error\n");
			exit(99);
		}
		num2 = atoi(argv[3]);
		if (((operator == "/") || (operator == "%")) && (num2 == 0))
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(operator)(num1, num2));
		return (0);
}
