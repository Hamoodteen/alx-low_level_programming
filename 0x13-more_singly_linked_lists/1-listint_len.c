#include <stdio.h>
#include "lists.h"
/**
  * listint_len - f
  * @h: list_t
  * Return: i
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
