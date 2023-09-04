#include "function_pointers.h"
/**
 * print_name - f
 * @name: char
 * @f: func
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || ((f) == NULL))
	{
		return;
	}
	f(name);
}
