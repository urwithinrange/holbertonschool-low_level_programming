#include "holberton.h"
/**
  *malloc_checked - allocates memory using malloc
  *@b: the amount of memory to be allocated
  *
  *Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *p = (size_t *)malloc(b);

	if (p == NULL)
	{
		free(p);
		exit(98);
		}
	return (p);
}
