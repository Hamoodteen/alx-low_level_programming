#include <stdio.h>
#include "lists.h"
/**
  * print_dlistint - f
  * @h: list_t
  * Return: i
  */
size_t print_listint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
