#include "lists.h"
/**
  *pop_listint - deletes the head node of a list and returns the head data
  *@head: the list to mod
  *Return: the head node data, or 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (data);
}
