#include "lists.h"
#include <string.h>
/**
  *add_node_end - adds a new node to the end of list
  *@head: the list being used
  *@str: the string to be added to list
  *Return: the address of the new list or NULL on faliure
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail, *ptr = *head;
	size_t new_len;

	new_tail = malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->str = strdup(str);
	for (new_len = 0; str[new_len] != 00; new_len++)
		continue;
	new_tail->len = new_len;
	if (*head == NULL)
	{
		new_tail->next = *head;
		*head = new_tail;
	}
	else
	{
		new_tail->next = NULL;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_tail;
	}
	return (new_tail);
}
