#include "main.h"
/**
 * reverse_array - f
 * @a: int
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;
	int tmp;
	for (b = n - 1; b > i; b--)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;
		i++;
	}
}
