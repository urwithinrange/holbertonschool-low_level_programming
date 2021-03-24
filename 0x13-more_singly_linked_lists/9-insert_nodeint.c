#include "lists.h"
/**
  *insert_nodeint_at_index - places a new node at index
  *@head: the list to be modded
  *@idx: the place to add n
  *@n: the data to be added
  *Return: the new list, failure results int NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *new_node;

	if (head == NULL || *head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	ptr = *head;
	for (i = 0; i < idx; i++)
	{
		if (ptr == NULL)
		{
			free(new_node);
			return (NULL);
		}
		ptr = ptr->next;
	}
	new_node->n = n;
	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
