#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
  * add_nodeint - f
  * @head: list_t
  * @n: int
  * Return: address
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;
	int copy;

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
	nn->next = *head;
	*head = nn;
	return (nn);
}
