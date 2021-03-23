#include "lists.h"
/**
  *listint_len - returns the number of elements in a linked list
  *@h: the list being passed
  *Return: the length of the list
  */
size_t listint_len(const listint_t *h)
{
	size_t num;
	const listint_t = *ptr = h;

	for(num = 0; h != NULL; num++)
		ptr = ptr->next;
	return (num);
}
