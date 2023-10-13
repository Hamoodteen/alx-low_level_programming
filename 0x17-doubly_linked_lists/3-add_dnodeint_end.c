#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
  * add_dnodeint_end - f
  * @head: list_t
  * @n: int
  * Return: address
  */
dlistint_t *add_nodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn;
	dlistint_t *ln;
	int copy;

	ln = *head;
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
	nn->next = NULL;
	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}
	while (ln->next != NULL)
		ln = ln->next;
	ln->next = nn;
	return (ln);
}
