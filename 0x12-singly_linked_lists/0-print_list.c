#include "lists.h"
#include <stdio.h>
/**
 * print_list - f
 * @h: list_t
 * Return: size_t
*/
size_t print_list(const list_t *h)
{
	int cnt = 0;
	const list_t* c = h;

	while (c != NULL)
	{
		printf("[%ui] ", c->len);
		if (c->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s\n", c->str);
		cnt++;
		c = c->next;
	}
	return (cnt);
}
