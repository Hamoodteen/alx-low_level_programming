#include "lists.h"
/**
  * free_list - f
  * @head: list_t
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *h;
	char *s;
	size_t l;

	h = head;
	s = head->str;
	l = head->len;
	h->str = s;
	h->len = l;
	h->next = head;
	free(h);
}
