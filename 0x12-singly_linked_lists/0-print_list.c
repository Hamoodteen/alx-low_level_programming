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

	if (h->str == NULL)
		printf("[0] (nil)");
	else
		printf("%s\n", h->str);
	printf("%ui\n", h->len);
	printf("%list_t\n", h->next);
	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
