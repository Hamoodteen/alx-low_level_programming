#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - 0
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int n;

	for (i = 00; i <= 23; i++)
	{
		for (n = 00; n <= 59; n++)
		{
			if (i < 10)
			{
				if (n < 10)
				{
					printf("0%d:0%d\n", i, n);
				}
				else
				{
					printf("0%d:%d\n", i, n);
				}
				printf("%0d:%d\n", i, n);
			}
			else
			{
				printf("%d:%d\n", i, n);
			}
		}
	}
}
