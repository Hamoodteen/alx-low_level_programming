#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - f
 * @separator: char
 * @n: int
 * @...: args
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0 ; i < (n - 1) ; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d%s", va_arg(args, int), separator);
		}
	}
	printf("%d", va_arg(args, int));
	va_end(args);
	printf("\n");
}
