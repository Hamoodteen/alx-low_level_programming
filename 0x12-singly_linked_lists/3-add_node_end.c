#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
  * add_node_end - f
  * @head: list_t
  * @str: char
  * Return: address
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	list_t *ln;
	size_t l;
	char *copy;

	ln = *head;
	if (str == NULL || head == NULL)
		return (NULL);
	l = strlen(str);
	copy = malloc(l * sizeof(char));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	copy = strdup(str);
	nn = malloc(sizeof(list_t));
	if (nn == NULL)
	{
		free(nn);
		return (NULL);
	}
	nn->str = copy;
	nn->len = l;
	nn->next = NULL;
	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}
	while (ln->next != NULL)
		ln = ln->next;
	ln->next = nn;
	return(nn);
}
