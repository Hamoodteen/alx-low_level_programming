#include "lists.h"

/**
 * insert_dnodeint_at_index - f
 * @h: head
 * @idx: int
 * @n: int
 * Return: 0
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	char *a;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	(void)h;
	(void)idx;
	(void)n;
	return (0);
}
