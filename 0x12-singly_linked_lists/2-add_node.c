#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
  * add_node - f
  * @head: list_t
  * @str: char
  * Return: address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;

	nn = malloc(sizeof(list_t));
	nn->str = strdup(str);
	nn->next = *head;
	*head = nn;
	if (nn == NULL)
		return (NULL);
	else
		return (nn);
}
