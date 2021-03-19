#include "lists.h"
/**
  *list_len - finds the length of a list
  *@h: the list being checked
  *Return: length of the list
  */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *temp = h;

	for (count = 0; temp != NULL; count++)
		temp = temp->next;
	return (count);
}
