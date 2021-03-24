#include "lists.h"
/**
  *sum_listint - the sum of all nodes of a list
  *@head: the list to add
  *Return: the sum of all nodes
  */
int sum_listint(listint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
