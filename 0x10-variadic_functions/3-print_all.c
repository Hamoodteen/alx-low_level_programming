#include "variadic_functions.h"
/**
 * print_all - f
 * @format: char
 * @...: args
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	while (format[i + 1] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c, ", va_arg(args, int));
			break;
		case 'i':
			printf("%d, ", va_arg(args, int));
			break;
		case 'f':
			printf("%f, ", va_arg(args, double));
			break;
		case 's':
			if (va_arg(args, char *) == NULL)
			{
				printf("(nil), ");
				continue;
			}
			printf("%s, ", va_arg(args, char *));
			break;
		default:
			continue;
		}
		i++;
	}
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 's':
		if (va_arg(args, char *) == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", va_arg(args, char *));
		break;
	default:
		break;
	}
	printf("\n");
}
