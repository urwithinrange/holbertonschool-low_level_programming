#include "lists.h"
/**
  *free_listint2 - frees a list from memory
  *@head: the address of the list
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *next = NULL, *ptr;

	if (head)
	{		
		ptr = *head;
		while (ptr != NULL)
		{
		next = ptr->next;
		free(ptr);
		ptr = next;
		}
		*head = NULL;
	}
}
