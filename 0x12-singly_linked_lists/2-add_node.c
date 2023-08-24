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
	char *copy;

	copy = strdup(str);
	nn = malloc(sizeof(list_t));
	if (nn == NULL)
	{
		free(nn);
		return (NULL);
	}
	nn->str = copy;
	nn->next = *head;
	*head = nn;
	return (nn);
}
