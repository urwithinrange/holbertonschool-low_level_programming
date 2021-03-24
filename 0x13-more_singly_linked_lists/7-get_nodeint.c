#include "lists.h"
/**
  *get_nodeint_at_index - returns the nth node of a linked list
  *@head: the list to be used
  *@index: the node to be returned
  *Return: the node at index or NULL if not found
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int n;

	if (head == NULL)
		return (NULL);
	ptr = head;
	for (n = 0; n < index && ptr != NULL; n++)
		ptr = ptr->next;
	if (n == index)
		return (ptr);
	else
		return (NULL);
}
