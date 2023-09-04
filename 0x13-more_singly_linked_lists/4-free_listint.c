#include "lists.h"
/**
  * free_listint - f
  * @head: list_t
  * Return: void
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
