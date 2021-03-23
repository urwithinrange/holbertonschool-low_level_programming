#include "lists.h"
/**
  *print_listint - prints all the elements of a listint_t
  *@h: the list to be printed
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t num;
	listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num++;
	}
	return (num);
}
