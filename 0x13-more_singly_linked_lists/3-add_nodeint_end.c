#include "lists.h"
/**
  *add_nodeint_end - adds a node to end of list
  *@head: the list being added to
  *@n: the number to be added to list
  *Return: the address of the new list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new; /* ptr->next == NULL so insert new at next */
	}
	return (*head);
}
