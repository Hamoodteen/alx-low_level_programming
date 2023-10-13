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
	free_listint(head->next);
	free_listint(head->prev);
	free(head);
}
