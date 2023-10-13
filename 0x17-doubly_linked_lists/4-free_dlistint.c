#include "lists.h"
/**
  * free_dlistint - f
  * @head: list_t
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free_dlistint(head->prev);
	free(head);
}
