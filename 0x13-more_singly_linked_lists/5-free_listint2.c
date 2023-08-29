#include "lists.h"
/**
  * free_listint2 - f
  * @head: list_t
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *np;

	if ((head == NULL) || (*head == NULL))
		return;
	while (*head != NULL)
	{
		np = *head;
		*head = (*(head))->next;
		free(np);
	}
	*head = NULL;
}
