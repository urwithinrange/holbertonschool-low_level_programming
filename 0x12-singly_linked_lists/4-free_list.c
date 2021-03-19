#include "lists.h"
#include <string.h>
/**
  *free_list - frees all memory
  *@head: the list to be freed
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *current = head, *next = NULL;
	
	while (head != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	free(current);
	free(next);
}
