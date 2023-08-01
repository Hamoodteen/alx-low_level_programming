#include "main.h"
/**
 * print_chessboard - f
 * @a: char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0 ; i < 8 ; i++)
{
for (j = 0 ; j < (sizeof(a) / sizeof(char)) ; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
