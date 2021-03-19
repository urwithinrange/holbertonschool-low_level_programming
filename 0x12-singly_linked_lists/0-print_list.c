#include "lists.h"
/**
  *print_list - prints all the elements of list_t
  *@h: the elements to be printed
  *
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *temp;

	temp = h;
	for (count = 0; temp != NULL; count++)
	{
		if (temp->str != NULL)
			printf("[%d] %s\n'", temp->len, temp->str);
		else if (temp->str == NULL)
			printf("[0] (nil)\n");
		temp = temp->next;
	}
	return (count);
}
