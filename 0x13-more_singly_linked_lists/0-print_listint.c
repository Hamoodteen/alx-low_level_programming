#include <stdio.h>
#include "lists.h"
/**
  * print_listint - f
  * @h: list_t
  * Return: i
  */
size_t print_list(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%s\n", h->n);
		h = h->next;
	}
	return (i);
}
