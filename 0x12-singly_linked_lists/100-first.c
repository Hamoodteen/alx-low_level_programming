#include <stdio.h>
#include <stdlib.h>
/**
 * print_string_before_main - f
 * Return: void
*/
void print_string_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
__attribute__((constructor)) void before_main(void)
{
	print_string_before_main();
}
