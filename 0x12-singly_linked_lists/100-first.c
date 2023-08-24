#include <stdio.h>
#include <stdlib.h>
/**
 * print_string_before_main - f
 * Return: void
*/
void print_string_before_main(void) {
  printf("This string is printed before main\n");
}

__attribute__((constructor)) void before_main(void)
{
	print_string_before_main();
}