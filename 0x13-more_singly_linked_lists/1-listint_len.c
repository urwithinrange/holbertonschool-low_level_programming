#include "lists.h"
/**
  *listint_len - returns the number of elements in a linked list
  *@h: the list being passed
  *Return: the length of the list
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t = *ptr = h;

	while (ptr != NULL)
	{	num++;
		ptr = ptr->next;
	}
	return (num);
}
