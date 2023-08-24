#include "lists.h"
#include <stdio.h>
/**
 * print_list - f
 * @h: list_t
 * Return: size_t
*/
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("[%ui] ", h->len);
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s\n", h->str);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
