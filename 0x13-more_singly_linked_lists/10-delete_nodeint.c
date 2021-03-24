#include "lists.h"
/**
  *delete_nodeint_at_index - delete a specific node at index
  *@head: the list being modded
  *@index: the node index to delete
  *Return: 1 if success or -1 for fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	for (i = 1; (ptr) && i < index; i++)
	{
		temp = ptr->next;
		if (i + 1 == index)
		{
			ptr->next = temp->next;
			free(temp);
			return (1);
		}
		ptr = temp;
	}
	return (-1);
}
