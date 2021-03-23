#include "lists.h"
/**
  *add_nodeint - add new node at the beginning of list
  *@head: the list passed
  *@n: the number to be added
  *Return: address of new element or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
