#include "lists.h"
#include <string.h>
/**
  *add_node - adds a node to begining of list
  *@head: the list begining
  *@str: the node to be added
  *Return: address of the new element, or NULL for failure
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (count = 0; str[count] != 00; count++)
		continue;
	new->len = count;
	new->next = *head;
	*head = new;
	return (*head);
}
