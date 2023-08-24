#include <stdio.h>
#include <stdlib.h>
/**
 * print_string_before_main - f
 * Return: void
*/
__attribute__((constructor)) void print_string_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
