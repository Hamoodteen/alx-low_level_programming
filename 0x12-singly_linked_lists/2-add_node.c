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
	size_t l;
	size_t i;
	char *copy;

	if (str == NULL || head == NULL)
		return (NULL);
	l = strlen(str);
	copy = malloc((l + 1) * sizeof(char));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	nn = malloc(sizeof(list_t));
	if (nn == NULL)
	{
		free(nn->str);
		free(nn);
		return (NULL);
	}
	nn->str = copy;
	nn->len = l;
	nn->next = *head;
	*head = nn;
	return (nn);
}
