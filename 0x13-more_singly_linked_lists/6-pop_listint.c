#include "lists.h"
/**
  *pop_listint - deletes the head node of a list and returns the head data
  *@head: the list to mod
  *Return: the head node data, or 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *ptr = *head;

	if (head)
	{
		temp = ptr->n;
		ptr = ptr->next;
		*head = ptr;
	}
	return (temp);
}
