#include "lists.h"
#include <string.h>
/**
  *free_list - frees all memory
  *@head: the list to be freed
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
