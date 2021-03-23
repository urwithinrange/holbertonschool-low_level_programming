#include "lists.h"
/**
  *listint_len - returns the number of elements in a linked list
  *@h: the list being passed
  *Return: the length of the list
  */
size_t listint_len(const listint_t *h)
{
	size_t num;

	while (h != NULL)
	{	num++;
		h = h->next;
	}
	return (num);
}
