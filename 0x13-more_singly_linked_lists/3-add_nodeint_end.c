#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
  * add_nodeint_end - f
  * @head: list_t
  * @n: int
  * Return: address
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn;
	listint_t *ln;
	int copy;

	ln = *head;
	if (head == NULL)
		return (NULL);
	memcpy(&copy, &n, sizeof(int));
	nn = malloc(sizeof(listint_t));
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
