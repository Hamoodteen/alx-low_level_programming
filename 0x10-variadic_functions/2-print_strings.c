#include "variadic_functions.h"
/**
 * print_strings - f
 * @separator: char
 * @n: int
 * @...: args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < (n - 1); i++)
		{
			if (separator == NULL)
			{
				if (va_arg(args, char *) == NULL)
					printf("(nil)");
				else
					printf("%s", va_arg(args, char *));
			}
			else
			{
				if (va_arg(args, char *) == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", va_arg(args, char *), separator);
			}
		}
		if (va_arg(args, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));
		va_end(args);
	}
	printf("\n");
}
