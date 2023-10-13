#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
  * add_dnodeint - f
  * @head: list_t
  * @n: int
  * Return: address
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn;
	int copy;

	if (head == NULL)
		return (NULL);
	memcpy(&copy, &n, sizeof(int));
	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
	{
		free(nn);
		return (NULL);
	}
	nn->n = copy;
	nn->next = *head;
	*head = nn;
	return (nn);
}
