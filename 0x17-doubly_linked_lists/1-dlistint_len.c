#include <stdio.h>
#include "lists.h"
/**
  * dlistint_len - f
  * @h: list_t
  * Return: i
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
