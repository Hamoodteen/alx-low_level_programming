#include "lists.h"
/**
  * free_list - f
  * @head: list_t
  * Return: void
  */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->str);
	free(head->next);
	free(head);
}
