#include "lists.h"
/**
  * free_listint2 - f
  * @head: list_t
  * Return: void
  */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free(*head);
	head = NULL;
}
