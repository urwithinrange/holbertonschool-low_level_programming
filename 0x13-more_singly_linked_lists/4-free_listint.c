#include "lists.h"
/**
  *free_listint - frees a list from memory
  *@head: the list to be freed
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *next = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(next);
	head = NULL;
}
